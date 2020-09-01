/* ----------------------------------------------------------------------- *
 *
 *   Copyright 1996-2018 The NASM Authors - All Rights Reserved
 *   See the file AUTHORS included with the NASM distribution for
 *   the specific copyright holders.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following
 *   conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *
 *     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *     CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *     INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *     MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *     CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *     SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *     NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *     OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *     EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------------------------------------------------------------- */

/*
 * nasm.h   main header file for the Netwide Assembler: inter-module interface
 */

#ifndef NASM_NASM_H
#define NASM_NASM_H

#include "compiler.h"

#include <time.h>

#include "nasmlib.h"
#include "nctype.h"
#include "strlist.h"
#include "preproc.h"
#include "insnsi.h"     /* For enum opcode */
#include "directiv.h"   /* For enum directive */
#include "labels.h"     /* For enum mangle_index, enum label_type */
#include "opflags.h"
#include "regs.h"
#include "srcfile.h"
#include "error.h"




































































































































































































































/*
 * The evaluator can also return hints about which of two registers
 * used in an expression should be the base register. See also the
 * `operand' structure.
 */
struct eval_hints {
    int64_t base;
    int     type;
};




























































































































































enum ccode { /* condition code names */
    C_A, C_AE, C_B, C_BE, C_C, C_E, C_G, C_GE, C_L, C_LE, C_NA, C_NAE,
    C_NB, C_NBE, C_NC, C_NE, C_NG, C_NGE, C_NL, C_NLE, C_NO, C_NP,
    C_NS, C_NZ, C_O, C_P, C_PE, C_PO, C_S, C_Z,
    C_none = -1
};
























/*
 * REX flags
 */
#define REX_MASK    0x4f    /* Actual REX prefix bits */
#define REX_B       0x01    /* ModRM r/m extension */
#define REX_X       0x02    /* SIB index extension */
#define REX_R       0x04    /* ModRM reg extension */
#define REX_W       0x08    /* 64-bit operand size */
#define REX_L       0x20    /* Use LOCK prefix instead of REX.R */
#define REX_P       0x40    /* REX prefix present/required */
#define REX_H       0x80    /* High register present, REX forbidden */
#define REX_V       0x0100  /* Instruction uses VEX/XOP instead of REX */
#define REX_NH      0x0200  /* Instruction which doesn't use high regs */
#define REX_EV      0x0400  /* Instruction uses EVEX instead of REX */

/*
 * EVEX bit field
 */
#define EVEX_P0MM       0x0f        /* EVEX P[3:0] : Opcode map           */
#define EVEX_P0RP       0x10        /* EVEX P[4] : High-16 reg            */
#define EVEX_P0X        0x40        /* EVEX P[6] : High-16 rm             */
#define EVEX_P1PP       0x03        /* EVEX P[9:8] : Legacy prefix        */
#define EVEX_P1VVVV     0x78        /* EVEX P[14:11] : NDS register       */
#define EVEX_P1W        0x80        /* EVEX P[15] : Osize extension       */
#define EVEX_P2AAA      0x07        /* EVEX P[18:16] : Embedded opmask    */
#define EVEX_P2VP       0x08        /* EVEX P[19] : High-16 NDS reg       */
#define EVEX_P2B        0x10        /* EVEX P[20] : Broadcast / RC / SAE  */
#define EVEX_P2LL       0x60        /* EVEX P[22:21] : Vector length      */
#define EVEX_P2RC       EVEX_P2LL   /* EVEX P[22:21] : Rounding control   */
#define EVEX_P2Z        0x80        /* EVEX P[23] : Zeroing/Merging       */

/*
 * REX_V "classes" (prefixes which behave like VEX)
 */
enum vex_class {
    RV_VEX      = 0,    /* C4/C5 */
    RV_XOP      = 1,    /* 8F */
    RV_EVEX     = 2     /* 62 */
};

/*
 * Note that because segment registers may be used as instruction
 * prefixes, we must ensure the enumerations for prefixes and
 * register names do not overlap.
 */
