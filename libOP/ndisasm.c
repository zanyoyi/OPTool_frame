#include "pch.h"
#include "compiler.h"


#include "ndisasm.h"

#include "nasm.h"

#include "sync.h"
#include "insns.h"
#include "tables.h"
#include "regdis.h"
#include "disp8.h"

#define fetch_safe(_start, _ptr, _size, _need, _op)         \
    do {                                                    \
        if (((_ptr) - (_start)) >= ((_size) - (_need)))     \
            _op;                                            \
    } while (0)

#define fetch_or_return(_start, _ptr, _size, _need)         \
    fetch_safe(_start, _ptr, _size, _need, return 0)

/*
 * Flags that go into the `segment' field of `insn' structures
 * during disassembly.
 */
#define SEG_RELATIVE    1
#define SEG_32BIT       2
#define SEG_RMREG       4
#define SEG_DISP8       8
#define SEG_DISP16     16
#define SEG_DISP32     32
#define SEG_NODISP     64
#define SEG_SIGNED    128
#define SEG_64BIT     256

 /*
  * Prefix information
  */
struct prefix_info {
    uint8_t osize;      /* Operand size */
    uint8_t asize;      /* Address size */
    uint8_t osp;        /* Operand size prefix present */
    uint8_t asp;        /* Address size prefix present */
    uint8_t rep;        /* Rep prefix present */
    uint8_t seg;        /* Segment override prefix present */
    uint8_t wait;       /* WAIT "prefix" present */
    uint8_t lock;       /* Lock prefix present */
    uint8_t vex[3];     /* VEX prefix present */
    uint8_t vex_c;      /* VEX "class" (VEX, XOP, ...) */
    uint8_t vex_m;      /* VEX.M field */
    uint8_t vex_v;
    uint8_t vex_lp;     /* VEX.LP fields */
    uint32_t rex;       /* REX prefix present */
    uint8_t evex[3];    /* EVEX prefix present */
};

#define getu8(x) (*(uint8_t *)(x))
#if X86_MEMORY
/* Little-endian CPU which can handle unaligned references */
#define getu16(x) (*(uint16_t *)(x))
#define getu32(x) (*(uint32_t *)(x))
#define getu64(x) (*(uint64_t *)(x))
#else
static uint16_t getu16(uint8_t* data)
{
    return (uint16_t)data[0] + ((uint16_t)data[1] << 8);
}
static uint32_t getu32(uint8_t* data)
{
    return (uint32_t)getu16(data) + ((uint32_t)getu16(data + 2) << 16);
}
static uint64_t getu64(uint8_t* data)
{
    return (uint64_t)getu32(data) + ((uint64_t)getu32(data + 4) << 32);
}
#endif

#define gets8(x) ((int8_t)getu8(x))
#define gets16(x) ((int16_t)getu16(x))
#define gets32(x) ((int32_t)getu32(x))
#define gets64(x) ((int64_t)getu64(x))

/* Important: regval must already have been adjusted for rex extensions */
static enum reg_enum whichreg(opflags_t regflags, int regval, int rex)
{
    size_t i;

    static const struct {
        opflags_t       flags;
        enum reg_enum   reg;
    } specific_registers[] = {
        {REG_AL,  R_AL},
        {REG_AX,  R_AX},
        {REG_EAX, R_EAX},
        {REG_RAX, R_RAX},
        {REG_DL,  R_DL},
        {REG_DX,  R_DX},
        {REG_EDX, R_EDX},
        {REG_RDX, R_RDX},
        {REG_CL,  R_CL},
        {REG_CX,  R_CX},
        {REG_ECX, R_ECX},
        {REG_RCX, R_RCX},
        {FPU0,    R_ST0},
        {XMM0,    R_XMM0},
        {YMM0,    R_YMM0},
        {ZMM0,    R_ZMM0},
        {REG_ES,  R_ES},
        {REG_CS,  R_CS},
        {REG_SS,  R_SS},
        {REG_DS,  R_DS},
        {REG_FS,  R_FS},
        {REG_GS,  R_GS},
        {OPMASK0, R_K0},
    };

    if (!(regflags & (REGISTER | REGMEM)))
        return 0;        /* Registers not permissible?! */

    regflags |= REGISTER;

    for (i = 0; i < ARRAY_SIZE(specific_registers); i++)
        if (!(specific_registers[i].flags & ~regflags))
            return specific_registers[i].reg;

    /* All the entries below look up regval in an 16-entry array */
    if (regval < 0 || regval >(rex & REX_EV ? 31 : 15))
        return 0;

#define GET_REGISTER(__array, __index)                      \
    ((size_t)(__index) < (size_t)ARRAY_SIZE(__array) ? __array[(__index)] : 0)

    if (!(REG8 & ~regflags)) {
        if (rex & (REX_P | REX_NH))
            return GET_REGISTER(nasm_rd_reg8_rex, regval);
        else
            return GET_REGISTER(nasm_rd_reg8, regval);
    }
    if (!(REG16 & ~regflags))
        return GET_REGISTER(nasm_rd_reg16, regval);
    if (!(REG32 & ~regflags))
        return GET_REGISTER(nasm_rd_reg32, regval);
    if (!(REG64 & ~regflags))
        return GET_REGISTER(nasm_rd_reg64, regval);
    if (!(REG_SREG & ~regflags))
        return GET_REGISTER(nasm_rd_sreg, regval & 7); /* Ignore REX */
    if (!(REG_CREG & ~regflags))
        return GET_REGISTER(nasm_rd_creg, regval);
    if (!(REG_DREG & ~regflags))
        return GET_REGISTER(nasm_rd_dreg, regval);
    if (!(REG_TREG & ~regflags)) {
        if (regval > 7)
            return 0;        /* TR registers are ill-defined with rex */
        return GET_REGISTER(nasm_rd_treg, regval);
    }
    if (!(FPUREG & ~regflags))
        return GET_REGISTER(nasm_rd_fpureg, regval & 7); /* Ignore REX */
    if (!(MMXREG & ~regflags))
        return GET_REGISTER(nasm_rd_mmxreg, regval & 7); /* Ignore REX */
    if (!(XMMREG & ~regflags))
        return GET_REGISTER(nasm_rd_xmmreg, regval);
    if (!(YMMREG & ~regflags))
        return GET_REGISTER(nasm_rd_ymmreg, regval);
    if (!(ZMMREG & ~regflags))
        return GET_REGISTER(nasm_rd_zmmreg, regval);
    if (!(OPMASKREG & ~regflags))
        return GET_REGISTER(nasm_rd_opmaskreg, regval);
    if (!(BNDREG & ~regflags))
        return GET_REGISTER(nasm_rd_bndreg, regval);

#undef GET_REGISTER
    return 0;
}

/*
 * Process an effective address (ModRM) specification.
 */
