#include "stdafx.h"
#include <assert.h>
#include <windows.h>
#include <Tchar.h>
#include "libOP.h"

#define ASSERT(x) assert(x)


typedef struct {
    BYTE OP;
    BYTE OPExt;         /*[7] indicated valid,[2:0] = ModRm.REG;*/
    char* strFmt;
}OP_ENTRY;

OP_ENTRY OP1BMap[256] = {
    //# 0x00 - 0x0f
    {0x00,0x00," ADD Eb,Gb"},
    {0x01,0x00," ADD Ev,Gv"},
    {0x02,0x00," ADD Gb,Eb"},
    {0x03,0x00," ADD Gv,Ev"},
    {0x04,0x00," ADD AL,Ib"},
    {0x05,0x00," ADD rAX,Iz"},
    {0x06,0x00," PUSH ES (i64)"},
    {0x07,0x00," POP ES (i64)"},
    {0x08,0x00," OR Eb,Gb"},
    {0x09,0x00," OR Ev,Gv"},
    {0x0a,0x00," OR Gb,Eb"},
    {0x0b,0x00," OR Gv,Ev"},
    {0x0c,0x00," OR AL,Ib"},
    {0x0d,0x00," OR rAX,Iz"},
    {0x0e,0x00," PUSH CS (i64)"},
    {0x0f,0x00," escape # 2-byte escape"},
    //# 0x10 - 0x1f
    {0x10,0x00," ADC Eb,Gb"},
    {0x11,0x00," ADC Ev,Gv"},
    {0x12,0x00," ADC Gb,Eb"},
    {0x13,0x00," ADC Gv,Ev"},
    {0x14,0x00," ADC AL,Ib"},
    {0x15,0x00," ADC rAX,Iz"},
    {0x16,0x00," PUSH SS (i64)"},
    {0x17,0x00," POP SS (i64)"},
    {0x18,0x00," SBB Eb,Gb"},
    {0x19,0x00," SBB Ev,Gv"},
    {0x1a,0x00," SBB Gb,Eb"},
    {0x1b,0x00," SBB Gv,Ev"},
    {0x1c,0x00," SBB AL,Ib"},
    {0x1d,0x00," SBB rAX,Iz"},
    {0x1e,0x00," PUSH DS (i64)"},
    {0x1f,0x00," POP DS (i64)"},
    //# 0x20 - 0x2f"
    {0x20,0x00," AND Eb,Gb"},
    {0x21,0x00," AND Ev,Gv"},
    {0x22,0x00," AND Gb,Eb"},
    {0x23,0x00," AND Gv,Ev"},
    {0x24,0x00," AND AL,Ib"},
    {0x25,0x00," AND rAx,Iz"},
    {0x26,0x00," SEG=ES (Prefix)"},
    {0x27,0x00," DAA (i64)"},
    {0x28,0x00," SUB Eb,Gb"},
    {0x29,0x00," SUB Ev,Gv"},
    {0x2a,0x00," SUB Gb,Eb"},
    {0x2b,0x00," SUB Gv,Ev"},
    {0x2c,0x00," SUB AL,Ib"},
    {0x2d,0x00," SUB rAX,Iz"},
    {0x2e,0x00," SEG=CS (Prefix)"},
    {0x2f,0x00," DAS (i64)"},
    //# 0x30 - 0x3f"
    {0x30,0x00," XOR Eb,Gb"},
    {0x31,0x00," XOR Ev,Gv"},
    {0x32,0x00," XOR Gb,Eb"},
    {0x33,0x00," XOR Gv,Ev"},
    {0x34,0x00," XOR AL,Ib"},
    {0x35,0x00," XOR rAX,Iz"},
    {0x36,0x00," SEG=SS (Prefix)"},
    {0x37,0x00," AAA (i64)"},
    {0x38,0x00," CMP Eb,Gb"},
    {0x39,0x00," CMP Ev,Gv"},
    {0x3a,0x00," CMP Gb,Eb"},
    {0x3b,0x00," CMP Gv,Ev"},
    {0x3c,0x00," CMP AL,Ib"},
    {0x3d,0x00," CMP rAX,Iz"},
    {0x3e,0x00," SEG=DS (Prefix)"},
    {0x3f,0x00," AAS (i64)"},
    //# 0x40 - 0x4f"
    {0x40,0x00," INC eAX (i64) | REX (o64)"},
    {0x41,0x00," INC eCX (i64) | REX.B (o64)"},
    {0x42,0x00," INC eDX (i64) | REX.X (o64)"},
    {0x43,0x00," INC eBX (i64) | REX.XB (o64)"},
    {0x44,0x00," INC eSP (i64) | REX.R (o64)"},
    {0x45,0x00," INC eBP (i64) | REX.RB (o64)"},
    {0x46,0x00," INC eSI (i64) | REX.RX (o64)"},
    {0x47,0x00," INC eDI (i64) | REX.RXB (o64)"},
    {0x48,0x00," DEC eAX (i64) | REX.W (o64)"},
    {0x49,0x00," DEC eCX (i64) | REX.WB (o64)"},
    {0x4a,0x00," DEC eDX (i64) | REX.WX (o64)"},
    {0x4b,0x00," DEC eBX (i64) | REX.WXB (o64)"},
    {0x4c,0x00," DEC eSP (i64) | REX.WR (o64)"},
    {0x4d,0x00," DEC eBP (i64) | REX.WRB (o64)"},
    {0x4e,0x00," DEC eSI (i64) | REX.WRX (o64)"},
    {0x4f,0x00," DEC eDI (i64) | REX.WRXB (o64)"},
    //# 0x50 - 0x5f"
    {0x50,0x00," PUSH rAX/r8 (d64)"},
    {0x51,0x00," PUSH rCX/r9 (d64)"},
    {0x52,0x00," PUSH rDX/r10 (d64)"},
    {0x53,0x00," PUSH rBX/r11 (d64)"},
    {0x54,0x00," PUSH rSP/r12 (d64)"},
    {0x55,0x00," PUSH rBP/r13 (d64)"},
    {0x56,0x00," PUSH rSI/r14 (d64)"},
    {0x57,0x00," PUSH rDI/r15 (d64)"},
    {0x58,0x00," POP rAX/r8 (d64)"},
    {0x59,0x00," POP rCX/r9 (d64)"},
    {0x5a,0x00," POP rDX/r10 (d64)"},
    {0x5b,0x00," POP rBX/r11 (d64)"},
    {0x5c,0x00," POP rSP/r12 (d64)"},
    {0x5d,0x00," POP rBP/r13 (d64)"},
    {0x5e,0x00," POP rSI/r14 (d64)"},
    {0x5f,0x00," POP rDI/r15 (d64)"},
    //# 0x60 - 0x6f"
    {0x60,0x00," PUSHA/PUSHAD (i64)"},
    {0x61,0x00," POPA/POPAD (i64)"},
    {0x62,0x00," BOUND Gv,Ma (i64) | EVEX (Prefix)"},
    {0x63,0x00," ARPL Ew,Gw (i64) | MOVSXD Gv,Ev (o64)"},
    {0x64,0x00," SEG=FS (Prefix)"},
    {0x65,0x00," SEG=GS (Prefix)"},
    {0x66,0x00," Operand-Size (Prefix)"},
    {0x67,0x00," Address-Size (Prefix)"},
    {0x68,0x00," PUSH Iz (d64)"},
    {0x69,0x00," IMUL Gv,Ev,Iz"},
    {0x6a,0x00," PUSH Ib (d64)"},
    {0x6b,0x00," IMUL Gv,Ev,Ib"},
    {0x6c,0x00," INS/INSB Yb,DX"},
    {0x6d,0x00," INS/INSW/INSD Yz,DX"},
    {0x6e,0x00," OUTS/OUTSB DX,Xb"},
    {0x6f,0x00," OUTS/OUTSW/OUTSD DX,Xz"},
    //# 0x70 - 0x7f
    {0x70,0x00," JO Jb"},
    {0x71,0x00," JNO Jb"},
    {0x72,0x00," JB/JNAE/JC Jb"},
    {0x73,0x00," JNB/JAE/JNC Jb"},
    {0x74,0x00," JZ/JE Jb"},
    {0x75,0x00," JNZ/JNE Jb"},
    {0x76,0x00," JBE/JNA Jb"},
    {0x77,0x00," JNBE/JA Jb"},
    {0x78,0x00," JS Jb"},
    {0x79,0x00," JNS Jb"},
    {0x7a,0x00," JP/JPE Jb"},
    {0x7b,0x00," JNP/JPO Jb"},
    {0x7c,0x00," JL/JNGE Jb"},
    {0x7d,0x00," JNL/JGE Jb"},
    {0x7e,0x00," JLE/JNG Jb"},
    {0x7f,0x00," JNLE/JG Jb"},
    //# 0x80 - 0x8f"
    {0x80,0x80," Grp1 Eb,Ib (1A)"},
    {0x81,0x80," Grp1 Ev,Iz (1A)"},
    {0x82,0x80," Grp1 Eb,Ib (1A),(i64)"},
    {0x83,0x80," Grp1 Ev,Ib (1A)"},
    {0x84,0x00," TEST Eb,Gb"},
    {0x85,0x00," TEST Ev,Gv"},
    {0x86,0x00," XCHG Eb,Gb"},
    {0x87,0x00," XCHG Ev,Gv"},
    {0x88,0x00," MOV Eb,Gb"},
    {0x89,0x00," MOV Ev,Gv"},
    {0x8a,0x00," MOV Gb,Eb"},
    {0x8b,0x00," MOV Gv,Ev"},
    {0x8c,0x00," MOV Ev,Sw"},
    {0x8d,0x00," LEA Gv,M"},
    {0x8e,0x00," MOV Sw,Ew"},
    {0x8f,0x80," Grp1A (1A) | POP Ev (d64)"},
    //# 0x90 - 0x9f"
    {0x90,0x00," NOP | PAUSE (F3) | XCHG r8,rAX"},
    {0x91,0x00," XCHG rCX/r9,rAX"},
    {0x92,0x00," XCHG rDX/r10,rAX"},
    {0x93,0x00," XCHG rBX/r11,rAX"},
    {0x94,0x00," XCHG rSP/r12,rAX"},
    {0x95,0x00," XCHG rBP/r13,rAX"},
    {0x96,0x00," XCHG rSI/r14,rAX"},
    {0x97,0x00," XCHG rDI/r15,rAX"},
    {0x98,0x00," CBW/CWDE/CDQE"},
    {0x99,0x00," CWD/CDQ/CQO"},
    {0x9a,0x00," CALLF Ap (i64)"},
    {0x9b,0x00," FWAIT/WAIT"},
    {0x9c,0x00," PUSHF/D/Q Fv (d64)"},
    {0x9d,0x00," POPF/D/Q Fv (d64)"},
    {0x9e,0x00," SAHF"},
    {0x9f,0x00," LAHF"},
    //# 0xa0 - 0xaf
    {0xa0,0x00," MOV AL,Ob"},
    {0xa1,0x00," MOV rAX,Ov"},
    {0xa2,0x00," MOV Ob,AL"},
    {0xa3,0x00," MOV Ov,rAX"},
    {0xa4,0x00," MOVS/B Yb,Xb"},
    {0xa5,0x00," MOVS/W/D/Q Yv,Xv"},
    {0xa6,0x00," CMPS/B Xb,Yb"},
    {0xa7,0x00," CMPS/W/D Xv,Yv"},
    {0xa8,0x00," TEST AL,Ib"},
    {0xa9,0x00," TEST rAX,Iz"},
    {0xaa,0x00," STOS/B Yb,AL"},
    {0xab,0x00," STOS/W/D/Q Yv,rAX"},
    {0xac,0x00," LODS/B AL,Xb"},
    {0xad,0x00," LODS/W/D/Q rAX,Xv"},
    {0xae,0x00," SCAS/B AL,Yb"},
    //# Note," The May 2011 Intel manual shows Xv for the second parameter of the"},
    //# next instruction but Yv is correct"},
    {0xaf,0x00," SCAS/W/D/Q rAX,Yv"},
    //# 0xb0 - 0xbf"
    {0xb0,0x00," MOV AL/R8L,Ib"},
    {0xb1,0x00," MOV CL/R9L,Ib"},
    {0xb2,0x00," MOV DL/R10L,Ib"},
    {0xb3,0x00," MOV BL/R11L,Ib"},
    {0xb4,0x00," MOV AH/R12L,Ib"},
    {0xb5,0x00," MOV CH/R13L,Ib"},
    {0xb6,0x00," MOV DH/R14L,Ib"},
    {0xb7,0x00," MOV BH/R15L,Ib"},
    {0xb8,0x00," MOV rAX/r8,Iv"},
    {0xb9,0x00," MOV rCX/r9,Iv"},
    {0xba,0x00," MOV rDX/r10,Iv"},
    {0xbb,0x00," MOV rBX/r11,Iv"},
    {0xbc,0x00," MOV rSP/r12,Iv"},
    {0xbd,0x00," MOV rBP/r13,Iv"},
    {0xbe,0x00," MOV rSI/r14,Iv"},
    {0xbf,0x00," MOV rDI/r15,Iv"},
    //# 0xc0 - 0xcf
    {0xc0,0x80," Grp2 Eb,Ib (1A)"},
    {0xc1,0x80," Grp2 Ev,Ib (1A)"},
    {0xc2,0x00," RETN Iw (f64)"},
    {0xc3,0x00," RETN"},
    {0xc4,0x00," LES Gz,Mp (i64) | VEX+2byte (Prefix)"},
    {0xc5,0x00," LDS Gz,Mp (i64) | VEX+1byte (Prefix)"},
    {0xc6,0x80," Grp11A Eb,Ib (1A)"},
    {0xc7,0x80," Grp11B Ev,Iz (1A)"},
    {0xc8,0x00," ENTER Iw,Ib"},
    {0xc9,0x00," LEAVE (d64)"},
    {0xca,0x00," RETF Iw"},
    {0xcb,0x00," RETF"},
    {0xcc,0x00," INT3"},
    {0xcd,0x00," INT Ib"},
    {0xce,0x00," INTO (i64)"},
    {0xcf,0x00," IRET/D/Q"},
    //# 0xd0 - 0xdf
    {0xd0,0x80," Grp2 Eb,1 (1A)"},
    {0xd1,0x80," Grp2 Ev,1 (1A)"},
    {0xd2,0x80," Grp2 Eb,CL (1A)"},
    {0xd3,0x80," Grp2 Ev,CL (1A)"},
    {0xd4,0x00," AAM Ib (i64)"},
    {0xd5,0x00," AAD Ib (i64)"},
    {0xd6,0x00,NULL},
    {0xd7,0x00," XLAT/XLATB"},
    {0xd8,0x00," ESC"},
    {0xd9,0x00," ESC"},
    {0xda,0x00," ESC"},
    {0xdb,0x00," ESC"},
    {0xdc,0x00," ESC"},
    {0xdd,0x00," ESC"},
    {0xde,0x00," ESC"},
    {0xdf,0x00," ESC"},
    //# 0xe0 - 0xef"
    //# Note," "forced64" is Intel CPU behavior," they ignore 0x66 prefix
    //# in 64-bit mode. AMD CPUs accept 0x66 prefix, it causes RIP truncation
    //# to 16 bits. In 32-bit mode, 0x66 is accepted by both Intel and AMD.
    {0xe0,0x00," LOOPNE/LOOPNZ Jb (f64)"},
    {0xe1,0x00," LOOPE/LOOPZ Jb (f64)"},
    {0xe2,0x00," LOOP Jb (f64)"},
    {0xe3,0x00," JrCXZ Jb (f64)"},
    {0xe4,0x00," IN AL,Ib"},
    {0xe5,0x00," IN eAX,Ib"},
    {0xe6,0x00," OUT Ib,AL"},
    {0xe7,0x00," OUT Ib,eAX"},
    //# With 0x66 prefix in 64-bit mode, for AMD CPUs immediate offset"
    //# in "near" jumps and calls is 16-bit. For CALL,
    //# push of return address is 16-bit wide, RSP is decremented by 2
    //# but is not truncated to 16 bits, unlike RIP.
    {0xe8,0x00," CALL Jz (f64)"},
    {0xe9,0x00," JMP-near Jz (f64)"},
    {0xea,0x00," JMP-far Ap (i64)"},
    {0xeb,0x00," JMP-short Jb (f64)"},
    {0xec,0x00," IN AL,DX"},
    {0xed,0x00," IN eAX,DX"},
    {0xee,0x00," OUT DX,AL"},
    {0xef,0x00," OUT DX,eAX"},
    //# 0xf0 - 0xff
    {0xf0,0x00," LOCK (Prefix)"},
    {0xf1,0x00,NULL},
    {0xf2,0x00," REPNE (Prefix) | XACQUIRE (Prefix)"},
    {0xf3,0x00," REP/REPE (Prefix) | XRELEASE (Prefix)"},
    {0xf4,0x00," HLT"},
    {0xf5,0x00," CMC"},
    {0xf6,0x80," Grp3_1 Eb (1A)"},
    {0xf7,0x80," Grp3_2 Ev (1A)"},
    {0xf8,0x00," CLC"},
    {0xf9,0x00," STC"},
    {0xfa,0x00," CLI"},
    {0xfb,0x00," STI"},
    {0xfc,0x00," CLD"},
    {0xfd,0x00," STD"},
    {0xfe,0x80," Grp4 (1A)"},
    {0xff,0x80," Grp5 (1A)"},
};
OP_ENTRY Grp01_80h[8] = {
    {0x80,0x80," ADD Eb,Ib"},
    {0x80,0x81," OR Eb,Ib"},
    {0x80,0x82," ADC Eb,Ib"},
    {0x80,0x83," SBB Eb,Ib"},
    {0x80,0x84," AND Eb,Ib"},
    {0x80,0x85," SUB Eb,Ib"},
    {0x80,0x86," XOR Eb,Ib"},
    {0x80,0x87," CMP Eb,Ib"},
};
OP_ENTRY Grp01_81h[8] = {
    {0x81,0x80," ADD Ev,Iz"},
    {0x81,0x81," OR Ev,Iz"},
    {0x81,0x82," ADC Ev,Iz"},
    {0x81,0x83," SBB Ev,Iz"},
    {0x81,0x84," AND Ev,Iz"},
    {0x81,0x85," SUB Ev,Iz"},
    {0x81,0x86," XOR Ev,Iz"},
    {0x81,0x87," CMP Ev,Iz"},
};
OP_ENTRY Grp01_82h[8] = {
    {0x82,0x80," ADD Eb,Ib"},
    {0x82,0x81," OR Eb,Ib"},
    {0x82,0x82," ADC Eb,Ib"},
    {0x82,0x83," SBB Eb,Ib"},
    {0x82,0x84," AND Eb,Ib"},
    {0x82,0x85," SUB Eb,Ib"},
    {0x82,0x86," XOR Eb,Ib"},
    {0x82,0x87," CMP Eb,Ib"},
};
OP_ENTRY Grp01_83h[8] = {
    {0x83,0x80," ADD Ev,Ib"},
    {0x83,0x81," OR Ev,Ib"},
    {0x83,0x82," ADC Ev,Ib"},
    {0x83,0x83," SBB Ev,Ib"},
    {0x83,0x84," AND Ev,Ib"},
    {0x83,0x85," SUB Ev,Ib"},
    {0x83,0x86," XOR Ev,Ib"},
    {0x83,0x87," CMP Ev,Ib"},
};
OP_ENTRY Grp01A_8Fh[8] = {
    {0x8F,0x80," POP Ev"},
    {0x8F,0x81,NULL},
    {0x8F,0x82,NULL},
    {0x8F,0x83,NULL},
    {0x8F,0x84,NULL},
    {0x8F,0x85,NULL},
    {0x8F,0x86,NULL},
    {0x8F,0x87,NULL},
};
OP_ENTRY Grp02_C0h[8] = {
    {0xC0,0x80," ROL Eb,Ib"},
    {0xC0,0x81," ROR Eb,Ib"},
    {0xC0,0x82," RCL Eb,Ib"},
    {0xC0,0x83," RCR Eb,Ib"},
    {0xC0,0x84," SHL/SAL Eb,Ib"},
    {0xC0,0x85," SHR Eb,Ib"},
    {0xC0,0x86,NULL},
    {0xC0,0x87," SAR Eb,Ib"},
};
OP_ENTRY Grp02_C1h[8] = {
    {0xC1,0x80," ROL Ev,Ib"},
    {0xC1,0x81," ROR Ev,Ib"},
    {0xC1,0x82," RCL Ev,Ib"},
    {0xC1,0x83," RCR Ev,Ib"},
    {0xC1,0x84," SHL/SAL Ev,Ib"},
    {0xC1,0x85," SHR Ev,Ib"},
    {0xC1,0x86,NULL},
    {0xC1,0x87," SAR Ev,Ib"},
};
OP_ENTRY Grp02_D0h[8] = {
    {0xD0,0x80," ROL Eb,1"},
    {0xD0,0x81," ROR Eb,1"},
    {0xD0,0x82," RCL Eb,1"},
    {0xD0,0x83," RCR Eb,1"},
    {0xD0,0x84," SHL/SAL Eb,1"},
    {0xD0,0x85," SHR Eb,1"},
    {0xD0,0x86,NULL},
    {0xD0,0x87," SAR Eb,1"},
};
OP_ENTRY Grp02_D1h[8] = {
    {0xD1,0x80," ROL Ev,1"},
    {0xD1,0x81," ROR Ev,1"},
    {0xD1,0x82," RCL Ev,1"},
    {0xD1,0x83," RCR Ev,1"},
    {0xD1,0x84," SHL/SAL Ev,1"},
    {0xD1,0x85," SHR Ev,1"},
    {0xD1,0x86,NULL},
    {0xD1,0x87," SAR Ev,1"},
};
OP_ENTRY Grp02_D2h[8] = {
    {0xD2,0x80," ROL Eb,CL"},
    {0xD2,0x81," ROR Eb,CL"},
    {0xD2,0x82," RCL Eb,CL"},
    {0xD2,0x83," RCR Eb,CL"},
    {0xD2,0x84," SHL/SAL Eb,CL"},
    {0xD2,0x85," SHR Eb,CL"},
    {0xD2,0x86,NULL},
    {0xD2,0x87," SAR Eb,CL"},
};
OP_ENTRY Grp02_D3h[8] = {
    {0xD3,0x80," ROL Ev,CL"},
    {0xD3,0x81," ROR Ev,CL"},
    {0xD3,0x82," RCL Ev,CL"},
    {0xD3,0x83," RCR Ev,CL"},
    {0xD3,0x84," SHL/SAL Ev,CL"},
    {0xD3,0x85," SHR Ev,CL"},
    {0xD3,0x86,NULL},
    {0xD3,0x87," SAR Ev,CL"},
};
OP_ENTRY Grp03_F6h[8] = {
    {0xF6,0x80," TEST Eb,Ib"},
    {0xF6,0x81," TEST Eb,Ib"},
    {0xF6,0x82," NOT Eb"},
    {0xF6,0x83," NEG Eb"},
    {0xF6,0x84," MUL AL,Eb"},
    {0xF6,0x85," IMUL AL,Eb"},
    {0xF6,0x86," DIV AL,Eb"},
    {0xF6,0x87," IDIV AL,Eb"},
};
OP_ENTRY Grp03_F7h[8] = {
    {0xF7,0x80," TEST Ev,Iz"},
    {0xF7,0x81," TEST Ev,Iz"},
    {0xF7,0x82," NOT Ev"},
    {0xF7,0x83," NEG Ev"},
    {0xF7,0x84," MUL rAX,Ev"},
    {0xF7,0x85," IMUL rAX,Ev"},
    {0xF7,0x86," DIV rAX,Ev"},
    {0xF7,0x87," IDIV rAX,Ev"},
};
OP_ENTRY Grp04_FEh[8] = {
    {0xFE,0x80," INC Eb"},
    {0xFE,0x81," DEC Eb"},
    {0xFE,0x82,NULL},
    {0xFE,0x83,NULL},
    {0xFE,0x84,NULL},
    {0xFE,0x85,NULL},
    {0xFE,0x86,NULL},
    {0xFE,0x87,NULL},
};
OP_ENTRY Grp05_FFh[8] = {
    {0xFF,0x80," INC Ev"},
    {0xFF,0x81," DEC Ev"},
    {0xFF,0x82," CALL Ev"},
    {0xFF,0x83," CALL FAR Ep"},
    {0xFF,0x84," JMP Ev"},
    {0xFF,0x85," JMP FAR Mp"},
    {0xFF,0x86," PUSH Ev"},
    {0xFF,0x87,NULL},
};
OP_ENTRY Grp11_C6h[8] = {
    {0xC6,0x80," MOV Eb,Ib"},
    {0xC6,0x81,NULL},
    {0xC6,0x82,NULL},
    {0xC6,0x83,NULL},
    {0xC6,0x84,NULL},
    {0xC6,0x85,NULL},
    {0xC6,0x86,NULL},
    {0xC6,0x80," XABORT Ib (000),(11B)"},
};
OP_ENTRY Grp11_C7h[8] = {
    {0xC7,0x80," MOV Ev,Iz"},
    {0xC7,0x81,NULL},
    {0xC7,0x82,NULL},
    {0xC7,0x83,NULL},
    {0xC7,0x84,NULL},
    {0xC7,0x85,NULL},
    {0xC7,0x86,NULL},
    {0xC7,0x80," XBEGIN Jz (000),(11B)"},
};
OP_ENTRY OP2BMap[256] = {
    // # 0x0f 0x00-0x0f
    {0x00,0x80," Grp6 (1A)"},
    {0x01,0x80," Grp7 (1A)"},
    {0x02,0x00," LAR Gv,Ew"},
    {0x03,0x00," LSL Gv,Ew"},
    {0x04,0x00,NULL},
    {0x05,0x00," SYSCALL (o64)"},
    {0x06,0x00," CLTS"},
    {0x07,0x00," SYSRET (o64)"},
    {0x08,0x00," INVD"},
    {0x09,0x00," WBINVD | WBNOINVD (F3)"},
    {0x0a,0x00,NULL},
    {0x0b,0x00," UD2 (1B)"},
    {0x0c,0x00,NULL},
    // # AMD's prefetch group. Intel supports prefetchw(/1) only.
    {0x0d,0x80," GrpP"},
    {0x0e,0x00," FEMMS"},
    // # 3DNow! uses the last imm byte as opcode extension.
    {0x0f,0x00," 3DNow! Pq,Qq,Ib"},
    // # 0x0f 0x10-0x1f
    // # NOTE: According to Intel SDM opcode map, vmovups and vmovupd has no operands
    // # but it actually has operands. And also, vmovss and vmovsd only accept 128bit.
    // # MOVSS/MOVSD has too many forms(3) on SDM. This map just shows a typical form.
    // # Many AVX instructions lack v1 superscript, according to Intel AVX-Prgramming
    // # Reference A.1
    {0x10,0x00," vmovups Vps,Wps | vmovupd Vpd,Wpd (66) | vmovss Vx,Hx,Wss (F3),(v1) | vmovsd Vx,Hx,Wsd (F2),(v1)"},
    {0x11,0x00," vmovups Wps,Vps | vmovupd Wpd,Vpd (66) | vmovss Wss,Hx,Vss (F3),(v1) | vmovsd Wsd,Hx,Vsd (F2),(v1)"},
    {0x12,0x00," vmovlps Vq,Hq,Mq (v1) | vmovhlps Vq,Hq,Uq (v1) | vmovlpd Vq,Hq,Mq (66),(v1) | vmovsldup Vx,Wx (F3) | vmovddup Vx,Wx (F2)"},
    {0x13,0x00," vmovlps Mq,Vq (v1) | vmovlpd Mq,Vq (66),(v1)"},
    {0x14,0x00," vunpcklps Vx,Hx,Wx | vunpcklpd Vx,Hx,Wx (66)"},
    {0x15,0x00," vunpckhps Vx,Hx,Wx | vunpckhpd Vx,Hx,Wx (66)"},
    {0x16,0x00," vmovhps Vdq,Hq,Mq (v1) | vmovlhps Vdq,Hq,Uq (v1) | vmovhpd Vdq,Hq,Mq (66),(v1) | vmovshdup Vx,Wx (F3)"},
    {0x17,0x00," vmovhps Mq,Vq (v1) | vmovhpd Mq,Vq (66),(v1)"},
    {0x18,0x80," Grp16 (1A)"},
    {0x19,0x00,NULL},
    // # Intel SDM opcode map does not list MPX instructions. For now using Gv for
    // # bnd registers and Ev for everything else is OK because the instruction
    // # decoder does not use the information except as an indication that there is
    // # a ModR/M byte.
    {0x1a,0x00," BNDCL Gv,Ev (F3) | BNDCU Gv,Ev (F2) | BNDMOV Gv,Ev (66) | BNDLDX Gv,Ev"},
    {0x1b,0x00," BNDCN Gv,Ev (F2) | BNDMOV Ev,Gv (66) | BNDMK Gv,Ev (F3) | BNDSTX Ev,Gv"},
    {0x1c,0x80," Grp20 (1A),(1C)"},
    {0x1d,0x00,NULL},
    {0x1e,0x80," Grp21 (1A)"},
    {0x1f,0x00," NOP Ev"},
    // # 0x0f 0x20-0x2f
    {0x20,0x00," MOV Rd,Cd"},
    {0x21,0x00," MOV Rd,Dd"},
    {0x22,0x00," MOV Cd,Rd"},
    {0x23,0x00," MOV Dd,Rd"},
    {0x24,0x00,NULL},
    {0x25,0x00,NULL},
    {0x26,0x00,NULL},
    {0x27,0x00,NULL},
    {0x28,0x00," vmovaps Vps,Wps | vmovapd Vpd,Wpd (66)"},
    {0x29,0x00," vmovaps Wps,Vps | vmovapd Wpd,Vpd (66)"},
    {0x2a,0x00," cvtpi2ps Vps,Qpi | cvtpi2pd Vpd,Qpi (66) | vcvtsi2ss Vss,Hss,Ey (F3),(v1) | vcvtsi2sd Vsd,Hsd,Ey (F2),(v1)"},
    {0x2b,0x00," vmovntps Mps,Vps | vmovntpd Mpd,Vpd (66)"},
    {0x2c,0x00," cvttps2pi Ppi,Wps | cvttpd2pi Ppi,Wpd (66) | vcvttss2si Gy,Wss (F3),(v1) | vcvttsd2si Gy,Wsd (F2),(v1)"},
    {0x2d,0x00," cvtps2pi Ppi,Wps | cvtpd2pi Qpi,Wpd (66) | vcvtss2si Gy,Wss (F3),(v1) | vcvtsd2si Gy,Wsd (F2),(v1)"},
    {0x2e,0x00," vucomiss Vss,Wss (v1) | vucomisd  Vsd,Wsd (66),(v1)"},
    {0x2f,0x00," vcomiss Vss,Wss (v1) | vcomisd  Vsd,Wsd (66),(v1)"},
    // # 0x0f 0x30-0x3f
    {0x30,0x00," WRMSR"},
    {0x31,0x00," RDTSC"},
    {0x32,0x00," RDMSR"},
    {0x33,0x00," RDPMC"},
    {0x34,0x00," SYSENTER"},
    {0x35,0x00," SYSEXIT"},
    {0x36,0x00,NULL},
    {0x37,0x00," GETSEC"},
    {0x38,0x00," escape # 3-byte escape 1"},
    {0x39,0x00,NULL},
    {0x3a,0x00," escape # 3-byte escape 2"},
    {0x3b,0x00,NULL},
    {0x3c,0x00,NULL},
    {0x3d,0x00,NULL},
    {0x3e,0x00,NULL},
    {0x3f,0x00,NULL},
    // # 0x0f 0x40-0x4f
    {0x40,0x00," CMOVO Gv,Ev"},
    {0x41,0x00," CMOVNO Gv,Ev | kandw/q Vk,Hk,Uk | kandb/d Vk,Hk,Uk (66)"},
    {0x42,0x00," CMOVB/C/NAE Gv,Ev | kandnw/q Vk,Hk,Uk | kandnb/d Vk,Hk,Uk (66)"},
    {0x43,0x00," CMOVAE/NB/NC Gv,Ev"},
    {0x44,0x00," CMOVE/Z Gv,Ev | knotw/q Vk,Uk | knotb/d Vk,Uk (66)"},
    {0x45,0x00," CMOVNE/NZ Gv,Ev | korw/q Vk,Hk,Uk | korb/d Vk,Hk,Uk (66)"},
    {0x46,0x00," CMOVBE/NA Gv,Ev | kxnorw/q Vk,Hk,Uk | kxnorb/d Vk,Hk,Uk (66)"},
    {0x47,0x00," CMOVA/NBE Gv,Ev | kxorw/q Vk,Hk,Uk | kxorb/d Vk,Hk,Uk (66)"},
    {0x48,0x00," CMOVS Gv,Ev"},
    {0x49,0x00," CMOVNS Gv,Ev"},
    {0x4a,0x00," CMOVP/PE Gv,Ev | kaddw/q Vk,Hk,Uk | kaddb/d Vk,Hk,Uk (66)"},
    {0x4b,0x00," CMOVNP/PO Gv,Ev | kunpckbw Vk,Hk,Uk (66) | kunpckwd/dq Vk,Hk,Uk"},
    {0x4c,0x00," CMOVL/NGE Gv,Ev"},
    {0x4d,0x00," CMOVNL/GE Gv,Ev"},
    {0x4e,0x00," CMOVLE/NG Gv,Ev"},
    {0x4f,0x00," CMOVNLE/G Gv,Ev"},
    // # 0x0f 0x50-0x5f
    {0x50,0x00," vmovmskps Gy,Ups | vmovmskpd Gy,Upd (66)"},
    {0x51,0x00," vsqrtps Vps,Wps | vsqrtpd Vpd,Wpd (66) | vsqrtss Vss,Hss,Wss (F3),(v1) | vsqrtsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x52,0x00," vrsqrtps Vps,Wps | vrsqrtss Vss,Hss,Wss (F3),(v1)"},
    {0x53,0x00," vrcpps Vps,Wps | vrcpss Vss,Hss,Wss (F3),(v1)"},
    {0x54,0x00," vandps Vps,Hps,Wps | vandpd Vpd,Hpd,Wpd (66)"},
    {0x55,0x00," vandnps Vps,Hps,Wps | vandnpd Vpd,Hpd,Wpd (66)"},
    {0x56,0x00," vorps Vps,Hps,Wps | vorpd Vpd,Hpd,Wpd (66)"},
    {0x57,0x00," vxorps Vps,Hps,Wps | vxorpd Vpd,Hpd,Wpd (66)"},
    {0x58,0x00," vaddps Vps,Hps,Wps | vaddpd Vpd,Hpd,Wpd (66) | vaddss Vss,Hss,Wss (F3),(v1) | vaddsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x59,0x00," vmulps Vps,Hps,Wps | vmulpd Vpd,Hpd,Wpd (66) | vmulss Vss,Hss,Wss (F3),(v1) | vmulsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5a,0x00," vcvtps2pd Vpd,Wps | vcvtpd2ps Vps,Wpd (66) | vcvtss2sd Vsd,Hx,Wss (F3),(v1) | vcvtsd2ss Vss,Hx,Wsd (F2),(v1)"},
    {0x5b,0x00," vcvtdq2ps Vps,Wdq | vcvtqq2ps Vps,Wqq (evo) | vcvtps2dq Vdq,Wps (66) | vcvttps2dq Vdq,Wps (F3)"},
    {0x5c,0x00," vsubps Vps,Hps,Wps | vsubpd Vpd,Hpd,Wpd (66) | vsubss Vss,Hss,Wss (F3),(v1) | vsubsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5d,0x00," vminps Vps,Hps,Wps | vminpd Vpd,Hpd,Wpd (66) | vminss Vss,Hss,Wss (F3),(v1) | vminsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5e,0x00," vdivps Vps,Hps,Wps | vdivpd Vpd,Hpd,Wpd (66) | vdivss Vss,Hss,Wss (F3),(v1) | vdivsd Vsd,Hsd,Wsd (F2),(v1)"},
    {0x5f,0x00," vmaxps Vps,Hps,Wps | vmaxpd Vpd,Hpd,Wpd (66) | vmaxss Vss,Hss,Wss (F3),(v1) | vmaxsd Vsd,Hsd,Wsd (F2),(v1)"},
    // # 0x0f 0x60-0x6f
    {0x60,0x00," punpcklbw Pq,Qd | vpunpcklbw Vx,Hx,Wx (66),(v1)"},
    {0x61,0x00," punpcklwd Pq,Qd | vpunpcklwd Vx,Hx,Wx (66),(v1)"},
    {0x62,0x00," punpckldq Pq,Qd | vpunpckldq Vx,Hx,Wx (66),(v1)"},
    {0x63,0x00," packsswb Pq,Qq | vpacksswb Vx,Hx,Wx (66),(v1)"},
    {0x64,0x00," pcmpgtb Pq,Qq | vpcmpgtb Vx,Hx,Wx (66),(v1)"},
    {0x65,0x00," pcmpgtw Pq,Qq | vpcmpgtw Vx,Hx,Wx (66),(v1)"},
    {0x66,0x00," pcmpgtd Pq,Qq | vpcmpgtd Vx,Hx,Wx (66),(v1)"},
    {0x67,0x00," packuswb Pq,Qq | vpackuswb Vx,Hx,Wx (66),(v1)"},
    {0x68,0x00," punpckhbw Pq,Qd | vpunpckhbw Vx,Hx,Wx (66),(v1)"},
    {0x69,0x00," punpckhwd Pq,Qd | vpunpckhwd Vx,Hx,Wx (66),(v1)"},
    {0x6a,0x00," punpckhdq Pq,Qd | vpunpckhdq Vx,Hx,Wx (66),(v1)"},
    {0x6b,0x00," packssdw Pq,Qd | vpackssdw Vx,Hx,Wx (66),(v1)"},
    {0x6c,0x00," vpunpcklqdq Vx,Hx,Wx (66),(v1)"},
    {0x6d,0x00," vpunpckhqdq Vx,Hx,Wx (66),(v1)"},
    {0x6e,0x00," movd/q Pd,Ey | vmovd/q Vy,Ey (66),(v1)"},
    {0x6f,0x00," movq Pq,Qq | vmovdqa Vx,Wx (66) | vmovdqa32/64 Vx,Wx (66),(evo) | vmovdqu Vx,Wx (F3) | vmovdqu32/64 Vx,Wx (F3),(evo) | vmovdqu"},
    // # 0x0f 0x70-0x7f
    {0x70,0x00," pshufw Pq,Qq,Ib | vpshufd Vx,Wx,Ib (66),(v1) | vpshufhw Vx,Wx,Ib (F3),(v1) | vpshuflw Vx,Wx,Ib (F2),(v1)"},
    {0x71,0x80," Grp12 (1A)"},
    {0x72,0x80," Grp13 (1A)"},
    {0x73,0x80," Grp14 (1A)"},
    {0x74,0x00," pcmpeqb Pq,Qq | vpcmpeqb Vx,Hx,Wx (66),(v1)"},
    {0x75,0x00," pcmpeqw Pq,Qq | vpcmpeqw Vx,Hx,Wx (66),(v1)"},
    {0x76,0x00," pcmpeqd Pq,Qq | vpcmpeqd Vx,Hx,Wx (66),(v1)"},
    // # Note: Remove (v), because vzeroall and vzeroupper becomes emms without VEX.
    {0x77,0x00," emms | vzeroupper | vzeroall"},
    {0x78,0x00," VMREAD Ey,Gy | vcvttps2udq/pd2udq Vx,Wpd (evo) | vcvttsd2usi Gv,Wx (F2),(ev) | vcvttss2usi Gv,Wx (F3),(ev) | vcvttps2uqq/pd2uq"},
    {0x79,0x00," VMWRITE Gy,Ey | vcvtps2udq/pd2udq Vx,Wpd (evo) | vcvtsd2usi Gv,Wx (F2),(ev) | vcvtss2usi Gv,Wx (F3),(ev) | vcvtps2uqq/pd2uqq V"},
    {0x7a,0x00," vcvtudq2pd/uqq2pd Vpd,Wx (F3),(ev) | vcvtudq2ps/uqq2ps Vpd,Wx (F2),(ev) | vcvttps2qq/pd2qq Vx,Wx (66),(ev)"},
    {0x7b,0x00," vcvtusi2sd Vpd,Hpd,Ev (F2),(ev) | vcvtusi2ss Vps,Hps,Ev (F3),(ev) | vcvtps2qq/pd2qq Vx,Wx (66),(ev)"},
    {0x7c,0x00," vhaddpd Vpd,Hpd,Wpd (66) | vhaddps Vps,Hps,Wps (F2)"},
    {0x7d,0x00," vhsubpd Vpd,Hpd,Wpd (66) | vhsubps Vps,Hps,Wps (F2)"},
    {0x7e,0x00," movd/q Ey,Pd | vmovd/q Ey,Vy (66),(v1) | vmovq Vq,Wq (F3),(v1)"},
    {0x7f,0x00," movq Qq,Pq | vmovdqa Wx,Vx (66) | vmovdqa32/64 Wx,Vx (66),(evo) | vmovdqu Wx,Vx (F3) | vmovdqu32/64 Wx,Vx (F3),(evo) | vmovdqu"},
    // # 0x0f 0x80-0x8f
    // # Note: "forced64" is Intel CPU behavior (see comment about CALL insn).
    {0x80,0x00," JO Jz (f64)"},
    {0x81,0x00," JNO Jz (f64)"},
    {0x82,0x00," JB/JC/JNAE Jz (f64)"},
    {0x83,0x00," JAE/JNB/JNC Jz (f64)"},
    {0x84,0x00," JE/JZ Jz (f64)"},
    {0x85,0x00," JNE/JNZ Jz (f64)"},
    {0x86,0x00," JBE/JNA Jz (f64)"},
    {0x87,0x00," JA/JNBE Jz (f64)"},
    {0x88,0x00," JS Jz (f64)"},
    {0x89,0x00," JNS Jz (f64)"},
    {0x8a,0x00," JP/JPE Jz (f64)"},
    {0x8b,0x00," JNP/JPO Jz (f64)"},
    {0x8c,0x00," JL/JNGE Jz (f64)"},
    {0x8d,0x00," JNL/JGE Jz (f64)"},
    {0x8e,0x00," JLE/JNG Jz (f64)"},
    {0x8f,0x00," JNLE/JG Jz (f64)"},
    // # 0x0f 0x90-0x9f
    {0x90,0x00," SETO Eb | kmovw/q Vk,Wk | kmovb/d Vk,Wk (66)"},
    {0x91,0x00," SETNO Eb | kmovw/q Mv,Vk | kmovb/d Mv,Vk (66)"},
    {0x92,0x00," SETB/C/NAE Eb | kmovw Vk,Rv | kmovb Vk,Rv (66) | kmovq/d Vk,Rv (F2)"},
    {0x93,0x00," SETAE/NB/NC Eb | kmovw Gv,Uk | kmovb Gv,Uk (66) | kmovq/d Gv,Uk (F2)"},
    {0x94,0x00," SETE/Z Eb"},
    {0x95,0x00," SETNE/NZ Eb"},
    {0x96,0x00," SETBE/NA Eb"},
    {0x97,0x00," SETA/NBE Eb"},
    {0x98,0x00," SETS Eb | kortestw/q Vk,Uk | kortestb/d Vk,Uk (66)"},
    {0x99,0x00," SETNS Eb | ktestw/q Vk,Uk | ktestb/d Vk,Uk (66)"},
    {0x9a,0x00," SETP/PE Eb"},
    {0x9b,0x00," SETNP/PO Eb"},
    {0x9c,0x00," SETL/NGE Eb"},
    {0x9d,0x00," SETNL/GE Eb"},
    {0x9e,0x00," SETLE/NG Eb"},
    {0x9f,0x00," SETNLE/G Eb"},
    // # 0x0f 0xa0-0xaf
    {0xa0,0x00," PUSH FS (d64)"},
    {0xa1,0x00," POP FS (d64)"},
    {0xa2,0x00," CPUID"},
    {0xa3,0x00," BT Ev,Gv"},
    {0xa4,0x00," SHLD Ev,Gv,Ib"},
    {0xa5,0x00," SHLD Ev,Gv,CL"},
    {0xa6,0x80," GrpPDLK"},
    {0xa7,0x80," GrpRNG"},
    {0xa8,0x00," PUSH GS (d64)"},
    {0xa9,0x00," POP GS (d64)"},
    {0xaa,0x00," RSM"},
    {0xab,0x00," BTS Ev,Gv"},
    {0xac,0x00," SHRD Ev,Gv,Ib"},
    {0xad,0x00," SHRD Ev,Gv,CL"},
    {0xae,0x80," Grp15 (1A),(1C)"},
    {0xaf,0x00," IMUL Gv,Ev"},
    // # 0x0f 0xb0-0xbf
    {0xb0,0x00," CMPXCHG Eb,Gb"},
    {0xb1,0x00," CMPXCHG Ev,Gv"},
    {0xb2,0x00," LSS Gv,Mp"},
    {0xb3,0x00," BTR Ev,Gv"},
    {0xb4,0x00," LFS Gv,Mp"},
    {0xb5,0x00," LGS Gv,Mp"},
    {0xb6,0x00," MOVZX Gv,Eb"},
    {0xb7,0x00," MOVZX Gv,Ew"},
    {0xb8,0x00," JMPE (!F3) | POPCNT Gv,Ev (F3)"},
    {0xb9,0x80," Grp10 (1A)"},
    {0xba,0x80," Grp8 Ev,Ib (1A)"},
    {0xbb,0x00," BTC Ev,Gv"},
    {0xbc,0x00," BSF Gv,Ev (!F3) | TZCNT Gv,Ev (F3)"},
    {0xbd,0x00," BSR Gv,Ev (!F3) | LZCNT Gv,Ev (F3)"},
    {0xbe,0x00," MOVSX Gv,Eb"},
    {0xbf,0x00," MOVSX Gv,Ew"},
    // # 0x0f 0xc0-0xcf
    {0xc0,0x00," XADD Eb,Gb"},
    {0xc1,0x00," XADD Ev,Gv"},
    {0xc2,0x00," vcmpps Vps,Hps,Wps,Ib | vcmppd Vpd,Hpd,Wpd,Ib (66) | vcmpss Vss,Hss,Wss,Ib (F3),(v1) | vcmpsd Vsd,Hsd,Wsd,Ib (F2),(v1)"},
    {0xc3,0x00," movnti My,Gy"},
    {0xc4,0x00," pinsrw Pq,Ry/Mw,Ib | vpinsrw Vdq,Hdq,Ry/Mw,Ib (66),(v1)"},
    {0xc5,0x00," pextrw Gd,Nq,Ib | vpextrw Gd,Udq,Ib (66),(v1)"},
    {0xc6,0x00," vshufps Vps,Hps,Wps,Ib | vshufpd Vpd,Hpd,Wpd,Ib (66)"},
    {0xc7,0x80," Grp9 (1A)"},
    {0xc8,0x00," BSWAP RAX/EAX/R8/R8D"},
    {0xc9,0x00," BSWAP RCX/ECX/R9/R9D"},
    {0xca,0x00," BSWAP RDX/EDX/R10/R10D"},
    {0xcb,0x00," BSWAP RBX/EBX/R11/R11D"},
    {0xcc,0x00," BSWAP RSP/ESP/R12/R12D"},
    {0xcd,0x00," BSWAP RBP/EBP/R13/R13D"},
    {0xce,0x00," BSWAP RSI/ESI/R14/R14D"},
    {0xcf,0x00," BSWAP RDI/EDI/R15/R15D"},
    // # 0x0f 0xd0-0xdf
    {0xd0,0x00," vaddsubpd Vpd,Hpd,Wpd (66) | vaddsubps Vps,Hps,Wps (F2)"},
    {0xd1,0x00," psrlw Pq,Qq | vpsrlw Vx,Hx,Wx (66),(v1)"},
    {0xd2,0x00," psrld Pq,Qq | vpsrld Vx,Hx,Wx (66),(v1)"},
    {0xd3,0x00," psrlq Pq,Qq | vpsrlq Vx,Hx,Wx (66),(v1)"},
    {0xd4,0x00," paddq Pq,Qq | vpaddq Vx,Hx,Wx (66),(v1)"},
    {0xd5,0x00," pmullw Pq,Qq | vpmullw Vx,Hx,Wx (66),(v1)"},
    {0xd6,0x00," vmovq Wq,Vq (66),(v1) | movq2dq Vdq,Nq (F3) | movdq2q Pq,Uq (F2)"},
    {0xd7,0x00," pmovmskb Gd,Nq | vpmovmskb Gd,Ux (66),(v1)"},
    {0xd8,0x00," psubusb Pq,Qq | vpsubusb Vx,Hx,Wx (66),(v1)"},
    {0xd9,0x00," psubusw Pq,Qq | vpsubusw Vx,Hx,Wx (66),(v1)"},
    {0xda,0x00," pminub Pq,Qq | vpminub Vx,Hx,Wx (66),(v1)"},
    {0xdb,0x00," pand Pq,Qq | vpand Vx,Hx,Wx (66),(v1) | vpandd/q Vx,Hx,Wx (66),(evo)"},
    {0xdc,0x00," paddusb Pq,Qq | vpaddusb Vx,Hx,Wx (66),(v1)"},
    {0xdd,0x00," paddusw Pq,Qq | vpaddusw Vx,Hx,Wx (66),(v1)"},
    {0xde,0x00," pmaxub Pq,Qq | vpmaxub Vx,Hx,Wx (66),(v1)"},
    {0xdf,0x00," pandn Pq,Qq | vpandn Vx,Hx,Wx (66),(v1) | vpandnd/q Vx,Hx,Wx (66),(evo)"},
    // # 0x0f 0xe0-0xef
    {0xe0,0x00," pavgb Pq,Qq | vpavgb Vx,Hx,Wx (66),(v1)"},
    {0xe1,0x00," psraw Pq,Qq | vpsraw Vx,Hx,Wx (66),(v1)"},
    {0xe2,0x00," psrad Pq,Qq | vpsrad Vx,Hx,Wx (66),(v1)"},
    {0xe3,0x00," pavgw Pq,Qq | vpavgw Vx,Hx,Wx (66),(v1)"},
    {0xe4,0x00," pmulhuw Pq,Qq | vpmulhuw Vx,Hx,Wx (66),(v1)"},
    {0xe5,0x00," pmulhw Pq,Qq | vpmulhw Vx,Hx,Wx (66),(v1)"},
    {0xe6,0x00," vcvttpd2dq Vx,Wpd (66) | vcvtdq2pd Vx,Wdq (F3) | vcvtdq2pd/qq2pd Vx,Wdq (F3),(evo) | vcvtpd2dq Vx,Wpd (F2)"},
    {0xe7,0x00," movntq Mq,Pq | vmovntdq Mx,Vx (66)"},
    {0xe8,0x00," psubsb Pq,Qq | vpsubsb Vx,Hx,Wx (66),(v1)"},
    {0xe9,0x00," psubsw Pq,Qq | vpsubsw Vx,Hx,Wx (66),(v1)"},
    {0xea,0x00," pminsw Pq,Qq | vpminsw Vx,Hx,Wx (66),(v1)"},
    {0xeb,0x00," por Pq,Qq | vpor Vx,Hx,Wx (66),(v1) | vpord/q Vx,Hx,Wx (66),(evo)"},
    {0xec,0x00," paddsb Pq,Qq | vpaddsb Vx,Hx,Wx (66),(v1)"},
    {0xed,0x00," paddsw Pq,Qq | vpaddsw Vx,Hx,Wx (66),(v1)"},
    {0xee,0x00," pmaxsw Pq,Qq | vpmaxsw Vx,Hx,Wx (66),(v1)"},
    {0xef,0x00," pxor Pq,Qq | vpxor Vx,Hx,Wx (66),(v1) | vpxord/q Vx,Hx,Wx (66),(evo)"},
    // # 0x0f 0xf0-0xff
    {0xf0,0x00," vlddqu Vx,Mx (F2)"},
    {0xf1,0x00," psllw Pq,Qq | vpsllw Vx,Hx,Wx (66),(v1)"},
    {0xf2,0x00," pslld Pq,Qq | vpslld Vx,Hx,Wx (66),(v1)"},
    {0xf3,0x00," psllq Pq,Qq | vpsllq Vx,Hx,Wx (66),(v1)"},
    {0xf4,0x00," pmuludq Pq,Qq | vpmuludq Vx,Hx,Wx (66),(v1)"},
    {0xf5,0x00," pmaddwd Pq,Qq | vpmaddwd Vx,Hx,Wx (66),(v1)"},
    {0xf6,0x00," psadbw Pq,Qq | vpsadbw Vx,Hx,Wx (66),(v1)"},
    {0xf7,0x00," maskmovq Pq,Nq | vmaskmovdqu Vx,Ux (66),(v1)"},
    {0xf8,0x00," psubb Pq,Qq | vpsubb Vx,Hx,Wx (66),(v1)"},
    {0xf9,0x00," psubw Pq,Qq | vpsubw Vx,Hx,Wx (66),(v1)"},
    {0xfa,0x00," psubd Pq,Qq | vpsubd Vx,Hx,Wx (66),(v1)"},
    {0xfb,0x00," psubq Pq,Qq | vpsubq Vx,Hx,Wx (66),(v1)"},
    {0xfc,0x00," paddb Pq,Qq | vpaddb Vx,Hx,Wx (66),(v1)"},
    {0xfd,0x00," paddw Pq,Qq | vpaddw Vx,Hx,Wx (66),(v1)"},
    {0xfe,0x00," paddd Pq,Qq | vpaddd Vx,Hx,Wx (66),(v1)"},
    {0xff,0x00," UD0"},
};
OP_ENTRY Grp06_00h[8] = {
    {0x00,0x80," SLDT Rv/Mw"},
    {0x00,0x81," STR Rv/Mw"},
    {0x00,0x82," LLDT Ew"},
    {0x00,0x83," LTR Ew"},
    {0x00,0x84," VERR Ew"},
    {0x00,0x85," VERW Ew"},
    {0x00,0x86,NULL},
    {0x00,0x87,NULL},
};
OP_ENTRY Grp07_01h[8] = {
    {0x01,0x80," SGDT Ms | VMCALL (001),(11B) | VMLAUNCH (010),(11B) | VMRESUME (011),(11B) | VMXOFF (100),(11B) | PCONFIG (101),(11B) | ENCLV "},
    {0x01,0x81," SIDT Ms | MONITOR (000),(11B) | MWAIT (001),(11B) | CLAC (010),(11B) | STAC (011),(11B) | ENCLS (111),(11B)"},
    {0x01,0x82," LGDT Ms | XGETBV (000),(11B) | XSETBV (001),(11B) | VMFUNC (100),(11B) | XEND (101)(11B) | XTEST (110)(11B) | ENCLU (111),(11B"},
    {0x01,0x83," LIDT Ms"},
    {0x01,0x84," SMSW Mw/Rv"},
    {0x01,0x85," rdpkru (110),(11B) | wrpkru (111),(11B) | SAVEPREVSSP (F3),(010),(11B) | RSTORSSP Mq (F3) | SETSSBSY (F3),(000),(11B)"},
    {0x01,0x86," LMSW Ew"},
    {0x01,0x87," INVLPG Mb | SWAPGS (o64),(000),(11B) | RDTSCP (001),(11B)"},
};
OP_ENTRY Grp08_BAh[8] = {
    {0xBA,0x80,NULL},
    {0xBA,0x81,NULL},
    {0xBA,0x82,NULL},
    {0xBA,0x83,NULL},
    {0xBA,0x84," BT Ev,Ib"},
    {0xBA,0x85," BTS Ev,Ib"},
    {0xBA,0x86," BTR Ev,Ib"},
    {0xBA,0x87," BTC Ev,Ib"},
};
OP_ENTRY Grp09_C7h[8] = {
    {0xC7,0x80,NULL},
    {0xC7,0x81," CMPXCHG8B/16B Mq/Mdq"},
    {0xC7,0x82,NULL},
    {0xC7,0x83," xrstors"},
    {0xC7,0x84," xsavec"},
    {0xC7,0x85," xsaves"},
    {0xC7,0x86," VMPTRLD Mq | VMCLEAR Mq (66) | VMXON Mq (F3) | RDRAND Rv (11B)"},
    {0xC7,0x87," VMPTRST Mq | VMPTRST Mq (F3) | RDSEED Rv (11B)"},
};
OP_ENTRY Grp10_B9h[8] = {
    {0xB9,0x80," UD1"},
    {0xB9,0x81," UD1"},
    {0xB9,0x82," UD1"},
    {0xB9,0x83," UD1"},
    {0xB9,0x84," UD1"},
    {0xB9,0x85," UD1"},
    {0xB9,0x86," UD1"},
    {0xB9,0x87," UD1"},
};
OP_ENTRY Grp12_71h[8] = {
    {0x71,0x80,NULL},
    {0x71,0x81,NULL},
    {0x71,0x82," psrlw Nq,Ib (11B) | vpsrlw Hx,Ux,Ib (66),(11B),(v1)"},
    {0x71,0x83,NULL},
    {0x71,0x84," psraw Nq,Ib (11B) | vpsraw Hx,Ux,Ib (66),(11B),(v1)"},
    {0x71,0x85,NULL},
    {0x71,0x86," psllw Nq,Ib (11B) | vpsllw Hx,Ux,Ib (66),(11B),(v1)"},
    {0x71,0x87,NULL},
};
OP_ENTRY Grp13_72h[8] = {
    {0x72,0x80," vprord/q Hx,Wx,Ib (66),(ev)"},
    {0x72,0x81," vprold/q Hx,Wx,Ib (66),(ev)"},
    {0x72,0x82," psrld Nq,Ib (11B) | vpsrld Hx,Ux,Ib (66),(11B),(v1)"},
    {0x72,0x83,NULL},
    {0x72,0x84," psrad Nq,Ib (11B) | vpsrad Hx,Ux,Ib (66),(11B),(v1) | vpsrad/q Hx,Ux,Ib (66),(evo)"},
    {0x72,0x85,NULL},
    {0x72,0x86," pslld Nq,Ib (11B) | vpslld Hx,Ux,Ib (66),(11B),(v1)"},
    {0x72,0x87,NULL},
};
OP_ENTRY Grp14_73h[8] = {
    {0x73,0x80,NULL},
    {0x73,0x81,NULL},
    {0x73,0x82," psrlq Nq,Ib (11B) | vpsrlq Hx,Ux,Ib (66),(11B),(v1)"},
    {0x73,0x83," vpsrldq Hx,Ux,Ib (66),(11B),(v1)"},
    {0x73,0x84,NULL},
    {0x73,0x85,NULL},
    {0x73,0x86," psllq Nq,Ib (11B) | vpsllq Hx,Ux,Ib (66),(11B),(v1)"},
    {0x73,0x87," vpslldq Hx,Ux,Ib (66),(11B),(v1)"},
};
OP_ENTRY Grp15_AEh[8] = {
    {0xAE,0x80," fxsave | RDFSBASE Ry (F3),(11B)"},
    {0xAE,0x81," fxstor | RDGSBASE Ry (F3),(11B)"},
    {0xAE,0x82," vldmxcsr Md (v1) | WRFSBASE Ry (F3),(11B)"},
    {0xAE,0x83," vstmxcsr Md (v1) | WRGSBASE Ry (F3),(11B)"},
    {0xAE,0x84," XSAVE | ptwrite Ey (F3),(11B)"},
    {0xAE,0x85," XRSTOR | lfence (11B) | INCSSPD/Q Ry (F3),(11B)"},
    {0xAE,0x86," XSAVEOPT | clwb (66) | mfence (11B) | TPAUSE Rd (66),(11B) | UMONITOR Rv (F3),(11B) | UMWAIT Rd (F2),(11B) | CLRSSBSY Mq (F3)"},
    {0xAE,0x87," clflush | clflushopt (66) | sfence (11B)"},
};
OP_ENTRY Grp16_18h[8] = {
    {0x18,0x80," prefetch NTA"},
    {0x18,0x81," prefetch T0"},
    {0x18,0x82," prefetch T1"},
    {0x18,0x83," prefetch T2"},
    {0x18,0x84,NULL},
    {0x18,0x85,NULL},
    {0x18,0x86,NULL},
    {0x18,0x87,NULL},
};
OP_ENTRY OP3BMap_0F38h[256] = {
    //# 0x0f 0x38 0x00-0x0f
    {0x00,0x00," pshufb Pq,Qq | vpshufb Vx,Hx,Wx (66),(v1)"},
    {0x01,0x00," phaddw Pq,Qq | vphaddw Vx,Hx,Wx (66),(v1)"},
    {0x02,0x00," phaddd Pq,Qq | vphaddd Vx,Hx,Wx (66),(v1)"},
    {0x03,0x00," phaddsw Pq,Qq | vphaddsw Vx,Hx,Wx (66),(v1)"},
    {0x04,0x00," pmaddubsw Pq,Qq | vpmaddubsw Vx,Hx,Wx (66),(v1)"},
    {0x05,0x00," phsubw Pq,Qq | vphsubw Vx,Hx,Wx (66),(v1)"},
    {0x06,0x00," phsubd Pq,Qq | vphsubd Vx,Hx,Wx (66),(v1)"},
    {0x07,0x00," phsubsw Pq,Qq | vphsubsw Vx,Hx,Wx (66),(v1)"},
    {0x08,0x00," psignb Pq,Qq | vpsignb Vx,Hx,Wx (66),(v1)"},
    {0x09,0x00," psignw Pq,Qq | vpsignw Vx,Hx,Wx (66),(v1)"},
    {0x0A,0x00," psignd Pq,Qq | vpsignd Vx,Hx,Wx (66),(v1)"},
    {0x0B,0x00," pmulhrsw Pq,Qq | vpmulhrsw Vx,Hx,Wx (66),(v1)"},
    {0x0C,0x00," vpermilps Vx,Hx,Wx (66),(v)"},
    {0x0D,0x00," vpermilpd Vx,Hx,Wx (66),(v)"},
    {0x0E,0x00," vtestps Vx,Wx (66),(v)"},
    {0x0F,0x00," vtestpd Vx,Wx (66),(v)"},
    //# 0x0f 0x38 0x10-0x1f
    {0x10,0x00," pblendvb Vdq,Wdq (66) | vpsrlvw Vx,Hx,Wx (66),(evo) | vpmovuswb Wx,Vx (F3),(ev)"},
    {0x11,0x00," vpmovusdb Wx,Vd (F3),(ev) | vpsravw Vx,Hx,Wx (66),(ev)"},
    {0x12,0x00," vpmovusqb Wx,Vq (F3),(ev) | vpsllvw Vx,Hx,Wx (66),(ev)"},
    {0x13,0x00," vcvtph2ps Vx,Wx (66),(v) | vpmovusdw Wx,Vd (F3),(ev)"},
    {0x14,0x00," blendvps Vdq,Wdq (66) | vpmovusqw Wx,Vq (F3),(ev) | vprorvd/q Vx,Hx,Wx (66),(evo)"},
    {0x15,0x00," blendvpd Vdq,Wdq (66) | vpmovusqd Wx,Vq (F3),(ev) | vprolvd/q Vx,Hx,Wx (66),(evo)"},
    {0x16,0x00," vpermps Vqq,Hqq,Wqq (66),(v) | vpermps/d Vqq,Hqq,Wqq (66),(evo)"},
    {0x17,0x00," vptest Vx,Wx (66)"},
    {0x18,0x00," vbroadcastss Vx,Wd (66),(v)"},
    {0x19,0x00," vbroadcastsd Vqq,Wq (66),(v) | vbroadcastf32x2 Vqq,Wq (66),(evo)"},
    {0x1A,0x00," vbroadcastf128 Vqq,Mdq (66),(v) | vbroadcastf32x4/64x2 Vqq,Wq (66),(evo)"},
    {0x1B,0x00," vbroadcastf32x8/64x4 Vqq,Mdq (66),(ev)"},
    {0x1C,0x00," pabsb Pq,Qq | vpabsb Vx,Wx (66),(v1)"},
    {0x1D,0x00," pabsw Pq,Qq | vpabsw Vx,Wx (66),(v1)"},
    {0x1E,0x00," pabsd Pq,Qq | vpabsd Vx,Wx (66),(v1)"},
    {0x1F,0x00," vpabsq Vx,Wx (66),(ev)"},
    //# 0x0f 0x38 0x20-0x2f
    {0x20,0x00," vpmovsxbw Vx,Ux/Mq (66),(v1) | vpmovswb Wx,Vx (F3),(ev)"},
    {0x21,0x00," vpmovsxbd Vx,Ux/Md (66),(v1) | vpmovsdb Wx,Vd (F3),(ev)"},
    {0x22,0x00," vpmovsxbq Vx,Ux/Mw (66),(v1) | vpmovsqb Wx,Vq (F3),(ev)"},
    {0x23,0x00," vpmovsxwd Vx,Ux/Mq (66),(v1) | vpmovsdw Wx,Vd (F3),(ev)"},
    {0x24,0x00," vpmovsxwq Vx,Ux/Md (66),(v1) | vpmovsqw Wx,Vq (F3),(ev)"},
    {0x25,0x00," vpmovsxdq Vx,Ux/Mq (66),(v1) | vpmovsqd Wx,Vq (F3),(ev)"},
    {0x26,0x00," vptestmb/w Vk,Hx,Wx (66),(ev) | vptestnmb/w Vk,Hx,Wx (F3),(ev)"},
    {0x27,0x00," vptestmd/q Vk,Hx,Wx (66),(ev) | vptestnmd/q Vk,Hx,Wx (F3),(ev)"},
    {0x28,0x00," vpmuldq Vx,Hx,Wx (66),(v1) | vpmovm2b/w Vx,Uk (F3),(ev)"},
    {0x29,0x00," vpcmpeqq Vx,Hx,Wx (66),(v1) | vpmovb2m/w2m Vk,Ux (F3),(ev)"},
    {0x2A,0x00," vmovntdqa Vx,Mx (66),(v1) | vpbroadcastmb2q Vx,Uk (F3),(ev)"},
    {0x2B,0x00," vpackusdw Vx,Hx,Wx (66),(v1)"},
    {0x2C,0x00," vmaskmovps Vx,Hx,Mx (66),(v) | vscalefps/d Vx,Hx,Wx (66),(evo)"},
    {0x2D,0x00," vmaskmovpd Vx,Hx,Mx (66),(v) | vscalefss/d Vx,Hx,Wx (66),(evo)"},
    {0x2E,0x00," vmaskmovps Mx,Hx,Vx (66),(v)"},
    {0x2F,0x00," vmaskmovpd Mx,Hx,Vx (66),(v)"},
    //# 0x0f 0x38 0x30-0x3f
    {0x30,0x00," vpmovzxbw Vx,Ux/Mq (66),(v1) | vpmovwb Wx,Vx (F3),(ev)"},
    {0x31,0x00," vpmovzxbd Vx,Ux/Md (66),(v1) | vpmovdb Wx,Vd (F3),(ev)"},
    {0x32,0x00," vpmovzxbq Vx,Ux/Mw (66),(v1) | vpmovqb Wx,Vq (F3),(ev)"},
    {0x33,0x00," vpmovzxwd Vx,Ux/Mq (66),(v1) | vpmovdw Wx,Vd (F3),(ev)"},
    {0x34,0x00," vpmovzxwq Vx,Ux/Md (66),(v1) | vpmovqw Wx,Vq (F3),(ev)"},
    {0x35,0x00," vpmovzxdq Vx,Ux/Mq (66),(v1) | vpmovqd Wx,Vq (F3),(ev)"},
    {0x36,0x00," vpermd Vqq,Hqq,Wqq (66),(v) | vpermd/q Vqq,Hqq,Wqq (66),(evo)"},
    {0x37,0x00," vpcmpgtq Vx,Hx,Wx (66),(v1)"},
    {0x38,0x00," vpminsb Vx,Hx,Wx (66),(v1) | vpmovm2d/q Vx,Uk (F3),(ev)"},
    {0x39,0x00," vpminsd Vx,Hx,Wx (66),(v1) | vpminsd/q Vx,Hx,Wx (66),(evo) | vpmovd2m/q2m Vk,Ux (F3),(ev)"},
    {0x3A,0x00," vpminuw Vx,Hx,Wx (66),(v1) | vpbroadcastmw2d Vx,Uk (F3),(ev)"},
    {0x3B,0x00," vpminud Vx,Hx,Wx (66),(v1) | vpminud/q Vx,Hx,Wx (66),(evo)"},
    {0x3C,0x00," vpmaxsb Vx,Hx,Wx (66),(v1)"},
    {0x3D,0x00," vpmaxsd Vx,Hx,Wx (66),(v1) | vpmaxsd/q Vx,Hx,Wx (66),(evo)"},
    {0x3E,0x00," vpmaxuw Vx,Hx,Wx (66),(v1)"},
    {0x3F,0x00," vpmaxud Vx,Hx,Wx (66),(v1) | vpmaxud/q Vx,Hx,Wx (66),(evo)"},
    //# 0x0f 0x38 0x40-0x8f
    {0x40,0x00," vpmulld Vx,Hx,Wx (66),(v1) | vpmulld/q Vx,Hx,Wx (66),(evo)"},
    {0x41,0x00," vphminposuw Vdq,Wdq (66),(v1)"},
    {0x42,0x00," vgetexpps/d Vx,Wx (66),(ev)"},
    {0x43,0x00," vgetexpss/d Vx,Hx,Wx (66),(ev)"},
    {0x44,0x00," vplzcntd/q Vx,Wx (66),(ev)"},
    {0x45,0x00," vpsrlvd/q Vx,Hx,Wx (66),(v)"},
    {0x46,0x00," vpsravd Vx,Hx,Wx (66),(v) | vpsravd/q Vx,Hx,Wx (66),(evo)"},
    {0x47,0x00," vpsllvd/q Vx,Hx,Wx (66),(v)"},
    {0x48,0x00,NULL},
    //# Skip 0x48-0x4b
    {0x49,0x00,NULL},
    {0x4A,0x00,NULL},
    {0x4B,0x00,NULL},
    {0x4C,0x00," vrcp14ps/d Vpd,Wpd (66),(ev)"},
    {0x4D,0x00," vrcp14ss/d Vsd,Hpd,Wsd (66),(ev)"},
    {0x4E,0x00," vrsqrt14ps/d Vpd,Wpd (66),(ev)"},
    {0x4F,0x00," vrsqrt14ss/d Vsd,Hsd,Wsd (66),(ev)"},
    {0x50,0x00," vpdpbusd Vx,Hx,Wx (66),(ev)"},
    {0x51,0x00," vpdpbusds Vx,Hx,Wx (66),(ev)"},
    {0x52,0x00," vdpbf16ps Vx,Hx,Wx (F3),(ev) | vpdpwssd Vx,Hx,Wx (66),(ev) | vp4dpwssd Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0x53,0x00," vpdpwssds Vx,Hx,Wx (66),(ev) | vp4dpwssds Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0x54,0x00," vpopcntb/w Vx,Wx (66),(ev)"},
    {0x55,0x00," vpopcntd/q Vx,Wx (66),(ev)"},
    {0x56,0x00,NULL},
    {0x57,0x00,NULL},
    {0x58,0x00," vpbroadcastd Vx,Wx (66),(v)"},
    {0x59,0x00," vpbroadcastq Vx,Wx (66),(v) | vbroadcasti32x2 Vx,Wx (66),(evo)"},
    {0x5A,0x00," vbroadcasti128 Vqq,Mdq (66),(v) | vbroadcasti32x4/64x2 Vx,Wx (66),(evo)"},
    {0x5B,0x00," vbroadcasti32x8/64x4 Vqq,Mdq (66),(ev)"},
    //# Skip 0x5c-0x61
    {0x5C,0x00,NULL},
    {0x5D,0x00,NULL},
    {0x5E,0x00,NULL},
    {0x5F,0x00,NULL},
    {0x60,0x00,NULL},
    {0x61,0x00,NULL},
    {0x62,0x00," vpexpandb/w Vx,Wx (66),(ev)"},
    {0x63,0x00," vpcompressb/w Wx,Vx (66),(ev)"},
    {0x64,0x00," vpblendmd/q Vx,Hx,Wx (66),(ev)"},
    {0x65,0x00," vblendmps/d Vx,Hx,Wx (66),(ev)"},
    {0x66,0x00," vpblendmb/w Vx,Hx,Wx (66),(ev)"},
    {0x67,0x00,NULL},
    {0x68,0x00," vp2intersectd/q Kx,Hx,Wx (F2),(ev)"},
    //# Skip 0x69-0x6f
    {0x69,0x00,NULL},
    {0x6A,0x00,NULL},
    {0x6B,0x00,NULL},
    {0x6C,0x00,NULL},
    {0x6D,0x00,NULL},
    {0x6E,0x00,NULL},
    {0x6F,0x00,NULL},
    {0x70,0x00," vpshldvw Vx,Hx,Wx (66),(ev)"},
    {0x71,0x00," vpshldvd/q Vx,Hx,Wx (66),(ev)"},
    {0x72,0x00," vcvtne2ps2bf16 Vx,Hx,Wx (F2),(ev) | vcvtneps2bf16 Vx,Wx (F3),(ev) | vpshrdvw Vx,Hx,Wx (66),(ev)"},
    {0x73,0x00," vpshrdvd/q Vx,Hx,Wx (66),(ev)"},
    {0x74,0x00,NULL},
    {0x75,0x00," vpermi2b/w Vx,Hx,Wx (66),(ev)"},
    {0x76,0x00," vpermi2d/q Vx,Hx,Wx (66),(ev)"},
    {0x77,0x00," vpermi2ps/d Vx,Hx,Wx (66),(ev)"},
    {0x78,0x00," vpbroadcastb Vx,Wx (66),(v)"},
    {0x79,0x00," vpbroadcastw Vx,Wx (66),(v)"},
    {0x7A,0x00," vpbroadcastb Vx,Rv (66),(ev)"},
    {0x7B,0x00," vpbroadcastw Vx,Rv (66),(ev)"},
    {0x7C,0x00," vpbroadcastd/q Vx,Rv (66),(ev)"},
    {0x7D,0x00," vpermt2b/w Vx,Hx,Wx (66),(ev)"},
    {0x7E,0x00," vpermt2d/q Vx,Hx,Wx (66),(ev)"},
    {0x7F,0x00," vpermt2ps/d Vx,Hx,Wx (66),(ev)"},
    {0x80,0x00," INVEPT Gy,Mdq (66)"},
    {0x81,0x00," INVVPID Gy,Mdq (66)"},
    {0x82,0x00," INVPCID Gy,Mdq (66)"},
    {0x83,0x00," vpmultishiftqb Vx,Hx,Wx (66),(ev)"},
    {0x84,0x00,NULL},
    {0x85,0x00,NULL},
    {0x86,0x00,NULL},
    {0x87,0x00,NULL},
    {0x88,0x00," vexpandps/d Vpd,Wpd (66),(ev)"},
    {0x89,0x00," vpexpandd/q Vx,Wx (66),(ev)"},
    {0x8A,0x00," vcompressps/d Wx,Vx (66),(ev)"},
    {0x8B,0x00," vpcompressd/q Wx,Vx (66),(ev)"},
    {0x8C,0x00," vpmaskmovd/q Vx,Hx,Mx (66),(v)"},
    {0x8D,0x00," vpermb/w Vx,Hx,Wx (66),(ev)"},
    {0x8E,0x00," vpmaskmovd/q Mx,Vx,Hx (66),(v)"},
    {0x8F,0x00," vpshufbitqmb Kx,Hx,Wx (66),(ev)"},
    //# 0x0f 0x38 0x90-0xbf (FMA)
    {0x90,0x00," vgatherdd/q Vx,Hx,Wx (66),(v) | vpgatherdd/q Vx,Wx (66),(evo)"},
    {0x91,0x00," vgatherqd/q Vx,Hx,Wx (66),(v) | vpgatherqd/q Vx,Wx (66),(evo)"},
    {0x92,0x00," vgatherdps/d Vx,Hx,Wx (66),(v)"},
    {0x93,0x00," vgatherqps/d Vx,Hx,Wx (66),(v)"},
    {0xff,0x00," UD0"},
    {0xff,0x00," UD0"},
    {0x96,0x00," vfmaddsub132ps/d Vx,Hx,Wx (66),(v)"},
    {0x97,0x00," vfmsubadd132ps/d Vx,Hx,Wx (66),(v)"},
    {0x98,0x00," vfmadd132ps/d Vx,Hx,Wx (66),(v)"},
    {0x99,0x00," vfmadd132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0x9A,0x00," vfmsub132ps/d Vx,Hx,Wx (66),(v) | v4fmaddps Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0x9B,0x00," vfmsub132ss/d Vx,Hx,Wx (66),(v),(v1) | v4fmaddss Vdq,Hdq,Wdq (F2),(ev)"},
    {0x9C,0x00," vfnmadd132ps/d Vx,Hx,Wx (66),(v)"},
    {0x9D,0x00," vfnmadd132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0x9E,0x00," vfnmsub132ps/d Vx,Hx,Wx (66),(v)"},
    {0x9F,0x00," vfnmsub132ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xA0,0x00," vpscatterdd/q Wx,Vx (66),(ev)"},
    {0xA1,0x00," vpscatterqd/q Wx,Vx (66),(ev)"},
    {0xA2,0x00," vscatterdps/d Wx,Vx (66),(ev)"},
    {0xA3,0x00," vscatterqps/d Wx,Vx (66),(ev)"},
    {0xA4,0x00,NULL},
    {0xA5,0x00,NULL},
    {0xA6,0x00," vfmaddsub213ps/d Vx,Hx,Wx (66),(v)"},
    {0xA7,0x00," vfmsubadd213ps/d Vx,Hx,Wx (66),(v)"},
    {0xA8,0x00," vfmadd213ps/d Vx,Hx,Wx (66),(v)"},
    {0xA9,0x00," vfmadd213ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xAA,0x00," vfmsub213ps/d Vx,Hx,Wx (66),(v) | v4fnmaddps Vdqq,Hdqq,Wdq (F2),(ev)"},
    {0xAB,0x00," vfmsub213ss/d Vx,Hx,Wx (66),(v),(v1) | v4fnmaddss Vdq,Hdq,Wdq (F2),(ev)"},
    {0xAC,0x00," vfnmadd213ps/d Vx,Hx,Wx (66),(v)"},
    {0xAD,0x00," vfnmadd213ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xAE,0x00," vfnmsub213ps/d Vx,Hx,Wx (66),(v)"},
    {0xAF,0x00," vfnmsub213ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xB0,0x00,NULL},
    {0xB1,0x00,NULL},
    {0xB2,0x00,NULL},
    {0xB3,0x00,NULL},
    {0xB4,0x00," vpmadd52luq Vx,Hx,Wx (66),(ev)"},
    {0xB5,0x00," vpmadd52huq Vx,Hx,Wx (66),(ev)"},
    {0xB6,0x00," vfmaddsub231ps/d Vx,Hx,Wx (66),(v)"},
    {0xB7,0x00," vfmsubadd231ps/d Vx,Hx,Wx (66),(v)"},
    {0xB8,0x00," vfmadd231ps/d Vx,Hx,Wx (66),(v)"},
    {0xB9,0x00," vfmadd231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xBA,0x00," vfmsub231ps/d Vx,Hx,Wx (66),(v)"},
    {0xBB,0x00," vfmsub231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xBC,0x00," vfnmadd231ps/d Vx,Hx,Wx (66),(v)"},
    {0xBD,0x00," vfnmadd231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    {0xBE,0x00," vfnmsub231ps/d Vx,Hx,Wx (66),(v)"},
    {0xBF,0x00," vfnmsub231ss/d Vx,Hx,Wx (66),(v),(v1)"},
    //# 0x0f 0x38 0xc0-0xff
    {0xC0,0x00,NULL},
    {0xC1,0x00,NULL},
    {0xC2,0x00,NULL},
    {0xC3,0x00,NULL},
    {0xC4,0x00," vpconflictd/q Vx,Wx (66),(ev)"},
    {0xC5,0x00,NULL},
    {0xC6,0x80," Grp18 (1A)"},
    {0xC7,0x80," Grp19 (1A)"},
    {0xC8,0x00," sha1nexte Vdq,Wdq | vexp2ps/d Vx,Wx (66),(ev)"},
    {0xC9,0x00," sha1msg1 Vdq,Wdq"},
    {0xCA,0x00," sha1msg2 Vdq,Wdq | vrcp28ps/d Vx,Wx (66),(ev)"},
    {0xCB,0x00," sha256rnds2 Vdq,Wdq | vrcp28ss/d Vx,Hx,Wx (66),(ev)"},
    {0xCC,0x00," sha256msg1 Vdq,Wdq | vrsqrt28ps/d Vx,Wx (66),(ev)"},
    {0xCD,0x00," sha256msg2 Vdq,Wdq | vrsqrt28ss/d Vx,Hx,Wx (66),(ev)"},
    {0xCE,0x00,NULL},
    {0xCF,0x00," vgf2p8mulb Vx,Wx (66)"},
    {0xD0,0x00,NULL},
    {0xD1,0x00,NULL},
    {0xD2,0x00,NULL},
    {0xD3,0x00,NULL},
    {0xD4,0x00,NULL},
    {0xD5,0x00,NULL},
    {0xD6,0x00,NULL},
    {0xD7,0x00,NULL},
    {0xD8,0x00,NULL},
    {0xD9,0x00,NULL},
    {0xDA,0x00,NULL},
    {0xDB,0x00," VAESIMC Vdq,Wdq (66),(v1)"},
    {0xDC,0x00," vaesenc Vx,Hx,Wx (66)"},
    {0xDD,0x00," vaesenclast Vx,Hx,Wx (66)"},
    {0xDE,0x00," vaesdec Vx,Hx,Wx (66)"},
    {0xDF,0x00," vaesdeclast Vx,Hx,Wx (66)"},
    {0xE0,0x00,NULL},
    {0xE1,0x00,NULL},
    {0xE2,0x00,NULL},
    {0xE3,0x00,NULL},
    {0xE4,0x00,NULL},
    {0xE5,0x00,NULL},
    {0xE6,0x00,NULL},
    {0xE7,0x00,NULL},
    {0xE8,0x00,NULL},
    {0xE9,0x00,NULL},
    {0xEA,0x00,NULL},
    {0xEB,0x00,NULL},
    {0xEC,0x00,NULL},
    {0xED,0x00,NULL},
    {0xEE,0x00,NULL},
    {0xEF,0x00,NULL},
    {0xF0,0x00," MOVBE Gy,My | MOVBE Gw,Mw (66) | CRC32 Gd,Eb (F2) | CRC32 Gd,Eb (66&F2)"},
    {0xF1,0x00," MOVBE My,Gy | MOVBE Mw,Gw (66) | CRC32 Gd,Ey (F2) | CRC32 Gd,Ew (66&F2)"},
    {0xF2,0x00," ANDN Gy,By,Ey (v)"},
    {0xF3,0x80," Grp17 (1A)"},
    {0xF4,0x00,NULL},
    {0xF5,0x00," BZHI Gy,Ey,By (v) | PEXT Gy,By,Ey (F3),(v) | PDEP Gy,By,Ey (F2),(v) | WRUSSD/Q My,Gy (66)"},
    {0xF6,0x00," ADCX Gy,Ey (66) | ADOX Gy,Ey (F3) | MULX By,Gy,rDX,Ey (F2),(v) | WRSSD/Q My,Gy"},
    {0xF7,0x00," BEXTR Gy,Ey,By (v) | SHLX Gy,Ey,By (66),(v) | SARX Gy,Ey,By (F3),(v) | SHRX Gy,Ey,By (F2),(v)"},
    {0xF8,0x00," MOVDIR64B Gv,Mdqq (66) | ENQCMD Gv,Mdqq (F2) | ENQCMDS Gv,Mdqq (F3)"},
    {0xF9,0x00," MOVDIRI My,Gy"},
    {0xFA,0x00,NULL},
    {0xFB,0x00,NULL},
    {0xFC,0x00,NULL},
    {0xFD,0x00,NULL},
    {0xFE,0x00,NULL},
    {0xFF,0x00,NULL},
};

OP_ENTRY OP3BMap_0F3Ah[256] = {
    //# 0x0f 0x3a 0x00-0xff
    {0x00,0x00," vpermq Vqq,Wqq,Ib (66),(v)"},
    {0x01,0x00," vpermpd Vqq,Wqq,Ib (66),(v)"},
    {0x02,0x00," vpblendd Vx,Hx,Wx,Ib (66),(v)"},
    {0x03,0x00," valignd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x04,0x00," vpermilps Vx,Wx,Ib (66),(v)"},
    {0x05,0x00," vpermilpd Vx,Wx,Ib (66),(v)"},
    {0x06,0x00," vperm2f128 Vqq,Hqq,Wqq,Ib (66),(v)"},
    {0x07,0x00,NULL},
    {0x08,0x00," vroundps Vx,Wx,Ib (66) | vrndscaleps Vx,Wx,Ib (66),(evo)"},
    {0x09,0x00," vroundpd Vx,Wx,Ib (66) | vrndscalepd Vx,Wx,Ib (66),(evo)"},
    {0x0A,0x00," vroundss Vss,Wss,Ib (66),(v1) | vrndscaless Vx,Hx,Wx,Ib (66),(evo)"},
    {0x0B,0x00," vroundsd Vsd,Wsd,Ib (66),(v1) | vrndscalesd Vx,Hx,Wx,Ib (66),(evo)"},
    {0x0C,0x00," vblendps Vx,Hx,Wx,Ib (66)"},
    {0x0D,0x00," vblendpd Vx,Hx,Wx,Ib (66)"},
    {0x0E,0x00," vpblendw Vx,Hx,Wx,Ib (66),(v1)"},
    {0x0F,0x00," palignr Pq,Qq,Ib | vpalignr Vx,Hx,Wx,Ib (66),(v1)"},
    {0x10,0x00,NULL},
    {0x11,0x00,NULL},
    {0x12,0x00,NULL},
    {0x13,0x00,NULL},
    {0x14,0x00," vpextrb Rd/Mb,Vdq,Ib (66),(v1)"},
    {0x15,0x00," vpextrw Rd/Mw,Vdq,Ib (66),(v1)"},
    {0x16,0x00," vpextrd/q Ey,Vdq,Ib (66),(v1)"},
    {0x17,0x00," vextractps Ed,Vdq,Ib (66),(v1)"},
    {0x18,0x00," vinsertf128 Vqq,Hqq,Wqq,Ib (66),(v) | vinsertf32x4/64x2 Vqq,Hqq,Wqq,Ib (66),(evo)"},
    {0x19,0x00," vextractf128 Wdq,Vqq,Ib (66),(v) | vextractf32x4/64x2 Wdq,Vqq,Ib (66),(evo)"},
    {0x1A,0x00," vinsertf32x8/64x4 Vqq,Hqq,Wqq,Ib (66),(ev)"},
    {0x1B,0x00," vextractf32x8/64x4 Wdq,Vqq,Ib (66),(ev)"},
    {0x1C,0x00,NULL},
    {0x1D,0x00," vcvtps2ph Wx,Vx,Ib (66),(v)"},
    {0x1E,0x00," vpcmpud/q Vk,Hd,Wd,Ib (66),(ev)"},
    {0x1F,0x00," vpcmpd/q Vk,Hd,Wd,Ib (66),(ev)"},
    {0x20,0x00," vpinsrb Vdq,Hdq,Ry/Mb,Ib (66),(v1)"},
    {0x21,0x00," vinsertps Vdq,Hdq,Udq/Md,Ib (66),(v1)"},
    {0x22,0x00," vpinsrd/q Vdq,Hdq,Ey,Ib (66),(v1)"},
    {0x23,0x00," vshuff32x4/64x2 Vx,Hx,Wx,Ib (66),(ev)"},
    {0x24,0x00,NULL},
    {0x25,0x00," vpternlogd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x26,0x00," vgetmantps/d Vx,Wx,Ib (66),(ev)"},
    {0x27,0x00," vgetmantss/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x28,0x00,NULL},
    {0x29,0x00,NULL},
    {0x2A,0x00,NULL},
    {0x2B,0x00,NULL},
    {0x2C,0x00,NULL},
    {0x2D,0x00,NULL},
    {0x2E,0x00,NULL},
    {0x2F,0x00,NULL},
    {0x30,0x00," kshiftrb/w Vk,Uk,Ib (66),(v)"},
    {0x31,0x00," kshiftrd/q Vk,Uk,Ib (66),(v)"},
    {0x32,0x00," kshiftlb/w Vk,Uk,Ib (66),(v)"},
    {0x33,0x00," kshiftld/q Vk,Uk,Ib (66),(v)"},
    {0x34,0x00,NULL},
    {0x35,0x00,NULL},
    {0x36,0x00,NULL},
    {0x37,0x00,NULL},
    {0x38,0x00," vinserti128 Vqq,Hqq,Wqq,Ib (66),(v) | vinserti32x4/64x2 Vqq,Hqq,Wqq,Ib (66),(evo)"},
    {0x39,0x00," vextracti128 Wdq,Vqq,Ib (66),(v) | vextracti32x4/64x2 Wdq,Vqq,Ib (66),(evo)"},
    {0x3A,0x00," vinserti32x8/64x4 Vqq,Hqq,Wqq,Ib (66),(ev)"},
    {0x3B,0x00," vextracti32x8/64x4 Wdq,Vqq,Ib (66),(ev)"},
    {0x3C,0x00,NULL},
    {0x3D,0x00,NULL},
    {0x3E,0x00," vpcmpub/w Vk,Hk,Wx,Ib (66),(ev)"},
    {0x3F,0x00," vpcmpb/w Vk,Hk,Wx,Ib (66),(ev)"},
    {0x40,0x00," vdpps Vx,Hx,Wx,Ib (66)"},
    {0x41,0x00," vdppd Vdq,Hdq,Wdq,Ib (66),(v1)"},
    {0x42,0x00," vmpsadbw Vx,Hx,Wx,Ib (66),(v1) | vdbpsadbw Vx,Hx,Wx,Ib (66),(evo)"},
    {0x43,0x00," vshufi32x4/64x2 Vx,Hx,Wx,Ib (66),(ev)"},
    {0x44,0x00," vpclmulqdq Vx,Hx,Wx,Ib (66)"},
    {0x45,0x00,NULL},
    {0x46,0x00," vperm2i128 Vqq,Hqq,Wqq,Ib (66),(v)"},
    {0x47,0x00,NULL},
    {0x48,0x00,NULL},
    {0x49,0x00,NULL},
    {0x4A,0x00," vblendvps Vx,Hx,Wx,Lx (66),(v)"},
    {0x4B,0x00," vblendvpd Vx,Hx,Wx,Lx (66),(v)"},
    {0x4C,0x00," vpblendvb Vx,Hx,Wx,Lx (66),(v1)"},
    {0x4D,0x00,NULL},
    {0x4E,0x00,NULL},
    {0x4F,0x00,NULL},
    {0x50,0x00," vrangeps/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x51,0x00," vrangess/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x52,0x00,NULL},
    {0x53,0x00,NULL},
    {0x54,0x00," vfixupimmps/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x55,0x00," vfixupimmss/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x56,0x00," vreduceps/d Vx,Wx,Ib (66),(ev)"},
    {0x57,0x00," vreducess/d Vx,Hx,Wx,Ib (66),(ev)"},
    {0x58,0x00,NULL},
    {0x59,0x00,NULL},
    {0x5A,0x00,NULL},
    {0x5B,0x00,NULL},
    {0x5C,0x00,NULL},
    {0x5D,0x00,NULL},
    {0x5E,0x00,NULL},
    {0x5F,0x00,NULL},
    {0x60,0x00," vpcmpestrm Vdq,Wdq,Ib (66),(v1)"},
    {0x61,0x00," vpcmpestri Vdq,Wdq,Ib (66),(v1)"},
    {0x62,0x00," vpcmpistrm Vdq,Wdq,Ib (66),(v1)"},
    {0x63,0x00," vpcmpistri Vdq,Wdq,Ib (66),(v1)"},
    {0x64,0x00,NULL},
    {0x65,0x00,NULL},
    {0x66,0x00," vfpclassps/d Vk,Wx,Ib (66),(ev)"},
    {0x67,0x00," vfpclassss/d Vk,Wx,Ib (66),(ev)"},
    {0x68,0x00,NULL},
    {0x69,0x00,NULL},
    {0x6A,0x00,NULL},
    {0x6B,0x00,NULL},
    {0x6C,0x00,NULL},
    {0x6D,0x00,NULL},
    {0x6E,0x00,NULL},
    {0x6F,0x00,NULL},
    {0x70,0x00," vpshldw Vx,Hx,Wx,Ib (66),(ev)"},
    {0x71,0x00," vpshldd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x72,0x00," vpshrdw Vx,Hx,Wx,Ib (66),(ev)"},
    {0x73,0x00," vpshrdd/q Vx,Hx,Wx,Ib (66),(ev)"},
    {0x74,0x00,NULL},
    {0x75,0x00,NULL},
    {0x76,0x00,NULL},
    {0x77,0x00,NULL},
    {0x78,0x00,NULL},
    {0x79,0x00,NULL},
    {0x7A,0x00,NULL},
    {0x7B,0x00,NULL},
    {0x7C,0x00,NULL},
    {0x7D,0x00,NULL},
    {0x7E,0x00,NULL},
    {0x7F,0x00,NULL},
    {0x80,0x00,NULL},
    {0x81,0x00,NULL},
    {0x82,0x00,NULL},
    {0x83,0x00,NULL},
    {0x84,0x00,NULL},
    {0x85,0x00,NULL},
    {0x86,0x00,NULL},
    {0x87,0x00,NULL},
    {0x88,0x00,NULL},
    {0x89,0x00,NULL},
    {0x8A,0x00,NULL},
    {0x8B,0x00,NULL},
    {0x8C,0x00,NULL},
    {0x8D,0x00,NULL},
    {0x8E,0x00,NULL},
    {0x8F,0x00,NULL},
    {0x90,0x00,NULL},
    {0x91,0x00,NULL},
    {0x92,0x00,NULL},
    {0x93,0x00,NULL},
    {0x94,0x00,NULL},
    {0x95,0x00,NULL},
    {0x96,0x00,NULL},
    {0x97,0x00,NULL},
    {0x98,0x00,NULL},
    {0x99,0x00,NULL},
    {0x9A,0x00,NULL},
    {0x9B,0x00,NULL},
    {0x9C,0x00,NULL},
    {0x9D,0x00,NULL},
    {0x9E,0x00,NULL},
    {0x9F,0x00,NULL},
    {0xA0,0x00,NULL},
    {0xA1,0x00,NULL},
    {0xA2,0x00,NULL},
    {0xA3,0x00,NULL},
    {0xA4,0x00,NULL},
    {0xA5,0x00,NULL},
    {0xA6,0x00,NULL},
    {0xA7,0x00,NULL},
    {0xA8,0x00,NULL},
    {0xA9,0x00,NULL},
    {0xAA,0x00,NULL},
    {0xAB,0x00,NULL},
    {0xAC,0x00,NULL},
    {0xAD,0x00,NULL},
    {0xAE,0x00,NULL},
    {0xAF,0x00,NULL},
    {0xB0,0x00,NULL},
    {0xB1,0x00,NULL},
    {0xB2,0x00,NULL},
    {0xB3,0x00,NULL},
    {0xB4,0x00,NULL},
    {0xB5,0x00,NULL},
    {0xB6,0x00,NULL},
    {0xB7,0x00,NULL},
    {0xB8,0x00,NULL},
    {0xB9,0x00,NULL},
    {0xBA,0x00,NULL},
    {0xBB,0x00,NULL},
    {0xBC,0x00,NULL},
    {0xBD,0x00,NULL},
    {0xBE,0x00,NULL},
    {0xBF,0x00,NULL},
    {0xC0,0x00,NULL},
    {0xC1,0x00,NULL},
    {0xC2,0x00,NULL},
    {0xC3,0x00,NULL},
    {0xC4,0x00,NULL},
    {0xC5,0x00,NULL},
    {0xC6,0x00,NULL},
    {0xC7,0x00,NULL},
    {0xC8,0x00,NULL},
    {0xC9,0x00,NULL},
    {0xCA,0x00,NULL},
    {0xCB,0x00,NULL},
    {0xCC,0x00," sha1rnds4 Vdq,Wdq,Ib"},
    {0xCD,0x00,NULL},
    {0xCE,0x00," vgf2p8affineqb Vx,Wx,Ib (66)"},
    {0xCF,0x00," vgf2p8affineinvqb Vx,Wx,Ib (66)"},
    {0xD0,0x00,NULL},
    {0xD1,0x00,NULL},
    {0xD2,0x00,NULL},
    {0xD3,0x00,NULL},
    {0xD4,0x00,NULL},
    {0xD5,0x00,NULL},
    {0xD6,0x00,NULL},
    {0xD7,0x00,NULL},
    {0xD8,0x00,NULL},
    {0xD9,0x00,NULL},
    {0xDA,0x00,NULL},
    {0xDB,0x00,NULL},
    {0xDC,0x00,NULL},
    {0xDD,0x00,NULL},
    {0xDE,0x00,NULL},
    {0xDF,0x00," VAESKEYGEN Vdq,Wdq,Ib (66),(v1)"},
    {0xE0,0x00,NULL},
    {0xE1,0x00,NULL},
    {0xE2,0x00,NULL},
    {0xE3,0x00,NULL},
    {0xE4,0x00,NULL},
    {0xE5,0x00,NULL},
    {0xE6,0x00,NULL},
    {0xE7,0x00,NULL},
    {0xE8,0x00,NULL},
    {0xE9,0x00,NULL},
    {0xEA,0x00,NULL},
    {0xEB,0x00,NULL},
    {0xEC,0x00,NULL},
    {0xED,0x00,NULL},
    {0xEE,0x00,NULL},
    {0xEF,0x00,NULL},
    {0xF0,0x00," RORX Gy,Ey,Ib (F2),(v)"},
    {0xF1,0x00,NULL},
    {0xF2,0x00,NULL},
    {0xF3,0x00,NULL},
    {0xF4,0x00,NULL},
    {0xF5,0x00,NULL},
    {0xF6,0x00,NULL},
    {0xF7,0x00,NULL},
    {0xF8,0x00,NULL},
    {0xF9,0x00,NULL},
    {0xFA,0x00,NULL},
    {0xFB,0x00,NULL},
    {0xFC,0x00,NULL},
    {0xFD,0x00,NULL},
    {0xFE,0x00,NULL},
    {0xFF,0x00,NULL},
};
OP_ENTRY Grp17_F3h[8] = {
    {0xF3,0x80,NULL},
    {0xF3,0x81," BLSR By,Ey (v)"},
    {0xF3,0x82," BLSMSK By,Ey (v)"},
    {0xF3,0x83," BLSI By,Ey (v)"},
    {0xF3,0x84,NULL},
    {0xF3,0x85,NULL},
    {0xF3,0x86,NULL},
    {0xF3,0x87,NULL},
};
OP_ENTRY Grp18_C6h[8] = {
    {0xC6,0x80,NULL},
    {0xC6,0x81," vgatherpf0dps/d Wx (66),(ev)"},
    {0xC6,0x82," vgatherpf1dps/d Wx (66),(ev)"},
    {0xC6,0x83,NULL},
    {0xC6,0x84,NULL},
    {0xC6,0x85," vscatterpf0dps/d Wx (66),(ev)"},
    {0xC6,0x86," vscatterpf1dps/d Wx (66),(ev)"},
    {0xC6,0x87,NULL},
};
OP_ENTRY Grp19_C7h[8] = {
    {0xC7,0x80,NULL},
    {0xC7,0x81," vgatherpf0qps/d Wx (66),(ev)"},
    {0xC7,0x82," vgatherpf1qps/d Wx (66),(ev)"},
    {0xC7,0x83,NULL},
    {0xC7,0x84,NULL},
    {0xC7,0x85," vscatterpf0qps/d Wx (66),(ev)"},
    {0xC7,0x86," vscatterpf1qps/d Wx (66),(ev)"},
    {0xC7,0x87,NULL},
};

extern "C" int ndisasm(unsigned char* data, OPENTRY * pOpEntry, E_ADM eADM, unsigned int* flags);

// find 8 throughput
static BOOL GrpMatch(WCHAR* strModRM, BYTE bModRM)
{
    BYTE BitMap[8] = { 0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01 };
    for (int i = 2; i < 5; i++)
    {
        if (strModRM[i] == _T('x') ||
            (strModRM[i] == _T('1') && (bModRM & BitMap[i])) ||
            (strModRM[i] == _T('0') && (bModRM & BitMap[i]) == 0))
        {
        }
        else
        {
            return FALSE;
        }
    }
    return TRUE;
}

static BOOL OPMatch(WCHAR* strOP, BYTE bOP)
{
    BYTE BitMap[8] = { 0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01 };

    for (int i = 0; i < 8; i++)
    {
        if (strOP[i] == _T('x') ||
            (strOP[i] == _T('1') && (bOP & BitMap[i])) ||
            (strOP[i] == _T('0') && (bOP & BitMap[i]) == 0))
        {
        }
        else
        {
            return FALSE;
        }
    }
    return TRUE;
}

static BOOL ByteMapHitPrefix(BYTE data)
{
    switch (data)
    {
    case 0xF2:
    case 0xF3:
    case 0x9B:
    case 0xF0:
    case 0x2E:
    case 0x36:
    case 0x3E:
    case 0x26:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    //case 0xC4:
    //case 0xC5:
    //case 0x62:
    //case 0x8F:
    //case 0x40:
    //case 0x41:
    //case 0x42:
    //case 0x43:
    //case 0x44:
    //case 0x45:
    //case 0x46:
    //case 0x47:
    //case 0x48:
    //case 0x49:
    //case 0x4A:
    //case 0x4B:
    //case 0x4C:
    //case 0x4D:
    //case 0x4E:
    //case 0x4F:
    // case 0x0F:
        return TRUE;
    default:
        return FALSE;
    }
}

static BOOL OpcodeGroupCheck(E_XB_OP eOPTab, BYTE ptr_buffer)
{
    if (eOPTab == E_AD16)
    {
        return OP1BMap[ptr_buffer].OPExt;
    }
    else if (eOPTab == E_AD32)
    {
        return OP2BMap[ptr_buffer].OPExt;
    }
    return FALSE;
}

// sprintf array
DWORD EnumGrp(OP_ENTRY* pGrp, WCHAR* strModRMMatch, OPENTRY* pOpEntry, DWORD nOpEntryMax)
{
    DWORD lFound = 0;
    /*int8_t*/BYTE OpIdx = pOpEntry->OP;
    for (int GrpIdx = 0; (GrpIdx < 8) && (lFound < nOpEntryMax); GrpIdx++)
    {
        if (GrpMatch(strModRMMatch, GrpIdx))
        {
            if (pGrp[GrpIdx].strFmt)
            {
                pOpEntry->OP = OpIdx;
                pOpEntry->OPExt = GrpIdx | 0x80; //set [bit 7] for valid
                swprintf(pOpEntry->strDisasm, 128, _T("%hs"), pGrp[GrpIdx].strFmt);
                pOpEntry++;
                lFound++;
            }
        }
    }
    return lFound;
}



LIB_OP_API DWORD xEnumOPCode(E_XB_OP eOPTab, E_ADM eADM, WCHAR* strOPMatch, OPENTRY* pOpEntry, DWORD nOpEntryMax, DWORD nOption)
{
    DWORD lFound = 0;
    OP_ENTRY* pGrp;

    /* WCHAR* strModRmList[256]; */

    // decode to double operand level mnemonic and operand type
    if (nOption & OPTION_EXPAND_MODRM_REG)
    {

    }
    // decode to single operand level mnemonic and operand type
    else if (nOption & OPTION_EXPAND_MODRM_EA)
    {
        // input, multiple byte string array
        unsigned char buffer[16];
        // pointer to buffer for typing
        unsigned char* ptr_buffer;
        // pointer to buffer for fetching
        unsigned char* ptr2_buffer;
        // binary data length in byte
        int lendis;
        // switch display, switch loop behavior options
        unsigned int options;
        // manipulate loop sequential
        int OP_2;
        // inner loop count
        int nOPExtIdx;
        // prefix indicator
        unsigned int prefixes;
        // prefix finished indicator
        unsigned int lFound2;

        // initialize pointer before usage
        ptr_buffer = buffer;
        ptr2_buffer = buffer;
        // initialze buffer
        memset(buffer, 0xCC, sizeof(buffer));

        // check op-code length

        if (eOPTab == E_1B_OP)
        {
            // reserve three slots for prefix
            ptr_buffer = buffer + 0 + 3;
        }
        else if (eOPTab == E_2B_OP)
        {
            buffer[3] = 0x0F;
            // reserve three slots for prefix
            ptr_buffer = buffer + 1 + 3;
        }
        else if (eOPTab == E_3B_OP)
        {
            buffer[3] = 0x0F;
            buffer[4] = 0x38;           /* fixed assignment, temporary*/
            //buffer[4] = 0x3A;           /* fixed assignment, temporary*/
            // reserve three slots for prefix
            ptr_buffer = buffer + 2 + 3;
        }

        // main for loop
        for (int OpIdx = 0; (OpIdx < 256) && (lFound < nOpEntryMax); OpIdx++)
        {
            // update op-code byte in each iterate
            *(ptr_buffer + 0) = (unsigned char)OpIdx;
            // update options in each iterate
            options = 0;
            // update found entry in each iterate
            lFound2 = lFound;

            // check wchar 0 ~ 7
            if (OPMatch(strOPMatch + 0, OpIdx))
            {
                nOPExtIdx = 256;
            }
            else
            {
                nOPExtIdx = 0;
            }

            // small index for all possible prefixes
            int PrefixIdx = 0;
            int next_PrefixIdx = 0;
            // while loop is more verbose than triple for loop
            int OPExtIdx = 0;
            while ((OPExtIdx < nOPExtIdx) && (lFound < nOpEntryMax))
            {
                // mapping loop index to binary data
                if (OpcodeGroupCheck(eOPTab, ptr_buffer[0]))
                {
                    // set as group
                    options |= 0x08000000;
                    // group index: {mod,op,rm} <--> {op,mod,rm}
                    OP_2 = ((OPExtIdx & 0x18) << 3) |
                        ((OPExtIdx & 0xE0) >> 2) | (OPExtIdx & 0x07);
                }
                else
                {
                    // not set as group
                    //options |= 0x08000000;
                    // register index: {mod,reg,rm} <--> {mod,rm,reg}
                    OP_2 = (OPExtIdx & 0xC0) | ((OPExtIdx & 0x07) << 3) |
                        ((OPExtIdx & 0x38) >> 3);
                }

                // update extended op-code byte
                *(ptr_buffer + 1) = (unsigned char)OP_2;

                // update binary data pointer for prefix indicator
                switch (PrefixIdx)
                {
                case 0x00:      // default prefix
                    prefixes = 0x00000000;
                    ptr2_buffer = buffer + 3;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0x66;
                    break;
                case 0x66:      // operand size prefix
                    prefixes = 0x00000200;
                    buffer[2] = 0x66;
                    ptr2_buffer = buffer + 3 - 1;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0xF2;
                    break;
                case 0x9B:      // FWAIT/WAIT prefix
                    prefixes = 0x00002000;
                    buffer[2] = 0x9B;
                    ptr2_buffer = buffer + 3 - 1;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0xF2;
                    break;
                case 0xF2:      // REPNE prefix
                    prefixes = 0x00000004;
                    buffer[2] = 0xF2;
                    ptr2_buffer = buffer + 3 - 1;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0xF3;
                    break;
                case 0xF3:      // REP prefix
                    prefixes = 0x00000002;
                    buffer[2] = 0xF3;
                    ptr2_buffer = buffer + 3 - 1;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0x00;
                    break;
                case 0x48:      // REX.W prefix
                    prefixes = 0x00001000;
                    buffer[2] = 0x48;
                    ptr2_buffer = buffer + 3 - 1;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0x00;
                    break;
                case 0xF266:    // CRC32 need this prefix
                    prefixes = 0x00000204;
                    // cannot exchange with each other
                    buffer[1] = 0x66;
                    buffer[2] = 0xF2;
                    ptr2_buffer = buffer + 3 - 2;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0x00;
                    break;
                default:
                    break;
                }

                // check wchar 8 ~ 15
                // check default prefix mnemonic
                if (OPMatch(strOPMatch + 8, OP_2) && (PrefixIdx == 0))
                {
                    // preserve reg/op information
                    options = 0x80000000 | (options & 0x0C000000);
                    lendis = ndisasm(ptr2_buffer, pOpEntry, eADM, &options);
                }
                // exists prefix but different mnemonic, or exists prefix only mnemonic
                else if (OPMatch(strOPMatch + 8, OP_2))
                {
                    // preserve reg/op information
                    options = 0x40000000 | (options & 0x0C000000);
                    lendis = ndisasm(ptr2_buffer, pOpEntry, eADM, &options);
                }
                else
                {
                    lendis = 0;
                }

                // match and valid cases

                if (ByteMapHitPrefix(ptr_buffer[0]))
                {
                    OPExtIdx = 256;     // skip rest
                }
                // no prefix instruction go here
                else if ((options & 0x03000000) != (eOPTab << 24))
                {
                    OPExtIdx = 256;     // skip rest
                }
                // no multiple-byte instruction mismatch go here
                else if (options & 0x08000000)
                {
                    pOpEntry->ReqPrefix = prefixes;
                    pOpEntry->OP = OpIdx;
                    pOpEntry->OPExt = 0x80 | ((OP_2 >> 3) & 0x07);
                    if (lendis && (options & 0x00F00000) && next_PrefixIdx)
                    {
                        pOpEntry++;
                        lFound++;
                        PrefixIdx = next_PrefixIdx;
                    }
                    else if (lendis)
                    {
                        pOpEntry++;
                        lFound++;
                        // reset to default prefix
                        PrefixIdx = 0;
                        OPExtIdx++;         // find next member
                        //lFound2 = lFound;   // update found entries
                    }
                    else if ((options & 0x00F00000) && next_PrefixIdx)
                    {
                        PrefixIdx = next_PrefixIdx;
                    }
                    else
                    {
                        // reset to default prefix
                        PrefixIdx = 0;
                        OPExtIdx++;         // find next member
                        lFound2 = lFound;   // update found entries
                    }
                }
                // no group instruction go here
                else if (options & 0x04000000)
                {
                    pOpEntry->ReqPrefix = prefixes;
                    pOpEntry->OP = OpIdx;
                    pOpEntry->OPExt = 0;
                    if (lendis && (options & 0x00F00000) && next_PrefixIdx)
                    {
                        pOpEntry++;
                        lFound++;
                        PrefixIdx = next_PrefixIdx;
                    }
                    else if (lendis)
                    {
                        pOpEntry++;
                        lFound++;
                        // reset to default prefix
                        PrefixIdx = 0;
                        OPExtIdx |= 0x07;   // skip rest
                        OPExtIdx++;         // find next member
                        lFound2 = lFound;   // update found entries
                    }
                    // prefix exists and not last one
                    else if ((options & 0x00F00000) && next_PrefixIdx)
                    {
                        PrefixIdx = next_PrefixIdx;
                    }
                    else if(lFound2 == lFound)
                    {
                        // reset to default prefixs
                        PrefixIdx = 0;
                        OPExtIdx++;         // always check next member
                    }
                    else
                    {
                        // reset to default prefixs
                        PrefixIdx = 0;
                        OPExtIdx |= 0x07;   // skip rest
                        OPExtIdx++;         // find next member
                        lFound2 = lFound;   // update found entries
                    }
                }
                // no modrm instruction go here
                else
                {
                    pOpEntry->ReqPrefix = prefixes;
                    pOpEntry->OP = OpIdx;
                    pOpEntry->OPExt = 0;
                    if (lendis && (options & 0x00F00000) && next_PrefixIdx)
                    {
                        pOpEntry++;
                        lFound++;
                        PrefixIdx = next_PrefixIdx;
                    }
                    else if (lendis)
                    {
                        pOpEntry++;
                        lFound++;
                        OPExtIdx = 256; // skip rest
                        //lFound2 = lFound;   // update found entries
                    }
                    else if ((options & 0x00F00000) && next_PrefixIdx)
                    {
                        PrefixIdx = next_PrefixIdx;
                    }
                    else if (lFound2 == lFound)
                    {
                        // reset to default prefix
                        PrefixIdx = 0;
                        OPExtIdx++;         // always check next member
                    }
                    else
                    {
                        // reset to default prefix
                        PrefixIdx = 0;
                        OPExtIdx = 256;     // skip rest
                        //lFound2 = lFound;   // update found entries
                    }
                }
            }
        }
    }
    // decode to instruction level mnemonic and operand type
    else if (nOption & OPTION_DECODE_OPMAP)
    {
        for (int OpIdx = 0; (OpIdx < 256) && (lFound < nOpEntryMax); OpIdx++)
        {
            if (OPMatch(strOPMatch, OpIdx))
            {
                if (eOPTab == E_1B_OP)
                {
                    pGrp = NULL;
                    switch (OpIdx)
                    {
                    case 0x80://Grp1
                        pGrp = Grp01_80h;
                        break;
                    case 0x81://Grp1
                        pGrp = Grp01_81h;
                        break;
                    case 0x82://Grp1
                        pGrp = Grp01_82h;
                        break;
                    case 0x83://Grp1
                        pGrp = Grp01_83h;
                        break;
                    case 0x8f://Grp1A 
                        pGrp = Grp01A_8Fh;
                        break;
                    case 0xc6://Grp11A 
                        pGrp = Grp11_C6h;
                        break;
                    case 0xc7://Grp11B 
                        pGrp = Grp11_C7h;
                        break;
                    case 0xf6://Grp3_1 
                        pGrp = Grp03_F6h;
                        break;
                    case 0xf7://Grp3_2 
                        pGrp = Grp03_F7h;
                        break;
                    case 0xfe://Grp4 
                        pGrp = Grp04_FEh;
                        break;
                    case 0xff://Grp5
                        pGrp = Grp05_FFh;
                        break;
                    default:
                        break;
                    }

                    if (pGrp)
                    {
                        DWORD lGrpFound = 0;
                        pOpEntry->OP = OpIdx;
                        lGrpFound = EnumGrp(pGrp, &strOPMatch[8], pOpEntry, nOpEntryMax - lFound);
                        pOpEntry += lGrpFound;
                        lFound += lGrpFound;
                    }
                    else
                    {
                        if (OP1BMap[OpIdx].strFmt)
                        {
                            pOpEntry->OP = OpIdx;
                            swprintf(pOpEntry->strDisasm, 128, _T("%hs"), OP1BMap[OpIdx].strFmt);
                            pOpEntry++;
                            lFound++;
                        }
                    }
                }
                else if (eOPTab == E_2B_OP)
                {
                    pGrp = NULL;
                    switch (OpIdx)
                    {
                    case 0x00: //Grp6
                        pGrp = Grp06_00h;
                        break;
                    case 0x01: //Grp7
                        pGrp = Grp07_01h;
                        break;
                    case 0x18: //Grp16
                        pGrp = Grp16_18h;
                        break;
                    case 0x71: //Grp12
                        pGrp = Grp12_71h;
                        break;
                    case 0x72: //Grp13
                        pGrp = Grp13_72h;
                        break;
                    case 0x73: //Grp14
                        pGrp = Grp14_73h;
                        break;
                    case 0xAE: //Grp15
                        pGrp = Grp15_AEh;
                        break;
                    case 0xB9: //Grp10
                        pGrp = Grp10_B9h;
                        break;
                    case 0xBA: //Grp8
                        pGrp = Grp08_BAh;
                        break;
                    case 0xC7: //Grp9
                        pGrp = Grp09_C7h;
                        break;
                    default:
                        break;
                    }

                    if (pGrp)
                    {
                        DWORD lGrpFound = 0;
                        pOpEntry->OP = OpIdx;
                        lGrpFound = EnumGrp(pGrp, &strOPMatch[8], pOpEntry, nOpEntryMax - lFound);
                        pOpEntry += lGrpFound;
                        lFound += lGrpFound;
                    }
                    else
                    {
                        if (OP2BMap[OpIdx].strFmt)
                        {
                            pOpEntry->OP = OpIdx;
                            swprintf(pOpEntry->strDisasm, 128, _T("%hs"), OP2BMap[OpIdx].strFmt);
                            pOpEntry++;
                            lFound++;
                        }
                    }
                }
            }
        }
    }

EXIT:
    return lFound;
}