enum prefixes { /* instruction prefixes */
    P_none = 0,
    PREFIX_ENUM_START = REG_ENUM_LIMIT,
    P_A16 = PREFIX_ENUM_START,
    P_A32,
    P_A64,
    P_ASP,
    P_LOCK,
    P_O16,
    P_O32,
    P_O64,
    P_OSP,
    P_REP,
    P_REPE,
    P_REPNE,
    P_REPNZ,
    P_REPZ,
    P_TIMES,
    P_WAIT,
    P_XACQUIRE,
    P_XRELEASE,
    P_BND,
    P_NOBND,
    P_EVEX,
    P_VEX3,
    P_VEX2,
    PREFIX_ENUM_LIMIT
};
enum ea_flags { /* special EA flags */
    EAF_BYTEOFFS    =  1,   /* force offset part to byte size */
    EAF_WORDOFFS    =  2,   /* force offset part to [d]word size */
    EAF_TIMESTWO    =  4,   /* really do EAX*2 not EAX+EAX */
    EAF_REL         =  8,   /* IP-relative addressing */
    EAF_ABS         = 16,   /* non-IP-relative addressing */
    EAF_FSGS        = 32,   /* fs/gs segment override present */
    EAF_MIB         = 64    /* mib operand */
};

enum eval_hint { /* values for `hinttype' */
    EAH_NOHINT   = 0,       /* no hint at all - our discretion */
    EAH_MAKEBASE = 1,       /* try to make given reg the base */
    EAH_NOTBASE  = 2,       /* try _not_ to make reg the base */
    EAH_SUMMED   = 3        /* base and index are summed into index */
};

typedef struct operand { /* operand to an instruction */
    opflags_t       type;       /* type of operand */
    int             disp_size;  /* 0 means default; 16; 32; 64 */
    enum reg_enum   basereg;
    enum reg_enum   indexreg;   /* address registers */
    int             scale;      /* index scale */
    int             hintbase;
    enum eval_hint  hinttype;   /* hint as to real base register */
    int32_t         segment;    /* immediate segment, if needed */
    int64_t         offset;     /* any immediate number */
    int32_t         wrt;        /* segment base it's relative to */
    int             eaflags;    /* special EA flags */
    int             opflags;    /* see OPFLAG_* defines below */
    decoflags_t     decoflags;  /* decorator flags such as {...} */
} operand;

#define OPFLAG_FORWARD      1   /* operand is a forward reference */
#define OPFLAG_EXTERN       2   /* operand is an external reference */
#define OPFLAG_UNKNOWN      4   /* operand is an unknown reference
                                   (always a forward reference also) */
#define OPFLAG_RELATIVE     8   /* operand is self-relative, e.g. [foo - $]
                                   where foo is not in the current segment */

enum extop_type { /* extended operand types */
    EOT_NOTHING = 0,
    EOT_EXTOP,          /* Subexpression */
    EOT_DB_STRING,      /* Byte string */
    EOT_DB_FLOAT,       /* Floating-pointer number (special byte string) */
    EOT_DB_STRING_FREE, /* Byte string which should be nasm_free'd*/
    EOT_DB_NUMBER,      /* Integer */
    EOT_DB_RESERVE      /* ? */
};

typedef struct extop { /* extended operand */
    struct extop    *next;       /* linked list */
    union {
        struct {                 /* text or byte string */
            char    *data;
            size_t   len;
        } string;
        struct {                 /* numeric expression */
            int64_t  offset;     /* numeric value or address offset */
            int32_t  segment;    /* address segment */
            int32_t  wrt;        /* address wrt */
            bool     relative;   /* self-relative expression */
        } num;
        struct extop *subexpr;   /* actual expressions */
    } val;
    size_t dup;                  /* duplicated? */
    enum extop_type type;        /* defined above */
    int elem;                    /* element size override, if any (bytes) */
} extop;