static uint8_t* do_ea(uint8_t* data, int modrm, int asize,
    int segsize, enum ea_type type,
    operand* op, insn* ins)
{
    // the mod field
    int mod;
    // the r/m field
    int rm;
    // the scale factor
    int scale;
    // the index register
    int index;
    // the base register
    int base;
    // the long mode prefix
    int rex;
    // the extended vex prefix
    uint8_t* evex;
    // the sib byte
    uint8_t sib = 0;
    bool is_evex = !!(ins->rex & REX_EV);

    // mod  = modRM[bits 7:6]
    mod = (modrm >> 6) & 03;
    // rm   = modRM[bits 2:0]
    rm = modrm & 07;

    // [Effective_Address Mod R/M] : 
    // [                  Mod R/M] : [--][--]. exclude SIB case
    if (mod != 3 && asize != 16 && rm == 4)
    {
        sib = *data++;
    }
    rex = ins->rex;
    evex = ins->evex_p;

    // [Effective_Address Mod R/M] : 
    // [                  Mod    ] : pure register version
    if (mod == 3)             /* pure register version */
    {
        op->basereg = rm + (rex & REX_B ? 8 : 0);
        op->segment |= SEG_RMREG;
        if (is_evex && segsize == 64)
        {
            op->basereg += (evex[0] & EVEX_P0X ? 0 : 16);
        }
        return data;
    }

    op->disp_size = 0;
    op->eaflags = 0;

    // address size = 16-bit
    // Table 2-1. 16-Bit Addressing Forms with the ModR/M Byte

    if (asize == 16)
    {
        /*
         * <mod> specifies the displacement size (none, byte or
         * word), and <rm> specifies the register combination.
         * Exception: mod=0,rm=6 does not specify [BP] as one might
         * expect, but instead specifies [disp16].
         */
        if (type != EA_SCALAR)
        {
            return NULL;
        }

        op->indexreg = op->basereg = -1;
        op->scale = 1;          /* always, in 16 bits */

        // [Effective_Address Mod R/M] : 
        // [                      R/M] : pure register version
        switch (rm)
        {
        case 0:
            op->basereg = R_BX;
            op->indexreg = R_SI;
            break;
        case 1:
            op->basereg = R_BX;
            op->indexreg = R_DI;
            break;
        case 2:
            op->basereg = R_BP;
            op->indexreg = R_SI;
            break;
        case 3:
            op->basereg = R_BP;
            op->indexreg = R_DI;
            break;
        case 4:
            op->basereg = R_SI;
            break;
        case 5:
            op->basereg = R_DI;
            break;
        case 6:
            op->basereg = R_BP;
            break;
        case 7:
            op->basereg = R_BX;
            break;
        }

        // [Effective_Address Mod R/M] : 
        // [                  Mod R/M] : pure disp16, not [BP]
        if (rm == 6 && mod == 0)      /* special case */
        {
            op->basereg = -1;
            if (segsize != 16)
            {
                op->disp_size = 16;
            }
            mod = 2;            /* fake disp16 */
        }

        // [Effective_Address Mod R/M] : 
        // [                  Mod    ] : final check
        switch (mod)
        {
            // [                  Mod    ] : memory. exclude pure disp16
        case 0:
            op->segment |= SEG_NODISP;
            break;
            // [                  Mod    ] : memory with disp8
        case 1:
            op->segment |= SEG_DISP8;
            if (ins->evex_tuple != 0)
            {
                op->offset = gets8(data) * get_disp8N(ins);
            }
            else
            {
                op->offset = gets8(data);
            }
            data++;
            break;
            // [                  Mod    ] : memory with disp16. include pure disp16
        case 2:
            op->segment |= SEG_DISP16;
            op->offset = *data++;
            op->offset |= ((unsigned)*data++) << 8;
            break;
            // see if (mod == 3) for pure register version
        }
        return data;
    }

    // address size = 32-bit or 64-bit
    // Table 2-2. 32-Bit Addressing Forms with the ModR/M Byte
    else
    {
        /*
         * Once again, <mod> specifies displacement size (this time
         * none, byte or *dword*), while <rm> specifies the base
         * register. Again, [EBP] is missing, replaced by a pure
         * disp32 (this time that's mod=0,rm=*5*) in 32-bit mode,
         * and RIP-relative addressing in 64-bit mode.
         *
         * However, rm=4
         * indicates not a single base register, but instead the
         * presence of a SIB byte...
         */
         // check address mode
        int a64 = asize == 64;

        op->indexreg = -1;

        // 64-bit address mode

        if (a64)
        {
            op->basereg = nasm_rd_reg64[rm | ((rex & REX_B) ? 8 : 0)];
        }

        // 32-bit address mode

        else
        {
            op->basereg = nasm_rd_reg32[rm | ((rex & REX_B) ? 8 : 0)];
        }

        // [Effective_Address Mod R/M] : 
        // [                  Mod R/M] : disp32, not [EBP]
        if (rm == 5 && mod == 0)
        {
            if (segsize == 64)
            {
                op->eaflags |= EAF_REL;
                op->segment |= SEG_RELATIVE;
            }

            if (asize != 64)
            {
                op->disp_size = asize;
            }
            op->basereg = -1;
            mod = 2;            /* fake disp32 */
        }

        // Table 2-3. 32-Bit Addressing Forms with the SIB Byte

        // [Effective_Address Mod R/M] : 
        // [                      R/M] : a SIB follows the ModR/M byte
        if (rm == 4)          /* process SIB */
        {
            uint8_t vsib_hi = 0;
            scale = (sib >> 6) & 03;
            index = (sib >> 3) & 07;
            base = sib & 07;

            op->scale = 1 << scale;

            if (segsize == 64)
            {
                vsib_hi = (rex & REX_X ? 8 : 0) |
                    (evex[2] & EVEX_P2VP ? 0 : 16);
            }

            if (type == EA_XMMVSIB)
            {
                op->indexreg = nasm_rd_xmmreg[index | vsib_hi];
            }
            else if (type == EA_YMMVSIB)
            {
                op->indexreg = nasm_rd_ymmreg[index | vsib_hi];
            }
            else if (type == EA_ZMMVSIB)
            {
                op->indexreg = nasm_rd_zmmreg[index | vsib_hi];
            }
            else if (index == 4 && !(rex & REX_X))
            {
                op->indexreg = -1; /* ESP/RSP cannot be an index */
            }
            else if (a64)
            {
                op->indexreg = nasm_rd_reg64[index | ((rex & REX_X) ? 8 : 0)];
            }
            else
            {
                op->indexreg = nasm_rd_reg32[index | ((rex & REX_X) ? 8 : 0)];
            }

            if (base == 5 && mod == 0)
            {
                op->basereg = -1;
                mod = 2;    /* Fake disp32 */
            }
            else if (a64)
            {
                op->basereg = nasm_rd_reg64[base | ((rex & REX_B) ? 8 : 0)];
            }
            else
            {
                op->basereg = nasm_rd_reg32[base | ((rex & REX_B) ? 8 : 0)];
            }

            if (segsize == 16)
            {
                op->disp_size = 32;
            }
        }
        else if (type != EA_SCALAR)
        {
            /* Can't have VSIB without SIB */
            return NULL;
        }

        // [Effective_Address Mod R/M] : 
        // [                  Mod    ] : final check
        switch (mod)
        {
            // [                  Mod    ] : memory. exclude pure disp32
        case 0:
            op->segment |= SEG_NODISP;
            break;
            // [                  Mod    ] : memory with disp8.
        case 1:
            op->segment |= SEG_DISP8;
            if (ins->evex_tuple != 0)
            {
                op->offset = gets8(data) * get_disp8N(ins);
            }
            else
            {
                op->offset = gets8(data);
            }
            data++;
            break;
            // [                  Mod    ] : memory with disp32. include pure disp32
        case 2:
            op->segment |= SEG_DISP32;
            op->offset = gets32(data);
            data += 4;
            break;
            // see if (mod == 3) for pure register version
        }
        return data;
    }
}

#define case4(x) case (x): case (x)+1: case (x)+2: case (x)+3

