#ifndef __LIB_OP_H__
#define __LIB_OP_H__


#include "stdafx.h"
#ifdef __cplusplus
extern  "C" {
#endif


#ifdef LIB_OP_EXPORTS
#define LIB_OP_API __declspec(dllexport)
#else
#define LIB_OP_API __declspec(dllimport)
#endif


#define OPTION_EXPAND_MODRM_REG   0x00000001 // option to indicate to expand REG of ModRM
#define OPTION_EXPAND_MODRM_EA    0x00000002 // option to indicate to expand Effective address of ModRM
#define OPTION_DECODE_OPMAP       0x00000004 // option to indicate to decode ModRM or not
#define OPTION_DECODE_UNSUPPORT   0x00000008 // option to not decode unsupported op-code

typedef struct{
	BYTE OP;         //OP code
	BYTE OPExt;      //Op extension:OPExt[7]set to 1 indicate OPExt[2:0] is valid.
    DWORD ReqPrefix;
    WCHAR strDisasm[128];
}OPENTRY;

typedef enum{
    E_AD16,
    E_AD32,
    E_AD64,
	E_AD_ALL,
}E_ADM;

typedef enum{
    E_OPR_16,
    E_OPR_32,
	E_OPR_64,
	E_OPR_ALL,
}E_OPR_SZ;

typedef enum{
    E_1B_OP,
    E_2B_OP,
    E_3B_OP_0F38,
    E_3B_OP_0F3A,
}E_XB_OP;

typedef enum {
    E_Valid,
    E_Operand,
    E_REPNE,
    E_REP,
    E_FWAIT,
    E_VEX,
    E_EVEX,
    E_NOREP,
    E_NOREX,
    E_ToOperand,
    E_ToREPNE,
    E_ToREP,
    E_ToVEX,
    E_ToVEX_XMM,
    E_ToEVEX,
}E_PF;
typedef enum {
    E_PRIV,
    E_SMM,
    E_PROT,
    E_LOCK,
    E_NOLONG,
    E_LONG,
    E_NOHLE,
    E_MIB,
    E_SIB,
    E_BND,
    E_UNDOC,
    E_HLE,
    E_FPU,
    E_MMX,
    E_3DNOW,
    E_SSE,
    E_SSE2,
    E_SSE3,
    E_VMX,
    E_SSSE3,
    E_SSE4A,
    E_SSE41,
    E_SSE42,
    E_SSE5,
    E_AVX,
    E_PREFETCHWT1,
}E_FEATURE;

#define PF_Valid        1 << E_Valid        // architecture support flags
#define PF_Operand      1 << E_Operand      // mandatory prefix 0x66 (66)
#define PF_REPNE        1 << E_REPNE        // mandatory prefix 0xF2 (F2)
#define PF_REP          1 << E_REP          // mandatory prefix 0xF3 (F3)
#define PF_FWAIT        1 << E_FWAIT        // this mnemonic requires FWAIT prefix
#define PF_VEX          1 << E_VEX          // this mnemonic requires VEX prefix (v),(v1)
#define PF_EVEX         1 << E_EVEX         // this mnemonic requires EVEX prefix (ev)

#define PF_NOREP        1 << E_NOREP        // this mnemonic does not requires 0xF3
#define PF_NOREX        1 << E_NOREX        // this mnemonic does not requires REX.W prefix for 64-bit operand size
#define PF_ToOperand    1 << E_ToOperand    // this mnemonic can be promoted with mandatory prefix 0x66
#define PF_ToREPNE      1 << E_ToREPNE      // this mnemonic can be promoted with mandatory prefix 0xF2
#define PF_ToREP        1 << E_ToREP        // this mnemonic can be promoted with mandatory prefix 0xF3
// mnemonics that begin with lowercase 'v' accept a VEX or EVEX prefix
// mnemonics that begin with lowercase 'k' accept a VEX prefix
#define PF_ToVEX        1 << E_ToVEX        // this mnemonic can be promoted with VEX prefix (v)
#define PF_ToVEX_XMM    1 <  E_ToVEX_XMM    // this mnemonic can be promoted with VEX prefix with XMM only (v1)
#define PF_ToEVEX       1 << E_ToEVEX       // this mnemonic can be promoted with EVEX prefix (evo)

#define PF_PRIV         1 << E_PRIV         // Privileged instruction
#define PF_SMM          1 << E_SMM          // Only valid in SMM
#define PF_PROT         1 << E_PROT         // Protected mode only
#define PF_LOCK         1 << E_LOCK         // Lockable if operand 0 is memory
#define PF_NOLONG       1 << E_NOLONG       // Not available in long mode
#define PF_LONG         1 << E_LONG         // Long mode
#define PF_NOHLE        1 << E_NOHLE        // HLE prefixes forbidden
#define PF_MIB          1 << E_MIB          // split base/index EA
#define PF_SIB          1 << E_SIB          // SIB encoding required
#define PF_BND          1 << E_BND          // BND (0xF2) prefix available
#define PF_UNDOC        1 << E_UNDOC        // Undocumented
#define PF_HLE          1 << E_HLE          // HLE prefixed
#define PF_FPU          1 << E_FPU          // FPU
#define PF_MMX          1 << E_MMX          // MMX
#define PF_3DNOW        1 << E_3DNOW        // 3DNOW!
#define PF_SSE          1 << E_SSE          // SSE (KNI, MMX2)
#define PF_SSE2         1 << E_SSE2         // SSE2
#define PF_SSE3         1 << E_SSE3         // SSE3 (PNI)
#define PF_VMX          1 << E_VMX          // VMX
#define PF_SSSE3        1 << E_SSSE3        // SSSE3
#define PF_SSE4A        1 << E_SSE4A        // AMD SSE4a
#define PF_SSE41        1 << E_SSE41        // SSE4.1
#define PF_SSE42        1 << E_SSE42        // SSE4.2
#define PF_SSE5         1 << E_SSE5         // SSE5
#define PF_AVX          1 << E_AVX          // AVX  (256-bit floating point)
#define PF_PREFETCHWT1  1 << E_PREFETCHWT1  // PREFETCHWT1

typedef struct {
    BYTE OP;
    BYTE OPExt;         /*[7] indicated valid,[2:0] = ModRm.REG;*/
    BYTE PF;
    char* strFmt;
}OP_ENTRY;


OP_ENTRY OP1BMap[256] = {
    //# 0x00 - 0x0f
    {0x00,0x00,0 | PF_Valid," ADD Eb,Gb"},
    {0x01,0x00,0 | PF_Valid," ADD Ev,Gv"},
    {0x02,0x00,0 | PF_Valid," ADD Gb,Eb"},
    {0x03,0x00,0 | PF_Valid," ADD Gv,Ev"},
    {0x04,0x00,0 | PF_Valid," ADD AL,Ib"},
    {0x05,0x00,0 | PF_Valid," ADD rAX,Iz"},
    {0x06,0x00,0 | PF_Valid," PUSH ES (i64)"},
    {0x07,0x00,0 | PF_Valid," POP ES (i64)"},
    {0x08,0x00,0 | PF_Valid," OR Eb,Gb"},
    {0x09,0x00,0 | PF_Valid," OR Ev,Gv"},
    {0x0a,0x00,0 | PF_Valid," OR Gb,Eb"},
    {0x0b,0x00,0 | PF_Valid," OR Gv,Ev"},
    {0x0c,0x00,0 | PF_Valid," OR AL,Ib"},
    {0x0d,0x00,0 | PF_Valid," OR rAX,Iz"},
    {0x0e,0x00,0 | PF_Valid," PUSH CS (i64)"},
    {0x0f,0x00,0 | PF_Valid," escape # 2-byte escape"},
    //# 0x10 - 0x1f
    {0x10,0x00,0 | PF_Valid," ADC Eb,Gb"},
    {0x11,0x00,0 | PF_Valid," ADC Ev,Gv"},
    {0x12,0x00,0 | PF_Valid," ADC Gb,Eb"},
    {0x13,0x00,0 | PF_Valid," ADC Gv,Ev"},
    {0x14,0x00,0 | PF_Valid," ADC AL,Ib"},
    {0x15,0x00,0 | PF_Valid," ADC rAX,Iz"},
    {0x16,0x00,0 | PF_Valid," PUSH SS (i64)"},
    {0x17,0x00,0 | PF_Valid," POP SS (i64)"},
    {0x18,0x00,0 | PF_Valid," SBB Eb,Gb"},
    {0x19,0x00,0 | PF_Valid," SBB Ev,Gv"},
    {0x1a,0x00,0 | PF_Valid," SBB Gb,Eb"},
    {0x1b,0x00,0 | PF_Valid," SBB Gv,Ev"},
    {0x1c,0x00,0 | PF_Valid," SBB AL,Ib"},
    {0x1d,0x00,0 | PF_Valid," SBB rAX,Iz"},
    {0x1e,0x00,0 | PF_Valid," PUSH DS (i64)"},
    {0x1f,0x00,0 | PF_Valid," POP DS (i64)"},
    //# 0x20 - 0x2f
    {0x20,0x00,0 | PF_Valid," AND Eb,Gb"},
    {0x21,0x00,0 | PF_Valid," AND Ev,Gv"},
    {0x22,0x00,0 | PF_Valid," AND Gb,Eb"},
    {0x23,0x00,0 | PF_Valid," AND Gv,Ev"},
    {0x24,0x00,0 | PF_Valid," AND AL,Ib"},
    {0x25,0x00,0 | PF_Valid," AND rAx,Iz"},
    {0x26,0x00,0 | PF_Valid," SEG=ES (Prefix)"},
    {0x27,0x00,0 | PF_Valid," DAA (i64)"},
    {0x28,0x00,0 | PF_Valid," SUB Eb,Gb"},
    {0x29,0x00,0 | PF_Valid," SUB Ev,Gv"},
    {0x2a,0x00,0 | PF_Valid," SUB Gb,Eb"},
    {0x2b,0x00,0 | PF_Valid," SUB Gv,Ev"},
    {0x2c,0x00,0 | PF_Valid," SUB AL,Ib"},
    {0x2d,0x00,0 | PF_Valid," SUB rAX,Iz"},
    {0x2e,0x00,0 | PF_Valid," SEG=CS (Prefix)"},
    {0x2f,0x00,0 | PF_Valid," DAS (i64)"},
    //# 0x30 - 0x3f
    {0x30,0x00,0 | PF_Valid," XOR Eb,Gb"},
    {0x31,0x00,0 | PF_Valid," XOR Ev,Gv"},
    {0x32,0x00,0 | PF_Valid," XOR Gb,Eb"},
    {0x33,0x00,0 | PF_Valid," XOR Gv,Ev"},
    {0x34,0x00,0 | PF_Valid," XOR AL,Ib"},
    {0x35,0x00,0 | PF_Valid," XOR rAX,Iz"},
    {0x36,0x00,0 | PF_Valid," SEG=SS (Prefix)"},
    {0x37,0x00,0 | PF_Valid," AAA (i64)"},
    {0x38,0x00,0 | PF_Valid," CMP Eb,Gb"},
    {0x39,0x00,0 | PF_Valid," CMP Ev,Gv"},
    {0x3a,0x00,0 | PF_Valid," CMP Gb,Eb"},
    {0x3b,0x00,0 | PF_Valid," CMP Gv,Ev"},
    {0x3c,0x00,0 | PF_Valid," CMP AL,Ib"},
    {0x3d,0x00,0 | PF_Valid," CMP rAX,Iz"},
    {0x3e,0x00,0 | PF_Valid," SEG=DS (Prefix)"},
    {0x3f,0x00,0 | PF_Valid," AAS (i64)"},
    //# 0x40 - 0x4f
    {0x40,0x00,0," INC eAX (i64) | REX (o64)"},
    {0x41,0x00,0," INC eCX (i64) | REX.B (o64)"},
    {0x42,0x00,0," INC eDX (i64) | REX.X (o64)"},
    {0x43,0x00,0," INC eBX (i64) | REX.XB (o64)"},
    {0x44,0x00,0," INC eSP (i64) | REX.R (o64)"},
    {0x45,0x00,0," INC eBP (i64) | REX.RB (o64)"},
    {0x46,0x00,0," INC eSI (i64) | REX.RX (o64)"},
    {0x47,0x00,0," INC eDI (i64) | REX.RXB (o64)"},
    {0x48,0x00,0," DEC eAX (i64) | REX.W (o64)"},
    {0x49,0x00,0," DEC eCX (i64) | REX.WB (o64)"},
    {0x4a,0x00,0," DEC eDX (i64) | REX.WX (o64)"},
    {0x4b,0x00,0," DEC eBX (i64) | REX.WXB (o64)"},
    {0x4c,0x00,0," DEC eSP (i64) | REX.WR (o64)"},
    {0x4d,0x00,0," DEC eBP (i64) | REX.WRB (o64)"},
    {0x4e,0x00,0," DEC eSI (i64) | REX.WRX (o64)"},
    {0x4f,0x00,0," DEC eDI (i64) | REX.WRXB (o64)"},
    //# 0x50 - 0x5f
    {0x50,0x00,0 | PF_Valid," PUSH rAX/r8 (d64)"},
    {0x51,0x00,0 | PF_Valid," PUSH rCX/r9 (d64)"},
    {0x52,0x00,0 | PF_Valid," PUSH rDX/r10 (d64)"},
    {0x53,0x00,0 | PF_Valid," PUSH rBX/r11 (d64)"},
    {0x54,0x00,0 | PF_Valid," PUSH rSP/r12 (d64)"},
    {0x55,0x00,0 | PF_Valid," PUSH rBP/r13 (d64)"},
    {0x56,0x00,0 | PF_Valid," PUSH rSI/r14 (d64)"},
    {0x57,0x00,0 | PF_Valid," PUSH rDI/r15 (d64)"},
    {0x58,0x00,0 | PF_Valid," POP rAX/r8 (d64)"},
    {0x59,0x00,0 | PF_Valid," POP rCX/r9 (d64)"},
    {0x5a,0x00,0 | PF_Valid," POP rDX/r10 (d64)"},
    {0x5b,0x00,0 | PF_Valid," POP rBX/r11 (d64)"},
    {0x5c,0x00,0 | PF_Valid," POP rSP/r12 (d64)"},
    {0x5d,0x00,0 | PF_Valid," POP rBP/r13 (d64)"},
    {0x5e,0x00,0 | PF_Valid," POP rSI/r14 (d64)"},
    {0x5f,0x00,0 | PF_Valid," POP rDI/r15 (d64)"},
    //# 0x60 - 0x6f
    {0x60,0x00,0 | PF_Valid," PUSHA/PUSHAD (i64)"},
    {0x61,0x00,0 | PF_Valid," POPA/POPAD (i64)"},
    {0x62,0x00,0," BOUND Gv,Ma (i64) | EVEX (Prefix)"},
    {0x63,0x00,0," ARPL Ew,Gw (i64) | MOVSXD Gv,Ev (o64)"},
    {0x64,0x00,0 | PF_Valid," SEG=FS (Prefix)"},
    {0x65,0x00,0 | PF_Valid," SEG=GS (Prefix)"},
    {0x66,0x00,0 | PF_Valid," Operand-Size (Prefix)"},
    {0x67,0x00,0 | PF_Valid," Address-Size (Prefix)"},
    {0x68,0x00,0 | PF_Valid," PUSH Iz (d64)"},
    {0x69,0x00,0 | PF_Valid," IMUL Gv,Ev,Iz"},
    {0x6a,0x00,0 | PF_Valid," PUSH Ib (d64)"},
    {0x6b,0x00,0 | PF_Valid," IMUL Gv,Ev,Ib"},
    {0x6c,0x00,0 | PF_Valid," INS/INSB Yb,DX"},
    {0x6d,0x00,0 | PF_Valid," INS/INSW/INSD Yz,DX"},
    {0x6e,0x00,0 | PF_Valid," OUTS/OUTSB DX,Xb"},
    {0x6f,0x00,0 | PF_Valid," OUTS/OUTSW/OUTSD DX,Xz"},
    //# 0x70 - 0x7f
    {0x70,0x00,0 | PF_Valid," JO Jb"},
    {0x71,0x00,0 | PF_Valid," JNO Jb"},
    {0x72,0x00,0 | PF_Valid," JB/JNAE/JC Jb"},
    {0x73,0x00,0 | PF_Valid," JNB/JAE/JNC Jb"},
    {0x74,0x00,0 | PF_Valid," JZ/JE Jb"},
    {0x75,0x00,0 | PF_Valid," JNZ/JNE Jb"},
    {0x76,0x00,0 | PF_Valid," JBE/JNA Jb"},
    {0x77,0x00,0 | PF_Valid," JNBE/JA Jb"},
    {0x78,0x00,0 | PF_Valid," JS Jb"},
    {0x79,0x00,0 | PF_Valid," JNS Jb"},
    {0x7a,0x00,0 | PF_Valid," JP/JPE Jb"},
    {0x7b,0x00,0 | PF_Valid," JNP/JPO Jb"},
    {0x7c,0x00,0 | PF_Valid," JL/JNGE Jb"},
    {0x7d,0x00,0 | PF_Valid," JNL/JGE Jb"},
    {0x7e,0x00,0 | PF_Valid," JLE/JNG Jb"},
    {0x7f,0x00,0 | PF_Valid," JNLE/JG Jb"},
    //# 0x80 - 0x8f
    {0x80,0x80,0," Grp1 Eb,Ib (1A)"},
    {0x81,0x80,0," Grp1 Ev,Iz (1A)"},
    {0x82,0x80,0," Grp1 Eb,Ib (1A),(i64)"},
    {0x83,0x80,0," Grp1 Ev,Ib (1A)"},
    {0x84,0x00,0 | PF_Valid," TEST Eb,Gb"},
    {0x85,0x00,0 | PF_Valid," TEST Ev,Gv"},
    {0x86,0x00,0 | PF_Valid," XCHG Eb,Gb"},
    {0x87,0x00,0 | PF_Valid," XCHG Ev,Gv"},
    {0x88,0x00,0 | PF_Valid," MOV Eb,Gb"},
    {0x89,0x00,0 | PF_Valid," MOV Ev,Gv"},
    {0x8a,0x00,0 | PF_Valid," MOV Gb,Eb"},
    {0x8b,0x00,0 | PF_Valid," MOV Gv,Ev"},
    {0x8c,0x00,0 | PF_Valid," MOV Ev,Sw"},
    {0x8d,0x00,0 | PF_Valid," LEA Gv,M"},
    {0x8e,0x00,0 | PF_Valid," MOV Sw,Ew"},
    {0x8f,0x80,0," Grp1A (1A) | POP Ev (d64)"},
    //# 0x90 - 0x9f
    {0x90,0x00,0," NOP | PAUSE (F3) | XCHG rAX/r8,rAX"},
    {0x91,0x00,0 | PF_Valid," XCHG rCX/r9,rAX"},
    {0x92,0x00,0 | PF_Valid," XCHG rDX/r10,rAX"},
    {0x93,0x00,0 | PF_Valid," XCHG rBX/r11,rAX"},
    {0x94,0x00,0 | PF_Valid," XCHG rSP/r12,rAX"},
    {0x95,0x00,0 | PF_Valid," XCHG rBP/r13,rAX"},
    {0x96,0x00,0 | PF_Valid," XCHG rSI/r14,rAX"},
    {0x97,0x00,0 | PF_Valid," XCHG rDI/r15,rAX"},
    {0x98,0x00,0 | PF_Valid," CBW/CWDE/CDQE"},
    {0x99,0x00,0 | PF_Valid," CWD/CDQ/CQO"},
    {0x9a,0x00,0 | PF_Valid," CALLF Ap (i64)"},
    {0x9b,0x00,0 | PF_Valid," FWAIT/WAIT"},
    {0x9c,0x00,0 | PF_Valid," PUSHF/D/Q Fv (d64)"},
    {0x9d,0x00,0 | PF_Valid," POPF/D/Q Fv (d64)"},
    {0x9e,0x00,0 | PF_Valid," SAHF"},
    {0x9f,0x00,0 | PF_Valid," LAHF"},
    //# 0xa0 - 0xaf
    {0xa0,0x00,0 | PF_Valid," MOV AL,Ob"},
    {0xa1,0x00,0 | PF_Valid," MOV rAX,Ov"},
    {0xa2,0x00,0 | PF_Valid," MOV Ob,AL"},
    {0xa3,0x00,0 | PF_Valid," MOV Ov,rAX"},
    {0xa4,0x00,0 | PF_Valid," MOVS/B Yb,Xb"},
    {0xa5,0x00,0 | PF_Valid," MOVS/W/D/Q Yv,Xv"},
    {0xa6,0x00,0 | PF_Valid," CMPS/B Xb,Yb"},
    {0xa7,0x00,0 | PF_Valid," CMPS/W/D Xv,Yv"},
    {0xa8,0x00,0 | PF_Valid," TEST AL,Ib"},
    {0xa9,0x00,0 | PF_Valid," TEST rAX,Iz"},
    {0xaa,0x00,0 | PF_Valid," STOS/B Yb,AL"},
    {0xab,0x00,0 | PF_Valid," STOS/W/D/Q Yv,rAX"},
    {0xac,0x00,0 | PF_Valid," LODS/B AL,Xb"},
    {0xad,0x00,0 | PF_Valid," LODS/W/D/Q rAX,Xv"},
    {0xae,0x00,0 | PF_Valid," SCAS/B AL,Yb"},
    //# Note: The May 2011 Intel manual shows Xv for the second parameter of the
    //# next instruction but Yv is correct
    {0xaf,0x00,0 | PF_Valid," SCAS/W/D/Q rAX,Yv"},
    //# 0xb0 - 0xbf
    {0xb0,0x00,0 | PF_Valid," MOV AL/R8L,Ib"},
    {0xb1,0x00,0 | PF_Valid," MOV CL/R9L,Ib"},
    {0xb2,0x00,0 | PF_Valid," MOV DL/R10L,Ib"},
    {0xb3,0x00,0 | PF_Valid," MOV BL/R11L,Ib"},
    {0xb4,0x00,0 | PF_Valid," MOV AH/R12L,Ib"},
    {0xb5,0x00,0 | PF_Valid," MOV CH/R13L,Ib"},
    {0xb6,0x00,0 | PF_Valid," MOV DH/R14L,Ib"},
    {0xb7,0x00,0 | PF_Valid," MOV BH/R15L,Ib"},
    {0xb8,0x00,0 | PF_Valid," MOV rAX/r8,Iv"},
    {0xb9,0x00,0 | PF_Valid," MOV rCX/r9,Iv"},
    {0xba,0x00,0 | PF_Valid," MOV rDX/r10,Iv"},
    {0xbb,0x00,0 | PF_Valid," MOV rBX/r11,Iv"},
    {0xbc,0x00,0 | PF_Valid," MOV rSP/r12,Iv"},
    {0xbd,0x00,0 | PF_Valid," MOV rBP/r13,Iv"},
    {0xbe,0x00,0 | PF_Valid," MOV rSI/r14,Iv"},
    {0xbf,0x00,0 | PF_Valid," MOV rDI/r15,Iv"},
    //# 0xc0 - 0xcf
    {0xc0,0x80,0," Grp2 Eb,Ib (1A)"},
    {0xc1,0x80,0," Grp2 Ev,Ib (1A)"},
    {0xc2,0x00,0 | PF_Valid," RETN Iw (f64)"},
    {0xc3,0x00,0 | PF_Valid," RETN"},
    {0xc4,0x00,0," LES Gz,Mp (i64) | VEX+2byte (Prefix)"},
    {0xc5,0x00,0," LDS Gz,Mp (i64) | VEX+1byte (Prefix)"},
    {0xc6,0x80,0," Grp11A Eb,Ib (1A)"},
    {0xc7,0x80,0," Grp11B Ev,Iz (1A)"},
    {0xc8,0x00,0 | PF_Valid," ENTER Iw,Ib"},
    {0xc9,0x00,0 | PF_Valid," LEAVE (d64)"},
    {0xca,0x00,0 | PF_Valid," RETF Iw"},
    {0xcb,0x00,0 | PF_Valid," RETF"},
    {0xcc,0x00,0 | PF_Valid," INT3"},
    {0xcd,0x00,0 | PF_Valid," INT Ib"},
    {0xce,0x00,0 | PF_Valid," INTO (i64)"},
    {0xcf,0x00,0 | PF_Valid," IRET/D/Q"},
    //# 0xd0 - 0xdf
    {0xd0,0x80,0," Grp2 Eb,1 (1A)"},
    {0xd1,0x80,0," Grp2 Ev,1 (1A)"},
    {0xd2,0x80,0," Grp2 Eb,CL (1A)"},
    {0xd3,0x80,0," Grp2 Ev,CL (1A)"},
    {0xd4,0x00,0 | PF_Valid," AAM Ib (i64)"},
    {0xd5,0x00,0 | PF_Valid," AAD Ib (i64)"},
    {0xd6,0x00,0 | PF_Valid,NULL},
    {0xd7,0x00,0 | PF_Valid," XLAT/XLATB"},
    {0xd8,0x80,0 | PF_Valid," ESC"},
    {0xd9,0x80,0 | PF_Valid," ESC"},
    {0xda,0x80,0 | PF_Valid," ESC"},
    {0xdb,0x80,0 | PF_Valid," ESC"},
    {0xdc,0x80,0 | PF_Valid," ESC"},
    {0xdd,0x80,0 | PF_Valid," ESC"},
    {0xde,0x80,0 | PF_Valid," ESC"},
    {0xdf,0x80,0 | PF_Valid," ESC"},
    //# 0xe0 - 0xef
    //# Note: "forced64" is Intel CPU behavior: they ignore 0x66 prefix
    //# in 64-bit mode. AMD CPUs accept 0x66 prefix, it causes RIP truncation
    //# to 16 bits. In 32-bit mode, 0x66 is accepted by both Intel and AMD.
    {0xe0,0x00,0 | PF_Valid," LOOPNE/LOOPNZ Jb (f64)"},
    {0xe1,0x00,0 | PF_Valid," LOOPE/LOOPZ Jb (f64)"},
    {0xe2,0x00,0 | PF_Valid," LOOP Jb (f64)"},
    {0xe3,0x00,0 | PF_Valid," JrCXZ Jb (f64)"},
    {0xe4,0x00,0 | PF_Valid," IN AL,Ib"},
    {0xe5,0x00,0 | PF_Valid," IN eAX,Ib"},
    {0xe6,0x00,0 | PF_Valid," OUT Ib,AL"},
    {0xe7,0x00,0 | PF_Valid," OUT Ib,eAX"},
    //# With 0x66 prefix in 64-bit mode, for AMD CPUs immediate offset
    //# in "near" jumps and calls is 16-bit. For CALL,
    //# push of return address is 16-bit wide, RSP is decremented by 2
    //# but is not truncated to 16 bits, unlike RIP.
    {0xe8,0x00,0 | PF_Valid," CALL Jz (f64)"},
    {0xe9,0x00,0 | PF_Valid," JMP-near Jz (f64)"},
    {0xea,0x00,0 | PF_Valid," JMP-far Ap (i64)"},
    {0xeb,0x00,0 | PF_Valid," JMP-short Jb (f64)"},
    {0xec,0x00,0 | PF_Valid," IN AL,DX"},
    {0xed,0x00,0 | PF_Valid," IN eAX,DX"},
    {0xee,0x00,0 | PF_Valid," OUT DX,AL"},
    {0xef,0x00,0 | PF_Valid," OUT DX,eAX"},
    //# 0xf0 - 0xff
    {0xf0,0x00,0 | PF_Valid," LOCK (Prefix)"},
    {0xf1,0x00,0 | PF_Valid,NULL},
    {0xf2,0x00,0," REPNE (Prefix) | XACQUIRE (Prefix)"},
    {0xf3,0x00,0," REP/REPE (Prefix) | XRELEASE (Prefix)"},
    {0xf4,0x00,0 | PF_Valid," HLT"},
    {0xf5,0x00,0 | PF_Valid," CMC"},
    {0xf6,0x80,0," Grp3_1 Eb (1A)"},
    {0xf7,0x80,0," Grp3_2 Ev (1A)"},
    {0xf8,0x00,0 | PF_Valid," CLC"},
    {0xf9,0x00,0 | PF_Valid," STC"},
    {0xfa,0x00,0 | PF_Valid," CLI"},
    {0xfb,0x00,0 | PF_Valid," STI"},
    {0xfc,0x00,0 | PF_Valid," CLD"},
    {0xfd,0x00,0 | PF_Valid," STD"},
    {0xfe,0x80,0," Grp4 (1A)"},
    {0xff,0x80,0," Grp5 (1A)"},
};
OP_ENTRY OP2BMap[256] = {
    //# 0x0f 0x00-0x0f
    {0x00,0x80,0," Grp6 (1A)"},
    {0x01,0x80,0," Grp7 (1A)"},
    {0x02,0x00,0 | PF_Valid," LAR Gv,Ew"},
    {0x03,0x00,0 | PF_Valid," LSL Gv,Ew"},
    {0x04,0x00,0 | PF_Valid,NULL},
    {0x05,0x00,0 | PF_Valid," SYSCALL (o64)"},
    {0x06,0x00,0 | PF_Valid," CLTS"},
    {0x07,0x00,0 | PF_Valid," SYSRET (o64)"},
    {0x08,0x00,0 | PF_Valid," INVD"},
    {0x09,0x00,0," WBINVD | WBNOINVD (F3)"},
    {0x0a,0x00,0 | PF_Valid,NULL},
    {0x0b,0x00,0 | PF_Valid," UD2 (1B)"},
    {0x0c,0x00,0 | PF_Valid,NULL},
    //# AMD's prefetch group. Intel supports prefetchw(/1) only.
    {0x0d,0x80,0," GrpP"},
    {0x0e,0x00,0 | PF_Valid," FEMMS"},
    //# 3DNow! uses the last imm byte as opcode extension.
    {0x0f,0x00,0 | PF_Valid," 3DNow! Pq,Qq,Ib"},
    //# 0x0f 0x10-0x1f
    //# NOTE: According to Intel SDM opcode map, vmovups and vmovupd has no operands
    //# but it actually has operands. And also, vmovss and vmovsd only accept 128bit.
    //# MOVSS/MOVSD has too many forms(3) on SDM. This map just shows a typical form.
    //# Many AVX instructions lack v1 superscript, according to Intel AVX-Prgramming
    //# Reference A.1
    {0x10,0x00,0," vmovups Vps,Wps | vmovupd Vpd,Wpd (66) | vmovss Vx,Hx,Wss (F3),(v1) | vmovsd Vx,Hx,Wsd (F2),(v1)"},
    {0x11,0x00,0," vmovups Wps,Vps | vmovupd Wpd,Vpd (66) | vmovss Wss,Hx,Vss (F3),(v1) | vmovsd Wsd,Hx,Vsd (F2),(v1)"},
    {0x12,0x00,0," vmovlps Vq,Hq,Mq (v1) | vmovhlps Vq,Hq,Uq (v1) | vmovlpd Vq,Hq,Mq (66),(v1) | vmovsldup Vx,Wx (F3) | vmovddup Vx,Wx (F2)"},
    {0x13,0x00,0," vmovlps Mq,Vq (v1) | vmovlpd Mq,Vq (66),(v1)"},
    {0x14,0x00,0," vunpcklps Vx,Hx,Wx | vunpcklpd Vx,Hx,Wx (66)"},
    {0x15,0x00,0," vunpckhps Vx,Hx,Wx | vunpckhpd Vx,Hx,Wx (66)"},
    {0x16,0x00,0," vmovhps Vdq,Hq,Mq (v1) | vmovlhps Vdq,Hq,Uq (v1) | vmovhpd Vdq,Hq,Mq (66),(v1) | vmovshdup Vx,Wx (F3)"},
    {0x17,0x00,0," vmovhps Mq,Vq (v1) | vmovhpd Mq,Vq (66),(v1)"},
    {0x18,0x80,0," Grp16 (1A)"},
    {0x19,0x00,0 | PF_Valid,NULL},
    //# Intel SDM opcode map does not list MPX instructions. For now using Gv for
    //# bnd registers and Ev for everything else is OK because the instruction
    //# decoder does not use the information except as an indication that there is
    //# a ModR/M byte.
    {0x1a,0x00,0," BNDCL Gv,Ev (F3) | BNDCU Gv,Ev (F2) | BNDMOV Gv,Ev (66) | BNDLDX Gv,Ev"},
    {0x1b,0x00,0," BNDCN Gv,Ev (F2) | BNDMOV Ev,Gv (66) | BNDMK Gv,Ev (F3) | BNDSTX Ev,Gv"},
    {0x1c,0x80,0," Grp20 (1A),(1C)"},
    {0x1d,0x00,0 | PF_Valid,NULL},
    {0x1e,0x80,0," Grp21 (1A)"},
    {0x1f,0x00,0 | PF_Valid," NOP Ev"},
    //# 0x0f 0x20-0x2f
    {0x20,0x00,0 | PF_Valid," MOV Rd,Cd"},
    {0x21,0x00,0 | PF_Valid," MOV Rd,Dd"},
    {0x22,0x00,0 | PF_Valid," MOV Cd,Rd"},
    {0x23,0x00,0 | PF_Valid," MOV Dd,Rd"},
    {0x24,0x00,0 | PF_Valid,NULL},
    {0x25,0x00,0 | PF_Valid,NULL},
    {0x26,0x00,0 | PF_Valid,NULL},
    {0x27,0x00,0 | PF_Valid,NULL},
    {0x28,0x00,0," vmovaps Vps,Wps | vmovapd Vpd,Wpd (66)"},
    {0x29,0x00,0," vmovaps Wps,Vps | vmovapd Wpd,Vpd (66)"},
    {0x2a,0x00,0," cvtpi2ps Vps,Qpi | cvtpi2pd Vpd,Qpi (66) | vcvtsi2ss Vss,Hss,Ey (F3),(v1) | vcvtsi2sd Vsd,Hsd,Ey (F2),(v1)"},
    {0x2b,0x00,0," vmovntps Mps,Vps | vmovntpd Mpd,Vpd (66)"},
    {0x2c,0x00,0," cvttps2pi Ppi,Wps | cvttpd2pi Ppi,Wpd (66) | vcvttss2si Gy,Wss (F3),(v1) | vcvttsd2si Gy,Wsd (F2),(v1)"},
    {0x2d,0x00,0," cvtps2pi Ppi,Wps | cvtpd2pi Qpi,Wpd (66) | vcvtss2si Gy,Wss (F3),(v1) | vcvtsd2si Gy,Wsd (F2),(v1)"},
    {0x2e,0x00,0," vucomiss Vss,Wss (v1) | vucomisd  Vsd,Wsd (66),(v1)"},
    {0x2f,0x00,0," vcomiss Vss,Wss (v1) | vcomisd  Vsd,Wsd (66),(v1)"},
    //# 0x0f 0x30-0x3f
    {0x30,0x00,0 | PF_Valid," WRMSR"},
    {0x31,0x00,0 | PF_Valid," RDTSC"},
    {0x32,0x00,0 | PF_Valid," RDMSR"},
    {0x33,0x00,0 | PF_Valid," RDPMC"},
    {0x34,0x00,0 | PF_Valid," SYSENTER"},
    {0x35,0x00,0 | PF_Valid," SYSEXIT"},
    {0x36,0x00,0 | PF_Valid,NULL},
    {0x37,0x00,0 | PF_Valid," GETSEC"},
    {0x38,0x00,0 | PF_Valid," escape # 3-byte escape 1"},
    {0x39,0x00,0 | PF_Valid,NULL},
    {0x3a,0x00,0 | PF_Valid," escape # 3-byte escape 2"},
    {0x3b,0x00,0 | PF_Valid,NULL},
    {0x3c,0x00,0 | PF_Valid,NULL},
    {0x3d,0x00,0 | PF_Valid,NULL},
    {0x3e,0x00,0 | PF_Valid,NULL},
    {0x3f,0x00,0 | PF_Valid,NULL},
    //# 0x0f 0x40-0x4f
    {0x40,0x00,0 | PF_Valid," CMOVO Gv,Ev"},
    {0x41,0x00,0," CMOVNO Gv,Ev | kandw/q Vk,Hk,Uk | kandb/d Vk,Hk,Uk (66)"},
    {0x42,0x00,0," CMOVB/C/NAE Gv,Ev | kandnw/q Vk,Hk,Uk | kandnb/d Vk,Hk,Uk (66)"},
    {0x43,0x00,0 | PF_Valid," CMOVAE/NB/NC Gv,Ev"},
    {0x44,0x00,0," CMOVE/Z Gv,Ev | knotw/q Vk,Uk | knotb/d Vk,Uk (66)"},
    {0x45,0x00,0," CMOVNE/NZ Gv,Ev | korw/q Vk,Hk,Uk | korb/d Vk,Hk,Uk (66)"},
    {0x46,0x00,0," CMOVBE/NA Gv,Ev | kxnorw/q Vk,Hk,Uk | kxnorb/d Vk,Hk,Uk (66)"},
    {0x47,0x00,0," CMOVA/NBE Gv,Ev | kxorw/q Vk,Hk,Uk | kxorb/d Vk,Hk,Uk (66)"},
    {0x48,0x00,0 | PF_Valid," CMOVS Gv,Ev"},
    {0x49,0x00,0 | PF_Valid," CMOVNS Gv,Ev"},
    {0x4a,0x00,0," CMOVP/PE Gv,Ev | kaddw/q Vk,Hk,Uk | kaddb/d Vk,Hk,Uk (66)"},
    {0x4b,0x00,0," CMOVNP/PO Gv,Ev | kunpckbw Vk,Hk,Uk (66) | kunpckwd/dq Vk,Hk,Uk"},
    {0x4c,0x00,0 | PF_Valid," CMOVL/NGE Gv,Ev"},
    {0x4d,0x00,0 | PF_Valid," CMOVNL/GE Gv,Ev"},
    {0x4e,0x00,0 | PF_Valid," CMOVLE/NG Gv,Ev"},
    {0x4f,0x00,0 | PF_Valid," CMOVNLE/G Gv,Ev"},
    //# 0x0f 0x50-0x5f
    {0x50,0x00,0," vmovmskps Gy,Ups | vmovmskpd Gy,Upd (66)"},
    {0x51,0x00,0," vsqrtps Vps,Wps | vsqrtpd Vpd,Wpd (66) | vsqrtss Vss,Hss,Wss (F3),(v1) | vsqrtsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x52,0x00,0," vrsqrtps Vps,Wps | vrsqrtss Vss,Hss,Wss (F3),(v1)"},
    {0x53,0x00,0," vrcpps Vps,Wps | vrcpss Vss,Hss,Wss (F3),(v1)"},
    {0x54,0x00,0," vandps Vps,Hps,Wps | vandpd Vpd,Hpd,Wpd (66)"},
    {0x55,0x00,0," vandnps Vps,Hps,Wps | vandnpd Vpd,Hpd,Wpd (66)"},
    {0x56,0x00,0," vorps Vps,Hps,Wps | vorpd Vpd,Hpd,Wpd (66)"},
    {0x57,0x00,0," vxorps Vps,Hps,Wps | vxorpd Vpd,Hpd,Wpd (66)"},
    {0x58,0x00,0," vaddps Vps,Hps,Wps | vaddpd Vpd,Hpd,Wpd (66) | vaddss Vss,Hss,Wss (F3),(v1) | vaddsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x59,0x00,0," vmulps Vps,Hps,Wps | vmulpd Vpd,Hpd,Wpd (66) | vmulss Vss,Hss,Wss (F3),(v1) | vmulsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5a,0x00,0," vcvtps2pd Vpd,Wps | vcvtpd2ps Vps,Wpd (66) | vcvtss2sd Vsd,Hx,Wss (F3),(v1) | vcvtsd2ss Vss,Hx,Wsd (F2),(v1)"},
    {0x5b,0x00,0," vcvtdq2ps Vps,Wdq | vcvtqq2ps Vps,Wqq (evo) | vcvtps2dq Vdq,Wps (66) | vcvttps2dq Vdq,Wps (F3)"},
    {0x5c,0x00,0," vsubps Vps,Hps,Wps | vsubpd Vpd,Hpd,Wpd (66) | vsubss Vss,Hss,Wss (F3),(v1) | vsubsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5d,0x00,0," vminps Vps,Hps,Wps | vminpd Vpd,Hpd,Wpd (66) | vminss Vss,Hss,Wss (F3),(v1) | vminsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5e,0x00,0," vdivps Vps,Hps,Wps | vdivpd Vpd,Hpd,Wpd (66) | vdivss Vss,Hss,Wss (F3),(v1) | vdivsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5f,0x00,0," vmaxps Vps,Hps,Wps | vmaxpd Vpd,Hpd,Wpd (66) | vmaxss Vss,Hss,Wss (F3),(v1) | vmaxsd Vsd,Hsd,Wsd (F2),(v1)"},
    //# 0x0f 0x60-0x6f
    {0x60,0x00,0," punpcklbw Pq,Qd | vpunpcklbw Vx,Hx,Wx (66),(v1)"},
    {0x61,0x00,0," punpcklwd Pq,Qd | vpunpcklwd Vx,Hx,Wx (66),(v1)"},
    {0x62,0x00,0," punpckldq Pq,Qd | vpunpckldq Vx,Hx,Wx (66),(v1)"},
    {0x63,0x00,0," packsswb Pq,Qq | vpacksswb Vx,Hx,Wx (66),(v1)"},
    {0x64,0x00,0," pcmpgtb Pq,Qq | vpcmpgtb Vx,Hx,Wx (66),(v1)"},
    {0x65,0x00,0," pcmpgtw Pq,Qq | vpcmpgtw Vx,Hx,Wx (66),(v1)"},
    {0x66,0x00,0," pcmpgtd Pq,Qq | vpcmpgtd Vx,Hx,Wx (66),(v1)"},
    {0x67,0x00,0," packuswb Pq,Qq | vpackuswb Vx,Hx,Wx (66),(v1)"},
    {0x68,0x00,0," punpckhbw Pq,Qd | vpunpckhbw Vx,Hx,Wx (66),(v1)"},
    {0x69,0x00,0," punpckhwd Pq,Qd | vpunpckhwd Vx,Hx,Wx (66),(v1)"},
    {0x6a,0x00,0," punpckhdq Pq,Qd | vpunpckhdq Vx,Hx,Wx (66),(v1)"},
    {0x6b,0x00,0," packssdw Pq,Qd | vpackssdw Vx,Hx,Wx (66),(v1)"},
    {0x6c,0x00,0 | PF_Valid | PF_Operand," vpunpcklqdq Vx,Hx,Wx (66),(v1)"},
    {0x6d,0x00,0 | PF_Valid | PF_Operand," vpunpckhqdq Vx,Hx,Wx (66),(v1)"},
    {0x6e,0x00,0," movd/q Pd,Ey | vmovd/q Vy,Ey (66),(v1)"},
    {0x6f,0x00,0," movq Pq,Qq | vmovdqa Vx,Wx (66) | vmovdqa32/64 Vx,Wx (66),(evo) | vmovdqu Vx,Wx (F3) | vmovdqu32/64 Vx,Wx (F3),(evo) | vmovdqu"},
    //# 0x0f 0x70-0x7f
    {0x70,0x00,0," pshufw Pq,Qq,Ib | vpshufd Vx,Wx,Ib (66),(v1) | vpshufhw Vx,Wx,Ib (F3),(v1) | vpshuflw Vx,Wx,Ib (F2),(v1)"},
    {0x71,0x80,0," Grp12 (1A)"},
    {0x72,0x80,0," Grp13 (1A)"},
    {0x73,0x80,0," Grp14 (1A)"},
    {0x74,0x00,0," pcmpeqb Pq,Qq | vpcmpeqb Vx,Hx,Wx (66),(v1)"},
    {0x75,0x00,0," pcmpeqw Pq,Qq | vpcmpeqw Vx,Hx,Wx (66),(v1)"},
    {0x76,0x00,0," pcmpeqd Pq,Qq | vpcmpeqd Vx,Hx,Wx (66),(v1)"},
    //# Note: Remove (v), because vzeroall and vzeroupper becomes emms without VEX.
    {0x77,0x00,0," emms | vzeroupper (v) | vzeroall (v)"},
    {0x78,0x00,0," VMREAD Ey,Gy | vcvttps2udq/pd2udq Vx,Wpd (evo) | vcvttsd2usi Gv,Wx (F2),(ev) | vcvttss2usi Gv,Wx (F3),(ev) | vcvttps2uqq/pd2uq"},
    {0x79,0x00,0," VMWRITE Gy,Ey | vcvtps2udq/pd2udq Vx,Wpd (evo) | vcvtsd2usi Gv,Wx (F2),(ev) | vcvtss2usi Gv,Wx (F3),(ev) | vcvtps2uqq/pd2uqq V"},
    {0x7a,0x00,0," vcvtudq2pd/uqq2pd Vpd,Wx (F3),(ev) | vcvtudq2ps/uqq2ps Vpd,Wx (F2),(ev) | vcvttps2qq/pd2qq Vx,Wx (66),(ev)"},
    {0x7b,0x00,0," vcvtusi2sd Vpd,Hpd,Ev (F2),(ev) | vcvtusi2ss Vps,Hps,Ev (F3),(ev) | vcvtps2qq/pd2qq Vx,Wx (66),(ev)"},
    {0x7c,0x00,0," vhaddpd Vpd,Hpd,Wpd (66) | vhaddps Vps,Hps,Wps (F2)"},
    {0x7d,0x00,0," vhsubpd Vpd,Hpd,Wpd (66) | vhsubps Vps,Hps,Wps (F2)"},
    {0x7e,0x00,0," movd/q Ey,Pd | vmovd/q Ey,Vy (66),(v1) | vmovq Vq,Wq (F3),(v1)"},
    {0x7f,0x00,0," movq Qq,Pq | vmovdqa Wx,Vx (66) | vmovdqa32/64 Wx,Vx (66),(evo) | vmovdqu Wx,Vx (F3) | vmovdqu32/64 Wx,Vx (F3),(evo) | vmovdqu"},
    //# 0x0f 0x80-0x8f
    //# Note: "forced64" is Intel CPU behavior (see comment about CALL insn).
    {0x80,0x00,0 | PF_Valid," JO Jz (f64)"},
    {0x81,0x00,0 | PF_Valid," JNO Jz (f64)"},
    {0x82,0x00,0 | PF_Valid," JB/JC/JNAE Jz (f64)"},
    {0x83,0x00,0 | PF_Valid," JAE/JNB/JNC Jz (f64)"},
    {0x84,0x00,0 | PF_Valid," JE/JZ Jz (f64)"},
    {0x85,0x00,0 | PF_Valid," JNE/JNZ Jz (f64)"},
    {0x86,0x00,0 | PF_Valid," JBE/JNA Jz (f64)"},
    {0x87,0x00,0 | PF_Valid," JA/JNBE Jz (f64)"},
    {0x88,0x00,0 | PF_Valid," JS Jz (f64)"},
    {0x89,0x00,0 | PF_Valid," JNS Jz (f64)"},
    {0x8a,0x00,0 | PF_Valid," JP/JPE Jz (f64)"},
    {0x8b,0x00,0 | PF_Valid," JNP/JPO Jz (f64)"},
    {0x8c,0x00,0 | PF_Valid," JL/JNGE Jz (f64)"},
    {0x8d,0x00,0 | PF_Valid," JNL/JGE Jz (f64)"},
    {0x8e,0x00,0 | PF_Valid," JLE/JNG Jz (f64)"},
    {0x8f,0x00,0 | PF_Valid," JNLE/JG Jz (f64)"},
    //# 0x0f 0x90-0x9f
    {0x90,0x00,0," SETO Eb | kmovw/q Vk,Wk | kmovb/d Vk,Wk (66)"},
    {0x91,0x00,0," SETNO Eb | kmovw/q Mv,Vk | kmovb/d Mv,Vk (66)"},
    {0x92,0x00,0," SETB/C/NAE Eb | kmovw Vk,Rv | kmovb Vk,Rv (66) | kmovq/d Vk,Rv (F2)"},
    {0x93,0x00,0," SETAE/NB/NC Eb | kmovw Gv,Uk | kmovb Gv,Uk (66) | kmovq/d Gv,Uk (F2)"},
    {0x94,0x00,0 | PF_Valid," SETE/Z Eb"},
    {0x95,0x00,0 | PF_Valid," SETNE/NZ Eb"},
    {0x96,0x00,0 | PF_Valid," SETBE/NA Eb"},
    {0x97,0x00,0 | PF_Valid," SETA/NBE Eb"},
    {0x98,0x00,0," SETS Eb | kortestw/q Vk,Uk | kortestb/d Vk,Uk (66)"},
    {0x99,0x00,0," SETNS Eb | ktestw/q Vk,Uk | ktestb/d Vk,Uk (66)"},
    {0x9a,0x00,0 | PF_Valid," SETP/PE Eb"},
    {0x9b,0x00,0 | PF_Valid," SETNP/PO Eb"},
    {0x9c,0x00,0 | PF_Valid," SETL/NGE Eb"},
    {0x9d,0x00,0 | PF_Valid," SETNL/GE Eb"},
    {0x9e,0x00,0 | PF_Valid," SETLE/NG Eb"},
    {0x9f,0x00,0 | PF_Valid," SETNLE/G Eb"},
    //# 0x0f 0xa0-0xaf
    {0xa0,0x00,0 | PF_Valid," PUSH FS (d64)"},
    {0xa1,0x00,0 | PF_Valid," POP FS (d64)"},
    {0xa2,0x00,0 | PF_Valid," CPUID"},
    {0xa3,0x00,0 | PF_Valid," BT Ev,Gv"},
    {0xa4,0x00,0 | PF_Valid," SHLD Ev,Gv,Ib"},
    {0xa5,0x00,0 | PF_Valid," SHLD Ev,Gv,CL"},
    {0xa6,0x80,0 | PF_Valid," GrpPDLK"},
    {0xa7,0x80,0 | PF_Valid," GrpRNG"},
    {0xa8,0x00,0 | PF_Valid," PUSH GS (d64)"},
    {0xa9,0x00,0 | PF_Valid," POP GS (d64)"},
    {0xaa,0x00,0 | PF_Valid," RSM"},
    {0xab,0x00,0 | PF_Valid," BTS Ev,Gv"},
    {0xac,0x00,0 | PF_Valid," SHRD Ev,Gv,Ib"},
    {0xad,0x00,0 | PF_Valid," SHRD Ev,Gv,CL"},
    {0xae,0x80,0," Grp15 (1A),(1C)"},
    {0xaf,0x00,0 | PF_Valid," IMUL Gv,Ev"},
    //# 0x0f 0xb0-0xbf
    {0xb0,0x00,0 | PF_Valid," CMPXCHG Eb,Gb"},
    {0xb1,0x00,0 | PF_Valid," CMPXCHG Ev,Gv"},
    {0xb2,0x00,0 | PF_Valid," LSS Gv,Mp"},
    {0xb3,0x00,0 | PF_Valid," BTR Ev,Gv"},
    {0xb4,0x00,0 | PF_Valid," LFS Gv,Mp"},
    {0xb5,0x00,0 | PF_Valid," LGS Gv,Mp"},
    {0xb6,0x00,0 | PF_Valid," MOVZX Gv,Eb"},
    {0xb7,0x00,0 | PF_Valid," MOVZX Gv,Ew"},
    {0xb8,0x00,0," JMPE (!F3) | POPCNT Gv,Ev (F3)"},
    {0xb9,0x80,0," Grp10 (1A)"},
    {0xba,0x80,0," Grp8 Ev,Ib (1A)"},
    {0xbb,0x00,0 | PF_Valid," BTC Ev,Gv"},
    {0xbc,0x00,0," BSF Gv,Ev (!F3) | TZCNT Gv,Ev (F3)"},
    {0xbd,0x00,0," BSR Gv,Ev (!F3) | LZCNT Gv,Ev (F3)"},
    {0xbe,0x00,0 | PF_Valid," MOVSX Gv,Eb"},
    {0xbf,0x00,0 | PF_Valid," MOVSX Gv,Ew"},
    //# 0x0f 0xc0-0xcf
    {0xc0,0x00,0 | PF_Valid," XADD Eb,Gb"},
    {0xc1,0x00,0 | PF_Valid," XADD Ev,Gv"},
    {0xc2,0x00,0," vcmpps Vps,Hps,Wps,Ib | vcmppd Vpd,Hpd,Wpd,Ib (66) | vcmpss Vss,Hss,Wss,Ib (F3),(v1) | vcmpsd Vsd,Hsd,Wsd,Ib (F2),(v1)"},
    {0xc3,0x00,0 | PF_Valid," movnti My,Gy"},
    {0xc4,0x00,0," pinsrw Pq,Ry/Mw,Ib | vpinsrw Vdq,Hdq,Ry/Mw,Ib (66),(v1)"},
    {0xc5,0x00,0," pextrw Gd,Nq,Ib | vpextrw Gd,Udq,Ib (66),(v1)"},
    {0xc6,0x00,0," vshufps Vps,Hps,Wps,Ib | vshufpd Vpd,Hpd,Wpd,Ib (66)"},
    {0xc7,0x80,0," Grp9 (1A)"},
    {0xc8,0x00,0 | PF_Valid," BSWAP RAX/EAX/R8/R8D"},
    {0xc9,0x00,0 | PF_Valid," BSWAP RCX/ECX/R9/R9D"},
    {0xca,0x00,0 | PF_Valid," BSWAP RDX/EDX/R10/R10D"},
    {0xcb,0x00,0 | PF_Valid," BSWAP RBX/EBX/R11/R11D"},
    {0xcc,0x00,0 | PF_Valid," BSWAP RSP/ESP/R12/R12D"},
    {0xcd,0x00,0 | PF_Valid," BSWAP RBP/EBP/R13/R13D"},
    {0xce,0x00,0 | PF_Valid," BSWAP RSI/ESI/R14/R14D"},
    {0xcf,0x00,0 | PF_Valid," BSWAP RDI/EDI/R15/R15D"},
    //# 0x0f 0xd0-0xdf
    {0xd0,0x00,0," vaddsubpd Vpd,Hpd,Wpd (66) | vaddsubps Vps,Hps,Wps (F2)"},
    {0xd1,0x00,0," psrlw Pq,Qq | vpsrlw Vx,Hx,Wx (66),(v1)"},
    {0xd2,0x00,0," psrld Pq,Qq | vpsrld Vx,Hx,Wx (66),(v1)"},
    {0xd3,0x00,0," psrlq Pq,Qq | vpsrlq Vx,Hx,Wx (66),(v1)"},
    {0xd4,0x00,0," paddq Pq,Qq | vpaddq Vx,Hx,Wx (66),(v1)"},
    {0xd5,0x00,0," pmullw Pq,Qq | vpmullw Vx,Hx,Wx (66),(v1)"},
    {0xd6,0x00,0," vmovq Wq,Vq (66),(v1) | movq2dq Vdq,Nq (F3) | movdq2q Pq,Uq (F2)"},
    {0xd7,0x00,0," pmovmskb Gd,Nq | vpmovmskb Gd,Ux (66),(v1)"},
    {0xd8,0x00,0," psubusb Pq,Qq | vpsubusb Vx,Hx,Wx (66),(v1)"},
    {0xd9,0x00,0," psubusw Pq,Qq | vpsubusw Vx,Hx,Wx (66),(v1)"},
    {0xda,0x00,0," pminub Pq,Qq | vpminub Vx,Hx,Wx (66),(v1)"},
    {0xdb,0x00,0," pand Pq,Qq | vpand Vx,Hx,Wx (66),(v1) | vpandd/q Vx,Hx,Wx (66),(evo)"},
    {0xdc,0x00,0," paddusb Pq,Qq | vpaddusb Vx,Hx,Wx (66),(v1)"},
    {0xdd,0x00,0," paddusw Pq,Qq | vpaddusw Vx,Hx,Wx (66),(v1)"},
    {0xde,0x00,0," pmaxub Pq,Qq | vpmaxub Vx,Hx,Wx (66),(v1)"},
    {0xdf,0x00,0," pandn Pq,Qq | vpandn Vx,Hx,Wx (66),(v1) | vpandnd/q Vx,Hx,Wx (66),(evo)"},
    //# 0x0f 0xe0-0xef
    {0xe0,0x00,0," pavgb Pq,Qq | vpavgb Vx,Hx,Wx (66),(v1)"},
    {0xe1,0x00,0," psraw Pq,Qq | vpsraw Vx,Hx,Wx (66),(v1)"},
    {0xe2,0x00,0," psrad Pq,Qq | vpsrad Vx,Hx,Wx (66),(v1)"},
    {0xe3,0x00,0," pavgw Pq,Qq | vpavgw Vx,Hx,Wx (66),(v1)"},
    {0xe4,0x00,0," pmulhuw Pq,Qq | vpmulhuw Vx,Hx,Wx (66),(v1)"},
    {0xe5,0x00,0," pmulhw Pq,Qq | vpmulhw Vx,Hx,Wx (66),(v1)"},
    {0xe6,0x00,0," vcvttpd2dq Vx,Wpd (66) | vcvtdq2pd Vx,Wdq (F3) | vcvtdq2pd/qq2pd Vx,Wdq (F3),(evo) | vcvtpd2dq Vx,Wpd (F2)"},
    {0xe7,0x00,0," movntq Mq,Pq | vmovntdq Mx,Vx (66)"},
    {0xe8,0x00,0," psubsb Pq,Qq | vpsubsb Vx,Hx,Wx (66),(v1)"},
    {0xe9,0x00,0," psubsw Pq,Qq | vpsubsw Vx,Hx,Wx (66),(v1)"},
    {0xea,0x00,0," pminsw Pq,Qq | vpminsw Vx,Hx,Wx (66),(v1)"},
    {0xeb,0x00,0," por Pq,Qq | vpor Vx,Hx,Wx (66),(v1) | vpord/q Vx,Hx,Wx (66),(evo)"},
    {0xec,0x00,0," paddsb Pq,Qq | vpaddsb Vx,Hx,Wx (66),(v1)"},
    {0xed,0x00,0," paddsw Pq,Qq | vpaddsw Vx,Hx,Wx (66),(v1)"},
    {0xee,0x00,0," pmaxsw Pq,Qq | vpmaxsw Vx,Hx,Wx (66),(v1)"},
    {0xef,0x00,0," pxor Pq,Qq | vpxor Vx,Hx,Wx (66),(v1) | vpxord/q Vx,Hx,Wx (66),(evo)"},
    //# 0x0f 0xf0-0xff
    {0xf0,0x00,0 | PF_Valid | PF_REPNE," vlddqu Vx,Mx (F2)"},
    {0xf1,0x00,0," psllw Pq,Qq | vpsllw Vx,Hx,Wx (66),(v1)"},
    {0xf2,0x00,0," pslld Pq,Qq | vpslld Vx,Hx,Wx (66),(v1)"},
    {0xf3,0x00,0," psllq Pq,Qq | vpsllq Vx,Hx,Wx (66),(v1)"},
    {0xf4,0x00,0," pmuludq Pq,Qq | vpmuludq Vx,Hx,Wx (66),(v1)"},
    {0xf5,0x00,0," pmaddwd Pq,Qq | vpmaddwd Vx,Hx,Wx (66),(v1)"},
    {0xf6,0x00,0," psadbw Pq,Qq | vpsadbw Vx,Hx,Wx (66),(v1)"},
    {0xf7,0x00,0," maskmovq Pq,Nq | vmaskmovdqu Vx,Ux (66),(v1)"},
    {0xf8,0x00,0," psubb Pq,Qq | vpsubb Vx,Hx,Wx (66),(v1)"},
    {0xf9,0x00,0," psubw Pq,Qq | vpsubw Vx,Hx,Wx (66),(v1)"},
    {0xfa,0x00,0," psubd Pq,Qq | vpsubd Vx,Hx,Wx (66),(v1)"},
    {0xfb,0x00,0," psubq Pq,Qq | vpsubq Vx,Hx,Wx (66),(v1)"},
    {0xfc,0x00,0," paddb Pq,Qq | vpaddb Vx,Hx,Wx (66),(v1)"},
    {0xfd,0x00,0," paddw Pq,Qq | vpaddw Vx,Hx,Wx (66),(v1)"},
    {0xfe,0x00,0," paddd Pq,Qq | vpaddd Vx,Hx,Wx (66),(v1)"},
    {0xff,0x00,0 | PF_Valid," UD0"},
};
OP_ENTRY OP3BMap_0F38[256] = {
    //# 0x0f 0x38 0x00-0x0f
    {0x00,0x00,0," pshufb Pq,Qq | vpshufb Vx,Hx,Wx (66),(v1)"},
    {0x01,0x00,0," phaddw Pq,Qq | vphaddw Vx,Hx,Wx (66),(v1)"},
    {0x02,0x00,0," phaddd Pq,Qq | vphaddd Vx,Hx,Wx (66),(v1)"},
    {0x03,0x00,0," phaddsw Pq,Qq | vphaddsw Vx,Hx,Wx (66),(v1)"},
    {0x04,0x00,0," pmaddubsw Pq,Qq | vpmaddubsw Vx,Hx,Wx (66),(v1)"},
    {0x05,0x00,0," phsubw Pq,Qq | vphsubw Vx,Hx,Wx (66),(v1)"},
    {0x06,0x00,0," phsubd Pq,Qq | vphsubd Vx,Hx,Wx (66),(v1)"},
    {0x07,0x00,0," phsubsw Pq,Qq | vphsubsw Vx,Hx,Wx (66),(v1)"},
    {0x08,0x00,0," psignb Pq,Qq | vpsignb Vx,Hx,Wx (66),(v1)"},
    {0x09,0x00,0," psignw Pq,Qq | vpsignw Vx,Hx,Wx (66),(v1)"},
    {0x0A,0x00,0," psignd Pq,Qq | vpsignd Vx,Hx,Wx (66),(v1)"},
    {0x0B,0x00,0," pmulhrsw Pq,Qq | vpmulhrsw Vx,Hx,Wx (66),(v1)"},
    {0x0C,0x00,0 | PF_Valid | PF_Operand," vpermilps Vx,Hx,Wx (66),(v)"},
    {0x0D,0x00,0 | PF_Valid | PF_Operand," vpermilpd Vx,Hx,Wx (66),(v)"},
    {0x0E,0x00,0 | PF_Valid | PF_Operand," vtestps Vx,Wx (66),(v)"},
    {0x0F,0x00,0 | PF_Valid | PF_Operand," vtestpd Vx,Wx (66),(v)"},
    //# 0x0f 0x38 0x10-0x1f
    {0x10,0x00,0," pblendvb Vdq,Wdq (66) | vpsrlvw Vx,Hx,Wx (66),(evo) | vpmovuswb Wx,Vx (F3),(ev)"},
    {0x11,0x00,0," vpmovusdb Wx,Vd (F3),(ev) | vpsravw Vx,Hx,Wx (66),(ev)"},
    {0x12,0x00,0," vpmovusqb Wx,Vq (F3),(ev) | vpsllvw Vx,Hx,Wx (66),(ev)"},
    {0x13,0x00,0," vcvtph2ps Vx,Wx (66),(v) | vpmovusdw Wx,Vd (F3),(ev)"},
    {0x14,0x00,0," blendvps Vdq,Wdq (66) | vpmovusqw Wx,Vq (F3),(ev) | vprorvd/q Vx,Hx,Wx (66),(evo)"},
    {0x15,0x00,0," blendvpd Vdq,Wdq (66) | vpmovusqd Wx,Vq (F3),(ev) | vprolvd/q Vx,Hx,Wx (66),(evo)"},
    {0x16,0x00,0," vpermps Vqq,Hqq,Wqq (66),(v) | vpermps/d Vqq,Hqq,Wqq (66),(evo)"},
    {0x17,0x00,0 | PF_Valid | PF_Operand," vptest Vx,Wx (66)"},
    {0x18,0x00,0 | PF_Valid | PF_Operand," vbroadcastss Vx,Wd (66),(v)"},
    {0x19,0x00,0," vbroadcastsd Vqq,Wq (66),(v) | vbroadcastf32x2 Vqq,Wq (66),(evo)"},
    {0x1A,0x00,0," vbroadcastf128 Vqq,Mdq (66),(v) | vbroadcastf32x4/64x2 Vqq,Wq (66),(evo)"},
    {0x1B,0x00,0 | PF_Valid | PF_Operand," vbroadcastf32x8/64x4 Vqq,Mdq (66),(ev)"},
    {0x1C,0x00,0," pabsb Pq,Qq | vpabsb Vx,Wx (66),(v1)"},
    {0x1D,0x00,0," pabsw Pq,Qq | vpabsw Vx,Wx (66),(v1)"},
    {0x1E,0x00,0," pabsd Pq,Qq | vpabsd Vx,Wx (66),(v1)"},
    {0x1F,0x00,0 | PF_Valid | PF_Operand," vpabsq Vx,Wx (66),(ev)"},
    //# 0x0f 0x38 0x20-0x2f
    {0x20,0x00,0," vpmovsxbw Vx,Ux/Mq (66),(v1) | vpmovswb Wx,Vx (F3),(ev)"},
    {0x21,0x00,0," vpmovsxbd Vx,Ux/Md (66),(v1) | vpmovsdb Wx,Vd (F3),(ev)"},
    {0x22,0x00,0," vpmovsxbq Vx,Ux/Mw (66),(v1) | vpmovsqb Wx,Vq (F3),(ev)"},
    {0x23,0x00,0," vpmovsxwd Vx,Ux/Mq (66),(v1) | vpmovsdw Wx,Vd (F3),(ev)"},
    {0x24,0x00,0," vpmovsxwq Vx,Ux/Md (66),(v1) | vpmovsqw Wx,Vq (F3),(ev)"},
    {0x25,0x00,0," vpmovsxdq Vx,Ux/Mq (66),(v1) | vpmovsqd Wx,Vq (F3),(ev)"},
    {0x26,0x00,0," vptestmb/w Vk,Hx,Wx (66),(ev) | vptestnmb/w Vk,Hx,Wx (F3),(ev)"},
    {0x27,0x00,0," vptestmd/q Vk,Hx,Wx (66),(ev) | vptestnmd/q Vk,Hx,Wx (F3),(ev)"},
    {0x28,0x00,0," vpmuldq Vx,Hx,Wx (66),(v1) | vpmovm2b/w Vx,Uk (F3),(ev)"},
    {0x29,0x00,0," vpcmpeqq Vx,Hx,Wx (66),(v1) | vpmovb2m/w2m Vk,Ux (F3),(ev)"},
    {0x2A,0x00,0," vmovntdqa Vx,Mx (66),(v1) | vpbroadcastmb2q Vx,Uk (F3),(ev)"},
    {0x2B,0x00,0 | PF_Valid | PF_Operand," vpackusdw Vx,Hx,Wx (66),(v1)"},
    {0x2C,0x00,0," vmaskmovps Vx,Hx,Mx (66),(v) | vscalefps/d Vx,Hx,Wx (66),(evo)"},
    {0x2D,0x00,0," vmaskmovpd Vx,Hx,Mx (66),(v) | vscalefss/d Vx,Hx,Wx (66),(evo)"},
    {0x2E,0x00,0 | PF_Valid | PF_Operand," vmaskmovps Mx,Hx,Vx (66),(v)"},
    {0x2F,0x00,0 | PF_Valid | PF_Operand," vmaskmovpd Mx,Hx,Vx (66),(v)"},
    //# 0x0f 0x38 0x30-0x3f
    {0x30,0x00,0," vpmovzxbw Vx,Ux/Mq (66),(v1) | vpmovwb Wx,Vx (F3),(ev)"},
    {0x31,0x00,0," vpmovzxbd Vx,Ux/Md (66),(v1) | vpmovdb Wx,Vd (F3),(ev)"},
    {0x32,0x00,0," vpmovzxbq Vx,Ux/Mw (66),(v1) | vpmovqb Wx,Vq (F3),(ev)"},
    {0x33,0x00,0," vpmovzxwd Vx,Ux/Mq (66),(v1) | vpmovdw Wx,Vd (F3),(ev)"},
    {0x34,0x00,0," vpmovzxwq Vx,Ux/Md (66),(v1) | vpmovqw Wx,Vq (F3),(ev)"},
    {0x35,0x00,0," vpmovzxdq Vx,Ux/Mq (66),(v1) | vpmovqd Wx,Vq (F3),(ev)"},
    {0x36,0x00,0," vpermd Vqq,Hqq,Wqq (66),(v) | vpermd/q Vqq,Hqq,Wqq (66),(evo)"},
    {0x37,0x00,0 | PF_Valid | PF_Operand," vpcmpgtq Vx,Hx,Wx (66),(v1)"},
    {0x38,0x00,0," vpminsb Vx,Hx,Wx (66),(v1) | vpmovm2d/q Vx,Uk (F3),(ev)"},
    {0x39,0x00,0," vpminsd Vx,Hx,Wx (66),(v1) | vpminsd/q Vx,Hx,Wx (66),(evo) | vpmovd2m/q2m Vk,Ux (F3),(ev)"},
    {0x3A,0x00,0," vpminuw Vx,Hx,Wx (66),(v1) | vpbroadcastmw2d Vx,Uk (F3),(ev)"},
    {0x3B,0x00,0," vpminud Vx,Hx,Wx (66),(v1) | vpminud/q Vx,Hx,Wx (66),(evo)"},
    {0x3C,0x00,0 | PF_Valid | PF_Operand," vpmaxsb Vx,Hx,Wx (66),(v1)"},
    {0x3D,0x00,0," vpmaxsd Vx,Hx,Wx (66),(v1) | vpmaxsd/q Vx,Hx,Wx (66),(evo)"},
    {0x3E,0x00,0 | PF_Valid | PF_Operand," vpmaxuw Vx,Hx,Wx (66),(v1)"},
    {0x3F,0x00,0," vpmaxud Vx,Hx,Wx (66),(v1) | vpmaxud/q Vx,Hx,Wx (66),(evo)"},
    //# 0x0f 0x38 0x40-0x8f
    {0x40,0x00,0," vpmulld Vx,Hx,Wx (66),(v1) | vpmulld/q Vx,Hx,Wx (66),(evo)"},
    {0x41,0x00,0 | PF_Valid | PF_Operand," vphminposuw Vdq,Wdq (66),(v1)"},
    {0x42,0x00,0 | PF_Valid | PF_Operand," vgetexpps/d Vx,Wx (66),(ev)"},
    {0x43,0x00,0 | PF_Valid | PF_Operand," vgetexpss/d Vx,Hx,Wx (66),(ev)"},
    {0x44,0x00,0 | PF_Valid | PF_Operand," vplzcntd/q Vx,Wx (66),(ev)"},
    {0x45,0x00,0 | PF_Valid | PF_Operand," vpsrlvd/q Vx,Hx,Wx (66),(v)"},
    {0x46,0x00,0," vpsravd Vx,Hx,Wx (66),(v) | vpsravd/q Vx,Hx,Wx (66),(evo)"},
    {0x47,0x00,0 | PF_Valid | PF_Operand," vpsllvd/q Vx,Hx,Wx (66),(v)"},
    {0x48,0x00,0 | PF_Valid,NULL},
    //# Skip 0x48-0x4b
    {0x49,0x00,0 | PF_Valid,NULL},
    {0x4A,0x00,0 | PF_Valid,NULL},
    {0x4B,0x00,0 | PF_Valid,NULL},
    {0x4C,0x00,0 | PF_Valid | PF_Operand," vrcp14ps/d Vpd,Wpd (66),(ev)"},
    {0x4D,0x00,0 | PF_Valid | PF_Operand," vrcp14ss/d Vsd,Hpd,Wsd (66),(ev)"},
    {0x4E,0x00,0 | PF_Valid | PF_Operand," vrsqrt14ps/d Vpd,Wpd (66),(ev)"},
    {0x4F,0x00,0 | PF_Valid | PF_Operand," vrsqrt14ss/d Vsd,Hsd,Wsd (66),(ev)"},
    {0x50,0x00,0 | PF_Valid | PF_Operand," vpdpbusd Vx,Hx,Wx (66),(ev)"},
    {0x51,0x00,0 | PF_Valid | PF_Operand," vpdpbusds Vx,Hx,Wx (66),(ev)"},
    {0x52,0x00,0," vdpbf16ps Vx,Hx,Wx (F3),(ev) | vpdpwssd Vx,Hx,Wx (66),(ev) | vp4dpwssd Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0x53,0x00,0," vpdpwssds Vx,Hx,Wx (66),(ev) | vp4dpwssds Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0x54,0x00,0 | PF_Valid | PF_Operand," vpopcntb/w Vx,Wx (66),(ev)"},
    {0x55,0x00,0 | PF_Valid | PF_Operand," vpopcntd/q Vx,Wx (66),(ev)"},
    {0x56,0x00,0 | PF_Valid,NULL},
    {0x57,0x00,0 | PF_Valid,NULL},
    {0x58,0x00,0 | PF_Valid | PF_Operand," vpbroadcastd Vx,Wx (66),(v)"},
    {0x59,0x00,0," vpbroadcastq Vx,Wx (66),(v) | vbroadcasti32x2 Vx,Wx (66),(evo)"},
    {0x5A,0x00,0," vbroadcasti128 Vqq,Mdq (66),(v) | vbroadcasti32x4/64x2 Vx,Wx (66),(evo)"},
    {0x5B,0x00,0 | PF_Valid | PF_Operand," vbroadcasti32x8/64x4 Vqq,Mdq (66),(ev)"},
    //# Skip 0x5c-0x61
    {0x5C,0x00,0 | PF_Valid,NULL},
    {0x5D,0x00,0 | PF_Valid,NULL},
    {0x5E,0x00,0 | PF_Valid,NULL},
    {0x5F,0x00,0 | PF_Valid,NULL},
    {0x60,0x00,0 | PF_Valid,NULL},
    {0x61,0x00,0 | PF_Valid,NULL},
    {0x62,0x00,0 | PF_Valid | PF_Operand," vpexpandb/w Vx,Wx (66),(ev)"},
    {0x63,0x00,0 | PF_Valid | PF_Operand," vpcompressb/w Wx,Vx (66),(ev)"},
    {0x64,0x00,0 | PF_Valid | PF_Operand," vpblendmd/q Vx,Hx,Wx (66),(ev)"},
    {0x65,0x00,0 | PF_Valid | PF_Operand," vblendmps/d Vx,Hx,Wx (66),(ev)"},
    {0x66,0x00,0 | PF_Valid | PF_Operand," vpblendmb/w Vx,Hx,Wx (66),(ev)"},
    {0x67,0x00,0 | PF_Valid,NULL},
    {0x68,0x00,0 | PF_Valid | PF_REPNE," vp2intersectd/q Kx,Hx,Wx (F2),(ev)"},
    //# Skip 0x69-0x6f
    {0x69,0x00,0 | PF_Valid,NULL},
    {0x6A,0x00,0 | PF_Valid,NULL},
    {0x6B,0x00,0 | PF_Valid,NULL},
    {0x6C,0x00,0 | PF_Valid,NULL},
    {0x6D,0x00,0 | PF_Valid,NULL},
    {0x6E,0x00,0 | PF_Valid,NULL},
    {0x6F,0x00,0 | PF_Valid,NULL},
    {0x70,0x00,0 | PF_Valid | PF_Operand," vpshldvw Vx,Hx,Wx (66),(ev)"},
    {0x71,0x00,0 | PF_Valid | PF_Operand," vpshldvd/q Vx,Hx,Wx (66),(ev)"},
    {0x72,0x00,0," vcvtne2ps2bf16 Vx,Hx,Wx (F2),(ev) | vcvtneps2bf16 Vx,Wx (F3),(ev) | vpshrdvw Vx,Hx,Wx (66),(ev)"},
    {0x73,0x00,0 | PF_Valid | PF_Operand," vpshrdvd/q Vx,Hx,Wx (66),(ev)"},
    {0x74,0x00,0 | PF_Valid,NULL},
    {0x75,0x00,0 | PF_Valid | PF_Operand," vpermi2b/w Vx,Hx,Wx (66),(ev)"},
    {0x76,0x00,0 | PF_Valid | PF_Operand," vpermi2d/q Vx,Hx,Wx (66),(ev)"},
    {0x77,0x00,0 | PF_Valid | PF_Operand," vpermi2ps/d Vx,Hx,Wx (66),(ev)"},
    {0x78,0x00,0 | PF_Valid | PF_Operand," vpbroadcastb Vx,Wx (66),(v)"},
    {0x79,0x00,0 | PF_Valid | PF_Operand," vpbroadcastw Vx,Wx (66),(v)"},
    {0x7A,0x00,0 | PF_Valid | PF_Operand," vpbroadcastb Vx,Rv (66),(ev)"},
    {0x7B,0x00,0 | PF_Valid | PF_Operand," vpbroadcastw Vx,Rv (66),(ev)"},
    {0x7C,0x00,0 | PF_Valid | PF_Operand," vpbroadcastd/q Vx,Rv (66),(ev)"},
    {0x7D,0x00,0 | PF_Valid | PF_Operand," vpermt2b/w Vx,Hx,Wx (66),(ev)"},
    {0x7E,0x00,0 | PF_Valid | PF_Operand," vpermt2d/q Vx,Hx,Wx (66),(ev)"},
    {0x7F,0x00,0 | PF_Valid | PF_Operand," vpermt2ps/d Vx,Hx,Wx (66),(ev)"},
    {0x80,0x00,0 | PF_Valid | PF_Operand," INVEPT Gy,Mdq (66)"},
    {0x81,0x00,0 | PF_Valid | PF_Operand," INVVPID Gy,Mdq (66)"},
    {0x82,0x00,0 | PF_Valid | PF_Operand," INVPCID Gy,Mdq (66)"},
    {0x83,0x00,0 | PF_Valid | PF_Operand," vpmultishiftqb Vx,Hx,Wx (66),(ev)"},
    {0x84,0x00,0 | PF_Valid,NULL},
    {0x85,0x00,0 | PF_Valid,NULL},
    {0x86,0x00,0 | PF_Valid,NULL},
    {0x87,0x00,0 | PF_Valid,NULL},
    {0x88,0x00,0 | PF_Valid | PF_Operand," vexpandps/d Vpd,Wpd (66),(ev)"},
    {0x89,0x00,0 | PF_Valid | PF_Operand," vpexpandd/q Vx,Wx (66),(ev)"},
    {0x8A,0x00,0 | PF_Valid | PF_Operand," vcompressps/d Wx,Vx (66),(ev)"},
    {0x8B,0x00,0 | PF_Valid | PF_Operand," vpcompressd/q Wx,Vx (66),(ev)"},
    {0x8C,0x00,0 | PF_Valid | PF_Operand," vpmaskmovd/q Vx,Hx,Mx (66),(v)"},
    {0x8D,0x00,0 | PF_Valid | PF_Operand," vpermb/w Vx,Hx,Wx (66),(ev)"},
    {0x8E,0x00,0 | PF_Valid | PF_Operand," vpmaskmovd/q Mx,Vx,Hx (66),(v)"},
    {0x8F,0x00,0 | PF_Valid | PF_Operand," vpshufbitqmb Kx,Hx,Wx (66),(ev)"},
    //# 0x0f 0x38 0x90-0xbf (FMA)
    {0x90,0x00,0," vgatherdd/q Vx,Hx,Wx (66),(v) | vpgatherdd/q Vx,Wx (66),(evo)"},
    {0x91,0x00,0," vgatherqd/q Vx,Hx,Wx (66),(v) | vpgatherqd/q Vx,Wx (66),(evo)"},
    {0x92,0x00,0 | PF_Valid | PF_Operand," vgatherdps/d Vx,Hx,Wx (66),(v)"},
    {0x93,0x00,0 | PF_Valid | PF_Operand," vgatherqps/d Vx,Hx,Wx (66),(v)"},
    {0xff,0x00,0 | PF_Valid," UD0"},
    {0xff,0x00,0 | PF_Valid," UD0"},
    {0x96,0x00,0 | PF_Valid | PF_Operand," vfmaddsub132ps/d Vx,Hx,Wx (66),(v)"},
    {0x97,0x00,0 | PF_Valid | PF_Operand," vfmsubadd132ps/d Vx,Hx,Wx (66),(v)"},
    {0x98,0x00,0 | PF_Valid | PF_Operand," vfmadd132ps/d Vx,Hx,Wx (66),(v)"},
    {0x99,0x00,0 | PF_Valid | PF_Operand," vfmadd132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0x9A,0x00,0," vfmsub132ps/d Vx,Hx,Wx (66),(v) | v4fmaddps Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0x9B,0x00,0," vfmsub132ss/d Vx,Hx,Wx (66),(v),(v1) | v4fmaddss Vdq,Hdq,Wdq (F2),(ev)"},
    {0x9C,0x00,0 | PF_Valid | PF_Operand," vfnmadd132ps/d Vx,Hx,Wx (66),(v)"},
    {0x9D,0x00,0 | PF_Valid | PF_Operand," vfnmadd132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0x9E,0x00,0 | PF_Valid | PF_Operand," vfnmsub132ps/d Vx,Hx,Wx (66),(v)"},
    {0x9F,0x00,0 | PF_Valid | PF_Operand," vfnmsub132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xA0,0x00,0 | PF_Valid | PF_Operand," vpscatterdd/q Wx,Vx (66),(ev)"},
    {0xA1,0x00,0 | PF_Valid | PF_Operand," vpscatterqd/q Wx,Vx (66),(ev)"},
    {0xA2,0x00,0 | PF_Valid | PF_Operand," vscatterdps/d Wx,Vx (66),(ev)"},
    {0xA3,0x00,0 | PF_Valid | PF_Operand," vscatterqps/d Wx,Vx (66),(ev)"},
    {0xA4,0x00,0 | PF_Valid,NULL},
    {0xA5,0x00,0 | PF_Valid,NULL},
    {0xA6,0x00,0 | PF_Valid | PF_Operand," vfmaddsub213ps/d Vx,Hx,Wx (66),(v)"},
    {0xA7,0x00,0 | PF_Valid | PF_Operand," vfmsubadd213ps/d Vx,Hx,Wx (66),(v)"},
    {0xA8,0x00,0 | PF_Valid | PF_Operand," vfmadd213ps/d Vx,Hx,Wx (66),(v)"},
    {0xA9,0x00,0 | PF_Valid | PF_Operand," vfmadd213ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xAA,0x00,0," vfmsub213ps/d Vx,Hx,Wx (66),(v) | v4fnmaddps Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0xAB,0x00,0," vfmsub213ss/d Vx,Hx,Wx (66),(v),(v1) | v4fnmaddss Vdq,Hdq,Wdq (F2),(ev)"},
    {0xAC,0x00,0 | PF_Valid | PF_Operand," vfnmadd213ps/d Vx,Hx,Wx (66),(v)"},
    {0xAD,0x00,0 | PF_Valid | PF_Operand," vfnmadd213ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xAE,0x00,0 | PF_Valid | PF_Operand," vfnmsub213ps/d Vx,Hx,Wx (66),(v)"},
    {0xAF,0x00,0 | PF_Valid | PF_Operand," vfnmsub213ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xB0,0x00,0 | PF_Valid,NULL},
    {0xB1,0x00,0 | PF_Valid,NULL},
    {0xB2,0x00,0 | PF_Valid,NULL},
    {0xB3,0x00,0 | PF_Valid,NULL},
    {0xB4,0x00,0 | PF_Valid | PF_Operand," vpmadd52luq Vx,Hx,Wx (66),(ev)"},
    {0xB5,0x00,0 | PF_Valid | PF_Operand," vpmadd52huq Vx,Hx,Wx (66),(ev)"},
    {0xB6,0x00,0 | PF_Valid | PF_Operand," vfmaddsub231ps/d Vx,Hx,Wx (66),(v)"},
    {0xB7,0x00,0 | PF_Valid | PF_Operand," vfmsubadd231ps/d Vx,Hx,Wx (66),(v)"},
    {0xB8,0x00,0 | PF_Valid | PF_Operand," vfmadd231ps/d Vx,Hx,Wx (66),(v)"},
    {0xB9,0x00,0 | PF_Valid | PF_Operand," vfmadd231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xBA,0x00,0 | PF_Valid | PF_Operand," vfmsub231ps/d Vx,Hx,Wx (66),(v)"},
    {0xBB,0x00,0 | PF_Valid | PF_Operand," vfmsub231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xBC,0x00,0 | PF_Valid | PF_Operand," vfnmadd231ps/d Vx,Hx,Wx (66),(v)"},
    {0xBD,0x00,0 | PF_Valid | PF_Operand," vfnmadd231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xBE,0x00,0 | PF_Valid | PF_Operand," vfnmsub231ps/d Vx,Hx,Wx (66),(v)"},
    {0xBF,0x00,0 | PF_Valid | PF_Operand," vfnmsub231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    //# 0x0f 0x38 0xc0-0xff
    {0xC0,0x00,0 | PF_Valid,NULL},
    {0xC1,0x00,0 | PF_Valid,NULL},
    {0xC2,0x00,0 | PF_Valid,NULL},
    {0xC3,0x00,0 | PF_Valid,NULL},
    {0xC4,0x00,0 | PF_Valid | PF_Operand," vpconflictd/q Vx,Wx (66),(ev)"},
    {0xC5,0x00,0 | PF_Valid,NULL},
    {0xC6,0x00,0," Grp18 (1A)"},
    {0xC7,0x00,0," Grp19 (1A)"},
    {0xC8,0x00,0," sha1nexte Vdq,Wdq | vexp2ps/d Vx,Wx (66),(ev)"},
    {0xC9,0x00,0 | PF_Valid," sha1msg1 Vdq,Wdq"},
    {0xCA,0x00,0," sha1msg2 Vdq,Wdq | vrcp28ps/d Vx,Wx (66),(ev)"},
    {0xCB,0x00,0," sha256rnds2 Vdq,Wdq | vrcp28ss/d Vx,Hx,Wx (66),(ev)"},
    {0xCC,0x00,0," sha256msg1 Vdq,Wdq | vrsqrt28ps/d Vx,Wx (66),(ev)"},
    {0xCD,0x00,0," sha256msg2 Vdq,Wdq | vrsqrt28ss/d Vx,Hx,Wx (66),(ev)"},
    {0xCE,0x00,0 | PF_Valid,NULL},
    {0xCF,0x00,0 | PF_Valid | PF_Operand," vgf2p8mulb Vx,Wx (66)"},
    {0xD0,0x00,0 | PF_Valid,NULL},
    {0xD1,0x00,0 | PF_Valid,NULL},
    {0xD2,0x00,0 | PF_Valid,NULL},
    {0xD3,0x00,0 | PF_Valid,NULL},
    {0xD4,0x00,0 | PF_Valid,NULL},
    {0xD5,0x00,0 | PF_Valid,NULL},
    {0xD6,0x00,0 | PF_Valid,NULL},
    {0xD7,0x00,0 | PF_Valid,NULL},
    {0xD8,0x00,0 | PF_Valid,NULL},
    {0xD9,0x00,0 | PF_Valid,NULL},
    {0xDA,0x00,0 | PF_Valid,NULL},
    {0xDB,0x00,0 | PF_Valid | PF_Operand," VAESIMC Vdq,Wdq (66),(v1)"},
    {0xDC,0x00,0 | PF_Valid | PF_Operand," vaesenc Vx,Hx,Wx (66)"},
    {0xDD,0x00,0 | PF_Valid | PF_Operand," vaesenclast Vx,Hx,Wx (66)"},
    {0xDE,0x00,0 | PF_Valid | PF_Operand," vaesdec Vx,Hx,Wx (66)"},
    {0xDF,0x00,0 | PF_Valid | PF_Operand," vaesdeclast Vx,Hx,Wx (66)"},
    {0xE0,0x00,0 | PF_Valid,NULL},
    {0xE1,0x00,0 | PF_Valid,NULL},
    {0xE2,0x00,0 | PF_Valid,NULL},
    {0xE3,0x00,0 | PF_Valid,NULL},
    {0xE4,0x00,0 | PF_Valid,NULL},
    {0xE5,0x00,0 | PF_Valid,NULL},
    {0xE6,0x00,0 | PF_Valid,NULL},
    {0xE7,0x00,0 | PF_Valid,NULL},
    {0xE8,0x00,0 | PF_Valid,NULL},
    {0xE9,0x00,0 | PF_Valid,NULL},
    {0xEA,0x00,0 | PF_Valid,NULL},
    {0xEB,0x00,0 | PF_Valid,NULL},
    {0xEC,0x00,0 | PF_Valid,NULL},
    {0xED,0x00,0 | PF_Valid,NULL},
    {0xEE,0x00,0 | PF_Valid,NULL},
    {0xEF,0x00,0 | PF_Valid,NULL},
    {0xF0,0x00,0," MOVBE Gy,My | MOVBE Gw,Mw (66) | CRC32 Gd,Eb (F2) | CRC32 Gd,Eb (66&F2)"},
    {0xF1,0x00,0," MOVBE My,Gy | MOVBE Mw,Gw (66) | CRC32 Gd,Ey (F2) | CRC32 Gd,Ew (66&F2)"},
    {0xF2,0x00,0 | PF_Valid," ANDN Gy,By,Ey (v)"},
    {0xF3,0x00,0," Grp17 (1A)"},
    {0xF4,0x00,0 | PF_Valid,NULL},
    {0xF5,0x00,0," BZHI Gy,Ey,By (v) | PEXT Gy,By,Ey (F3),(v) | PDEP Gy,By,Ey (F2),(v) | WRUSSD/Q My,Gy (66)"},
    {0xF6,0x00,0," ADCX Gy,Ey (66) | ADOX Gy,Ey (F3) | MULX By,Gy,rDX,Ey (F2),(v) | WRSSD/Q My,Gy"},
    {0xF7,0x00,0," BEXTR Gy,Ey,By (v) | SHLX Gy,Ey,By (66),(v) | SARX Gy,Ey,By (F3),(v) | SHRX Gy,Ey,By (F2),(v)"},
    {0xF8,0x00,0," MOVDIR64B Gv,Mdqq (66) | ENQCMD Gv,Mdqq (F2) | ENQCMDS Gv,Mdqq (F3)"},
    {0xF9,0x00,0 | PF_Valid," MOVDIRI My,Gy"},
    {0xFA,0x00,0 | PF_Valid,NULL},
    {0xFB,0x00,0 | PF_Valid,NULL},
    {0xFC,0x00,0 | PF_Valid,NULL},
    {0xFD,0x00,0 | PF_Valid,NULL},
    {0xFE,0x00,0 | PF_Valid,NULL},
    {0xFF,0x00,0 | PF_Valid,NULL},
};
OP_ENTRY OP3BMap_0F3A[256] = {
    //# 0x0f 0x3a 0x00-0xff
    {0x00,0x00,0 | PF_Valid | PF_Operand," vpermq Vqq,Wqq,Ib (66),(v)"},
    {0x01,0x00,0 | PF_Valid | PF_Operand," vpermpd Vqq,Wqq,Ib (66),(v)"},
    {0x02,0x00,0 | PF_Valid | PF_Operand," vpblendd Vx,Hx,Wx,Ib (66),(v)"},
    {0x03,0x00,0 | PF_Valid | PF_Operand," valignd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x04,0x00,0 | PF_Valid | PF_Operand," vpermilps Vx,Wx,Ib (66),(v)"},
    {0x05,0x00,0 | PF_Valid | PF_Operand," vpermilpd Vx,Wx,Ib (66),(v)"},
    {0x06,0x00,0 | PF_Valid | PF_Operand," vperm2f128 Vqq,Hqq,Wqq,Ib (66),(v)"},
    {0x07,0x00,0 | PF_Valid,NULL},
    {0x08,0x00,0," vroundps Vx,Wx,Ib (66) | vrndscaleps Vx,Wx,Ib (66),(evo)"},
    {0x09,0x00,0," vroundpd Vx,Wx,Ib (66) | vrndscalepd Vx,Wx,Ib (66),(evo)"},
    {0x0A,0x00,0," vroundss Vss,Wss,Ib (66),(v1) | vrndscaless Vx,Hx,Wx,Ib (66),(evo)"},
    {0x0B,0x00,0," vroundsd Vsd,Wsd,Ib (66),(v1) | vrndscalesd Vx,Hx,Wx,Ib (66),(evo)"},
    {0x0C,0x00,0 | PF_Valid | PF_Operand," vblendps Vx,Hx,Wx,Ib (66)"},
    {0x0D,0x00,0 | PF_Valid | PF_Operand," vblendpd Vx,Hx,Wx,Ib (66)"},
    {0x0E,0x00,0 | PF_Valid | PF_Operand," vpblendw Vx,Hx,Wx,Ib (66),(v1)"},
    {0x0F,0x00,0," palignr Pq,Qq,Ib | vpalignr Vx,Hx,Wx,Ib (66),(v1)"},
    {0x10,0x00,0 | PF_Valid,NULL},
    {0x11,0x00,0 | PF_Valid,NULL},
    {0x12,0x00,0 | PF_Valid,NULL},
    {0x13,0x00,0 | PF_Valid,NULL},
    {0x14,0x00,0 | PF_Valid | PF_Operand," vpextrb Rd/Mb,Vdq,Ib (66),(v1)"},
    {0x15,0x00,0 | PF_Valid | PF_Operand," vpextrw Rd/Mw,Vdq,Ib (66),(v1)"},
    {0x16,0x00,0 | PF_Valid | PF_Operand," vpextrd/q Ey,Vdq,Ib (66),(v1)"},
    {0x17,0x00,0 | PF_Valid | PF_Operand," vextractps Ed,Vdq,Ib (66),(v1)"},
    {0x18,0x00,0," vinsertf128 Vqq,Hqq,Wqq,Ib (66),(v) | vinsertf32x4/64x2 Vqq,Hqq,Wqq,Ib (66),(evo)"},
    {0x19,0x00,0," vextractf128 Wdq,Vqq,Ib (66),(v) | vextractf32x4/64x2 Wdq,Vqq,Ib (66),(evo)"},
    {0x1A,0x00,0 | PF_Valid | PF_Operand," vinsertf32x8/64x4 Vqq,Hqq,Wqq,Ib (66),(ev)"},
    {0x1B,0x00,0 | PF_Valid | PF_Operand," vextractf32x8/64x4 Wdq,Vqq,Ib (66),(ev)"},
    {0x1C,0x00,0 | PF_Valid,NULL},
    {0x1D,0x00,0 | PF_Valid | PF_Operand," vcvtps2ph Wx,Vx,Ib (66),(v)"},
    {0x1E,0x00,0 | PF_Valid | PF_Operand," vpcmpud/q Vk,Hd,Wd,Ib (66),(ev)"},
    {0x1F,0x00,0 | PF_Valid | PF_Operand," vpcmpd/q Vk,Hd,Wd,Ib (66),(ev)"},
    {0x20,0x00,0 | PF_Valid | PF_Operand," vpinsrb Vdq,Hdq,Ry/Mb,Ib (66),(v1)"},
    {0x21,0x00,0 | PF_Valid | PF_Operand," vinsertps Vdq,Hdq,Udq/Md,Ib (66),(v1)"},
    {0x22,0x00,0 | PF_Valid | PF_Operand," vpinsrd/q Vdq,Hdq,Ey,Ib (66),(v1)"},
    {0x23,0x00,0 | PF_Valid | PF_Operand," vshuff32x4/64x2 Vx,Hx,Wx,Ib (66),(ev)"},
    {0x24,0x00,0 | PF_Valid,NULL},
    {0x25,0x00,0 | PF_Valid | PF_Operand," vpternlogd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x26,0x00,0 | PF_Valid | PF_Operand," vgetmantps/d Vx,Wx,Ib (66),(ev)"},
    {0x27,0x00,0 | PF_Valid | PF_Operand," vgetmantss/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x28,0x00,0 | PF_Valid,NULL},
    {0x29,0x00,0 | PF_Valid,NULL},
    {0x2A,0x00,0 | PF_Valid,NULL},
    {0x2B,0x00,0 | PF_Valid,NULL},
    {0x2C,0x00,0 | PF_Valid,NULL},
    {0x2D,0x00,0 | PF_Valid,NULL},
    {0x2E,0x00,0 | PF_Valid,NULL},
    {0x2F,0x00,0 | PF_Valid,NULL},
    {0x30,0x00,0 | PF_Valid | PF_Operand," kshiftrb/w Vk,Uk,Ib (66),(v)"},
    {0x31,0x00,0 | PF_Valid | PF_Operand," kshiftrd/q Vk,Uk,Ib (66),(v)"},
    {0x32,0x00,0 | PF_Valid | PF_Operand," kshiftlb/w Vk,Uk,Ib (66),(v)"},
    {0x33,0x00,0 | PF_Valid | PF_Operand," kshiftld/q Vk,Uk,Ib (66),(v)"},
    {0x34,0x00,0 | PF_Valid,NULL},
    {0x35,0x00,0 | PF_Valid,NULL},
    {0x36,0x00,0 | PF_Valid,NULL},
    {0x37,0x00,0 | PF_Valid,NULL},
    {0x38,0x00,0," vinserti128 Vqq,Hqq,Wqq,Ib (66),(v) | vinserti32x4/64x2 Vqq,Hqq,Wqq,Ib (66),(evo)"},
    {0x39,0x00,0," vextracti128 Wdq,Vqq,Ib (66),(v) | vextracti32x4/64x2 Wdq,Vqq,Ib (66),(evo)"},
    {0x3A,0x00,0 | PF_Valid | PF_Operand," vinserti32x8/64x4 Vqq,Hqq,Wqq,Ib (66),(ev)"},
    {0x3B,0x00,0 | PF_Valid | PF_Operand," vextracti32x8/64x4 Wdq,Vqq,Ib (66),(ev)"},
    {0x3C,0x00,0 | PF_Valid,NULL},
    {0x3D,0x00,0 | PF_Valid,NULL},
    {0x3E,0x00,0 | PF_Valid | PF_Operand," vpcmpub/w Vk,Hk,Wx,Ib (66),(ev)"},
    {0x3F,0x00,0 | PF_Valid | PF_Operand," vpcmpb/w Vk,Hk,Wx,Ib (66),(ev)"},
    {0x40,0x00,0 | PF_Valid | PF_Operand," vdpps Vx,Hx,Wx,Ib (66)"},
    {0x41,0x00,0 | PF_Valid | PF_Operand," vdppd Vdq,Hdq,Wdq,Ib (66),(v1)"},
    {0x42,0x00,0," vmpsadbw Vx,Hx,Wx,Ib (66),(v1) | vdbpsadbw Vx,Hx,Wx,Ib (66),(evo)"},
    {0x43,0x00,0 | PF_Valid | PF_Operand," vshufi32x4/64x2 Vx,Hx,Wx,Ib (66),(ev)"},
    {0x44,0x00,0 | PF_Valid | PF_Operand," vpclmulqdq Vx,Hx,Wx,Ib (66)"},
    {0x45,0x00,0 | PF_Valid,NULL},
    {0x46,0x00,0 | PF_Valid | PF_Operand," vperm2i128 Vqq,Hqq,Wqq,Ib (66),(v)"},
    {0x47,0x00,0 | PF_Valid,NULL},
    {0x48,0x00,0 | PF_Valid,NULL},
    {0x49,0x00,0 | PF_Valid,NULL},
    {0x4A,0x00,0 | PF_Valid | PF_Operand," vblendvps Vx,Hx,Wx,Lx (66),(v)"},
    {0x4B,0x00,0 | PF_Valid | PF_Operand," vblendvpd Vx,Hx,Wx,Lx (66),(v)"},
    {0x4C,0x00,0 | PF_Valid | PF_Operand," vpblendvb Vx,Hx,Wx,Lx (66),(v1)"},
    {0x4D,0x00,0 | PF_Valid,NULL},
    {0x4E,0x00,0 | PF_Valid,NULL},
    {0x4F,0x00,0 | PF_Valid,NULL},
    {0x50,0x00,0 | PF_Valid | PF_Operand," vrangeps/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x51,0x00,0 | PF_Valid | PF_Operand," vrangess/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x52,0x00,0 | PF_Valid,NULL},
    {0x53,0x00,0 | PF_Valid,NULL},
    {0x54,0x00,0 | PF_Valid | PF_Operand," vfixupimmps/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x55,0x00,0 | PF_Valid | PF_Operand," vfixupimmss/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x56,0x00,0 | PF_Valid | PF_Operand," vreduceps/d Vx,Wx,Ib (66),(ev)"},
    {0x57,0x00,0 | PF_Valid | PF_Operand," vreducess/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x58,0x00,0 | PF_Valid,NULL},
    {0x59,0x00,0 | PF_Valid,NULL},
    {0x5A,0x00,0 | PF_Valid,NULL},
    {0x5B,0x00,0 | PF_Valid,NULL},
    {0x5C,0x00,0 | PF_Valid,NULL},
    {0x5D,0x00,0 | PF_Valid,NULL},
    {0x5E,0x00,0 | PF_Valid,NULL},
    {0x5F,0x00,0 | PF_Valid,NULL},
    {0x60,0x00,0 | PF_Valid | PF_Operand," vpcmpestrm Vdq,Wdq,Ib (66),(v1)"},
    {0x61,0x00,0 | PF_Valid | PF_Operand," vpcmpestri Vdq,Wdq,Ib (66),(v1)"},
    {0x62,0x00,0 | PF_Valid | PF_Operand," vpcmpistrm Vdq,Wdq,Ib (66),(v1)"},
    {0x63,0x00,0 | PF_Valid | PF_Operand," vpcmpistri Vdq,Wdq,Ib (66),(v1)"},
    {0x64,0x00,0 | PF_Valid,NULL},
    {0x65,0x00,0 | PF_Valid,NULL},
    {0x66,0x00,0 | PF_Valid | PF_Operand," vfpclassps/d Vk,Wx,Ib (66),(ev)"},
    {0x67,0x00,0 | PF_Valid | PF_Operand," vfpclassss/d Vk,Wx,Ib (66),(ev)"},
    {0x68,0x00,0 | PF_Valid,NULL},
    {0x69,0x00,0 | PF_Valid,NULL},
    {0x6A,0x00,0 | PF_Valid,NULL},
    {0x6B,0x00,0 | PF_Valid,NULL},
    {0x6C,0x00,0 | PF_Valid,NULL},
    {0x6D,0x00,0 | PF_Valid,NULL},
    {0x6E,0x00,0 | PF_Valid,NULL},
    {0x6F,0x00,0 | PF_Valid,NULL},
    {0x70,0x00,0 | PF_Valid | PF_Operand," vpshldw Vx,Hx,Wx,Ib (66),(ev)"},
    {0x71,0x00,0 | PF_Valid | PF_Operand," vpshldd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x72,0x00,0 | PF_Valid | PF_Operand," vpshrdw Vx,Hx,Wx,Ib (66),(ev)"},
    {0x73,0x00,0 | PF_Valid | PF_Operand," vpshrdd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x74,0x00,0 | PF_Valid,NULL},
    {0x75,0x00,0 | PF_Valid,NULL},
    {0x76,0x00,0 | PF_Valid,NULL},
    {0x77,0x00,0 | PF_Valid,NULL},
    {0x78,0x00,0 | PF_Valid,NULL},
    {0x79,0x00,0 | PF_Valid,NULL},
    {0x7A,0x00,0 | PF_Valid,NULL},
    {0x7B,0x00,0 | PF_Valid,NULL},
    {0x7C,0x00,0 | PF_Valid,NULL},
    {0x7D,0x00,0 | PF_Valid,NULL},
    {0x7E,0x00,0 | PF_Valid,NULL},
    {0x7F,0x00,0 | PF_Valid,NULL},
    {0x80,0x00,0 | PF_Valid,NULL},
    {0x81,0x00,0 | PF_Valid,NULL},
    {0x82,0x00,0 | PF_Valid,NULL},
    {0x83,0x00,0 | PF_Valid,NULL},
    {0x84,0x00,0 | PF_Valid,NULL},
    {0x85,0x00,0 | PF_Valid,NULL},
    {0x86,0x00,0 | PF_Valid,NULL},
    {0x87,0x00,0 | PF_Valid,NULL},
    {0x88,0x00,0 | PF_Valid,NULL},
    {0x89,0x00,0 | PF_Valid,NULL},
    {0x8A,0x00,0 | PF_Valid,NULL},
    {0x8B,0x00,0 | PF_Valid,NULL},
    {0x8C,0x00,0 | PF_Valid,NULL},
    {0x8D,0x00,0 | PF_Valid,NULL},
    {0x8E,0x00,0 | PF_Valid,NULL},
    {0x8F,0x00,0 | PF_Valid,NULL},
    {0x90,0x00,0 | PF_Valid,NULL},
    {0x91,0x00,0 | PF_Valid,NULL},
    {0x92,0x00,0 | PF_Valid,NULL},
    {0x93,0x00,0 | PF_Valid,NULL},
    {0x94,0x00,0 | PF_Valid,NULL},
    {0x95,0x00,0 | PF_Valid,NULL},
    {0x96,0x00,0 | PF_Valid,NULL},
    {0x97,0x00,0 | PF_Valid,NULL},
    {0x98,0x00,0 | PF_Valid,NULL},
    {0x99,0x00,0 | PF_Valid,NULL},
    {0x9A,0x00,0 | PF_Valid,NULL},
    {0x9B,0x00,0 | PF_Valid,NULL},
    {0x9C,0x00,0 | PF_Valid,NULL},
    {0x9D,0x00,0 | PF_Valid,NULL},
    {0x9E,0x00,0 | PF_Valid,NULL},
    {0x9F,0x00,0 | PF_Valid,NULL},
    {0xA0,0x00,0 | PF_Valid,NULL},
    {0xA1,0x00,0 | PF_Valid,NULL},
    {0xA2,0x00,0 | PF_Valid,NULL},
    {0xA3,0x00,0 | PF_Valid,NULL},
    {0xA4,0x00,0 | PF_Valid,NULL},
    {0xA5,0x00,0 | PF_Valid,NULL},
    {0xA6,0x00,0 | PF_Valid,NULL},
    {0xA7,0x00,0 | PF_Valid,NULL},
    {0xA8,0x00,0 | PF_Valid,NULL},
    {0xA9,0x00,0 | PF_Valid,NULL},
    {0xAA,0x00,0 | PF_Valid,NULL},
    {0xAB,0x00,0 | PF_Valid,NULL},
    {0xAC,0x00,0 | PF_Valid,NULL},
    {0xAD,0x00,0 | PF_Valid,NULL},
    {0xAE,0x00,0 | PF_Valid,NULL},
    {0xAF,0x00,0 | PF_Valid,NULL},
    {0xB0,0x00,0 | PF_Valid,NULL},
    {0xB1,0x00,0 | PF_Valid,NULL},
    {0xB2,0x00,0 | PF_Valid,NULL},
    {0xB3,0x00,0 | PF_Valid,NULL},
    {0xB4,0x00,0 | PF_Valid,NULL},
    {0xB5,0x00,0 | PF_Valid,NULL},
    {0xB6,0x00,0 | PF_Valid,NULL},
    {0xB7,0x00,0 | PF_Valid,NULL},
    {0xB8,0x00,0 | PF_Valid,NULL},
    {0xB9,0x00,0 | PF_Valid,NULL},
    {0xBA,0x00,0 | PF_Valid,NULL},
    {0xBB,0x00,0 | PF_Valid,NULL},
    {0xBC,0x00,0 | PF_Valid,NULL},
    {0xBD,0x00,0 | PF_Valid,NULL},
    {0xBE,0x00,0 | PF_Valid,NULL},
    {0xBF,0x00,0 | PF_Valid,NULL},
    {0xC0,0x00,0 | PF_Valid,NULL},
    {0xC1,0x00,0 | PF_Valid,NULL},
    {0xC2,0x00,0 | PF_Valid,NULL},
    {0xC3,0x00,0 | PF_Valid,NULL},
    {0xC4,0x00,0 | PF_Valid,NULL},
    {0xC5,0x00,0 | PF_Valid,NULL},
    {0xC6,0x00,0 | PF_Valid,NULL},
    {0xC7,0x00,0 | PF_Valid,NULL},
    {0xC8,0x00,0 | PF_Valid,NULL},
    {0xC9,0x00,0 | PF_Valid,NULL},
    {0xCA,0x00,0 | PF_Valid,NULL},
    {0xCB,0x00,0 | PF_Valid,NULL},
    {0xCC,0x00,0 | PF_Valid," sha1rnds4 Vdq,Wdq,Ib"},
    {0xCD,0x00,0 | PF_Valid,NULL},
    {0xCE,0x00,0 | PF_Valid | PF_Operand," vgf2p8affineqb Vx,Wx,Ib (66)"},
    {0xCF,0x00,0 | PF_Valid | PF_Operand," vgf2p8affineinvqb Vx,Wx,Ib (66)"},
    {0xD0,0x00,0 | PF_Valid,NULL},
    {0xD1,0x00,0 | PF_Valid,NULL},
    {0xD2,0x00,0 | PF_Valid,NULL},
    {0xD3,0x00,0 | PF_Valid,NULL},
    {0xD4,0x00,0 | PF_Valid,NULL},
    {0xD5,0x00,0 | PF_Valid,NULL},
    {0xD6,0x00,0 | PF_Valid,NULL},
    {0xD7,0x00,0 | PF_Valid,NULL},
    {0xD8,0x00,0 | PF_Valid,NULL},
    {0xD9,0x00,0 | PF_Valid,NULL},
    {0xDA,0x00,0 | PF_Valid,NULL},
    {0xDB,0x00,0 | PF_Valid,NULL},
    {0xDC,0x00,0 | PF_Valid,NULL},
    {0xDD,0x00,0 | PF_Valid,NULL},
    {0xDE,0x00,0 | PF_Valid,NULL},
    {0xDF,0x00,0 | PF_Valid | PF_Operand," VAESKEYGEN Vdq,Wdq,Ib (66),(v1)"},
    {0xE0,0x00,0 | PF_Valid,NULL},
    {0xE1,0x00,0 | PF_Valid,NULL},
    {0xE2,0x00,0 | PF_Valid,NULL},
    {0xE3,0x00,0 | PF_Valid,NULL},
    {0xE4,0x00,0 | PF_Valid,NULL},
    {0xE5,0x00,0 | PF_Valid,NULL},
    {0xE6,0x00,0 | PF_Valid,NULL},
    {0xE7,0x00,0 | PF_Valid,NULL},
    {0xE8,0x00,0 | PF_Valid,NULL},
    {0xE9,0x00,0 | PF_Valid,NULL},
    {0xEA,0x00,0 | PF_Valid,NULL},
    {0xEB,0x00,0 | PF_Valid,NULL},
    {0xEC,0x00,0 | PF_Valid,NULL},
    {0xED,0x00,0 | PF_Valid,NULL},
    {0xEE,0x00,0 | PF_Valid,NULL},
    {0xEF,0x00,0 | PF_Valid,NULL},
    {0xF0,0x00,0 | PF_Valid | PF_REPNE," RORX Gy,Ey,Ib (F2),(v)"},
    {0xF1,0x00,0 | PF_Valid,NULL},
    {0xF2,0x00,0 | PF_Valid,NULL},
    {0xF3,0x00,0 | PF_Valid,NULL},
    {0xF4,0x00,0 | PF_Valid,NULL},
    {0xF5,0x00,0 | PF_Valid,NULL},
    {0xF6,0x00,0 | PF_Valid,NULL},
    {0xF7,0x00,0 | PF_Valid,NULL},
    {0xF8,0x00,0 | PF_Valid,NULL},
    {0xF9,0x00,0 | PF_Valid,NULL},
    {0xFA,0x00,0 | PF_Valid,NULL},
    {0xFB,0x00,0 | PF_Valid,NULL},
    {0xFC,0x00,0 | PF_Valid,NULL},
    {0xFD,0x00,0 | PF_Valid,NULL},
    {0xFE,0x00,0 | PF_Valid,NULL},
    {0xFF,0x00,0 | PF_Valid,NULL},
};
OP_ENTRY Grp01_80h[8] = {
    {0x80,0x80,0 | PF_Valid," ADD Eb,Ib"},
    {0x80,0x81,0 | PF_Valid," OR Eb,Ib"},
    {0x80,0x82,0 | PF_Valid," ADC Eb,Ib"},
    {0x80,0x83,0 | PF_Valid," SBB Eb,Ib"},
    {0x80,0x84,0 | PF_Valid," AND Eb,Ib"},
    {0x80,0x85,0 | PF_Valid," SUB Eb,Ib"},
    {0x80,0x86,0 | PF_Valid," XOR Eb,Ib"},
    {0x80,0x87,0 | PF_Valid," CMP Eb,Ib"},
};
OP_ENTRY Grp01_81h[8] = {
    {0x81,0x80,0 | PF_Valid," ADD Ev,Iz"},
    {0x81,0x81,0 | PF_Valid," OR Ev,Iz"},
    {0x81,0x82,0 | PF_Valid," ADC Ev,Iz"},
    {0x81,0x83,0 | PF_Valid," SBB Ev,Iz"},
    {0x81,0x84,0 | PF_Valid," AND Ev,Iz"},
    {0x81,0x85,0 | PF_Valid," SUB Ev,Iz"},
    {0x81,0x86,0 | PF_Valid," XOR Ev,Iz"},
    {0x81,0x87,0 | PF_Valid," CMP Ev,Iz"},
};
OP_ENTRY Grp01_82h[8] = {
    {0x82,0x80,0 | PF_Valid," ADD Eb,Ib"},
    {0x82,0x81,0 | PF_Valid," OR Eb,Ib"},
    {0x82,0x82,0 | PF_Valid," ADC Eb,Ib"},
    {0x82,0x83,0 | PF_Valid," SBB Eb,Ib"},
    {0x82,0x84,0 | PF_Valid," AND Eb,Ib"},
    {0x82,0x85,0 | PF_Valid," SUB Eb,Ib"},
    {0x82,0x86,0 | PF_Valid," XOR Eb,Ib"},
    {0x82,0x87,0 | PF_Valid," CMP Eb,Ib"},
};
OP_ENTRY Grp01_83h[8] = {
    {0x83,0x80,0 | PF_Valid," ADD Ev,Ib"},
    {0x83,0x81,0 | PF_Valid," OR Ev,Ib"},
    {0x83,0x82,0 | PF_Valid," ADC Ev,Ib"},
    {0x83,0x83,0 | PF_Valid," SBB Ev,Ib"},
    {0x83,0x84,0 | PF_Valid," AND Ev,Ib"},
    {0x83,0x85,0 | PF_Valid," SUB Ev,Ib"},
    {0x83,0x86,0 | PF_Valid," XOR Ev,Ib"},
    {0x83,0x87,0 | PF_Valid," CMP Ev,Ib"},
};
OP_ENTRY Grp01A_8Fh[8] = {
    {0x8F,0x80,0 | PF_Valid," POP Ev"},
    {0x8F,0x81,0 | PF_Valid,NULL},
    {0x8F,0x82,0 | PF_Valid,NULL},
    {0x8F,0x83,0 | PF_Valid,NULL},
    {0x8F,0x84,0 | PF_Valid,NULL},
    {0x8F,0x85,0 | PF_Valid,NULL},
    {0x8F,0x86,0 | PF_Valid,NULL},
    {0x8F,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp02_C0h[8] = {
    {0xC0,0x80,0 | PF_Valid," ROL Eb,Ib"},
    {0xC0,0x81,0 | PF_Valid," ROR Eb,Ib"},
    {0xC0,0x82,0 | PF_Valid," RCL Eb,Ib"},
    {0xC0,0x83,0 | PF_Valid," RCR Eb,Ib"},
    {0xC0,0x84,0 | PF_Valid," SHL/SAL Eb,Ib"},
    {0xC0,0x85,0 | PF_Valid," SHR Eb,Ib"},
    {0xC0,0x86,0 | PF_Valid,NULL},
    {0xC0,0x87,0 | PF_Valid," SAR Eb,Ib"},
};
OP_ENTRY Grp02_C1h[8] = {
    {0xC1,0x80,0 | PF_Valid," ROL Ev,Ib"},
    {0xC1,0x81,0 | PF_Valid," ROR Ev,Ib"},
    {0xC1,0x82,0 | PF_Valid," RCL Ev,Ib"},
    {0xC1,0x83,0 | PF_Valid," RCR Ev,Ib"},
    {0xC1,0x84,0 | PF_Valid," SHL/SAL Ev,Ib"},
    {0xC1,0x85,0 | PF_Valid," SHR Ev,Ib"},
    {0xC1,0x86,0 | PF_Valid,NULL},
    {0xC1,0x87,0 | PF_Valid," SAR Ev,Ib"},
};
OP_ENTRY Grp02_D0h[8] = {
    {0xD0,0x80,0 | PF_Valid," ROL Eb,1"},
    {0xD0,0x81,0 | PF_Valid," ROR Eb,1"},
    {0xD0,0x82,0 | PF_Valid," RCL Eb,1"},
    {0xD0,0x83,0 | PF_Valid," RCR Eb,1"},
    {0xD0,0x84,0 | PF_Valid," SHL/SAL Eb,1"},
    {0xD0,0x85,0 | PF_Valid," SHR Eb,1"},
    {0xD0,0x86,0 | PF_Valid,NULL},
    {0xD0,0x87,0 | PF_Valid," SAR Eb,1"},
};
OP_ENTRY Grp02_D1h[8] = {
    {0xD1,0x80,0 | PF_Valid," ROL Ev,1"},
    {0xD1,0x81,0 | PF_Valid," ROR Ev,1"},
    {0xD1,0x82,0 | PF_Valid," RCL Ev,1"},
    {0xD1,0x83,0 | PF_Valid," RCR Ev,1"},
    {0xD1,0x84,0 | PF_Valid," SHL/SAL Ev,1"},
    {0xD1,0x85,0 | PF_Valid," SHR Ev,1"},
    {0xD1,0x86,0 | PF_Valid,NULL},
    {0xD1,0x87,0 | PF_Valid," SAR Ev,1"},
};
OP_ENTRY Grp02_D2h[8] = {
    {0xD2,0x80,0 | PF_Valid," ROL Eb,CL"},
    {0xD2,0x81,0 | PF_Valid," ROR Eb,CL"},
    {0xD2,0x82,0 | PF_Valid," RCL Eb,CL"},
    {0xD2,0x83,0 | PF_Valid," RCR Eb,CL"},
    {0xD2,0x84,0 | PF_Valid," SHL/SAL Eb,CL"},
    {0xD2,0x85,0 | PF_Valid," SHR Eb,CL"},
    {0xD2,0x86,0 | PF_Valid,NULL},
    {0xD2,0x87,0 | PF_Valid," SAR Eb,CL"},
};
OP_ENTRY Grp02_D3h[8] = {
    {0xD3,0x80,0 | PF_Valid," ROL Ev,CL"},
    {0xD3,0x81,0 | PF_Valid," ROR Ev,CL"},
    {0xD3,0x82,0 | PF_Valid," RCL Ev,CL"},
    {0xD3,0x83,0 | PF_Valid," RCR Ev,CL"},
    {0xD3,0x84,0 | PF_Valid," SHL/SAL Ev,CL"},
    {0xD3,0x85,0 | PF_Valid," SHR Ev,CL"},
    {0xD3,0x86,0 | PF_Valid,NULL},
    {0xD3,0x87,0 | PF_Valid," SAR Ev,CL"},
};
OP_ENTRY Grp03_F6h[8] = {
    {0xF6,0x80,0 | PF_Valid," TEST Eb,Ib"},
    {0xF6,0x81,0 | PF_Valid," TEST Eb,Ib"},
    {0xF6,0x82,0 | PF_Valid," NOT Eb"},
    {0xF6,0x83,0 | PF_Valid," NEG Eb"},
    {0xF6,0x84,0 | PF_Valid," MUL AL,Eb"},
    {0xF6,0x85,0 | PF_Valid," IMUL AL,Eb"},
    {0xF6,0x86,0 | PF_Valid," DIV AL,Eb"},
    {0xF6,0x87,0 | PF_Valid," IDIV AL,Eb"},
};
OP_ENTRY Grp03_F7h[8] = {
    {0xF7,0x80,0 | PF_Valid," TEST Ev,Iz"},
    {0xF7,0x81,0 | PF_Valid," TEST Ev,Iz"},
    {0xF7,0x82,0 | PF_Valid," NOT Ev"},
    {0xF7,0x83,0 | PF_Valid," NEG Ev"},
    {0xF7,0x84,0 | PF_Valid," MUL rAX,Ev"},
    {0xF7,0x85,0 | PF_Valid," IMUL rAX,Ev"},
    {0xF7,0x86,0 | PF_Valid," DIV rAX,Ev"},
    {0xF7,0x87,0 | PF_Valid," IDIV rAX,Ev"},
};
OP_ENTRY Grp04_FEh[8] = {
    {0xFE,0x80,0 | PF_Valid," INC Eb"},
    {0xFE,0x81,0 | PF_Valid," DEC Eb"},
    {0xFE,0x82,0 | PF_Valid,NULL},
    {0xFE,0x83,0 | PF_Valid,NULL},
    {0xFE,0x84,0 | PF_Valid,NULL},
    {0xFE,0x85,0 | PF_Valid,NULL},
    {0xFE,0x86,0 | PF_Valid,NULL},
    {0xFE,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp05_FFh[8] = {
    {0xFF,0x80,0 | PF_Valid," INC Ev"},
    {0xFF,0x81,0 | PF_Valid," DEC Ev"},
    {0xFF,0x82,0 | PF_Valid," CALL Ev"},
    {0xFF,0x83,0 | PF_Valid," CALL FAR Ep"},
    {0xFF,0x84,0 | PF_Valid," JMP Ev"},
    {0xFF,0x85,0 | PF_Valid," JMP FAR Mp"},
    {0xFF,0x86,0 | PF_Valid," PUSH Ev"},
    {0xFF,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp06_00h[8] = {
    {0x00,0x80,0 | PF_Valid," SLDT Rv/Mw"},
    {0x00,0x81,0 | PF_Valid," STR Rv/Mw"},
    {0x00,0x82,0 | PF_Valid," LLDT Ew"},
    {0x00,0x83,0 | PF_Valid," LTR Ew"},
    {0x00,0x84,0 | PF_Valid," VERR Ew"},
    {0x00,0x85,0 | PF_Valid," VERW Ew"},
    {0x00,0x86,0 | PF_Valid,NULL},
    {0x00,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp07_01h[8] = {
    {0x01,0x80,0," SGDT Ms | VMCALL (001),(11B) | VMRESUME (011),(11B) | VMXOFF (100),(11B) | PCONFIG (101),(11B) | ENCLV "},
    {0x01,0x81,0," SIDT Ms | MONITOR (000),(11B) | MWAIT (001),(11B) | CLAC (010),(11B) | STAC (011),(11B) | ENCLS (111),(11B)"},
    {0x01,0x82,0," LGDT Ms | XGETBV (000),(11B) | XSETBV (001),(11B) | VMFUNC (100),(11B) | XEND (101)(11B) | XTEST (110)(11B) | ENCLU (111),(11B"},
    {0x01,0x83,0 | PF_Valid," LIDT Ms"},
    {0x01,0x84,0 | PF_Valid," SMSW Mw/Rv"},
    {0x01,0x85,0," rdpkru (110),(11B) | wrpkru (111),(11B) | SAVEPREVSSP (F3),(010),(11B) | RSTORSSP Mq (F3) | SETSSBSY (F3),(000),(11B)"},
    {0x01,0x86,0 | PF_Valid," LMSW Ew"},
    {0x01,0x87,0," INVLPG Mb | SWAPGS (o64),(000),(11B) | RDTSCP (001),(11B)"},
};
OP_ENTRY Grp08_BAh[8] = {
    {0xBA,0x80,0 | PF_Valid,NULL},
    {0xBA,0x81,0 | PF_Valid,NULL},
    {0xBA,0x82,0 | PF_Valid,NULL},
    {0xBA,0x83,0 | PF_Valid,NULL},
    {0xBA,0x84,0 | PF_Valid," BT Ev,Ib"},
    {0xBA,0x85,0 | PF_Valid," BTS Ev,Ib"},
    {0xBA,0x86,0 | PF_Valid," BTR Ev,Ib"},
    {0xBA,0x87,0 | PF_Valid," BTC Ev,Ib"},
};
OP_ENTRY Grp09_C7h[8] = {
    {0xC7,0x80,0 | PF_Valid,NULL},
    {0xC7,0x81,0 | PF_Valid," CMPXCHG8B/16B Mq/Mdq"},
    {0xC7,0x82,0 | PF_Valid,NULL},
    {0xC7,0x83,0 | PF_Valid," xrstors"},
    {0xC7,0x84,0 | PF_Valid," xsavec"},
    {0xC7,0x85,0 | PF_Valid," xsaves"},
    {0xC7,0x86,0," VMPTRLD Mq | VMCLEAR Mq (66) | VMXON Mq (F3) | RDRAND Rv (11B)"},
    {0xC7,0x87,0," VMPTRST Mq | VMPTRST Mq (F3) | RDSEED Rv (11B)"},
};
OP_ENTRY Grp10_B9h[8] = {
    {0xB9,0x80,0 | PF_Valid," UD1"},
    {0xB9,0x81,0 | PF_Valid," UD1"},
    {0xB9,0x82,0 | PF_Valid," UD1"},
    {0xB9,0x83,0 | PF_Valid," UD1"},
    {0xB9,0x84,0 | PF_Valid," UD1"},
    {0xB9,0x85,0 | PF_Valid," UD1"},
    {0xB9,0x86,0 | PF_Valid," UD1"},
    {0xB9,0x87,0 | PF_Valid," UD1"},
};
OP_ENTRY Grp11A_C6h[8] = {
    {0xC6,0x80,0 | PF_Valid," MOV Eb,Ib"},
    {0xC6,0x81,0 | PF_Valid,NULL},
    {0xC6,0x82,0 | PF_Valid,NULL},
    {0xC6,0x83,0 | PF_Valid,NULL},
    {0xC6,0x84,0 | PF_Valid,NULL},
    {0xC6,0x85,0 | PF_Valid,NULL},
    {0xC6,0x86,0 | PF_Valid,NULL},
    {0xC6,0x80,0 | PF_Valid," XABORT Ib (000),(11B)"},
};
OP_ENTRY Grp11B_C7h[8] = {
    {0xC7,0x80,0 | PF_Valid," MOV Ev,Iz"},
    {0xC7,0x81,0 | PF_Valid,NULL},
    {0xC7,0x82,0 | PF_Valid,NULL},
    {0xC7,0x83,0 | PF_Valid,NULL},
    {0xC7,0x84,0 | PF_Valid,NULL},
    {0xC7,0x85,0 | PF_Valid,NULL},
    {0xC7,0x86,0 | PF_Valid,NULL},
    {0xC7,0x80,0 | PF_Valid," XBEGIN Jz (000),(11B)"},
};
OP_ENTRY Grp12_71h[8] = {
    {0x71,0x80,0 | PF_Valid,NULL},
    {0x71,0x81,0 | PF_Valid,NULL},
    {0x71,0x82,0," psrlw Nq,Ib (11B) | vpsrlw Hx,Ux,Ib (66),(11B),(v1)"},
    {0x71,0x83,0 | PF_Valid,NULL},
    {0x71,0x84,0," psraw Nq,Ib (11B) | vpsraw Hx,Ux,Ib (66),(11B),(v1)"},
    {0x71,0x85,0 | PF_Valid,NULL},
    {0x71,0x86,0," psllw Nq,Ib (11B) | vpsllw Hx,Ux,Ib (66),(11B),(v1)"},
    {0x71,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp13_72h[8] = {
    {0x72,0x80,0 | PF_Valid | PF_Operand," vprord/q Hx,Wx,Ib (66),(ev)"},
    {0x72,0x81,0 | PF_Valid | PF_Operand," vprold/q Hx,Wx,Ib (66),(ev)"},
    {0x72,0x82,0," psrld Nq,Ib (11B) | vpsrld Hx,Ux,Ib (66),(11B),(v1)"},
    {0x72,0x83,0 | PF_Valid,NULL},
    {0x72,0x84,0," psrad Nq,Ib (11B) | vpsrad Hx,Ux,Ib (66),(11B),(v1) | vpsrad/q Hx,Ux,Ib (66),(evo)"},
    {0x72,0x85,0 | PF_Valid,NULL},
    {0x72,0x86,0," pslld Nq,Ib (11B) | vpslld Hx,Ux,Ib (66),(11B),(v1)"},
    {0x72,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp14_73h[8] = {
    {0x73,0x80,0 | PF_Valid,NULL},
    {0x73,0x81,0 | PF_Valid,NULL},
    {0x73,0x82,0," psrlq Nq,Ib (11B) | vpsrlq Hx,Ux,Ib (66),(11B),(v1)"},
    {0x73,0x83,0 | PF_Valid | PF_Operand," vpsrldq Hx,Ux,Ib (66),(11B),(v1)"},
    {0x73,0x84,0 | PF_Valid,NULL},
    {0x73,0x85,0 | PF_Valid,NULL},
    {0x73,0x86,0," psllq Nq,Ib (11B) | vpsllq Hx,Ux,Ib (66),(11B),(v1)"},
    {0x73,0x87,0 | PF_Valid | PF_Operand," vpslldq Hx,Ux,Ib (66),(11B),(v1)"},
};
OP_ENTRY Grp15_AEh[8] = {
    {0xAE,0x80,0," fxsave | RDFSBASE Ry (F3),(11B)"},
    {0xAE,0x81,0," fxstor | RDGSBASE Ry (F3),(11B)"},
    {0xAE,0x82,0," vldmxcsr Md (v1) | WRFSBASE Ry (F3),(11B)"},
    {0xAE,0x83,0," vstmxcsr Md (v1) | WRGSBASE Ry (F3),(11B)"},
    {0xAE,0x84,0," XSAVE | ptwrite Ey (F3),(11B)"},
    {0xAE,0x85,0," XRSTOR | lfence (11B) | INCSSPD/Q Ry (F3),(11B)"},
    {0xAE,0x86,0," XSAVEOPT | clwb (66) | mfence (11B) | TPAUSE Rd (66),(11B) | UMONITOR Rv (F3),(11B) | UMWAIT Rd (F2),(11B) | CLRSSBSY Mq (F3)"},
    {0xAE,0x87,0," clflush | clflushopt (66) | sfence (11B)"},
};
OP_ENTRY Grp16_18h[8] = {
    {0x18,0x80,0 | PF_Valid," prefetch NTA"},
    {0x18,0x81,0 | PF_Valid," prefetch T0"},
    {0x18,0x82,0 | PF_Valid," prefetch T1"},
    {0x18,0x83,0 | PF_Valid," prefetch T2"},
    {0x18,0x84,0 | PF_Valid,NULL},
    {0x18,0x85,0 | PF_Valid,NULL},
    {0x18,0x86,0 | PF_Valid,NULL},
    {0x18,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp17_F3h[8] = {
    {0xF3,0x80,0 | PF_Valid,NULL},
    {0xF3,0x81,0 | PF_Valid," BLSR By,Ey (v)"},
    {0xF3,0x82,0 | PF_Valid," BLSMSK By,Ey (v)"},
    {0xF3,0x83,0 | PF_Valid," BLSI By,Ey (v)"},
    {0xF3,0x84,0 | PF_Valid,NULL},
    {0xF3,0x85,0 | PF_Valid,NULL},
    {0xF3,0x86,0 | PF_Valid,NULL},
    {0xF3,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp18_C6h[8] = {
    {0xC6,0x80,0 | PF_Valid,NULL},
    {0xC6,0x81,0 | PF_Valid | PF_Operand," vgatherpf0dps/d Wx (66),(ev)"},
    {0xC6,0x82,0 | PF_Valid | PF_Operand," vgatherpf1dps/d Wx (66),(ev)"},
    {0xC6,0x83,0 | PF_Valid,NULL},
    {0xC6,0x84,0 | PF_Valid,NULL},
    {0xC6,0x85,0 | PF_Valid | PF_Operand," vscatterpf0dps/d Wx (66),(ev)"},
    {0xC6,0x86,0 | PF_Valid | PF_Operand," vscatterpf1dps/d Wx (66),(ev)"},
    {0xC6,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp19_C7h[8] = {
    {0xC7,0x80,0 | PF_Valid,NULL},
    {0xC7,0x81,0 | PF_Valid | PF_Operand," vgatherpf0qps/d Wx (66),(ev)"},
    {0xC7,0x82,0 | PF_Valid | PF_Operand," vgatherpf1qps/d Wx (66),(ev)"},
    {0xC7,0x83,0 | PF_Valid,NULL},
    {0xC7,0x84,0 | PF_Valid,NULL},
    {0xC7,0x85,0 | PF_Valid | PF_Operand," vscatterpf0qps/d Wx (66),(ev)"},
    {0xC7,0x86,0 | PF_Valid | PF_Operand," vscatterpf1qps/d Wx (66),(ev)"},
    {0xC7,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp20_1Ch[8] = {
    {0x1C,0x80,0 | PF_Valid," cldemote Mb"},
    {0x1C,0x81,0 | PF_Valid,NULL},
    {0x1C,0x82,0 | PF_Valid,NULL},
    {0x1C,0x83,0 | PF_Valid,NULL},
    {0x1C,0x84,0 | PF_Valid,NULL},
    {0x1C,0x85,0 | PF_Valid,NULL},
    {0x1C,0x86,0 | PF_Valid,NULL},
    {0x1C,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY Grp21_1Eh[8] = {
    {0x1E,0x80,0 | PF_Valid,NULL},
    {0x1E,0x81,0 | PF_Valid | PF_REP," RDSSPD/Q Ry (F3),(11B)"},
    {0x1E,0x82,0 | PF_Valid,NULL},
    {0x1E,0x83,0 | PF_Valid,NULL},
    {0x1E,0x84,0 | PF_Valid,NULL},
    {0x1E,0x85,0 | PF_Valid,NULL},
    {0x1E,0x86,0 | PF_Valid,NULL},
    {0x1E,0x87,0," ENDBR64 (F3),(010),(11B) | ENDBR32 (F3),(011),(11B)"},
};
OP_ENTRY GrpP_0Dh[8] = {
    {0x0D,0x80,0 | PF_Valid," PREFETCH"},
    {0x0D,0x81,0 | PF_Valid," PREFETCHW"},
    {0x0D,0x82,0 | PF_Valid,NULL},
    {0x0D,0x83,0 | PF_Valid,NULL},
    {0x0D,0x84,0 | PF_Valid,NULL},
    {0x0D,0x85,0 | PF_Valid,NULL},
    {0x0D,0x86,0 | PF_Valid,NULL},
    {0x0D,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY GrpPDLK_A6h[8] = {
    {0xA6,0x80,0 | PF_Valid," MONTMUL"},
    {0xA6,0x81,0 | PF_Valid," XSHA1"},
    {0xA6,0x82,0 | PF_Valid," XSHA2"},
    {0xA6,0x83,0 | PF_Valid,NULL},
    {0xA6,0x84,0 | PF_Valid,NULL},
    {0xA6,0x85,0 | PF_Valid,NULL},
    {0xA6,0x86,0 | PF_Valid,NULL},
    {0xA6,0x87,0 | PF_Valid,NULL},
};
OP_ENTRY GrpRNG_A7h[8] = {
    {0xA7,0x80,0 | PF_Valid," xstore-rng"},
    {0xA7,0x81,0 | PF_Valid," xcrypt-ecb"},
    {0xA7,0x82,0 | PF_Valid," xcrypt-cbc"},
    {0xA7,0x84,0 | PF_Valid," xcrypt-cfb"},
    {0xA7,0x85,0 | PF_Valid," xcrypt-ofb"},
    {0xA7,0x85,0 | PF_Valid,NULL},
    {0xA7,0x86,0 | PF_Valid,NULL},
    {0xA7,0x87,0 | PF_Valid,NULL},
};

OP_ENTRY OP_40[2] = {
    {0x40,0x00,0 | PF_Valid," INC eAX (i64)"},
    {0x40,0x00,0 | PF_Valid," REX (o64)"},
};
OP_ENTRY OP_41[2] = {
    {0x41,0x00,0 | PF_Valid," INC eCX (i64)"},
    {0x41,0x00,0 | PF_Valid," REX.B (o64)"},
};
OP_ENTRY OP_42[2] = {
    {0x42,0x00,0 | PF_Valid," INC eDX (i64)"},
    {0x42,0x00,0 | PF_Valid," REX.X (o64)"},
};
OP_ENTRY OP_43[2] = {
    {0x43,0x00,0 | PF_Valid," INC eBX (i64)"},
    {0x43,0x00,0 | PF_Valid," REX.XB (o64)"},
};
OP_ENTRY OP_44[2] = {
    {0x44,0x00,0 | PF_Valid," INC eSP (i64)"},
    {0x44,0x00,0 | PF_Valid," REX.R (o64)"},
};
OP_ENTRY OP_45[2] = {
    {0x45,0x00,0 | PF_Valid," INC eBP (i64)"},
    {0x45,0x00,0 | PF_Valid," REX.RB (o64)"},
};
OP_ENTRY OP_46[2] = {
    {0x46,0x00,0 | PF_Valid," INC eSI (i64)"},
    {0x46,0x00,0 | PF_Valid," REX.RX (o64)"},
};
OP_ENTRY OP_47[2] = {
    {0x47,0x00,0 | PF_Valid," INC eDI (i64)"},
    {0x47,0x00,0 | PF_Valid," REX.RXB (o64)"},
};
OP_ENTRY OP_48[2] = {
    {0x48,0x00,0 | PF_Valid," DEC eAX (i64)"},
    {0x48,0x00,0 | PF_Valid," REX.W (o64)"},
};
OP_ENTRY OP_49[2] = {
    {0x49,0x00,0 | PF_Valid," DEC eCX (i64)"},
    {0x49,0x00,0 | PF_Valid," REX.WB (o64)"},
};
OP_ENTRY OP_4A[2] = {
    {0x4a,0x00,0 | PF_Valid," DEC eDX (i64)"},
    {0x4a,0x00,0 | PF_Valid," REX.WX (o64)"},
};
OP_ENTRY OP_4B[2] = {
    {0x4b,0x00,0 | PF_Valid," DEC eBX (i64)"},
    {0x4b,0x00,0 | PF_Valid," REX.WXB (o64)"},
};
OP_ENTRY OP_4C[2] = {
    {0x4c,0x00,0 | PF_Valid," DEC eSP (i64)"},
    {0x4c,0x00,0 | PF_Valid," REX.WR (o64)"},
};
OP_ENTRY OP_4D[2] = {
    {0x4d,0x00,0 | PF_Valid," DEC eBP (i64)"},
    {0x4d,0x00,0 | PF_Valid," REX.WRB (o64)"},
};
OP_ENTRY OP_4E[2] = {
    {0x4e,0x00,0 | PF_Valid," DEC eSI (i64)"},
    {0x4e,0x00,0 | PF_Valid," REX.WRX (o64)"},
};
OP_ENTRY OP_4F[2] = {
    {0x4f,0x00,0 | PF_Valid," DEC eDI (i64)"},
    {0x4f,0x00,0 | PF_Valid," REX.WRXB (o64)"},
};
OP_ENTRY OP_62[2] = {
    {0x62,0x00,0 | PF_Valid," BOUND Gv,Ma (i64)"},
    {0x62,0x00,0 | PF_Valid," EVEX (Prefix)"},
};
OP_ENTRY OP_63[2] = {
    {0x63,0x00,0 | PF_Valid," ARPL Ew,Gw (i64)"},
    {0x63,0x00,0 | PF_Valid," MOVSXD Gv,Ev (o64)"},
};
OP_ENTRY OP_8F[1] = {
    {0x8f,0x00,0 | PF_Valid," POP Ev (d64)"},
};
OP_ENTRY OP_90[3] = {
    {0x90,0x00,0 | PF_Valid," NOP"},
    {0x90,0x00,0 | PF_Valid | PF_REP," PAUSE (F3)"},
    {0x90,0x00,0 | PF_Valid," XCHG rAX/r8,rAX"},
};
OP_ENTRY OP_C4[2] = {
    {0xc4,0x00,0 | PF_Valid," LES Gz,Mp (i64)"},
    {0xc4,0x00,0 | PF_Valid," VEX+2byte (Prefix)"},
};
OP_ENTRY OP_C5[2] = {
    {0xc5,0x00,0 | PF_Valid," LDS Gz,Mp (i64)"},
    {0xc5,0x00,0 | PF_Valid," VEX+1byte (Prefix)"},
};
OP_ENTRY OP_F2[2] = {
    {0xf2,0x00,0 | PF_Valid," REPNE (Prefix)"},
    {0xf2,0x00,0 | PF_Valid," XACQUIRE (Prefix)"},
};
OP_ENTRY OP_F3[2] = {
    {0xf3,0x00,0 | PF_Valid," REP/REPE (Prefix)"},
    {0xf3,0x00,0 | PF_Valid," XRELEASE (Prefix)"},
};
OP_ENTRY OP_0F09[2] = {
    {0x09,0x00,0 | PF_Valid," WBINVD"},
    {0x09,0x00,0 | PF_Valid | PF_REP," WBNOINVD (F3)"},
};
OP_ENTRY OP_0F10[4] = {
    {0x10,0x00,0 | PF_Valid," vmovups Vps,Wps"},
    {0x10,0x00,0 | PF_Valid | PF_Operand," vmovupd Vpd,Wpd (66)"},
    {0x10,0x00,0 | PF_Valid | PF_REP," vmovss Vx,Hx,Wss (F3),(v1)"},
    {0x10,0x00,0 | PF_Valid | PF_REPNE," vmovsd Vx,Hx,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F11[4] = {
    {0x11,0x00,0 | PF_Valid," vmovups Wps,Vps"},
    {0x11,0x00,0 | PF_Valid | PF_Operand," vmovupd Wpd,Vpd (66)"},
    {0x11,0x00,0 | PF_Valid | PF_REP," vmovss Wss,Hx,Vss (F3),(v1)"},
    {0x11,0x00,0 | PF_Valid | PF_REPNE," vmovsd Wsd,Hx,Vsd (F2),(v1)"},
};
OP_ENTRY OP_0F12[5] = {
    {0x12,0x00,0 | PF_Valid," vmovlps Vq,Hq,Mq (v1)"},
    {0x12,0x00,0 | PF_Valid," vmovhlps Vq,Hq,Uq (v1)"},
    {0x12,0x00,0 | PF_Valid | PF_Operand," vmovlpd Vq,Hq,Mq (66),(v1)"},
    {0x12,0x00,0 | PF_Valid | PF_REP," vmovsldup Vx,Wx (F3)"},
    {0x12,0x00,0 | PF_Valid | PF_REPNE," vmovddup Vx,Wx (F2)"},
};
OP_ENTRY OP_0F13[2] = {
    {0x13,0x00,0 | PF_Valid," vmovlps Mq,Vq (v1)"},
    {0x13,0x00,0 | PF_Valid | PF_Operand," vmovlpd Mq,Vq (66),(v1)"},
};
OP_ENTRY OP_0F14[2] = {
    {0x14,0x00,0 | PF_Valid," vunpcklps Vx,Hx,Wx"},
    {0x14,0x00,0 | PF_Valid | PF_Operand," vunpcklpd Vx,Hx,Wx (66)"},
};
OP_ENTRY OP_0F15[2] = {
    {0x15,0x00,0 | PF_Valid," vunpckhps Vx,Hx,Wx"},
    {0x15,0x00,0 | PF_Valid | PF_Operand," vunpckhpd Vx,Hx,Wx (66)"},
};
OP_ENTRY OP_0F16[4] = {
    {0x16,0x00,0 | PF_Valid," vmovhps Vdq,Hq,Mq (v1)"},
    {0x16,0x00,0 | PF_Valid," vmovlhps Vdq,Hq,Uq (v1)"},
    {0x16,0x00,0 | PF_Valid | PF_Operand," vmovhpd Vdq,Hq,Mq (66),(v1)"},
    {0x16,0x00,0 | PF_Valid | PF_REP," vmovshdup Vx,Wx (F3)"},
};
OP_ENTRY OP_0F17[2] = {
    {0x17,0x00,0 | PF_Valid," vmovhps Mq,Vq (v1)"},
    {0x17,0x00,0 | PF_Valid | PF_Operand," vmovhpd Mq,Vq (66),(v1)"},
};
OP_ENTRY OP_0F1A[4] = {
    {0x1a,0x00,0 | PF_Valid | PF_REP," BNDCL Gv,Ev (F3)"},
    {0x1a,0x00,0 | PF_Valid | PF_REPNE," BNDCU Gv,Ev (F2)"},
    {0x1a,0x00,0 | PF_Valid | PF_Operand," BNDMOV Gv,Ev (66)"},
    {0x1a,0x00,0 | PF_Valid," BNDLDX Gv,Ev"},
};
OP_ENTRY OP_0F1B[4] = {
    {0x1b,0x00,0 | PF_Valid | PF_REPNE," BNDCN Gv,Ev (F2)"},
    {0x1b,0x00,0 | PF_Valid | PF_Operand," BNDMOV Ev,Gv (66)"},
    {0x1b,0x00,0 | PF_Valid | PF_REP," BNDMK Gv,Ev (F3)"},
    {0x1b,0x00,0 | PF_Valid," BNDSTX Ev,Gv"},
};
OP_ENTRY OP_0F28[2] = {
    {0x28,0x00,0 | PF_Valid," vmovaps Vps,Wps"},
    {0x28,0x00,0 | PF_Valid | PF_Operand," vmovapd Vpd,Wpd (66)"},
};
OP_ENTRY OP_0F29[2] = {
    {0x29,0x00,0 | PF_Valid," vmovaps Wps,Vps"},
    {0x29,0x00,0 | PF_Valid | PF_Operand," vmovapd Wpd,Vpd (66)"},
};
OP_ENTRY OP_0F2A[4] = {
    {0x2a,0x00,0 | PF_Valid," cvtpi2ps Vps,Qpi"},
    {0x2a,0x00,0 | PF_Valid | PF_Operand," cvtpi2pd Vpd,Qpi (66)"},
    {0x2a,0x00,0 | PF_Valid | PF_REP," vcvtsi2ss Vss,Hss,Ey (F3),(v1)"},
    {0x2a,0x00,0 | PF_Valid | PF_REPNE," vcvtsi2sd Vsd,Hsd,Ey (F2),(v1)"},
};
OP_ENTRY OP_0F2B[2] = {
    {0x2b,0x00,0 | PF_Valid," vmovntps Mps,Vps"},
    {0x2b,0x00,0 | PF_Valid | PF_Operand," vmovntpd Mpd,Vpd (66)"},
};
OP_ENTRY OP_0F2C[4] = {
    {0x2c,0x00,0 | PF_Valid," cvttps2pi Ppi,Wps"},
    {0x2c,0x00,0 | PF_Valid | PF_Operand," cvttpd2pi Ppi,Wpd (66)"},
    {0x2c,0x00,0 | PF_Valid | PF_REP," vcvttss2si Gy,Wss (F3),(v1)"},
    {0x2c,0x00,0 | PF_Valid | PF_REPNE," vcvttsd2si Gy,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F2D[4] = {
    {0x2d,0x00,0 | PF_Valid," cvtps2pi Ppi,Wps"},
    {0x2d,0x00,0 | PF_Valid | PF_Operand," cvtpd2pi Qpi,Wpd (66)"},
    {0x2d,0x00,0 | PF_Valid | PF_REP," vcvtss2si Gy,Wss (F3),(v1)"},
    {0x2d,0x00,0 | PF_Valid | PF_REPNE," vcvtsd2si Gy,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F2E[2] = {
    {0x2e,0x00,0 | PF_Valid," vucomiss Vss,Wss (v1)"},
    {0x2e,0x00,0 | PF_Valid | PF_Operand," vucomisd  Vsd,Wsd (66),(v1)"},
};
OP_ENTRY OP_0F2F[2] = {
    {0x2f,0x00,0 | PF_Valid," vcomiss Vss,Wss (v1)"},
    {0x2f,0x00,0 | PF_Valid | PF_Operand," vcomisd  Vsd,Wsd (66),(v1)"},
};
OP_ENTRY OP_0F41[3] = {
    {0x41,0x00,0 | PF_Valid," CMOVNO Gv,Ev"},
    {0x41,0x00,0 | PF_Valid," kandw/q Vk,Hk,Uk"},
    {0x41,0x00,0 | PF_Valid | PF_Operand," kandb/d Vk,Hk,Uk (66)"},
};
OP_ENTRY OP_0F42[3] = {
    {0x42,0x00,0 | PF_Valid," CMOVB/C/NAE Gv,Ev"},
    {0x42,0x00,0 | PF_Valid," kandnw/q Vk,Hk,Uk"},
    {0x42,0x00,0 | PF_Valid | PF_Operand," kandnb/d Vk,Hk,Uk (66)"},
};
OP_ENTRY OP_0F44[3] = {
    {0x44,0x00,0 | PF_Valid," CMOVE/Z Gv,Ev"},
    {0x44,0x00,0 | PF_Valid," knotw/q Vk,Uk"},
    {0x44,0x00,0 | PF_Valid | PF_Operand," knotb/d Vk,Uk (66)"},
};
OP_ENTRY OP_0F45[3] = {
    {0x45,0x00,0 | PF_Valid," CMOVNE/NZ Gv,Ev"},
    {0x45,0x00,0 | PF_Valid," korw/q Vk,Hk,Uk"},
    {0x45,0x00,0 | PF_Valid | PF_Operand," korb/d Vk,Hk,Uk (66)"},
};
OP_ENTRY OP_0F46[3] = {
    {0x46,0x00,0 | PF_Valid," CMOVBE/NA Gv,Ev"},
    {0x46,0x00,0 | PF_Valid," kxnorw/q Vk,Hk,Uk"},
    {0x46,0x00,0 | PF_Valid | PF_Operand," kxnorb/d Vk,Hk,Uk (66)"},
};
OP_ENTRY OP_0F47[3] = {
    {0x47,0x00,0 | PF_Valid," CMOVA/NBE Gv,Ev"},
    {0x47,0x00,0 | PF_Valid," kxorw/q Vk,Hk,Uk"},
    {0x47,0x00,0 | PF_Valid | PF_Operand," kxorb/d Vk,Hk,Uk (66)"},
};
OP_ENTRY OP_0F4A[3] = {
    {0x4a,0x00,0 | PF_Valid," CMOVP/PE Gv,Ev"},
    {0x4a,0x00,0 | PF_Valid," kaddw/q Vk,Hk,Uk"},
    {0x4a,0x00,0 | PF_Valid | PF_Operand," kaddb/d Vk,Hk,Uk (66)"},
};
OP_ENTRY OP_0F4B[3] = {
    {0x4b,0x00,0 | PF_Valid," CMOVNP/PO Gv,Ev"},
    {0x4b,0x00,0 | PF_Valid | PF_Operand," kunpckbw Vk,Hk,Uk (66)"},
    {0x4b,0x00,0 | PF_Valid," kunpckwd/dq Vk,Hk,Uk"},
};
OP_ENTRY OP_0F50[2] = {
    {0x50,0x00,0 | PF_Valid," vmovmskps Gy,Ups"},
    {0x50,0x00,0 | PF_Valid | PF_Operand," vmovmskpd Gy,Upd (66)"},
};
OP_ENTRY OP_0F51[4] = {
    {0x51,0x00,0 | PF_Valid," vsqrtps Vps,Wps"},
    {0x51,0x00,0 | PF_Valid | PF_Operand," vsqrtpd Vpd,Wpd (66)"},
    {0x51,0x00,0 | PF_Valid | PF_REP," vsqrtss Vss,Hss,Wss (F3),(v1)"},
    {0x51,0x00,0 | PF_Valid | PF_REPNE," vsqrtsd Vsd,Hsd,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F52[2] = {
    {0x52,0x00,0 | PF_Valid," vrsqrtps Vps,Wps"},
    {0x52,0x00,0 | PF_Valid | PF_REP," vrsqrtss Vss,Hss,Wss (F3),(v1)"},
};
OP_ENTRY OP_0F53[2] = {
    {0x53,0x00,0 | PF_Valid," vrcpps Vps,Wps"},
    {0x53,0x00,0 | PF_Valid | PF_REP," vrcpss Vss,Hss,Wss (F3),(v1)"},
};
OP_ENTRY OP_0F54[2] = {
    {0x54,0x00,0 | PF_Valid," vandps Vps,Hps,Wps"},
    {0x54,0x00,0 | PF_Valid | PF_Operand," vandpd Vpd,Hpd,Wpd (66)"},
};
OP_ENTRY OP_0F55[2] = {
    {0x55,0x00,0 | PF_Valid," vandnps Vps,Hps,Wps"},
    {0x55,0x00,0 | PF_Valid | PF_Operand," vandnpd Vpd,Hpd,Wpd (66)"},
};
OP_ENTRY OP_0F56[2] = {
    {0x56,0x00,0 | PF_Valid," vorps Vps,Hps,Wps"},
    {0x56,0x00,0 | PF_Valid | PF_Operand," vorpd Vpd,Hpd,Wpd (66)"},
};
OP_ENTRY OP_0F57[2] = {
    {0x57,0x00,0 | PF_Valid," vxorps Vps,Hps,Wps"},
    {0x57,0x00,0 | PF_Valid | PF_Operand," vxorpd Vpd,Hpd,Wpd (66)"},
};
OP_ENTRY OP_0F58[4] = {
    {0x58,0x00,0 | PF_Valid," vaddps Vps,Hps,Wps"},
    {0x58,0x00,0 | PF_Valid | PF_Operand," vaddpd Vpd,Hpd,Wpd (66)"},
    {0x58,0x00,0 | PF_Valid | PF_REP," vaddss Vss,Hss,Wss (F3),(v1)"},
    {0x58,0x00,0 | PF_Valid | PF_REPNE," vaddsd Vsd,Hsd,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F59[4] = {
    {0x59,0x00,0 | PF_Valid," vmulps Vps,Hps,Wps"},
    {0x59,0x00,0 | PF_Valid | PF_Operand," vmulpd Vpd,Hpd,Wpd (66)"},
    {0x59,0x00,0 | PF_Valid | PF_REP," vmulss Vss,Hss,Wss (F3),(v1)"},
    {0x59,0x00,0 | PF_Valid | PF_REPNE," vmulsd Vsd,Hsd,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F5A[4] = {
    {0x5a,0x00,0 | PF_Valid," vcvtps2pd Vpd,Wps"},
    {0x5a,0x00,0 | PF_Valid | PF_Operand," vcvtpd2ps Vps,Wpd (66)"},
    {0x5a,0x00,0 | PF_Valid | PF_REP," vcvtss2sd Vsd,Hx,Wss (F3),(v1)"},
    {0x5a,0x00,0 | PF_Valid | PF_REPNE," vcvtsd2ss Vss,Hx,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F5B[4] = {
    {0x5b,0x00,0 | PF_Valid," vcvtdq2ps Vps,Wdq"},
    {0x5b,0x00,0 | PF_Valid," vcvtqq2ps Vps,Wqq (evo)"},
    {0x5b,0x00,0 | PF_Valid | PF_Operand," vcvtps2dq Vdq,Wps (66)"},
    {0x5b,0x00,0 | PF_Valid | PF_REP," vcvttps2dq Vdq,Wps (F3)"},
};
OP_ENTRY OP_0F5C[4] = {
    {0x5c,0x00,0 | PF_Valid," vsubps Vps,Hps,Wps"},
    {0x5c,0x00,0 | PF_Valid | PF_Operand," vsubpd Vpd,Hpd,Wpd (66)"},
    {0x5c,0x00,0 | PF_Valid | PF_REP," vsubss Vss,Hss,Wss (F3),(v1)"},
    {0x5c,0x00,0 | PF_Valid | PF_REPNE," vsubsd Vsd,Hsd,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F5D[4] = {
    {0x5d,0x00,0 | PF_Valid," vminps Vps,Hps,Wps"},
    {0x5d,0x00,0 | PF_Valid | PF_Operand," vminpd Vpd,Hpd,Wpd (66)"},
    {0x5d,0x00,0 | PF_Valid | PF_REP," vminss Vss,Hss,Wss (F3),(v1)"},
    {0x5d,0x00,0 | PF_Valid | PF_REPNE," vminsd Vsd,Hsd,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F5E[4] = {
    {0x5e,0x00,0 | PF_Valid," vdivps Vps,Hps,Wps"},
    {0x5e,0x00,0 | PF_Valid | PF_Operand," vdivpd Vpd,Hpd,Wpd (66)"},
    {0x5e,0x00,0 | PF_Valid | PF_REP," vdivss Vss,Hss,Wss (F3),(v1)"},
    {0x5e,0x00,0 | PF_Valid | PF_REPNE," vdivsd Vsd,Hsd,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F5F[4] = {
    {0x5f,0x00,0 | PF_Valid," vmaxps Vps,Hps,Wps"},
    {0x5f,0x00,0 | PF_Valid | PF_Operand," vmaxpd Vpd,Hpd,Wpd (66)"},
    {0x5f,0x00,0 | PF_Valid | PF_REP," vmaxss Vss,Hss,Wss (F3),(v1)"},
    {0x5f,0x00,0 | PF_Valid | PF_REPNE," vmaxsd Vsd,Hsd,Wsd (F2),(v1)"},
};
OP_ENTRY OP_0F60[2] = {
    {0x60,0x00,0 | PF_Valid," punpcklbw Pq,Qd"},
    {0x60,0x00,0 | PF_Valid | PF_Operand," vpunpcklbw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F61[2] = {
    {0x61,0x00,0 | PF_Valid," punpcklwd Pq,Qd"},
    {0x61,0x00,0 | PF_Valid | PF_Operand," vpunpcklwd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F62[2] = {
    {0x62,0x00,0 | PF_Valid," punpckldq Pq,Qd"},
    {0x62,0x00,0 | PF_Valid | PF_Operand," vpunpckldq Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F63[2] = {
    {0x63,0x00,0 | PF_Valid," packsswb Pq,Qq"},
    {0x63,0x00,0 | PF_Valid | PF_Operand," vpacksswb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F64[2] = {
    {0x64,0x00,0 | PF_Valid," pcmpgtb Pq,Qq"},
    {0x64,0x00,0 | PF_Valid | PF_Operand," vpcmpgtb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F65[2] = {
    {0x65,0x00,0 | PF_Valid," pcmpgtw Pq,Qq"},
    {0x65,0x00,0 | PF_Valid | PF_Operand," vpcmpgtw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F66[2] = {
    {0x66,0x00,0 | PF_Valid," pcmpgtd Pq,Qq"},
    {0x66,0x00,0 | PF_Valid | PF_Operand," vpcmpgtd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F67[2] = {
    {0x67,0x00,0 | PF_Valid," packuswb Pq,Qq"},
    {0x67,0x00,0 | PF_Valid | PF_Operand," vpackuswb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F68[2] = {
    {0x68,0x00,0 | PF_Valid," punpckhbw Pq,Qd"},
    {0x68,0x00,0 | PF_Valid | PF_Operand," vpunpckhbw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F69[2] = {
    {0x69,0x00,0 | PF_Valid," punpckhwd Pq,Qd"},
    {0x69,0x00,0 | PF_Valid | PF_Operand," vpunpckhwd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F6A[2] = {
    {0x6a,0x00,0 | PF_Valid," punpckhdq Pq,Qd"},
    {0x6a,0x00,0 | PF_Valid | PF_Operand," vpunpckhdq Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F6B[2] = {
    {0x6b,0x00,0 | PF_Valid," packssdw Pq,Qd"},
    {0x6b,0x00,0 | PF_Valid | PF_Operand," vpackssdw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F6E[2] = {
    {0x6e,0x00,0 | PF_Valid," movd/q Pd,Ey"},
    {0x6e,0x00,0 | PF_Valid | PF_Operand," vmovd/q Vy,Ey (66),(v1)"},
};
OP_ENTRY OP_0F6F[6] = {
    {0x6f,0x00,0 | PF_Valid," movq Pq,Qq"},
    {0x6f,0x00,0 | PF_Valid | PF_Operand," vmovdqa Vx,Wx (66)"},
    {0x6f,0x00,0 | PF_Valid | PF_Operand," vmovdqa32/64 Vx,Wx (66),(evo)"},
    {0x6f,0x00,0 | PF_Valid | PF_REP," vmovdqu Vx,Wx (F3)"},
    {0x6f,0x00,0 | PF_Valid | PF_REP," vmovdqu32/64 Vx,Wx (F3),(evo)"},
    {0x6f,0x00,0 | PF_Valid | PF_REPNE," vmovdqu8/16 Vx,Wx (F2),(ev)"},
};
OP_ENTRY OP_0F70[4] = {
    {0x70,0x00,0 | PF_Valid," pshufw Pq,Qq,Ib"},
    {0x70,0x00,0 | PF_Valid | PF_Operand," vpshufd Vx,Wx,Ib (66),(v1)"},
    {0x70,0x00,0 | PF_Valid | PF_REP," vpshufhw Vx,Wx,Ib (F3),(v1)"},
    {0x70,0x00,0 | PF_Valid | PF_REPNE," vpshuflw Vx,Wx,Ib (F2),(v1)"},
};
OP_ENTRY OP_0F74[2] = {
    {0x74,0x00,0 | PF_Valid," pcmpeqb Pq,Qq"},
    {0x74,0x00,0 | PF_Valid | PF_Operand," vpcmpeqb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F75[2] = {
    {0x75,0x00,0 | PF_Valid," pcmpeqw Pq,Qq"},
    {0x75,0x00,0 | PF_Valid | PF_Operand," vpcmpeqw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F76[2] = {
    {0x76,0x00,0 | PF_Valid," pcmpeqd Pq,Qq"},
    {0x76,0x00,0 | PF_Valid | PF_Operand," vpcmpeqd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F77[3] = {
    {0x77,0x00,0 | PF_Valid," emms"},
    {0x77,0x00,0 | PF_Valid," vzeroupper (v)"},
    {0x77,0x00,0 | PF_Valid," vzeroall (v)"},
};
OP_ENTRY OP_0F78[5] = {
    {0x78,0x00,0 | PF_Valid," VMREAD Ey,Gy"},
    {0x78,0x00,0 | PF_Valid," vcvttps2udq/pd2udq Vx,Wpd (evo)"},
    {0x78,0x00,0 | PF_Valid | PF_REPNE," vcvttsd2usi Gv,Wx (F2),(ev)"},
    {0x78,0x00,0 | PF_Valid | PF_REP," vcvttss2usi Gv,Wx (F3),(ev)"},
    {0x78,0x00,0 | PF_Valid | PF_Operand," vcvttps2uqq/pd2uqq Vx,Wx (66),(ev)"},
};
OP_ENTRY OP_0F79[5] = {
    {0x79,0x00,0 | PF_Valid," VMWRITE Gy,Ey"},
    {0x79,0x00,0 | PF_Valid," vcvtps2udq/pd2udq Vx,Wpd (evo)"},
    {0x79,0x00,0 | PF_Valid | PF_REPNE," vcvtsd2usi Gv,Wx (F2),(ev)"},
    {0x79,0x00,0 | PF_Valid | PF_REP," vcvtss2usi Gv,Wx (F3),(ev)"},
    {0x79,0x00,0 | PF_Valid | PF_Operand," vcvtps2uqq/pd2uqq Vx,Wx (66),(ev)"},
};
OP_ENTRY OP_0F7A[3] = {
    {0x7a,0x00,0 | PF_Valid | PF_REP," vcvtudq2pd/uqq2pd Vpd,Wx (F3),(ev)"},
    {0x7a,0x00,0 | PF_Valid | PF_REPNE," vcvtudq2ps/uqq2ps Vpd,Wx (F2),(ev)"},
    {0x7a,0x00,0 | PF_Valid | PF_Operand," vcvttps2qq/pd2qq Vx,Wx (66),(ev)"},
};
OP_ENTRY OP_0F7B[3] = {
    {0x7b,0x00,0 | PF_Valid | PF_REPNE," vcvtusi2sd Vpd,Hpd,Ev (F2),(ev)"},
    {0x7b,0x00,0 | PF_Valid | PF_REP," vcvtusi2ss Vps,Hps,Ev (F3),(ev)"},
    {0x7b,0x00,0 | PF_Valid | PF_Operand," vcvtps2qq/pd2qq Vx,Wx (66),(ev)"},
};
OP_ENTRY OP_0F7C[2] = {
    {0x7c,0x00,0 | PF_Valid | PF_Operand," vhaddpd Vpd,Hpd,Wpd (66)"},
    {0x7c,0x00,0 | PF_Valid | PF_REPNE," vhaddps Vps,Hps,Wps (F2)"},
};
OP_ENTRY OP_0F7D[2] = {
    {0x7d,0x00,0 | PF_Valid | PF_Operand," vhsubpd Vpd,Hpd,Wpd (66)"},
    {0x7d,0x00,0 | PF_Valid | PF_REPNE," vhsubps Vps,Hps,Wps (F2)"},
};
OP_ENTRY OP_0F7E[3] = {
    {0x7e,0x00,0 | PF_Valid," movd/q Ey,Pd"},
    {0x7e,0x00,0 | PF_Valid | PF_Operand," vmovd/q Ey,Vy (66),(v1)"},
    {0x7e,0x00,0 | PF_Valid | PF_REP," vmovq Vq,Wq (F3),(v1)"},
};
OP_ENTRY OP_0F7F[6] = {
    {0x7f,0x00,0 | PF_Valid," movq Qq,Pq"},
    {0x7f,0x00,0 | PF_Valid | PF_Operand," vmovdqa Wx,Vx (66)"},
    {0x7f,0x00,0 | PF_Valid | PF_Operand," vmovdqa32/64 Wx,Vx (66),(evo)"},
    {0x7f,0x00,0 | PF_Valid | PF_REP," vmovdqu Wx,Vx (F3)"},
    {0x7f,0x00,0 | PF_Valid | PF_REP," vmovdqu32/64 Wx,Vx (F3),(evo)"},
    {0x7f,0x00,0 | PF_Valid | PF_REPNE," vmovdqu8/16 Wx,Vx (F2),(ev)"},
};
OP_ENTRY OP_0F90[3] = {
    {0x90,0x00,0 | PF_Valid," SETO Eb"},
    {0x90,0x00,0 | PF_Valid," kmovw/q Vk,Wk"},
    {0x90,0x00,0 | PF_Valid | PF_Operand," kmovb/d Vk,Wk (66)"},
};
OP_ENTRY OP_0F91[3] = {
    {0x91,0x00,0 | PF_Valid," SETNO Eb"},
    {0x91,0x00,0 | PF_Valid," kmovw/q Mv,Vk"},
    {0x91,0x00,0 | PF_Valid | PF_Operand," kmovb/d Mv,Vk (66)"},
};
OP_ENTRY OP_0F92[4] = {
    {0x92,0x00,0 | PF_Valid," SETB/C/NAE Eb"},
    {0x92,0x00,0 | PF_Valid," kmovw Vk,Rv"},
    {0x92,0x00,0 | PF_Valid | PF_Operand," kmovb Vk,Rv (66)"},
    {0x92,0x00,0 | PF_Valid | PF_REPNE," kmovq/d Vk,Rv (F2)"},
};
OP_ENTRY OP_0F93[4] = {
    {0x93,0x00,0 | PF_Valid," SETAE/NB/NC Eb"},
    {0x93,0x00,0 | PF_Valid," kmovw Gv,Uk"},
    {0x93,0x00,0 | PF_Valid | PF_Operand," kmovb Gv,Uk (66)"},
    {0x93,0x00,0 | PF_Valid | PF_REPNE," kmovq/d Gv,Uk (F2)"},
};
OP_ENTRY OP_0F98[3] = {
    {0x98,0x00,0 | PF_Valid," SETS Eb"},
    {0x98,0x00,0 | PF_Valid," kortestw/q Vk,Uk"},
    {0x98,0x00,0 | PF_Valid | PF_Operand," kortestb/d Vk,Uk (66)"},
};
OP_ENTRY OP_0F99[3] = {
    {0x99,0x00,0 | PF_Valid," SETNS Eb"},
    {0x99,0x00,0 | PF_Valid," ktestw/q Vk,Uk"},
    {0x99,0x00,0 | PF_Valid | PF_Operand," ktestb/d Vk,Uk (66)"},
};
OP_ENTRY OP_0FB8[2] = {
    {0xb8,0x00,0 | PF_Valid," JMPE (!F3)"},
    {0xb8,0x00,0 | PF_Valid | PF_REP," POPCNT Gv,Ev (F3)"},
};
OP_ENTRY OP_0FBC[2] = {
    {0xbc,0x00,0 | PF_Valid," BSF Gv,Ev (!F3)"},
    {0xbc,0x00,0 | PF_Valid | PF_REP," TZCNT Gv,Ev (F3)"},
};
OP_ENTRY OP_0FBD[2] = {
    {0xbd,0x00,0 | PF_Valid," BSR Gv,Ev (!F3)"},
    {0xbd,0x00,0 | PF_Valid | PF_REP," LZCNT Gv,Ev (F3)"},
};
OP_ENTRY OP_0FC2[4] = {
    {0xc2,0x00,0 | PF_Valid," vcmpps Vps,Hps,Wps,Ib"},
    {0xc2,0x00,0 | PF_Valid | PF_Operand," vcmppd Vpd,Hpd,Wpd,Ib (66)"},
    {0xc2,0x00,0 | PF_Valid | PF_REP," vcmpss Vss,Hss,Wss,Ib (F3),(v1)"},
    {0xc2,0x00,0 | PF_Valid | PF_REPNE," vcmpsd Vsd,Hsd,Wsd,Ib (F2),(v1)"},
};
OP_ENTRY OP_0FC4[2] = {
    {0xc4,0x00,0 | PF_Valid," pinsrw Pq,Ry/Mw,Ib"},
    {0xc4,0x00,0 | PF_Valid | PF_Operand," vpinsrw Vdq,Hdq,Ry/Mw,Ib (66),(v1)"},
};
OP_ENTRY OP_0FC5[2] = {
    {0xc5,0x00,0 | PF_Valid," pextrw Gd,Nq,Ib"},
    {0xc5,0x00,0 | PF_Valid | PF_Operand," vpextrw Gd,Udq,Ib (66),(v1)"},
};
OP_ENTRY OP_0FC6[2] = {
    {0xc6,0x00,0 | PF_Valid," vshufps Vps,Hps,Wps,Ib"},
    {0xc6,0x00,0 | PF_Valid | PF_Operand," vshufpd Vpd,Hpd,Wpd,Ib (66)"},
};
OP_ENTRY OP_0FD0[2] = {
    {0xd0,0x00,0 | PF_Valid | PF_Operand," vaddsubpd Vpd,Hpd,Wpd (66)"},
    {0xd0,0x00,0 | PF_Valid | PF_REPNE," vaddsubps Vps,Hps,Wps (F2)"},
};
OP_ENTRY OP_0FD1[2] = {
    {0xd1,0x00,0 | PF_Valid," psrlw Pq,Qq"},
    {0xd1,0x00,0 | PF_Valid | PF_Operand," vpsrlw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FD2[2] = {
    {0xd2,0x00,0 | PF_Valid," psrld Pq,Qq"},
    {0xd2,0x00,0 | PF_Valid | PF_Operand," vpsrld Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FD3[2] = {
    {0xd3,0x00,0 | PF_Valid," psrlq Pq,Qq"},
    {0xd3,0x00,0 | PF_Valid | PF_Operand," vpsrlq Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FD4[2] = {
    {0xd4,0x00,0 | PF_Valid," paddq Pq,Qq"},
    {0xd4,0x00,0 | PF_Valid | PF_Operand," vpaddq Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FD5[2] = {
    {0xd5,0x00,0 | PF_Valid," pmullw Pq,Qq"},
    {0xd5,0x00,0 | PF_Valid | PF_Operand," vpmullw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FD6[3] = {
    {0xd6,0x00,0 | PF_Valid | PF_Operand," vmovq Wq,Vq (66),(v1)"},
    {0xd6,0x00,0 | PF_Valid | PF_REP," movq2dq Vdq,Nq (F3)"},
    {0xd6,0x00,0 | PF_Valid | PF_REPNE," movdq2q Pq,Uq (F2)"},
};
OP_ENTRY OP_0FD7[2] = {
    {0xd7,0x00,0 | PF_Valid," pmovmskb Gd,Nq"},
    {0xd7,0x00,0 | PF_Valid | PF_Operand," vpmovmskb Gd,Ux (66),(v1)"},
};
OP_ENTRY OP_0FD8[2] = {
    {0xd8,0x00,0 | PF_Valid," psubusb Pq,Qq"},
    {0xd8,0x00,0 | PF_Valid | PF_Operand," vpsubusb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FD9[2] = {
    {0xd9,0x00,0 | PF_Valid," psubusw Pq,Qq"},
    {0xd9,0x00,0 | PF_Valid | PF_Operand," vpsubusw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FDA[2] = {
    {0xda,0x00,0 | PF_Valid," pminub Pq,Qq"},
    {0xda,0x00,0 | PF_Valid | PF_Operand," vpminub Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FDB[3] = {
    {0xdb,0x00,0 | PF_Valid," pand Pq,Qq"},
    {0xdb,0x00,0 | PF_Valid | PF_Operand," vpand Vx,Hx,Wx (66),(v1)"},
    {0xdb,0x00,0 | PF_Valid | PF_Operand," vpandd/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0FDC[2] = {
    {0xdc,0x00,0 | PF_Valid," paddusb Pq,Qq"},
    {0xdc,0x00,0 | PF_Valid | PF_Operand," vpaddusb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FDD[2] = {
    {0xdd,0x00,0 | PF_Valid," paddusw Pq,Qq"},
    {0xdd,0x00,0 | PF_Valid | PF_Operand," vpaddusw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FDE[2] = {
    {0xde,0x00,0 | PF_Valid," pmaxub Pq,Qq"},
    {0xde,0x00,0 | PF_Valid | PF_Operand," vpmaxub Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FDF[3] = {
    {0xdf,0x00,0 | PF_Valid," pandn Pq,Qq"},
    {0xdf,0x00,0 | PF_Valid | PF_Operand," vpandn Vx,Hx,Wx (66),(v1)"},
    {0xdf,0x00,0 | PF_Valid | PF_Operand," vpandnd/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0FE0[2] = {
    {0xe0,0x00,0 | PF_Valid," pavgb Pq,Qq"},
    {0xe0,0x00,0 | PF_Valid | PF_Operand," vpavgb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FE1[2] = {
    {0xe1,0x00,0 | PF_Valid," psraw Pq,Qq"},
    {0xe1,0x00,0 | PF_Valid | PF_Operand," vpsraw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FE2[2] = {
    {0xe2,0x00,0 | PF_Valid," psrad Pq,Qq"},
    {0xe2,0x00,0 | PF_Valid | PF_Operand," vpsrad Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FE3[2] = {
    {0xe3,0x00,0 | PF_Valid," pavgw Pq,Qq"},
    {0xe3,0x00,0 | PF_Valid | PF_Operand," vpavgw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FE4[2] = {
    {0xe4,0x00,0 | PF_Valid," pmulhuw Pq,Qq"},
    {0xe4,0x00,0 | PF_Valid | PF_Operand," vpmulhuw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FE5[2] = {
    {0xe5,0x00,0 | PF_Valid," pmulhw Pq,Qq"},
    {0xe5,0x00,0 | PF_Valid | PF_Operand," vpmulhw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FE6[4] = {
    {0xe6,0x00,0 | PF_Valid | PF_Operand," vcvttpd2dq Vx,Wpd (66)"},
    {0xe6,0x00,0 | PF_Valid | PF_REP," vcvtdq2pd Vx,Wdq (F3)"},
    {0xe6,0x00,0 | PF_Valid | PF_REP," vcvtdq2pd/qq2pd Vx,Wdq (F3),(evo)"},
    {0xe6,0x00,0 | PF_Valid | PF_REPNE," vcvtpd2dq Vx,Wpd (F2)"},
};
OP_ENTRY OP_0FE7[2] = {
    {0xe7,0x00,0 | PF_Valid," movntq Mq,Pq"},
    {0xe7,0x00,0 | PF_Valid | PF_Operand," vmovntdq Mx,Vx (66)"},
};
OP_ENTRY OP_0FE8[2] = {
    {0xe8,0x00,0 | PF_Valid," psubsb Pq,Qq"},
    {0xe8,0x00,0 | PF_Valid | PF_Operand," vpsubsb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FE9[2] = {
    {0xe9,0x00,0 | PF_Valid," psubsw Pq,Qq"},
    {0xe9,0x00,0 | PF_Valid | PF_Operand," vpsubsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FEA[2] = {
    {0xea,0x00,0 | PF_Valid," pminsw Pq,Qq"},
    {0xea,0x00,0 | PF_Valid | PF_Operand," vpminsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FEB[3] = {
    {0xeb,0x00,0 | PF_Valid," por Pq,Qq"},
    {0xeb,0x00,0 | PF_Valid | PF_Operand," vpor Vx,Hx,Wx (66),(v1)"},
    {0xeb,0x00,0 | PF_Valid | PF_Operand," vpord/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0FEC[2] = {
    {0xec,0x00,0 | PF_Valid," paddsb Pq,Qq"},
    {0xec,0x00,0 | PF_Valid | PF_Operand," vpaddsb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FED[2] = {
    {0xed,0x00,0 | PF_Valid," paddsw Pq,Qq"},
    {0xed,0x00,0 | PF_Valid | PF_Operand," vpaddsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FEE[2] = {
    {0xee,0x00,0 | PF_Valid," pmaxsw Pq,Qq"},
    {0xee,0x00,0 | PF_Valid | PF_Operand," vpmaxsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FEF[3] = {
    {0xef,0x00,0 | PF_Valid," pxor Pq,Qq"},
    {0xef,0x00,0 | PF_Valid | PF_Operand," vpxor Vx,Hx,Wx (66),(v1)"},
    {0xef,0x00,0 | PF_Valid | PF_Operand," vpxord/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0FF1[2] = {
    {0xf1,0x00,0 | PF_Valid," psllw Pq,Qq"},
    {0xf1,0x00,0 | PF_Valid | PF_Operand," vpsllw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FF2[2] = {
    {0xf2,0x00,0 | PF_Valid," pslld Pq,Qq"},
    {0xf2,0x00,0 | PF_Valid | PF_Operand," vpslld Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FF3[2] = {
    {0xf3,0x00,0 | PF_Valid," psllq Pq,Qq"},
    {0xf3,0x00,0 | PF_Valid | PF_Operand," vpsllq Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FF4[2] = {
    {0xf4,0x00,0 | PF_Valid," pmuludq Pq,Qq"},
    {0xf4,0x00,0 | PF_Valid | PF_Operand," vpmuludq Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FF5[2] = {
    {0xf5,0x00,0 | PF_Valid," pmaddwd Pq,Qq"},
    {0xf5,0x00,0 | PF_Valid | PF_Operand," vpmaddwd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FF6[2] = {
    {0xf6,0x00,0 | PF_Valid," psadbw Pq,Qq"},
    {0xf6,0x00,0 | PF_Valid | PF_Operand," vpsadbw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FF7[2] = {
    {0xf7,0x00,0 | PF_Valid," maskmovq Pq,Nq"},
    {0xf7,0x00,0 | PF_Valid | PF_Operand," vmaskmovdqu Vx,Ux (66),(v1)"},
};
OP_ENTRY OP_0FF8[2] = {
    {0xf8,0x00,0 | PF_Valid," psubb Pq,Qq"},
    {0xf8,0x00,0 | PF_Valid | PF_Operand," vpsubb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FF9[2] = {
    {0xf9,0x00,0 | PF_Valid," psubw Pq,Qq"},
    {0xf9,0x00,0 | PF_Valid | PF_Operand," vpsubw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FFA[2] = {
    {0xfa,0x00,0 | PF_Valid," psubd Pq,Qq"},
    {0xfa,0x00,0 | PF_Valid | PF_Operand," vpsubd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FFB[2] = {
    {0xfb,0x00,0 | PF_Valid," psubq Pq,Qq"},
    {0xfb,0x00,0 | PF_Valid | PF_Operand," vpsubq Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FFC[2] = {
    {0xfc,0x00,0 | PF_Valid," paddb Pq,Qq"},
    {0xfc,0x00,0 | PF_Valid | PF_Operand," vpaddb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FFD[2] = {
    {0xfd,0x00,0 | PF_Valid," paddw Pq,Qq"},
    {0xfd,0x00,0 | PF_Valid | PF_Operand," vpaddw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0FFE[2] = {
    {0xfe,0x00,0 | PF_Valid," paddd Pq,Qq"},
    {0xfe,0x00,0 | PF_Valid | PF_Operand," vpaddd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3800[2] = {
    {0x00,0x00,0 | PF_Valid," pshufb Pq,Qq"},
    {0x00,0x00,0 | PF_Valid | PF_Operand," vpshufb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3801[2] = {
    {0x01,0x00,0 | PF_Valid," phaddw Pq,Qq"},
    {0x01,0x00,0 | PF_Valid | PF_Operand," vphaddw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3802[2] = {
    {0x02,0x00,0 | PF_Valid," phaddd Pq,Qq"},
    {0x02,0x00,0 | PF_Valid | PF_Operand," vphaddd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3803[2] = {
    {0x03,0x00,0 | PF_Valid," phaddsw Pq,Qq"},
    {0x03,0x00,0 | PF_Valid | PF_Operand," vphaddsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3804[2] = {
    {0x04,0x00,0 | PF_Valid," pmaddubsw Pq,Qq"},
    {0x04,0x00,0 | PF_Valid | PF_Operand," vpmaddubsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3805[2] = {
    {0x05,0x00,0 | PF_Valid," phsubw Pq,Qq"},
    {0x05,0x00,0 | PF_Valid | PF_Operand," vphsubw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3806[2] = {
    {0x06,0x00,0 | PF_Valid," phsubd Pq,Qq"},
    {0x06,0x00,0 | PF_Valid | PF_Operand," vphsubd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3807[2] = {
    {0x07,0x00,0 | PF_Valid," phsubsw Pq,Qq"},
    {0x07,0x00,0 | PF_Valid | PF_Operand," vphsubsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3808[2] = {
    {0x08,0x00,0 | PF_Valid," psignb Pq,Qq"},
    {0x08,0x00,0 | PF_Valid | PF_Operand," vpsignb Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3809[2] = {
    {0x09,0x00,0 | PF_Valid," psignw Pq,Qq"},
    {0x09,0x00,0 | PF_Valid | PF_Operand," vpsignw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F380A[2] = {
    {0x0a,0x00,0 | PF_Valid," psignd Pq,Qq"},
    {0x0a,0x00,0 | PF_Valid | PF_Operand," vpsignd Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F380B[2] = {
    {0x0b,0x00,0 | PF_Valid," pmulhrsw Pq,Qq"},
    {0x0b,0x00,0 | PF_Valid | PF_Operand," vpmulhrsw Vx,Hx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3810[3] = {
    {0x10,0x00,0 | PF_Valid | PF_Operand," pblendvb Vdq,Wdq (66)"},
    {0x10,0x00,0 | PF_Valid | PF_Operand," vpsrlvw Vx,Hx,Wx (66),(evo)"},
    {0x10,0x00,0 | PF_Valid | PF_REP," vpmovuswb Wx,Vx (F3),(ev)"},
};
OP_ENTRY OP_0F3811[2] = {
    {0x11,0x00,0 | PF_Valid | PF_REP," vpmovusdb Wx,Vd (F3),(ev)"},
    {0x11,0x00,0 | PF_Valid | PF_Operand," vpsravw Vx,Hx,Wx (66),(ev)"},
};
OP_ENTRY OP_0F3812[2] = {
    {0x12,0x00,0 | PF_Valid | PF_REP," vpmovusqb Wx,Vq (F3),(ev)"},
    {0x12,0x00,0 | PF_Valid | PF_Operand," vpsllvw Vx,Hx,Wx (66),(ev)"},
};
OP_ENTRY OP_0F3813[2] = {
    {0x13,0x00,0 | PF_Valid | PF_Operand," vcvtph2ps Vx,Wx (66),(v)"},
    {0x13,0x00,0 | PF_Valid | PF_REP," vpmovusdw Wx,Vd (F3),(ev)"},
};
OP_ENTRY OP_0F3814[3] = {
    {0x14,0x00,0 | PF_Valid | PF_Operand," blendvps Vdq,Wdq (66)"},
    {0x14,0x00,0 | PF_Valid | PF_REP," vpmovusqw Wx,Vq (F3),(ev)"},
    {0x14,0x00,0 | PF_Valid | PF_Operand," vprorvd/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3815[3] = {
    {0x15,0x00,0 | PF_Valid | PF_Operand," blendvpd Vdq,Wdq (66)"},
    {0x15,0x00,0 | PF_Valid | PF_REP," vpmovusqd Wx,Vq (F3),(ev)"},
    {0x15,0x00,0 | PF_Valid | PF_Operand," vprolvd/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3816[2] = {
    {0x16,0x00,0 | PF_Valid | PF_Operand," vpermps Vqq,Hqq,Wqq (66),(v)"},
    {0x16,0x00,0 | PF_Valid | PF_Operand," vpermps/d Vqq,Hqq,Wqq (66),(evo)"},
};
OP_ENTRY OP_0F3819[2] = {
    {0x19,0x00,0 | PF_Valid | PF_Operand," vbroadcastsd Vqq,Wq (66),(v)"},
    {0x19,0x00,0 | PF_Valid | PF_Operand," vbroadcastf32x2 Vqq,Wq (66),(evo)"},
};
OP_ENTRY OP_0F381A[2] = {
    {0x1a,0x00,0 | PF_Valid | PF_Operand," vbroadcastf128 Vqq,Mdq (66),(v)"},
    {0x1a,0x00,0 | PF_Valid | PF_Operand," vbroadcastf32x4/64x2 Vqq,Wq (66),(evo)"},
};
OP_ENTRY OP_0F381C[2] = {
    {0x1c,0x00,0 | PF_Valid," pabsb Pq,Qq"},
    {0x1c,0x00,0 | PF_Valid | PF_Operand," vpabsb Vx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F381D[2] = {
    {0x1d,0x00,0 | PF_Valid," pabsw Pq,Qq"},
    {0x1d,0x00,0 | PF_Valid | PF_Operand," vpabsw Vx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F381E[2] = {
    {0x1e,0x00,0 | PF_Valid," pabsd Pq,Qq"},
    {0x1e,0x00,0 | PF_Valid | PF_Operand," vpabsd Vx,Wx (66),(v1)"},
};
OP_ENTRY OP_0F3820[2] = {
    {0x20,0x00,0 | PF_Valid | PF_Operand," vpmovsxbw Vx,Ux/Mq (66),(v1)"},
    {0x20,0x00,0 | PF_Valid | PF_REP," vpmovswb Wx,Vx (F3),(ev)"},
};
OP_ENTRY OP_0F3821[2] = {
    {0x21,0x00,0 | PF_Valid | PF_Operand," vpmovsxbd Vx,Ux/Md (66),(v1)"},
    {0x21,0x00,0 | PF_Valid | PF_REP," vpmovsdb Wx,Vd (F3),(ev)"},
};
OP_ENTRY OP_0F3822[2] = {
    {0x22,0x00,0 | PF_Valid | PF_Operand," vpmovsxbq Vx,Ux/Mw (66),(v1)"},
    {0x22,0x00,0 | PF_Valid | PF_REP," vpmovsqb Wx,Vq (F3),(ev)"},
};
OP_ENTRY OP_0F3823[2] = {
    {0x23,0x00,0 | PF_Valid | PF_Operand," vpmovsxwd Vx,Ux/Mq (66),(v1)"},
    {0x23,0x00,0 | PF_Valid | PF_REP," vpmovsdw Wx,Vd (F3),(ev)"},
};
OP_ENTRY OP_0F3824[2] = {
    {0x24,0x00,0 | PF_Valid | PF_Operand," vpmovsxwq Vx,Ux/Md (66),(v1)"},
    {0x24,0x00,0 | PF_Valid | PF_REP," vpmovsqw Wx,Vq (F3),(ev)"},
};
OP_ENTRY OP_0F3825[2] = {
    {0x25,0x00,0 | PF_Valid | PF_Operand," vpmovsxdq Vx,Ux/Mq (66),(v1)"},
    {0x25,0x00,0 | PF_Valid | PF_REP," vpmovsqd Wx,Vq (F3),(ev)"},
};
OP_ENTRY OP_0F3826[2] = {
    {0x26,0x00,0 | PF_Valid | PF_Operand," vptestmb/w Vk,Hx,Wx (66),(ev)"},
    {0x26,0x00,0 | PF_Valid | PF_REP," vptestnmb/w Vk,Hx,Wx (F3),(ev)"},
};
OP_ENTRY OP_0F3827[2] = {
    {0x27,0x00,0 | PF_Valid | PF_Operand," vptestmd/q Vk,Hx,Wx (66),(ev)"},
    {0x27,0x00,0 | PF_Valid | PF_REP," vptestnmd/q Vk,Hx,Wx (F3),(ev)"},
};
OP_ENTRY OP_0F3828[2] = {
    {0x28,0x00,0 | PF_Valid | PF_Operand," vpmuldq Vx,Hx,Wx (66),(v1)"},
    {0x28,0x00,0 | PF_Valid | PF_REP," vpmovm2b/w Vx,Uk (F3),(ev)"},
};
OP_ENTRY OP_0F3829[2] = {
    {0x29,0x00,0 | PF_Valid | PF_Operand," vpcmpeqq Vx,Hx,Wx (66),(v1)"},
    {0x29,0x00,0 | PF_Valid | PF_REP," vpmovb2m/w2m Vk,Ux (F3),(ev)"},
};
OP_ENTRY OP_0F382A[2] = {
    {0x2a,0x00,0 | PF_Valid | PF_Operand," vmovntdqa Vx,Mx (66),(v1)"},
    {0x2a,0x00,0 | PF_Valid | PF_REP," vpbroadcastmb2q Vx,Uk (F3),(ev)"},
};
OP_ENTRY OP_0F382C[2] = {
    {0x2c,0x00,0 | PF_Valid | PF_Operand," vmaskmovps Vx,Hx,Mx (66),(v)"},
    {0x2c,0x00,0 | PF_Valid | PF_Operand," vscalefps/d Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F382D[2] = {
    {0x2d,0x00,0 | PF_Valid | PF_Operand," vmaskmovpd Vx,Hx,Mx (66),(v)"},
    {0x2d,0x00,0 | PF_Valid | PF_Operand," vscalefss/d Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3830[2] = {
    {0x30,0x00,0 | PF_Valid | PF_Operand," vpmovzxbw Vx,Ux/Mq (66),(v1)"},
    {0x30,0x00,0 | PF_Valid | PF_REP," vpmovwb Wx,Vx (F3),(ev)"},
};
OP_ENTRY OP_0F3831[2] = {
    {0x31,0x00,0 | PF_Valid | PF_Operand," vpmovzxbd Vx,Ux/Md (66),(v1)"},
    {0x31,0x00,0 | PF_Valid | PF_REP," vpmovdb Wx,Vd (F3),(ev)"},
};
OP_ENTRY OP_0F3832[2] = {
    {0x32,0x00,0 | PF_Valid | PF_Operand," vpmovzxbq Vx,Ux/Mw (66),(v1)"},
    {0x32,0x00,0 | PF_Valid | PF_REP," vpmovqb Wx,Vq (F3),(ev)"},
};
OP_ENTRY OP_0F3833[2] = {
    {0x33,0x00,0 | PF_Valid | PF_Operand," vpmovzxwd Vx,Ux/Mq (66),(v1)"},
    {0x33,0x00,0 | PF_Valid | PF_REP," vpmovdw Wx,Vd (F3),(ev)"},
};
OP_ENTRY OP_0F3834[2] = {
    {0x34,0x00,0 | PF_Valid | PF_Operand," vpmovzxwq Vx,Ux/Md (66),(v1)"},
    {0x34,0x00,0 | PF_Valid | PF_REP," vpmovqw Wx,Vq (F3),(ev)"},
};
OP_ENTRY OP_0F3835[2] = {
    {0x35,0x00,0 | PF_Valid | PF_Operand," vpmovzxdq Vx,Ux/Mq (66),(v1)"},
    {0x35,0x00,0 | PF_Valid | PF_REP," vpmovqd Wx,Vq (F3),(ev)"},
};
OP_ENTRY OP_0F3836[2] = {
    {0x36,0x00,0 | PF_Valid | PF_Operand," vpermd Vqq,Hqq,Wqq (66),(v)"},
    {0x36,0x00,0 | PF_Valid | PF_Operand," vpermd/q Vqq,Hqq,Wqq (66),(evo)"},
};
OP_ENTRY OP_0F3838[2] = {
    {0x38,0x00,0 | PF_Valid | PF_Operand," vpminsb Vx,Hx,Wx (66),(v1)"},
    {0x38,0x00,0 | PF_Valid | PF_REP," vpmovm2d/q Vx,Uk (F3),(ev)"},
};
OP_ENTRY OP_0F3839[3] = {
    {0x39,0x00,0 | PF_Valid | PF_Operand," vpminsd Vx,Hx,Wx (66),(v1)"},
    {0x39,0x00,0 | PF_Valid | PF_Operand," vpminsd/q Vx,Hx,Wx (66),(evo)"},
    {0x39,0x00,0 | PF_Valid | PF_REP," vpmovd2m/q2m Vk,Ux (F3),(ev)"},
};
OP_ENTRY OP_0F383A[2] = {
    {0x3a,0x00,0 | PF_Valid | PF_Operand," vpminuw Vx,Hx,Wx (66),(v1)"},
    {0x3a,0x00,0 | PF_Valid | PF_REP," vpbroadcastmw2d Vx,Uk (F3),(ev)"},
};
OP_ENTRY OP_0F383B[2] = {
    {0x3b,0x00,0 | PF_Valid | PF_Operand," vpminud Vx,Hx,Wx (66),(v1)"},
    {0x3b,0x00,0 | PF_Valid | PF_Operand," vpminud/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F383D[2] = {
    {0x3d,0x00,0 | PF_Valid | PF_Operand," vpmaxsd Vx,Hx,Wx (66),(v1)"},
    {0x3d,0x00,0 | PF_Valid | PF_Operand," vpmaxsd/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F383F[2] = {
    {0x3f,0x00,0 | PF_Valid | PF_Operand," vpmaxud Vx,Hx,Wx (66),(v1)"},
    {0x3f,0x00,0 | PF_Valid | PF_Operand," vpmaxud/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3840[2] = {
    {0x40,0x00,0 | PF_Valid | PF_Operand," vpmulld Vx,Hx,Wx (66),(v1)"},
    {0x40,0x00,0 | PF_Valid | PF_Operand," vpmulld/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3846[2] = {
    {0x46,0x00,0 | PF_Valid | PF_Operand," vpsravd Vx,Hx,Wx (66),(v)"},
    {0x46,0x00,0 | PF_Valid | PF_Operand," vpsravd/q Vx,Hx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3852[3] = {
    {0x52,0x00,0 | PF_Valid | PF_REP," vdpbf16ps Vx,Hx,Wx (F3),(ev)"},
    {0x52,0x00,0 | PF_Valid | PF_Operand," vpdpwssd Vx,Hx,Wx (66),(ev)"},
    {0x52,0x00,0 | PF_Valid | PF_REPNE," vp4dpwssd Vdqq,Hdqq,Wdq (F2),(ev)"},
};
OP_ENTRY OP_0F3853[2] = {
    {0x53,0x00,0 | PF_Valid | PF_Operand," vpdpwssds Vx,Hx,Wx (66),(ev)"},
    {0x53,0x00,0 | PF_Valid | PF_REPNE," vp4dpwssds Vdqq,Hdqq,Wdq (F2),(ev)"},
};
OP_ENTRY OP_0F3857[2] = {
    {0x57,0x00,0 | PF_Valid,""},
    {0x57,0x00,0 | PF_Valid | PF_Operand," vbroadcasti32x2 Vx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3858[2] = {
    {0x58,0x00,0 | PF_Valid | PF_Operand," vpbroadcastd Vx,Wx (66),(v)"},
    {0x58,0x00,0 | PF_Valid | PF_Operand," vbroadcasti32x4/64x2 Vx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F385A[2] = {
    {0x5a,0x00,0 | PF_Valid | PF_Operand," vbroadcasti128 Vqq,Mdq (66),(v)"},
    {0x5a,0x00,0 | PF_Valid | PF_Operand," vbroadcasti32x4/64x2 Vx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3872[2] = {
    {0x72,0x00,0 | PF_Valid | PF_REPNE," vcvtne2ps2bf16 Vx,Hx,Wx (F2),(ev)"},
    {0x72,0x00,0 | PF_Valid | PF_REP," vcvtneps2bf16 Vx,Wx (F3),(ev)"},
};
OP_ENTRY OP_0F3890[2] = {
    {0x90,0x00,0 | PF_Valid | PF_Operand," vgatherdd/q Vx,Hx,Wx (66),(v)"},
    {0x90,0x00,0 | PF_Valid | PF_Operand," vpgatherdd/q Vx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3891[2] = {
    {0x91,0x00,0 | PF_Valid | PF_Operand," vgatherqd/q Vx,Hx,Wx (66),(v)"},
    {0x91,0x00,0 | PF_Valid | PF_Operand," vpgatherqd/q Vx,Wx (66),(evo)"},
};
OP_ENTRY OP_0F3898[2] = {
    {0x98,0x00,0 | PF_Valid | PF_Operand," vfmadd132ps/d Vx,Hx,Wx (66),(v)"},
    {0x98,0x00,0 | PF_Valid | PF_REPNE," v4fmaddps Vdqq,Hdqq,Wdq (F2),(ev)"},
};
OP_ENTRY OP_0F3899[2] = {
    {0x99,0x00,0 | PF_Valid | PF_Operand," vfmadd132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0x99,0x00,0 | PF_Valid | PF_REPNE," v4fmaddss Vdq,Hdq,Wdq (F2),(ev)"},
};
OP_ENTRY OP_0F389A[2] = {
    {0x9a,0x00,0 | PF_Valid | PF_Operand," vfmsub132ps/d Vx,Hx,Wx (66),(v)"},
    {0x9a,0x00,0 | PF_Valid | PF_REPNE," v4fmaddps Vdqq,Hdqq,Wdq (F2),(ev)"},
};
OP_ENTRY OP_0F389B[2] = {
    {0x9b,0x00,0 | PF_Valid | PF_Operand," vfmsub132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0x9b,0x00,0 | PF_Valid | PF_REPNE," v4fmaddss Vdq,Hdq,Wdq (F2),(ev)"},
};

// Grp07_0F01
OP_ENTRY OP_0F01_0[7] = {
    {0x01,0x80,0 | PF_Valid," SGDT Ms"},
    {0x01,0x80,0 | PF_Valid," VMCALL (001),(11B)"},
    {0x01,0x80,0 | PF_Valid," VMLAUNCH (010),(11B)"},
    {0x01,0x80,0 | PF_Valid," VMRESUME (011),(11B)"},
    {0x01,0x80,0 | PF_Valid," VMXOFF (100),(11B)"},
    {0x01,0x80,0 | PF_Valid," PCONFIG (101),(11B)"},
    {0x01,0x80,0 | PF_Valid," ENCLV (000),(11B)"},
};
OP_ENTRY OP_0F01_1[6] = {
    {0x01,0x81,0 | PF_Valid," SIDT Ms"},
    {0x01,0x81,0 | PF_Valid," MONITOR (000),(11B)"},
    {0x01,0x81,0 | PF_Valid," MWAIT (001),(11B)"},
    {0x01,0x81,0 | PF_Valid," CLAC (010),(11B)"},
    {0x01,0x81,0 | PF_Valid," STAC (011),(11B)"},
    {0x01,0x81,0 | PF_Valid," ENCLS (111),(11B)"},
};
OP_ENTRY OP_0F01_2[7] = {
    {0x01,0x82,0 | PF_Valid," LGDT Ms"},
    {0x01,0x82,0 | PF_Valid," XGETBV (000),(11B)"},
    {0x01,0x82,0 | PF_Valid," XSETBV (001),(11B)"},
    {0x01,0x82,0 | PF_Valid," VMFUNC (100),(11B)"},
    {0x01,0x82,0 | PF_Valid," XEND (101)(11B)"},
    {0x01,0x82,0 | PF_Valid," XTEST (110)(11B)"},
    {0x01,0x82,0 | PF_Valid," ENCLU (111),(11B)"},
};
OP_ENTRY OP_0F01_5[5] = {
    {0x01,0x85,0 | PF_Valid," rdpkru (110),(11B)"},
    {0x01,0x85,0 | PF_Valid," wrpkru (111),(11B)"},
    {0x01,0x85,0 | PF_Valid | PF_REP," SAVEPREVSSP (F3),(010),(11B)"},
    {0x01,0x85,0 | PF_Valid | PF_REP," RSTORSSP Mq (F3)"},
    {0x01,0x85,0 | PF_Valid | PF_REP," SETSSBSY (F3),(000),(11B)"},
};
OP_ENTRY OP_0F01_7[3] = {
    {0x01,0x87,0 | PF_Valid," INVLPG Mb"},
    {0x01,0x87,0 | PF_Valid," SWAPGS (o64),(000),(11B)"},
    {0x01,0x87,0 | PF_Valid," RDTSCP (001),(11B)"},
};
// Grp09_0FC7
OP_ENTRY OP_0FC7_6[4] = {
    {0xc7,0x86,0 | PF_Valid," VMPTRLD Mq"},
    {0xc7,0x86,0 | PF_Valid | PF_Operand," VMCLEAR Mq (66)"},
    {0xc7,0x86,0 | PF_Valid | PF_REP," VMXON Mq (F3)"},
    {0xc7,0x86,0 | PF_Valid," RDRAND Rv (11B)"},
};
OP_ENTRY OP_0FC7_7[3] = {
    {0xc7,0x87,0 | PF_Valid," VMPTRST Mq"},
    {0xc7,0x87,0 | PF_Valid | PF_REP," VMPTRST Mq (F3)"},
    {0xc7,0x87,0 | PF_Valid," RDSEED Rv (11B)"},
};
// Grp12_0F71
OP_ENTRY OP_0F71_2[2] = {
    {0x71,0x82,0 | PF_Valid," psrlw Nq,Ib (11B)"},
    {0x71,0x82,0 | PF_Valid | PF_Operand," vpsrlw Hx,Ux,Ib (66),(11B),(v1)"},
};
OP_ENTRY OP_0F71_4[2] = {
    {0x71,0x84,0 | PF_Valid," psraw Nq,Ib (11B)"},
    {0x71,0x84,0 | PF_Valid | PF_Operand," vpsraw Hx,Ux,Ib (66),(11B),(v1)"},
};
OP_ENTRY OP_0F71_6[2] = {
    {0x71,0x86,0 | PF_Valid," psllw Nq,Ib (11B)"},
    {0x71,0x86,0 | PF_Valid | PF_Operand," vpsllw Hx,Ux,Ib (66),(11B),(v1)"},
};
// Grp13_0F72
OP_ENTRY OP_0F72_2[2] = {
    {0x72,0x82,0 | PF_Valid," psrld Nq,Ib (11B)"},
    {0x72,0x82,0 | PF_Valid | PF_Operand," vpsrld Hx,Ux,Ib (66),(11B),(v1)"},
};
OP_ENTRY OP_0F72_4[3] = {
    {0x72,0x84,0 | PF_Valid," psrad Nq,Ib (11B)"},
    {0x72,0x84,0 | PF_Valid | PF_Operand," vpsrad Hx,Ux,Ib (66),(11B),(v1)"},
    {0x72,0x84,0 | PF_Valid | PF_Operand," vpsrad/q Hx,Ux,Ib (66),(evo)"},
};
OP_ENTRY OP_0F72_6[2] = {
    {0x72,0x86,0 | PF_Valid," pslld Nq,Ib (11B)"},
    {0x72,0x86,0 | PF_Valid | PF_Operand," vpslld Hx,Ux,Ib (66),(11B),(v1)"},
};
// Grp14_0F73
OP_ENTRY OP_0F73_2[2] = {
    {0x73,0x82,0 | PF_Valid," psrlq Nq,Ib (11B)"},
    {0x73,0x82,0 | PF_Valid | PF_Operand," vpsrlq Hx,Ux,Ib (66),(11B),(v1)"},
};
OP_ENTRY OP_0F73_6[2] = {
    {0x73,0x86,0 | PF_Valid," psllq Nq,Ib (11B)"},
    {0x73,0x86,0 | PF_Valid | PF_Operand," vpsllq Hx,Ux,Ib (66),(11B),(v1)"},
};
// Grp15_0FAE
OP_ENTRY OP_0FAE_0[2] = {
    {0xae,0x80,0 | PF_Valid," fxsave"},
    {0xae,0x80,0 | PF_Valid | PF_REP," RDFSBASE Ry (F3),(11B)"},
};
OP_ENTRY OP_0FAE_1[2] = {
    {0xae,0x81,0 | PF_Valid," fxstor"},
    {0xae,0x81,0 | PF_Valid | PF_REP," RDGSBASE Ry (F3),(11B)"},
};
OP_ENTRY OP_0FAE_2[2] = {
    {0xae,0x82,0 | PF_Valid," vldmxcsr Md (v1)"},
    {0xae,0x82,0 | PF_Valid | PF_REP," WRFSBASE Ry (F3),(11B)"},
};
OP_ENTRY OP_0FAE_3[2] = {
    {0xae,0x83,0 | PF_Valid," vstmxcsr Md (v1)"},
    {0xae,0x83,0 | PF_Valid | PF_REP," WRGSBASE Ry (F3),(11B)"},
};
OP_ENTRY OP_0FAE_4[2] = {
    {0xae,0x84,0 | PF_Valid," XSAVE"},
    {0xae,0x84,0 | PF_Valid | PF_REP," ptwrite Ey (F3),(11B)"},
};
OP_ENTRY OP_0FAE_5[3] = {
    {0xae,0x85,0 | PF_Valid," XRSTOR"},
    {0xae,0x85,0 | PF_Valid," lfence (11B)"},
    {0xae,0x85,0 | PF_Valid | PF_REP," INCSSPD/Q Ry (F3),(11B)"},
};
OP_ENTRY OP_0FAE_6[7] = {
    {0xae,0x86,0 | PF_Valid," XSAVEOPT"},
    {0xae,0x86,0 | PF_Valid | PF_Operand," clwb (66)"},
    {0xae,0x86,0 | PF_Valid," mfence (11B)"},
    {0xae,0x86,0 | PF_Valid | PF_Operand," TPAUSE Rd (66),(11B)"},
    {0xae,0x86,0 | PF_Valid | PF_REP," UMONITOR Rv (F3),(11B)"},
    {0xae,0x86,0 | PF_Valid | PF_REPNE," UMWAIT Rd (F2),(11B)"},
    {0xae,0x86,0 | PF_Valid | PF_REP," CLRSSBSY Mq (F3)"},
};
OP_ENTRY OP_0FAE_7[3] = {
    {0xae,0x87,0 | PF_Valid," clflush"},
    {0xae,0x87,0 | PF_Valid | PF_Operand," clflushopt (66)"},
    {0xae,0x87,0 | PF_Valid," sfence (11B)"},
};
// Grp21_0F1E
OP_ENTRY OP_0F1E_7[2] = {
    {0x1e,0x87,0 | PF_Valid | PF_REP," ENDBR64 (F3),(010),(11B)"},
    {0x1e,0x87,0 | PF_Valid | PF_REP," ENDBR32 (F3),(011),(11B)"},
};

// WCHAR* strOPMatch : opcode string to match strOPMatch =>{OP[7:0],MODRM[7:0]}
// pOpEntry : point to OpEntry array , function save OPEntry into array
// nOpEntryMax : OP Entry MAX. size
// nOption : OPTION_EXPAND_REG indicate expand MODRM reg name
// return : how many entry found
//
extern LIB_OP_API DWORD xEnumOPCode(E_XB_OP eOPTab,E_ADM eADM,WCHAR* strOPMatch , OPENTRY* pOpEntry,DWORD nOpEntryMax ,DWORD nOption);

#ifdef __cplusplus
}
#endif

#endif//__LIB_OP_H__