enum ea_type {
    EA_INVALID,     /* Not a valid EA at all */
    EA_SCALAR,      /* Scalar EA */
    EA_XMMVSIB,     /* XMM vector EA */
    EA_YMMVSIB,     /* YMM vector EA */
    EA_ZMMVSIB      /* ZMM vector EA */
};

/*
 * Prefix positions: each type of prefix goes in a specific slot.
 * This affects the final ordering of the assembled output, which
 * shouldn't matter to the processor, but if you have stylistic
 * preferences, you can change this.  REX prefixes are handled
 * differently for the time being.
 *
 * LOCK and REP used to be one slot; this is no longer the case since
 * the introduction of HLE.
 */
enum prefix_pos {
    PPS_WAIT,   /* WAIT (technically not a prefix!) */
    PPS_REP,    /* REP/HLE prefix */
    PPS_LOCK,   /* LOCK prefix */
    PPS_SEG,    /* Segment override prefix */
    PPS_OSIZE,  /* Operand size prefix */
    PPS_ASIZE,  /* Address size prefix */
    PPS_VEX,    /* VEX type */
    MAXPREFIX   /* Total number of prefix slots */
};

/*
 * Tuple types that are used when determining Disp8*N eligibility
 * The order must match with a hash %tuple_codes in insns.pl
 */
enum ttypes {
    FV    = 001,
    HV    = 002,
    FVM   = 003,
    T1S8  = 004,
    T1S16 = 005,
    T1S   = 006,
    T1F32 = 007,
    T1F64 = 010,
    T2    = 011,
    T4    = 012,
    T8    = 013,
    HVM   = 014,
    QVM   = 015,
    OVM   = 016,
    M128  = 017,
    DUP   = 020
};

/* EVEX.L'L : Vector length on vector insns */
enum vectlens {
    VL128 = 0,
    VL256 = 1,
    VL512 = 2,
    VLMAX = 3
};

/* If you need to change this, also change it in insns.pl */
#define MAX_OPERANDS 5

typedef struct insn { /* an instruction itself */
    char            *label;                 /* the label defined, or NULL */
    int             prefixes[MAXPREFIX];    /* instruction prefixes, if any */
    enum opcode     opcode;                 /* the opcode - not just the string */
    enum ccode      condition;              /* the condition code, if Jcc/SETcc */
    int             operands;               /* how many operands? 0-3 (more if db et al) */
    int             addr_size;              /* address size */
    operand         oprs[MAX_OPERANDS];     /* the operands, defined as above */
    extop           *eops;                  /* extended operands */
    int             eops_float;             /* true if DD and floating */
    int32_t         times;                  /* repeat count (TIMES prefix) */
    bool            forw_ref;               /* is there a forward reference? */
    bool            rex_done;               /* REX prefix emitted? */
    int             rex;                    /* Special REX Prefix */
    int             vexreg;                 /* Register encoded in VEX prefix */
    int             vex_cm;                 /* Class and M field for VEX prefix */
    int             vex_wlp;                /* W, P and L information for VEX prefix */
    uint8_t         evex_p[3];              /* EVEX.P0: [RXB,R',00,mm], P1: [W,vvvv,1,pp] */
                                            /* EVEX.P2: [z,L'L,b,V',aaa] */
    enum ttypes     evex_tuple;             /* Tuple type for compressed Disp8*N */
    int             evex_rm;                /* static rounding mode for AVX512 (EVEX) */
    int8_t          evex_brerop;            /* BR/ER/SAE operand position */
} insn;


























































































































































































































































































































































































































































/*
 * AVX512 Decorator (decoflags_t) bits distribution (counted from 0)
 *  3         2         1
 * 10987654321098765432109876543210
 *                |
 *                | word boundary
 * ............................1111 opmask
 * ...........................1.... zeroing / merging
 * ..........................1..... broadcast
 * .........................1...... static rounding
 * ........................1....... SAE
 * ......................11........ broadcast element size
 * ....................11.......... number of broadcast elements
 */
#define OP_GENVAL(val, bits, shift)     (((val) & ((UINT64_C(1) << (bits)) - 1)) << (shift))