static int matches(const struct itemplate* t, uint8_t* data,
    const struct prefix_info* prefix, int segsize, insn* ins, uint32_t* flags)
{
    uint8_t* r = (uint8_t*)(t->code);
    // char buffer pointer
    uint8_t* origdata = data;
    bool a_used = false;
    bool o_used = false;
    enum prefixes drep = 0;
    enum prefixes dwait = 0;
    uint8_t lock = prefix->lock;
    int osize = prefix->osize;
    int asize = prefix->asize;
    int i;
    int c;
    int op1;
    int op2;
    struct operand* opx;
    struct operand* opy;
    uint8_t opex = 0;
    bool vex_ok = false;
    int regmask = (segsize == 64) ? 15 : 7;
    enum ea_type eat = EA_SCALAR;


    for (i = 0; i < MAX_OPERANDS; i++)
    {
        ins->oprs[i].segment = ins->oprs[i].disp_size =
            (segsize == 64 ? SEG_64BIT : segsize == 32 ? SEG_32BIT : 0);
    }
    ins->condition = -1;
    ins->evex_tuple = 0;
    ins->rex = prefix->rex;
    memset(ins->prefixes, 0, sizeof ins->prefixes);

    if (itemp_has(t, (segsize == 64 ? IF_NOLONG : IF_LONG)))
    {
        return 0;
    }
    if (prefix->rep == 0xF2)
    {
        drep = (itemp_has(t, IF_BND) ? P_BND : P_REPNE);
    }
    else if (prefix->rep == 0xF3)
    {
        drep = P_REP;
    }

    dwait = prefix->wait ? P_WAIT : 0;


    while ((c = *r++) != 0)
    {
        op1 = (c & 3) + ((opex & 1) << 2);
        op2 = ((c >> 3) & 3) + ((opex & 2) << 1);
        // check if modRM is valid(for op-code with operand)
        // or not valid(for op-code without operand)
        opx = &ins->oprs[op1];
        // check modRM
        opy = &ins->oprs[op2];
        opex = 0;

        // check custom flags, direct copy start

        switch (c) {
        case 01:
        case 02:
        case 03:
        case 04:
            while (c--)
                if (*r++ != *data++)
                    return 0;
            break;

        case 05:
        case 06:
        case 07:
            opex = c;
            break;

            case4(010) :
            {
                int t = *r++, d = *data++;
                if (d < t || d > t + 7)
                    return 0;
                else {
                    opx->basereg = (d - t) +
                        (ins->rex & REX_B ? 8 : 0);
                    opx->segment |= SEG_RMREG;
                }
                break;
            }

            case4(014) :
                /* this is an separate index reg position of MIB operand (ICC) */
                /* Disassembler uses NASM's split EA form only                 */
                break;

            case4(0274) :
                opx->offset = (int8_t)*data++;
            opx->segment |= SEG_SIGNED;
            break;

            case4(020) :
                opx->offset = *data++;
            break;

            case4(024) :
                opx->offset = *data++;
            break;

            case4(030) :
                opx->offset = getu16(data);
            data += 2;
            break;

            case4(034) :
                if (osize == 32) {
                    opx->offset = getu32(data);
                    data += 4;
                }
                else {
                    opx->offset = getu16(data);
                    data += 2;
                }
            if (segsize != asize)
                opx->disp_size = asize;
            break;

            case4(040) :
                opx->offset = getu32(data);
            data += 4;
            break;

            case4(0254) :
                opx->offset = gets32(data);
            data += 4;
            break;

            case4(044) :
                switch (asize) {
                case 16:
                    opx->offset = getu16(data);
                    data += 2;
                    if (segsize != 16)
                        opx->disp_size = 16;
                    break;
                case 32:
                    opx->offset = getu32(data);
                    data += 4;
                    if (segsize == 16)
                        opx->disp_size = 32;
                    break;
                case 64:
                    opx->offset = getu64(data);
                    opx->disp_size = 64;
                    data += 8;
                    break;
                }
            break;

            case4(050) :
                opx->offset = gets8(data++);
            opx->segment |= SEG_RELATIVE;
            break;

            case4(054) :
                opx->offset = getu64(data);
            data += 8;
            break;

            case4(060) :
                opx->offset = gets16(data);
            data += 2;
            opx->segment |= SEG_RELATIVE;
            opx->segment &= ~SEG_32BIT;
            break;

            case4(064) :  /* rel */
                opx->segment |= SEG_RELATIVE;
            /* In long mode rel is always 32 bits, sign extended. */
            if (segsize == 64 || osize == 32) {
                opx->offset = gets32(data);
                data += 4;
                if (segsize != 64)
                    opx->segment |= SEG_32BIT;
                opx->type = (opx->type & ~SIZE_MASK)
                    | (segsize == 64 ? BITS64 : BITS32);
            }
            else {
                opx->offset = gets16(data);
                data += 2;
                opx->segment &= ~SEG_32BIT;
                opx->type = (opx->type & ~SIZE_MASK) | BITS16;
            }
            break;

            case4(070) :
                opx->offset = gets32(data);
            data += 4;
            opx->segment |= SEG_32BIT | SEG_RELATIVE;
            break;

            case4(0100) :
            case4(0110) :
            case4(0120) :
            case4(0130) :
            {
                // detected modrm
                *flags |= 0x04000000 + ((op1 & 0x3) << 2) + (op2 & 0x3);
                
                int modrm = *data++;
                opx->segment |= SEG_RMREG;
                data = do_ea(data, modrm, asize, segsize, eat, opy, ins);
                if (!data)
                    return 0;
                opx->basereg = ((modrm >> 3) & 7) + (ins->rex & REX_R ? 8 : 0);
                if ((ins->rex & REX_EV) && (segsize == 64))
                    opx->basereg += (ins->evex_p[0] & EVEX_P0RP ? 0 : 16);
                break;
            }

        case 0172:
        {
            uint8_t ximm = *data++;
            c = *r++;
            ins->oprs[c >> 3].basereg = (ximm >> 4) & regmask;
            ins->oprs[c >> 3].segment |= SEG_RMREG;
            ins->oprs[c & 7].offset = ximm & 15;
        }
        break;

        case 0173:
        {
            uint8_t ximm = *data++;
            c = *r++;

            if ((c ^ ximm) & 15)
                return 0;

            ins->oprs[c >> 4].basereg = (ximm >> 4) & regmask;
            ins->oprs[c >> 4].segment |= SEG_RMREG;
        }
        break;

        case4(0174) :
        {
            uint8_t ximm = *data++;

            opx->basereg = (ximm >> 4) & regmask;
            opx->segment |= SEG_RMREG;
        }
        break;

        case4(0200) :
        case4(0204) :
        case4(0210) :
        case4(0214) :
        case4(0220) :
        case4(0224) :
        case4(0230) :
        case4(0234) :
        {
            // detected modrm
            *flags |= 0x04000000 + (op2 & 0x3);
            
            int modrm = *data++;
            if (((modrm >> 3) & 07) != (c & 07))
                return 0;   /* spare field doesn't match up */

            data = do_ea(data, modrm, asize, segsize, eat, opy, ins);
            if (!data)
                return 0;
            break;
        }

        case4(0240) :
        case 0250:
        {
            uint8_t evexm = *r++;
            uint8_t evexwlp = *r++;
            uint8_t modrm, valid_mask;
            ins->evex_tuple = *r++ - 0300;
            modrm = *(origdata + 1);

            ins->rex |= REX_EV;
            if ((prefix->rex & (REX_EV | REX_V | REX_P)) != REX_EV)
                return 0;

            if ((evexm & 0x1f) != prefix->vex_m)
                return 0;

            switch (evexwlp & 060) {
            case 000:
                if (prefix->rex & REX_W)
                    return 0;
                break;
            case 020:
                if (!(prefix->rex & REX_W))
                {
                    *flags |= 0x00100000;
                    return 0;
                }
                ins->rex |= REX_W;
                break;
            case 040:        /* VEX.W is a don't care */
                ins->rex &= ~REX_W;
                break;
            case 060:
                break;
            }

            /* If EVEX.b is set with reg-reg op,
             * EVEX.L'L contains embedded rounding control info
             */
            if ((prefix->evex[2] & EVEX_P2B) && ((modrm >> 6) == 3)) {
                valid_mask = 0x3;   /* prefix only */
            }
            else {
                valid_mask = 0xf;   /* vector length and prefix */
            }
            if ((evexwlp ^ prefix->vex_lp) & valid_mask)
                return 0;

            if (c == 0250) {
                if ((prefix->vex_v != 0) ||
                    (!(prefix->evex[2] & EVEX_P2VP) &&
                        ((eat < EA_XMMVSIB) || (eat > EA_ZMMVSIB))))
                    return 0;
            }
            else {
                opx->segment |= SEG_RMREG;
                opx->basereg = ((~prefix->evex[2] & EVEX_P2VP) << (4 - 3)) |
                    prefix->vex_v;
            }
            vex_ok = true;
            memcpy(ins->evex_p, prefix->evex, 3);
            break;
        }

        case4(0260) :
        case 0270:
        {
            int vexm = *r++;
            int vexwlp = *r++;

            ins->rex |= REX_V;
            if ((prefix->rex & (REX_V | REX_P)) != REX_V)
                return 0;

            if ((vexm & 0x1f) != prefix->vex_m)
                return 0;

            switch (vexwlp & 060) {
            case 000:
                if (prefix->rex & REX_W)
                    return 0;
                break;
            case 020:
                if (!(prefix->rex & REX_W))
                    return 0;
                ins->rex &= ~REX_W;
                break;
            case 040:        /* VEX.W is a don't care */
                ins->rex &= ~REX_W;
                break;
            case 060:
                break;
            }

            /* The 010 bit of vexwlp is set if VEX.L is ignored */
            if ((vexwlp ^ prefix->vex_lp) & ((vexwlp & 010) ? 03 : 07))
                return 0;

            if (c == 0270) {
                if (prefix->vex_v != 0)
                    return 0;
            }
            else {
                opx->segment |= SEG_RMREG;
                opx->basereg = prefix->vex_v;
            }
            vex_ok = true;
            break;
        }

        case 0271:
            if (prefix->rep == 0xF3)
                drep = P_XRELEASE;
            break;

        case 0272:
            if (prefix->rep == 0xF2)
                drep = P_XACQUIRE;
            else if (prefix->rep == 0xF3)
                drep = P_XRELEASE;
            break;

        case 0273:
            if (prefix->lock == 0xF0) {
                if (prefix->rep == 0xF2)
                    drep = P_XACQUIRE;
                else if (prefix->rep == 0xF3)
                    drep = P_XRELEASE;
            }
            break;

        case 0310:
            if (asize != 16)
                return 0;
            else
                a_used = true;
            break;

        case 0311:
            if (asize != 32)
                return 0;
            else
                a_used = true;
            break;

        case 0312:
            if (asize != segsize)
                return 0;
            else
                a_used = true;
            break;

        case 0313:
            if (asize != 64)
                return 0;
            else
                a_used = true;
            break;

        case 0314:
            if (prefix->rex & REX_B)
                return 0;
            break;

        case 0315:
            if (prefix->rex & REX_X)
                return 0;
            break;

        case 0316:
            if (prefix->rex & REX_R)
                return 0;
            break;

        case 0317:
            if (prefix->rex & REX_W)
                return 0;
            break;

        case 0320:
            if (osize != 16)
            {
                *flags |= 0x00100000;
                return 0;
            }
            else
                o_used = true;
            break;

        case 0321:
            if (osize != 32)
            {
                *flags |= 0x00100000;
                return 0;
            }
            else
                o_used = true;
            break;

        case 0322:
            if (osize != (segsize == 16 ? 16 : 32))
                return 0;
            else
                o_used = true;
            break;

        case 0323:
            ins->rex |= REX_W;    /* 64-bit only instruction */
            osize = 64;
            o_used = true;
            break;

        case 0324:
            if (osize != 64)
            {
                *flags |= 0x00100000;
                return 0;
            }
            o_used = true;
            break;

        case 0325:
            ins->rex |= REX_NH;
            break;

        case 0330:
        {
            int t = *r++, d = *data++;
            if (d < t || d > t + 15)
                return 0;
            else
                ins->condition = d - t;
            break;
        }

        case 0326:
            if (prefix->rep == 0xF3)
                return 0;
            break;

        case 0331:
            if (prefix->rep)
                return 0;
            break;

        case 0332:
            if (prefix->rep != 0xF2)
            {
                *flags |= 0x00200000;
                return 0;
            }
            drep = 0;
            break;

        case 0333:
            if (prefix->rep != 0xF3)
            {
                *flags |= 0x00200000;
                return 0;
            }
            drep = 0;
            break;

        case 0334:
            if (lock) {
                ins->rex |= REX_R;
                lock = 0;
            }
            break;

        case 0335:
            if (drep == P_REP)
                drep = P_REPE;
            break;

        case 0336:
        case 0337:
            break;

        case 0340:
            return 0;

        case 0341:
            if (prefix->wait != 0x9B)
            {
                *flags |= 0x00400000;
                return 0;
            }
            dwait = 0;
            break;

        case 0360:
            if (prefix->osp || prefix->rep)
                return 0;
            break;

        case 0361:
            if (!prefix->osp || prefix->rep)
            {
                *flags |= 0x00100000;
                return 0;
            }
            o_used = true;
            break;

        case 0364:
            if (prefix->osp)
                return 0;
            break;

        case 0365:
            if (prefix->asp)
                return 0;
            break;

        case 0366:
            if (!prefix->osp)
            {
                *flags |= 0x00100000;
                return 0;
            }
            o_used = true;
            break;

        case 0367:
            if (!prefix->asp)
                return 0;
            a_used = true;
            break;

        case 0370:
        case 0371:
            break;

        case 0374:
            eat = EA_XMMVSIB;
            break;

        case 0375:
            eat = EA_YMMVSIB;
            break;

        case 0376:
            eat = EA_ZMMVSIB;
            break;

        default:
            return 0;    /* Unknown code */
        }

        // direct copy end
    }

    if (!vex_ok && (ins->rex & (REX_V | REX_EV)))
    {
        return 0;
    }

    /* REX cannot be combined with VEX */
    if ((ins->rex & REX_V) && (prefix->rex & REX_P))
    {
        return 0;
    }

    /*
     * Check for unused rep or a/o prefixes.
     */
    for (i = 0; i < t->operands; i++)
    {
        if (ins->oprs[i].segment != SEG_RMREG)
        {
            a_used = true;
        }
    }

    if (lock)
    {
        if (ins->prefixes[PPS_LOCK])
        {
            return 0;
        }
        ins->prefixes[PPS_LOCK] = P_LOCK;
    }
    if (drep)
    {
        if (ins->prefixes[PPS_REP])
        {
            return 0;
        }
        ins->prefixes[PPS_REP] = drep;
    }
    ins->prefixes[PPS_WAIT] = dwait;
    if (!o_used)
    {
        if (osize != ((segsize == 16) ? 16 : 32))
        {
            enum prefixes pfx = 0;

            switch (osize)
            {
            case 16:
                pfx = P_O16;
                break;
            case 32:
                pfx = P_O32;
                break;
            case 64:
                pfx = P_O64;
                break;
            }

            if (ins->prefixes[PPS_OSIZE])
            {
                return 0;
            }
            ins->prefixes[PPS_OSIZE] = pfx;
        }
    }
    if (!a_used && asize != segsize)
    {
        if (ins->prefixes[PPS_ASIZE])
        {
            return 0;
        }
        ins->prefixes[PPS_ASIZE] = asize == 16 ? P_A16 : P_A32;
    }

    /* Fix: check for redundant REX prefixes */

    return data - origdata;
}