/*
 * Opmask register number
 * identical to EVEX.aaa
 *
 * Bits: 0 - 3
 */
#define OPMASK_SHIFT            (0)
#define OPMASK_BITS             (4)
#define OPMASK_MASK             OP_GENMASK(OPMASK_BITS, OPMASK_SHIFT)
#define GEN_OPMASK(bit)         OP_GENBIT(bit, OPMASK_SHIFT)
#define VAL_OPMASK(val)         OP_GENVAL(val, OPMASK_BITS, OPMASK_SHIFT)

/*
 * zeroing / merging control available
 * matching to EVEX.z
 *
 * Bits: 4
 */
#define Z_SHIFT                 (4)
#define Z_BITS                  (1)
#define Z_MASK                  OP_GENMASK(Z_BITS, Z_SHIFT)
#define GEN_Z(bit)              OP_GENBIT(bit, Z_SHIFT)

/*
 * broadcast - Whether this operand can be broadcasted
 *
 * Bits: 5
 */
#define BRDCAST_SHIFT           (5)
#define BRDCAST_BITS            (1)
#define BRDCAST_MASK            OP_GENMASK(BRDCAST_BITS, BRDCAST_SHIFT)
#define GEN_BRDCAST(bit)        OP_GENBIT(bit, BRDCAST_SHIFT)

/*
 * Whether this instruction can have a static rounding mode.
 * It goes with the last simd operand because the static rounding mode
 * decorator is located between the last simd operand and imm8 (if any).
 *
 * Bits: 6
 */
#define STATICRND_SHIFT         (6)
#define STATICRND_BITS          (1)
#define STATICRND_MASK          OP_GENMASK(STATICRND_BITS, STATICRND_SHIFT)
#define GEN_STATICRND(bit)      OP_GENBIT(bit, STATICRND_SHIFT)

/*
 * SAE(Suppress all exception) available
 *
 * Bits: 7
 */
#define SAE_SHIFT               (7)
#define SAE_BITS                (1)
#define SAE_MASK                OP_GENMASK(SAE_BITS, SAE_SHIFT)
#define GEN_SAE(bit)            OP_GENBIT(bit, SAE_SHIFT)

/*
 * Broadcasting element size.
 *
 * Bits: 8 - 9
 */
#define BRSIZE_SHIFT            (8)
#define BRSIZE_BITS             (2)
#define BRSIZE_MASK             OP_GENMASK(BRSIZE_BITS, BRSIZE_SHIFT)
#define GEN_BRSIZE(bit)         OP_GENBIT(bit, BRSIZE_SHIFT)

#define BR_BITS32               GEN_BRSIZE(0)
#define BR_BITS64               GEN_BRSIZE(1)

/*
 * Number of broadcasting elements
 *
 * Bits: 10 - 11
 */
#define BRNUM_SHIFT             (10)
#define BRNUM_BITS              (2)
#define BRNUM_MASK              OP_GENMASK(BRNUM_BITS, BRNUM_SHIFT)
#define VAL_BRNUM(val)          OP_GENVAL(val, BRNUM_BITS, BRNUM_SHIFT)

#define BR_1TO2                 VAL_BRNUM(0)
#define BR_1TO4                 VAL_BRNUM(1)
#define BR_1TO8                 VAL_BRNUM(2)
#define BR_1TO16                VAL_BRNUM(3)

#define MASK                    OPMASK_MASK             /* Opmask (k1 ~ 7) can be used */
#define Z                       Z_MASK
#define B32                     (BRDCAST_MASK|BR_BITS32) /* {1to16} : broadcast 32b * 16 to zmm(512b) */
#define B64                     (BRDCAST_MASK|BR_BITS64) /* {1to8}  : broadcast 64b *  8 to zmm(512b) */
#define ER                      STATICRND_MASK          /* ER(Embedded Rounding) == Static rounding mode */
#define SAE                     SAE_MASK                /* SAE(Suppress All Exception) */
















































































#endif  /* NASM_NASM_H */