// CMOVcc's, Jcc's, SETcc's cc real name

/* Condition names for disassembly, sorted by x86 code */
static const char* const condition_name[16] = {
    "o", "no", "c", "nc", "z", "nz", "na", "a",
    "s", "ns", "pe", "po", "l", "nl", "ng", "g"
};

int32_t disasm(uint8_t* data, int32_t data_size, char* output, int outbufsize, int segsize, uint32_t* flags)
{
    int offset = 0;
    const struct itemplate* const* p;
    const struct itemplate* const* best_p;
    const struct disasm_index* ix;
    uint8_t* dp;
    int length;
    int best_length = 0;
    char* segover;
    int i;
    int slen;
    int colon;
    int n;
    uint8_t* origdata;
    int works;
    insn tmp_ins;
    insn ins;
    iflag_t goodness;
    iflag_t best;
    int best_pref;
    struct prefix_info prefix;
    bool end_prefix;
    bool is_evex;

    memset(&ins, 0, sizeof ins);

    /*
     * Scan for prefixes.
     */
    memset(&prefix, 0, sizeof prefix);
    prefix.asize = segsize;
    prefix.osize = (segsize == 64) ? 32 : segsize;
    segover = NULL;
    origdata = data;

    // many unsolved error in this line. now fixed by including insnsb.c
    ix = itable;

    end_prefix = false;

    // prefix check block start

    while (!end_prefix)
    {
        switch (*data)
        {
        case 0xF2:
        case 0xF3:
            fetch_or_return(origdata, data, data_size, 1);
            prefix.rep = *data++;
            break;

        case 0x9B:
            fetch_or_return(origdata, data, data_size, 1);
            prefix.wait = *data++;
            break;

        case 0xF0:
            fetch_or_return(origdata, data, data_size, 1);
            prefix.lock = *data++;
            break;

        case 0x2E:
            fetch_or_return(origdata, data, data_size, 1);
            segover = "cs", prefix.seg = *data++;
            break;
        case 0x36:
            fetch_or_return(origdata, data, data_size, 1);
            segover = "ss", prefix.seg = *data++;
            break;
        case 0x3E:
            fetch_or_return(origdata, data, data_size, 1);
            segover = "ds", prefix.seg = *data++;
            break;
        case 0x26:
            fetch_or_return(origdata, data, data_size, 1);
            segover = "es", prefix.seg = *data++;
            break;
        case 0x64:
            fetch_or_return(origdata, data, data_size, 1);
            segover = "fs", prefix.seg = *data++;
            break;
        case 0x65:
            fetch_or_return(origdata, data, data_size, 1);
            segover = "gs", prefix.seg = *data++;
            break;

        case 0x66:
            fetch_or_return(origdata, data, data_size, 1);
            prefix.osize = (segsize == 16) ? 32 : 16;
            prefix.osp = *data++;
            break;
        case 0x67:
            fetch_or_return(origdata, data, data_size, 1);
            prefix.asize = (segsize == 32) ? 16 : 32;
            prefix.asp = *data++;
            break;

        case 0xC4:
        case 0xC5:
            if (segsize == 64 || (data[1] & 0xc0) == 0xc0)
            {
                fetch_or_return(origdata, data, data_size, 2);
                prefix.vex[0] = *data++;
                prefix.vex[1] = *data++;

                prefix.rex = REX_V;
                prefix.vex_c = RV_VEX;

                if (prefix.vex[0] == 0xc4)
                {
                    fetch_or_return(origdata, data, data_size, 1);
                    prefix.rex |= (~prefix.vex[1] >> 5) & 7; /* REX_RXB */
                    prefix.rex |= (prefix.vex[2] >> (7 - 3)) & REX_W;
                    prefix.vex_m = prefix.vex[1] & 0x1f;
                    prefix.vex_v = (~prefix.vex[2] >> 3) & 15;
                    prefix.vex_lp = prefix.vex[2] & 7;
                }
                else
                {
                    prefix.rex |= (~prefix.vex[1] >> (7 - 2)) & REX_R;
                    prefix.vex_m = 1;
                    prefix.vex_v = (~prefix.vex[1] >> 3) & 15;
                    prefix.vex_lp = prefix.vex[1] & 7;
                }

         
                ix = itable_vex[RV_VEX][prefix.vex_m][prefix.vex_lp & 3];
            }
            end_prefix = true;
            break;

        case 0x62:
            if (segsize == 64 || ((data[1] & 0xc0) == 0xc0))
            {
                fetch_or_return(origdata, data, data_size, 4);
                data++;        /* 62h EVEX prefix */
                prefix.evex[0] = *data++;
                prefix.evex[1] = *data++;
                prefix.evex[2] = *data++;

                prefix.rex = REX_EV;
                prefix.vex_c = RV_EVEX;
                prefix.rex |= (~prefix.evex[0] >> 5) & 7; /* REX_RXB */
                prefix.rex |= (prefix.evex[1] >> (7 - 3)) & REX_W;
                prefix.vex_m = prefix.evex[0] & EVEX_P0MM;
                prefix.vex_v = (~prefix.evex[1] & EVEX_P1VVVV) >> 3;
                prefix.vex_lp = ((prefix.evex[2] & EVEX_P2LL) >> (5 - 2)) |
                    (prefix.evex[1] & EVEX_P1PP);

                ix = itable_vex[prefix.vex_c][prefix.vex_m][prefix.vex_lp & 3];
            }
            end_prefix = true;
            break;

        case 0x8F:
            if ((data[1] & 030) != 0 &&
                (segsize == 64 || (data[1] & 0xc0) == 0xc0))
            {
                fetch_or_return(origdata, data, data_size, 3);
                prefix.vex[0] = *data++;
                prefix.vex[1] = *data++;
                prefix.vex[2] = *data++;

                prefix.rex = REX_V;
                prefix.vex_c = RV_XOP;

                prefix.rex |= (~prefix.vex[1] >> 5) & 7; /* REX_RXB */
                prefix.rex |= (prefix.vex[2] >> (7 - 3)) & REX_W;
                prefix.vex_m = prefix.vex[1] & 0x1f;
                prefix.vex_v = (~prefix.vex[2] >> 3) & 15;
                prefix.vex_lp = prefix.vex[2] & 7;

                ix = itable_vex[RV_XOP][prefix.vex_m][prefix.vex_lp & 3];
            }
            end_prefix = true;
            break;

        case REX_P + 0x0:
        case REX_P + 0x1:
        case REX_P + 0x2:
        case REX_P + 0x3:
        case REX_P + 0x4:
        case REX_P + 0x5:
        case REX_P + 0x6:
        case REX_P + 0x7:
        case REX_P + 0x8:
        case REX_P + 0x9:
        case REX_P + 0xA:
        case REX_P + 0xB:
        case REX_P + 0xC:
        case REX_P + 0xD:
        case REX_P + 0xE:
        case REX_P + 0xF:
            if (segsize == 64)
            {
                fetch_or_return(origdata, data, data_size, 1);
                prefix.rex = *data++;
                if (prefix.rex & REX_W)
                {
                    prefix.osize = 64;
                }
            }
            end_prefix = true;
            break;

        default:
            end_prefix = true;
            break;
        }
    }
    // prefix check block end

    iflag_set_all(&best); /* Worst possible */
    best_p = NULL;
    best_pref = INT_MAX;

    // check for a valid instruction table

    if (!ix)
    {
        return 0;        /* No instruction table at all... */
    }

    dp = data;

    fetch_or_return(origdata, dp, data_size, 1);
    ix += *dp++;
    // printf("%s \n", origdata);

    while (ix->n == -1)
    {
        fetch_or_return(origdata, dp, data_size, 1);
        ix = (const struct disasm_index*)ix->p + *dp++;
    }

    p = (const struct itemplate* const*)ix->p;

    // check for best match of mnemonic

    for (n = ix->n; n; n--, p++)
    {
        if ((length = matches(*p, data, &prefix, segsize, &tmp_ins, flags)))
        {
            // allow instruction fragments, works always true
            // mnemonic information generator

            works = true;

            /*
             * Final check to make sure the types of r/m match up.
             * XXX: Need to make sure this is actually correct.
             */
            for (i = 0; i < (*p)->operands; i++)
            {
                //int a = (!(tmp_ins.oprs[i].segment & SEG_RMREG) &&
                //    !(REG_EA & ~(*p)->opd[i]) &&
                //    !((*p)->opd[i] & REG_SMASK));
                //int b = (!(tmp_ins.oprs[i].segment & SEG_RMREG) &&
                //    !(REG_EA & ~(*p)->opd[i]) &&
                //    !((*p)->opd[i] & REG_SMASK));
                //int c = ((((*p)->opd[i] & (REGISTER | FPUREG)) ||
                //    (tmp_ins.oprs[i].segment & SEG_RMREG)) &&
                //    !whichreg((*p)->opd[i],
                //        tmp_ins.oprs[i].basereg, tmp_ins.rex));
                //int c0 = ((*p)->opd[i] & (REGISTER | FPUREG));
                //int c1 = tmp_ins.oprs[i].segment & SEG_RMREG;
                //int c2 = !whichreg((*p)->opd[i],
                //    tmp_ins.oprs[i].basereg, tmp_ins.rex);
                if (
                    // check immediate-assigned only memory operand,
                    // but we get register-assigned memory operand

                    /* If it's a mem-only EA but we have a
                       register, die. */
                    ((tmp_ins.oprs[i].segment & SEG_RMREG) &&
                        is_class(MEMORY, (*p)->opd[i])) ||

                    // check register-assigned memory only operand,
                    // but we get immediate-assigned memory operand

                    /* If it's a reg-only EA but we have a memory
                       ref, die. */
                    (!(tmp_ins.oprs[i].segment & SEG_RMREG) &&
                        !(REG_EA & ~(*p)->opd[i]) &&
                        !((*p)->opd[i] & REG_SMASK)) ||

                    // check register operand type mismatch

                    /* Register type mismatch (eg FS vs REG_DESS):
                       die. */
                    ((((*p)->opd[i] & (REGISTER | FPUREG)) ||
                        (tmp_ins.oprs[i].segment & SEG_RMREG)) &&
                        !whichreg((*p)->opd[i],
                            tmp_ins.oprs[i].basereg, tmp_ins.rex))
                    )
                {

                    works = false;
                    break;
                }
            }

            /*
             * Note: we always prefer instructions which incorporate
             * prefixes in the instructions themselves.  This is to allow
             * e.g. PAUSE to be preferred to REP NOP, and deal with
             * MMX/SSE instructions where prefixes are used to select
             * between MMX and SSE register sets or outright opcode
             * selection.
             */
            if (works)
            {
                int i;
                int nprefix;
                goodness = iflag_pfmask(*p);

                // skip check prefer option
                // goodness = iflag_xor(&goodness, prefer);

                nprefix = 0;
                for (i = 0; i < MAXPREFIX; i++)
                {
                    if (tmp_ins.prefixes[i])
                    {
                        nprefix++;
                    }
                    if (nprefix < best_pref ||
                        (nprefix == best_pref &&
                            iflag_cmp(&goodness, &best) < 0))
                    {
                        /* This is the best one found so far */
                        best = goodness;
                        best_p = p;
                        best_pref = nprefix;
                        best_length = length;
                        ins = tmp_ins;
                    }
                }

            }
        }
    }

    if (!best_p)
    {
        return 0;               /* no instruction was matched */
    }

    p = (const struct itemplate* const*)ix->p;

    // /check abstract concepts

    // check default prefix case
    if (*flags & 0x80000000)
    {
        uint64_t opd0 = 0;
        uint64_t opd1 = 0;
        uint64_t opd2 = 0;
        uint64_t opd3 = 0;
        for (n = ix->n; n; n--, p++)
        {
            // same prefix? no, but they are same mnemonic
            // same mnemonic
            bool test_token = (*p)->opcode == (*best_p)->opcode;
            bool test_FAR = ~((*p)->opd[0] ^ (*best_p)->opd[0]) & FAR;
            bool test_SHORT = ~((*p)->opd[0] ^ (*best_p)->opd[0]) & SHORT;

            if (test_token && test_FAR && test_SHORT)
            {
                //int a = REG_CLASS_GPR;
                //int b = RM_GPR;
                //int c = REGMEM;
                // operand are both register, or both not register
                if (~((*p)->opd[0] ^ (*best_p)->opd[0]) & REG_CLASS_GPR)
                {
                    opd0 |= (*p)->opd[0];
                }
                if (~((*p)->opd[1] ^ (*best_p)->opd[1]) & REG_CLASS_GPR)
                {
                    opd1 |= (*p)->opd[1];
                }
                if (~((*p)->opd[2] ^ (*best_p)->opd[2]) & REG_CLASS_GPR)
                {
                    opd2 |= (*p)->opd[2];
                }
                if (~((*p)->opd[3] ^ (*best_p)->opd[3]) & REG_CLASS_GPR)
                {
                    opd3 |= (*p)->opd[3];
                }
            }
        }
        // check 8, 16, 32, 64-bit flags
        *flags |=
            ((opd0 >> SIZE_SHIFT) & 0x0F) << 4 |
            ((opd1 >> SIZE_SHIFT) & 0x0F) << 8 |
            ((opd2 >> SIZE_SHIFT) & 0x0F) << 12 |
            ((opd3 >> SIZE_SHIFT) & 0x0F) << 16;
    }
    // check best_p is 66 prefix case
    else if ((*flags & 0x40000000) && (prefix.osp == 0x66))
    {
        uint64_t opd0 = 0;
        uint64_t opd1 = 0;
        uint64_t opd2 = 0;
        uint64_t opd3 = 0;
        for (n = ix->n; n; n--, p++)
        {
            // same prefix? no, but they are same mnemonic
            // same mnemonic
            bool test_token = (*p)->opcode == (*best_p)->opcode;
            bool test_FAR = ~((*p)->opd[0] ^ (*best_p)->opd[0]) & FAR;
            bool test_SHORT = ~((*p)->opd[0] ^ (*best_p)->opd[0]) & SHORT;

            if (test_token && test_FAR && test_SHORT)
            {
                //int a = REG_CLASS_GPR;
                //int b = RM_GPR;
                //int c = REGMEM;
                // operand are both register, or both not register
                if (~((*p)->opd[0] ^ (*best_p)->opd[0]) & REG_CLASS_GPR)
                {
                    opd0 |= (*p)->opd[0];
                }
                if (~((*p)->opd[1] ^ (*best_p)->opd[1]) & REG_CLASS_GPR)
                {
                    opd1 |= (*p)->opd[1];
                }
                if (~((*p)->opd[2] ^ (*best_p)->opd[2]) & REG_CLASS_GPR)
                {
                    opd2 |= (*p)->opd[2];
                }
                if (~((*p)->opd[3] ^ (*best_p)->opd[3]) & REG_CLASS_GPR)
                {
                    opd3 |= (*p)->opd[3];
                }
            }
        }
        // do not show 66 prefix case at all
        switch ((opd0 >> SIZE_SHIFT) & 0x0F)
        {
        case 0x0E:
        case 0x06:
        case 0x0C:
            // same mnemonic, prefix ones die
            return 0;
        default:
            break;
        }
        switch ((opd1 >> SIZE_SHIFT) & 0x0F)
        {
        case 0x0E:
        case 0x06:
        case 0x0C:
            // same mnemonic, prefix ones die
            return 0;
        default:
            break;
        }
        switch ((opd2 >> SIZE_SHIFT) & 0x0F)
        {
        case 0x0E:
        case 0x06:
        case 0x0C:
            // same mnemonic, prefix ones die
            return 0;
        default:
            break;
        }
        switch ((opd3 >> SIZE_SHIFT) & 0x0F)
        {
        case 0x0E:
        case 0x06:
        case 0x0C:
            // same mnemonic, prefix ones die
            return 0;
        default:
            break;
        }
    }
    // /check abstract concepts block end

    /* Pick the best match */
    p = best_p;
    length = best_length;

    // output buffer pointer

    slen = 0;

    // display prefixes

    /* TODO: snprintf returns the value that the string would have if
     *      the buffer were long enough, and not the actual length of
     *      the returned string, so each instance of using the return
     *      value of snprintf should actually be checked to assure that
     *      the return value is "sane."  Maybe a macro wrapper could
     *      be used for that purpose.
     */
    for (i = 0; i < MAXPREFIX; i++)
    {
        const char* prefix = prefix_name(ins.prefixes[i]);
        // check all possible prefix
        if (prefix)
        {
            // try not to display spurious instructions
            return 0;
            // LOCK, REP, REPNE, and other valid prefixes are required,
            // but not now
            // replace this line with other function
            slen += snprintf(output + slen, outbufsize - slen, "%s ", prefix);
        }
    }

    // program hang. debug it in advance
    i = (*p)->opcode;
    // now it should not hang.

    // display instruction mnemonic

    /* check if the instruction is one of the
     * I_CMOVcc, I_Jcc, or I_SETcc
     */

    if (i >= FIRST_COND_OPCODE)
    {
        // I_CMOVcc, I_Jcc, or I_SETcc
        // replace this line with other function
        slen += snprintf(output + slen, outbufsize - slen, "%s%s",
            nasm_insn_names[i], condition_name[ins.condition]);
    }
    else
    {
        // default
        // replace this line with other function
        slen += snprintf(output + slen, outbufsize - slen, "%s",
            nasm_insn_names[i]);
    }

    // display source operand, destination operand

    colon = false;
    is_evex = !!(ins.rex & REX_EV);
        length += data - origdata;  /* fix up for prefixes */

    if (*flags & 0x80000000)
    {
        // check if reg operand is not needed
        for (i = 0; i < (*p)->operands; i++)
        {
            // shortcuts to (*p)->opd[i];
            opflags_t t = (*p)->opd[i];
            // shortcuts to (*p)->deco[i];
            decoflags_t deco = (*p)->deco[i];
            // shortcut to &ins.oprs[i]
            const operand* o = &ins.oprs[i];

            output[slen++] = (colon ? ':' : i == 0 ? ' ' : ',');
            colon = (t & COLON);
            if ((t & (REGISTER | FPUREG)) ||
                (o->segment & SEG_RMREG))
            {
                // check i'th operand base register

                enum reg_enum reg;
                reg = whichreg(t, o->basereg, ins.rex);

                // indicate reg/op register operand
                if ((*flags & 0x0C000000) == 0x04000000) // reg/op is register operand
                {
                    // case #1 both operand exists
                    // case #2 operand is reciprocal
                    if (
                        (((*flags & 0x0000000C) >> 2) == i) && (((*flags & 0x0000000C) >> 2) ^ (*flags & 0x00000003)) ||
                        !i && (((*flags & 0x0000000C) >> 2) && (*flags & 0x00000003))
                        )
                    {
                        // 16/32 bit operand case
                        if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_types_0110[reg - EXPR_REG_START]);
                            // clear operand prefix flags
                            *flags &= 0xFFEFFFFF;
                        }
                        // 32/64 bit operand case
                        else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_types_1100[reg - EXPR_REG_START]);
                            // clear operand prefix flags
                            *flags &= 0xFFEFFFFF;
                        }
                        // 16/32/64 bit operand case
                        else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_types_1110[reg - EXPR_REG_START]);
                            // clear operand prefix flags
                            *flags &= 0xFFEFFFFF;
                        }
                        else
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_types[reg - EXPR_REG_START]);
                        }
                    }
                    // case #3 reg operand does not exists, or reg is in other operand
                    else
                    {
                        // 16/32 bit operand case
                        if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_names_0110[reg - EXPR_REG_START]);
                            // clear operand prefix flags
                            *flags &= 0xFFEFFFFF;
                        }
                        // 32/64 bit operand case
                        else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_names_1100[reg - EXPR_REG_START]);
                            // clear operand prefix flags
                            *flags &= 0xFFEFFFFF;
                        }
                        // 16/32/64 bit operand case
                        else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_names_1110[reg - EXPR_REG_START]);
                            // clear operand prefix flags
                            *flags &= 0xFFEFFFFF;
                        }
                        else
                        {
                            slen += snprintf(output + slen, outbufsize - slen, "%s",
                                nasm_reg_names[reg - EXPR_REG_START]);
                        }
                    }
                }
                else  // reg/op is extended op, or modrm does not exists
                {
                    // 16/32 bit operand case
                    if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_names_0110[reg - EXPR_REG_START]);
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_names_1100[reg - EXPR_REG_START]);
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 16/32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_names_1110[reg - EXPR_REG_START]);
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    else
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_names[reg - EXPR_REG_START]);
                    }
                }
            }

            // check 1?

            else if (!(UNITY & ~t))
            {
                output[slen++] = '1';
            }

            // check immediate?

            else if (t & IMMEDIATE)
            {
                if (t & BITS8)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "imm8 ");
                }
                else if (t & BITS16)
                {
                    // 16/32 bit operand case
                    if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm16/imm32 ");
                    }
                    // 32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm32/imm64 ");
                    }
                    // 16/32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm16/imm32/imm64 ");
                    }
                    else
                    {
                        // never happen
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm16 ");
                    }
                }
                else if (t & BITS32)
                {
                    // 16/32 bit operand case
                    if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm16/imm32 ");
                    }
                    // 32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                    {
                        // never happen
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm32/imm64 ");
                    }
                    // 16/32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm16/imm32/imm64 ");
                    }
                    else
                    {
                        // never happen
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm32 ");
                    }
                }
                else if (t & BITS64)
                {
                    // 16/32 bit operand case
                    if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm16/imm32 ");
                    }
                    // 32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                    {
                        // never happen
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm32/imm64 ");
                    }
                    // 16/32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                    {
                        // never happen
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm16/imm32/imm64 ");
                    }
                    else
                    {
                        // never happen
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "imm64 ");
                    }
                }
                else if (t & NEAR)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "near imm");
                }
                else if (t & SHORT)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "short imm");
                }
                else
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "imm");
                }
            }

            // check immediate(or offset) address?

            else if (!(MEM_OFFS & ~t))
            {
                slen +=
                    snprintf(output + slen, outbufsize - slen, "[moffs]");
            }

            // check register/memory operand size?

            else if (is_class(REGMEM, t))
            {
                int started = false;

                if (t & BITS8)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "byte ");
                }
                if (t & BITS16)
                {
                    // 16/32 bit operand case
                    if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "word/dword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "dword/qword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 16/32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "word/dword/qword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    else
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "word ");
                    }
                }
                if (t & BITS32)
                {
                    // 16/32 bit operand case
                    if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "word/dword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "dword/qword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 16/32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "word/dword/qword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    else
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "dword ");
                    }
                }
                if (t & BITS64)
                {
                    // 16/32 bit operand case
                    if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x06))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "word/dword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0C))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "dword/qword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    // 16/32/64 bit operand case
                    else if (((*flags >> (4 + (i << 2)) & 0x0F) == 0x0E))
                    {
                        slen += snprintf(output + slen, outbufsize - slen,
                            "word/dword/qword");
                        // clear operand prefix flags
                        *flags &= 0xFFEFFFFF;
                    }
                    else
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "qword ");
                    }
                }
                if (t & BITS80)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "tword ");
                }
                // skip complicate cases

                // check far indicator?
                // parts of instruction mnemonic
                if (t & FAR)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "far ");
                }
                if (t & NEAR)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "near ");
                }
                output[slen++] = '[';

                // skip check displacement flag?

                // check rel??

                if (o->eaflags & EAF_REL)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "rel ");
                }

                // check segment override flag

                if (segover)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "%s:",
                            segover);
                    // clear segment override flag
                    segover = NULL;
                }

                // check if base register is valid

                if ((segsize == 32) && (o->basereg == R_ESP))
                {
                    // base register is ESP : SIB flag
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "[--][--]");
                }
                else if (o->basereg != -1)
                {
                    // base register is valid
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->basereg - EXPR_REG_START)]);
                    started = true;
                }

                // check if index register is valid, if scale factor is valid

                if ((segsize == 32) && (o->basereg == R_ESP))
                {
                    // base register is ESP : SIB flag
                }
                else if (o->indexreg != -1 && !itemp_has(*best_p, IF_MIB))
                {
                    if (started)
                    {
                        output[slen++] = '+';
                    }
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }
                if (o->segment & SEG_DISP8)
                {
                    // override to disp32 by evex flag
                    if (is_evex)
                    {
                        const char* prefix;

                        prefix = "+";
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "%sdisp32",
                                prefix);
                    }
                    // default to disp8
                    else
                    {
                        const char* prefix;

                        prefix = "+";

                        slen +=
                            snprintf(output + slen, outbufsize - slen, "%sdisp8",
                                prefix);
                    }
                }
                else if (o->segment & SEG_DISP16)
                {
                    const char* prefix;
                    // default to disp16

                    prefix = started ? "+" : "";
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen,
                            "%sdisp16", prefix);
                }
                else if (o->segment & SEG_DISP32)
                {
                    // override to disp64 by a64 flag
                    if (prefix.asize == 64)
                    {
                        const char* prefix;

                        prefix = started ? "+" : "";
                        slen +=
                            snprintf(output + slen, outbufsize - slen,
                                "%sdisp64", prefix);
                    }
                    // default to disp32
                    else
                    {
                        const char* prefix;

                        prefix = started ? "+" : "";
                        slen +=
                            snprintf(output + slen, outbufsize - slen,
                                "%sdisp32", prefix);
                    }
                }

                // check index register is valid, check scale factor(again?)
                if (o->indexreg != -1 && itemp_has(*best_p, IF_MIB))
                {
                    // replace this line with other function
                    output[slen++] = ',';
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }
                // replace this line with other function
                output[slen++] = ']';
            }

            // unkown cases

            else
            {
                // replace this line with other function
                slen +=
                    snprintf(output + slen, outbufsize - slen, "<operand%d>",
                        i);
            }
        }
    }
    else if (*flags & 0x40000000)
    {
        // check if reg operand is not needed
        for (i = 0; i < (*p)->operands; i++)
        {
            // shortcuts to (*p)->opd[i];
            opflags_t t = (*p)->opd[i];
            // shortcuts to (*p)->deco[i];
            decoflags_t deco = (*p)->deco[i];
            // shortcut to &ins.oprs[i]
            const operand* o = &ins.oprs[i];

            output[slen++] = (colon ? ':' : i == 0 ? ' ' : ',');
            colon = (t & COLON);
            if ((t & (REGISTER | FPUREG)) ||
                (o->segment & SEG_RMREG))
            {
                // check i'th operand base register

                enum reg_enum reg;
                reg = whichreg(t, o->basereg, ins.rex);

                // indicate reg/op register operand
                if ((*flags & 0x0C000000) == 0x04000000) // reg/op is register operand
                {
                    // case #1 both operand exists
                    if ((((*flags & 0x0000000C) >> 2) == i) && (((*flags & 0x0000000C) >> 2) ^ (*flags & 0x00000003)))
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_types[reg - EXPR_REG_START]);
                    }
                    // case #2 operand is reciprocal
                    else if (!i && (((*flags & 0x0000000C) >> 2) && (*flags & 0x00000003)))
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_types[reg - EXPR_REG_START]);
                    }
                    // case #3 reg operand does not exists, or reg is in other operand
                    else
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_names[reg - EXPR_REG_START]);
                    }
                }
                else  // reg/op is extended op, or modrm does not exists
                {
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[reg - EXPR_REG_START]);
                }
            }

            // check 1?

            else if (!(UNITY & ~t))
            {
                output[slen++] = '1';
            }

            // check immediate?

            else if (t & IMMEDIATE)
            {
                if (t & BITS8)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "byte ");
                }
                else if (t & BITS16)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "word ");
                }
                else if (t & BITS32)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "dword ");
                }
                else if (t & BITS64)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "qword ");
                }
                else if (t & NEAR)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "near ");
                }
                else if (t & SHORT)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "short ");
                }
                slen +=
                    snprintf(output + slen, outbufsize - slen, "imm");
            }

            // check immediate(or offset) address?

            else if (!(MEM_OFFS & ~t))
            {
                slen +=
                    snprintf(output + slen, outbufsize - slen, "mem_offset");
            }

            // check register/memory operand size?

            else if (is_class(REGMEM, t))
            {
                int started = false;

                if (t & BITS8)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "byte ");
                }
                if (t & BITS16)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "word ");
                }
                if (t & BITS32)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "dword ");
                }
                if (t & BITS64)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "qword ");
                }
                if (t & BITS80)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "tword ");
                }
                // skip complicate cases

                // check far indicator?
                // parts of instruction mnemonic
                if (t & FAR)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "far ");
                }
                if (t & NEAR)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "near ");
                }
                output[slen++] = '[';

                // skip check displacement flag?

                // check rel??

                if (o->eaflags & EAF_REL)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "rel ");
                }

                // check segment override flag

                if (segover)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "%s:",
                            segover);
                    // clear segment override flag
                    segover = NULL;
                }

                // check if base register is valid

                if ((segsize == 32) && (o->basereg == R_ESP))
                {
                    // base register is ESP : SIB flag
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "[--][--]");
                }
                else if (o->basereg != -1)
                {
                    // base register is valid
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->basereg - EXPR_REG_START)]);
                    started = true;
                }

                // check if index register is valid, if scale factor is valid

                if ((segsize == 32) && (o->basereg == R_ESP))
                {
                    // base register is ESP : SIB flag
                }
                else if (o->indexreg != -1 && !itemp_has(*best_p, IF_MIB))
                {
                    if (started)
                    {
                        output[slen++] = '+';
                    }
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }
                if (o->segment & SEG_DISP8)
                {
                    // override to disp32 by evex flag
                    if (is_evex)
                    {
                        const char* prefix;

                        prefix = "+";
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "%sdisp32",
                                prefix);
                    }
                    // default to disp8
                    else
                    {
                        const char* prefix;

                        prefix = "+";

                        slen +=
                            snprintf(output + slen, outbufsize - slen, "%sdisp8",
                                prefix);
                    }
                }
                else if (o->segment & SEG_DISP16)
                {
                    const char* prefix;
                    // default to disp16

                    prefix = started ? "+" : "";
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen,
                            "%sdisp16", prefix);
                }
                else if (o->segment & SEG_DISP32)
                {
                    // override to disp64 by a64 flag
                    if (prefix.asize == 64)
                    {
                        const char* prefix;

                        prefix = started ? "+" : "";
                        slen +=
                            snprintf(output + slen, outbufsize - slen,
                                "%sdisp64", prefix);
                    }
                    // default to disp32
                    else
                    {
                        const char* prefix;

                        prefix = started ? "+" : "";
                        slen +=
                            snprintf(output + slen, outbufsize - slen,
                                "%sdisp32", prefix);
                    }
                }

                // check index register is valid, check scale factor(again?)
                if (o->indexreg != -1 && itemp_has(*best_p, IF_MIB))
                {
                    // replace this line with other function
                    output[slen++] = ',';
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }
                // replace this line with other function
                output[slen++] = ']';
            }

            // unkown cases

            else
            {
            // replace this line with other function
            slen +=
                snprintf(output + slen, outbufsize - slen, "<operand%d>",
                    i);
            }
        }
    }
    else if (*flags & 0x20000000)
    {
        // check if reg operand is not needed
        for (i = 0; i < (*p)->operands; i++)
        {
            // shortcuts to (*p)->opd[i];
            opflags_t t = (*p)->opd[i];
            // shortcuts to (*p)->deco[i];
            decoflags_t deco = (*p)->deco[i];
            // shortcut to &ins.oprs[i]
            const operand* o = &ins.oprs[i];

            output[slen++] = (colon ? ':' : i == 0 ? ' ' : ',');
            colon = (t & COLON);

            if ((t & (REGISTER | FPUREG)) ||
                (o->segment & SEG_RMREG))
            {
                // check i'th operand base register

                enum reg_enum reg;
                reg = whichreg(t, o->basereg, ins.rex);

                // indicate reg/op register operand
                if ((*flags & 0x0C000000) == 0x04000000) // reg/op is register operand
                {
                    // case #1 both operand exists
                    if ((((*flags & 0x0000000C) >> 2) == i) && (((*flags & 0x0000000C) >> 2) ^ (*flags & 0x00000003)))
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_types[reg - EXPR_REG_START]);
                    }
                    // case #2 operand is reciprocal
                    else if (!i && (((*flags & 0x0000000C) >> 2) && (*flags & 0x00000003)))
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_types[reg - EXPR_REG_START]);
                    }
                    // case #3 reg operand does not exists, or reg is in other operand
                    else
                    {
                        slen += snprintf(output + slen, outbufsize - slen, "%s",
                            nasm_reg_names[reg - EXPR_REG_START]);
                    }
                }
                else
                {
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[reg - EXPR_REG_START]);
                }
            }

            // check 1?

            else if (!(UNITY & ~t))
            {
                output[slen++] = '1';
            }

            // check immediate?

            else if (t & IMMEDIATE)
            {
                slen +=
                    snprintf(output + slen, outbufsize - slen, "immediate");
            }

            // check immediate(or offset) address?

            else if (!(MEM_OFFS & ~t))
            {
                slen +=
                    snprintf(output + slen, outbufsize - slen, "mem_offset");
            }

            // check register/memory operand size?

            else if (is_class(REGMEM, t))
            {
                int32_t started = false;
                if (t & BITS8)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "byte ");
                }
                if (t & BITS16)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "word ");
                }
                if (t & BITS32)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "dword ");
                }

                // check far indicator?
                // parts of instruction mnemonic
                if (t & FAR)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "far ");
                }
                if (t & NEAR) /* Jcc only*/
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "near ");
                }
                output[slen++] = '[';

                // check displacement flag?

                if (o->disp_size)
                {
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        (o->disp_size == 64 ? "qword " :
                            o->disp_size == 32 ? "dword " :
                            o->disp_size == 16 ? "word " :
                            ""));
                }

                // check rel??

                if (o->eaflags & EAF_REL)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "rel ");
                }

                // check segment override flag

                if (segover)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "%s:",
                            segover);
                    // clear segment override flag
                    segover = NULL;
                }

                // check if base register is valid

                if (o->basereg != -1)
                {
                    // base register is valid
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->basereg - EXPR_REG_START)]);
                    started = true;
                }

                // check if index register is valid, if scale factor is valid

                if (o->indexreg != -1 && !itemp_has(*best_p, IF_MIB))
                {
                    if (started)
                    {
                        output[slen++] = '+';
                    }
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }

                // check displacment bit-8 flag?

                if (o->segment & SEG_DISP8)
                {
                    // override to disp32 by evex flag
                    if (is_evex)
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "disp32");
                    }
                    // default to disp8
                    else
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "disp8");
                    }
                }
                else if (o->segment & SEG_DISP16)
                {
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "disp16");
                }
                else if (o->segment & SEG_DISP32)
                {
                    // override to disp64 by a64 flag
                    if (prefix.asize == 64)
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "disp64");
                    }
                    // default to disp32
                    else
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "disp32");
                    }
                }

                // check index register is valid, check scale factor(again?)

                if (o->indexreg != -1 && itemp_has(*best_p, IF_MIB))
                {
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }
                output[slen++] = ']';

                // final check for extended vex flag


            }

            // unkown cases

            else
            {
                slen +=
                    snprintf(output + slen, outbufsize - slen, "<operand%d>",
                        i);
            }
        }
    }
    else
    {
        // check if operand is needed in full disassembly
        for (i = 0; i < (*p)->operands; i++)
        {
            // shortcuts to (*p)->opd[i];
            opflags_t t = (*p)->opd[i];
            // shortcuts to (*p)->deco[i];
            decoflags_t deco = (*p)->deco[i];
            // shortcut to &ins.oprs[i]
            const operand* o = &ins.oprs[i];
            int64_t offs;

            // replace this line with other function
            output[slen++] = (colon ? ':' : i == 0 ? ' ' : ',');

            // shortcuts to o->offset
            offs = o->offset;

            if (o->segment & SEG_RELATIVE)
            {
                // replace this line with other function
                offs += offset + length;
                /*
                 * sort out wraparound
                 */
                if (!(o->segment & (SEG_32BIT | SEG_64BIT)))
                {
                    offs &= 0xffff;
                }
                else if (segsize != 64)
                {
                    offs &= 0xffffffff;
                }
                /*
                 * add sync marker, if autosync is on
                 */
                 // if (autosync)
                     // add_sync(offs, 0L);
            }

            if (t & COLON)
            {
                colon = true;
            }
            else
            {
                colon = false;
            }

            // check register or fpu register prefix?

            if ((t & (REGISTER | FPUREG)) ||
                (o->segment & SEG_RMREG))
            {
                // check i'th operand base register

                enum reg_enum reg;
                reg = whichreg(t, o->basereg, ins.rex);

                // check to marks(when?)

                if (t & TO)
                {
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "to ");
                }
                // replace this line with other function
                slen += snprintf(output + slen, outbufsize - slen, "%s",
                    nasm_reg_names[reg - EXPR_REG_START]);
                // printf("register %s \n", nasm_reg_names[reg-EXPR_REG_START]);
                if (t & REGSET_MASK)
                {
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "+%d",
                        (int)((t & REGSET_MASK) >> (REGSET_SHIFT - 1)) - 1);
                }
                if (is_evex && deco)
                {
                    // replace this line with other function
                    // slen += append_evex_reg_deco(output + slen, outbufsize - slen,
                                                 // deco, ins.evex_p);
                }
            }

            // check 1?

            else if (!(UNITY & ~t))
            {
                // replace this line with other function
                output[slen++] = '1';
            }

            // check immediate?

            else if (t & IMMEDIATE)
            {
                if (t & BITS8)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "byte ");
                    // check sign(+,-)?
                    if (o->segment & SEG_SIGNED)
                    {
                        if (offs < 0)
                        {
                            offs *= -1;
                            // replace this line with other function
                            output[slen++] = '-';
                        }
                        else
                        {
                            // replace this line with other function
                            output[slen++] = '+';
                        }
                    }
                }
                else if (t & BITS16)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "word ");
                }
                else if (t & BITS32)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "dword ");
                }
                else if (t & BITS64)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "qword ");
                }
                else if (t & NEAR)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "near ");
                }
                else if (t & SHORT)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "short ");
                }

                // check immediate data

                // replace this line with other function
                slen +=
                    snprintf(output + slen, outbufsize - slen, "0x%"PRIx64"",
                        offs);
            }

            // check immediate(or offset) address?

            else if (!(MEM_OFFS & ~t))
            {
                // replace this line with other function
                slen +=
                    snprintf(output + slen, outbufsize - slen,
                        "[%s%s%s0x%"PRIx64"]",
                        (segover ? segover : ""),
                        (segover ? ":" : ""),
                        (o->disp_size == 64 ? "qword " :
                            o->disp_size == 32 ? "dword " :
                            o->disp_size == 16 ? "word " : ""), offs);
                // clear segment override flag
                segover = NULL;
            }

            // check register/memory operand size?

            else if (is_class(REGMEM, t))
            {
                int started = false;
                uint64_t a = t;

                if (t & BITS8)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "byte ");
                }
                if (t & BITS16)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "word ");
                }
                if (t & BITS32)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "dword ");
                }
                if (t & BITS64)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "qword ");
                }
                if (t & BITS80)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "tword ");
                }
                if ((ins.evex_p[2] & EVEX_P2B) && (deco & BRDCAST_MASK))
                {
                    /* when broadcasting, each element size should be used */
                    if (deco & BR_BITS32)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "dword ");
                    }
                    else if (deco & BR_BITS64)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "qword ");
                    }
                }
                else
                {
                    if (t & BITS128)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "oword ");
                    }
                    if (t & BITS256)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "yword ");
                    }
                    if (t & BITS512)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "zword ");
                    }
                }

                // check far indicator?
                // parts of instruction mnemonic
                if (t & FAR)
                {
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "far ");
                }
                if (t & NEAR)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "near ");
                }
                // replace this line with other function
                output[slen++] = '[';

                // check displacement flag?

                if (o->disp_size)
                {
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        (o->disp_size == 64 ? "qword " :
                            o->disp_size == 32 ? "dword " :
                            o->disp_size == 16 ? "word " :
                            ""));
                }

                // check rel??

                if (o->eaflags & EAF_REL)
                {
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "rel ");
                }

                // check segment override flag
                if (segover)
                {
                    // replace this line with other function
                    slen +=
                        snprintf(output + slen, outbufsize - slen, "%s:",
                            segover);
                    // clear segment override flag
                    segover = NULL;
                }

                // check if base register is valid

                if (o->basereg != -1)
                {
                    // base register is valid
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->basereg - EXPR_REG_START)]);
                    // printf("memory %s \n", nasm_reg_names[(o->basereg-EXPR_REG_START)]);
                    started = true;
                }

                // check if index register is valid, if scale factor is valid
                if (o->indexreg != -1 && !itemp_has(*best_p, IF_MIB))
                {
                    if (started)
                    {
                        // replace this line with other function
                        output[slen++] = '+';
                    }
                    // replace this line with other function
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }

                // check displacment bit-8 flag?

                if (o->segment & SEG_DISP8)
                {
                    // override to disp32 by evex flag
                    if (is_evex)
                    {
                        const char* prefix;
                        uint32_t offset = offs;
                        if ((int32_t)offset < 0)
                        {
                            prefix = "-";
                            //offset = -offset;
                            offset = offset;
                        }
                        else
                        {
                            prefix = "+";
                        }
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "%s0x%"PRIx32"",
                                prefix, offset);
                    }
                    // default to disp8
                    else
                    {
                        const char* prefix;
                        uint8_t offset = offs;
                        if ((int8_t)offset < 0)
                        {
                            prefix = "-";
                            offset = -offset;
                        }
                        else
                        {
                            prefix = "+";
                        }
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "%s0x%"PRIx8"",
                                prefix, offset);
                    }
                }
                else if (o->segment & SEG_DISP16)
                {
                    const char* prefix;
                    uint16_t offset = offs;
                    // default to disp16
                    if ((int16_t)offset < 0 && started)
                    {
                        offset = -offset;
                        prefix = "-";
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen,
                                "%s0x%"PRIx16"", prefix, offset);
                    }
                    else
                    {
                        prefix = started ? "+" : "";
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen,
                                "%s0x%"PRIx16"", prefix, offset);
                    }
                }
                else if (o->segment & SEG_DISP32)
                {
                    // override to disp64 by a64 flag
                    if (prefix.asize == 64)
                    {
                        const char* prefix;
                        uint64_t offset = offs;
                        if ((int32_t)offs < 0 && started)
                        {
                            //offset = -offset;
                            offset = offset;
                            prefix = "-";
                        }
                        else
                        {
                            prefix = started ? "+" : "";
                        }
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen,
                                "%s0x%"PRIx64"", prefix, offset);
                    }
                    // default to disp32
                    else
                    {
                        const char* prefix;
                        uint32_t offset = offs;
                        if ((int32_t)offset < 0 && started)
                        {
                            //offset = -offset;
                            offset = offset;
                            prefix = "-";
                            // replace this line with other function
                            slen +=
                                snprintf(output + slen, outbufsize - slen,
                                    "%s0x%"PRIx32"", prefix, offset);
                        }
                        else
                        {
                            prefix = started ? "+" : "";
                            // replace this line with other function
                            slen +=
                                snprintf(output + slen, outbufsize - slen,
                                    "%s0x%"PRIx32"", prefix, offset);
                        }
                    }
                }

                // check index register is valid, check scale factor(again?)
                if (o->indexreg != -1 && itemp_has(*best_p, IF_MIB))
                {
                    // replace this line with other function
                    // output[slen++] = ',';
                    slen += snprintf(output + slen, outbufsize - slen, "%s",
                        nasm_reg_names[(o->indexreg - EXPR_REG_START)]);
                    // skip scale factor equal 1 case
                    if (o->scale > 1)
                    {
                        // replace this line with other function
                        slen +=
                            snprintf(output + slen, outbufsize - slen, "*%d",
                                o->scale);
                    }
                    started = true;
                }
                // replace this line with other function
                output[slen++] = ']';

                // final check for extended vex flag

                if (is_evex && deco)
                {
                    // replace this line with other function
                    // slen += append_evex_mem_deco(output + slen, outbufsize - slen,
                                                 // t, deco, ins.evex_p);
                }
            }

            // unkown cases

            else
            {
                // replace this line with other function
                slen +=
                    snprintf(output + slen, outbufsize - slen, "<operand%d>",
                        i);
            }
        }
    }


    // replace this line with other function
    output[slen] = '\0';

    return length;
}

int ndisasm(unsigned char* data, OPENTRY* pOpEntry, E_ADM eADM, unsigned int* flags)
{
    char outbuf[64];
    //*flags = 0x80000000;
    //*flags = 0x40000000;
    //*flags = 0x00000000;

    // if segment size is 16-bit, choose 16-bit;
    // else if segment size is 32-bit or 64-bit, choose 32-bit
    // segment size is 64-bit?
    int segsize = (eADM == E_AD16) ? 16 : 32;
    int len = disasm(data, 8, outbuf, sizeof(outbuf), segsize, flags);
    if (len)
    {
        // convert char array to wchar array
        swprintf(pOpEntry->strDisasm, 128, L"%hs", outbuf);
        return len;
    }
    return 0;
}