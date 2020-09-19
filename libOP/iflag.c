/* This file is auto-generated. Don't edit. */
#include "pch.h"
#include "iflag.h"

/* All combinations of instruction flags used in instruction patterns */
const iflag_t insns_flags[159] = {
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*   0 : 8086 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*   1 : 8086,NOLONG */
    {{UINT32_C(0x00000004),UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*   2 : 8086,NOLONG,SB */
    {{UINT32_C(0x00000001),UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*   3 : 8086,LOCK,SM */
    {{UINT32_C(0x00000001),UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*   4 : 386,LOCK,SM */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*   5 : 386 */
    {{UINT32_C(0x00000001),UINT32_C(0x00000028),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*   6 : LOCK,LONG,SM,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*   7 : LONG,X86_64 */
    {{UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*   8 : 8086,SM */
    {{UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*   9 : 386,SM */
    {{UINT32_C(0x00000001),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  10 : LONG,SM,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  11 : 8086,LOCK */
    {{UINT32_C(0x00000000),UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  12 : 386,LOCK */
    {{UINT32_C(0x00000000),UINT32_C(0x00000028),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  13 : LOCK,LONG,X86_64 */
    {{UINT32_C(0x00000001),UINT32_C(0x00000014),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  14 : 286,NOLONG,PROT,SM */
    {{UINT32_C(0x00000000),UINT32_C(0x00000014),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  15 : 286,NOLONG,PROT */
    {{UINT32_C(0x00000000),UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000002)}}, /*  16 : 186,NOLONG */
    {{UINT32_C(0x00000000),UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  17 : 386,NOLONG */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000010)}}, /*  18 : 486 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000200),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  19 : 8086,BND */
    {{UINT32_C(0x00000000),UINT32_C(0x00000210),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  20 : 8086,BND,NOLONG */
    {{UINT32_C(0x00000000),UINT32_C(0x00000210),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  21 : 386,BND,NOLONG */
    {{UINT32_C(0x00000000),UINT32_C(0x00000220),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  22 : BND,LONG,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  23 : 286,PRIV */
    {{UINT32_C(0x00000001),UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  24 : LOCK,PENT,SM */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  25 : PENT */
    {{UINT32_C(0x00000001),UINT32_C(0x00000408),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000010)}}, /*  26 : 486,LOCK,OBSOLETE,SM,UNDOC */
    {{UINT32_C(0x00000000),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000010)}}, /*  27 : 486,OBSOLETE,UNDOC */
    {{UINT32_C(0x00000000),UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  28 : LOCK,PENT */
    {{UINT32_C(0x00000000),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  29 : MMX,PENT */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000002)}}, /*  30 : 186 */
    {{UINT32_C(0x00000000),UINT32_C(0x00001000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  31 : 8086,FPU */
    {{UINT32_C(0x00000000),UINT32_C(0x00001000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000040)}}, /*  32 : FPU,P6 */
    {{UINT32_C(0x00000000),UINT32_C(0x00001000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  33 : 386,FPU */
    {{UINT32_C(0x00000000),UINT32_C(0x00004000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  34 : 3DNOW,PENT */
    {{UINT32_C(0x00000000),UINT32_C(0x00001400),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  35 : 286,FPU,UNDOC */
    {{UINT32_C(0x00000000),UINT32_C(0x00001000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000200)}}, /*  36 : FPU,PRESCOTT */
    {{UINT32_C(0x00000008),UINT32_C(0x00001000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  37 : 8086,FPU,SW */
    {{UINT32_C(0x00000000),UINT32_C(0x00001000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  38 : 286,FPU */
    {{UINT32_C(0x00000000),UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  39 : 8086,PRIV */
    {{UINT32_C(0x00000008),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000008)}}, /*  40 : 386,OBSOLETE,SW,UNDOC */
    {{UINT32_C(0x00000000),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000008)}}, /*  41 : 386,OBSOLETE,UNDOC */
    {{UINT32_C(0x00000010),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000008)}}, /*  42 : 386,OBSOLETE,SD,UNDOC */
    {{UINT32_C(0x00000002),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000002)}}, /*  43 : 186,SM2 */
    {{UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000002)}}, /*  44 : 186,SM */
    {{UINT32_C(0x00000002),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  45 : 386,SM2 */
    {{UINT32_C(0x00000002),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  46 : LONG,SM2,X86_64 */
    {{UINT32_C(0x00000004),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  47 : 8086,SB */
    {{UINT32_C(0x00000004),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  48 : 386,SB */
    {{UINT32_C(0x00000000),UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000010)}}, /*  49 : 486,PRIV */
    {{UINT32_C(0x00000000),UINT32_C(0x80000011),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00004000)}}, /*  50 : FUTURE,INVPCID,NOLONG,PRIV */
    {{UINT32_C(0x00000000),UINT32_C(0x80000021),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00004000)}}, /*  51 : FUTURE,INVPCID,LONG,PRIV */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00008000)}}, /*  52 : IA64 */
    {{UINT32_C(0x00000008),UINT32_C(0x00000004),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  53 : 286,PROT,SW */
    {{UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  54 : 286,PROT */
    {{UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  55 : 386,PROT */
    {{UINT32_C(0x00000000),UINT32_C(0x00000024),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  56 : LONG,PROT,X86_64 */
    {{UINT32_C(0x00000008),UINT32_C(0x00000004),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  57 : 386,PROT,SW */
    {{UINT32_C(0x00000008),UINT32_C(0x00000024),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  58 : LONG,PROT,SW,X86_64 */
    {{UINT32_C(0x00000800),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  59 : 8086,ANYSIZE */
    {{UINT32_C(0x00000800),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  60 : 386,ANYSIZE */
    {{UINT32_C(0x00000800),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  61 : ANYSIZE,LONG,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00040400)}}, /*  62 : AMD,LONG,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000005),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  63 : 286,PRIV,PROT */
    {{UINT32_C(0x00000000),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000004)}}, /*  64 : 286,OBSOLETE,UNDOC */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000200)}}, /*  65 : PRESCOTT */
    {{UINT32_C(0x00000000),UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000200)}}, /*  66 : NOLONG,PRESCOTT */
    {{UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  67 : 8086,SW */
    {{UINT32_C(0x00020000),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  68 : LONG,OPT,X86_64 */
    {{UINT32_C(0x00020000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  69 : 8086,OPT */
    {{UINT32_C(0x00020000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  70 : 386,OPT */
    {{UINT32_C(0x00000001),UINT32_C(0x00000040),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  71 : 8086,NOHLE,SM */
    {{UINT32_C(0x00000001),UINT32_C(0x00000040),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  72 : 386,NOHLE,SM */
    {{UINT32_C(0x00000001),UINT32_C(0x00000060),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  73 : LONG,NOHLE,SM,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000011),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  74 : 386,NOLONG,PRIV */
    {{UINT32_C(0x00000000),UINT32_C(0x00000021),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  75 : LONG,PRIV,X86_64 */
    {{UINT32_C(0x00020001),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  76 : LONG,OPT,SM,X86_64 */
    {{UINT32_C(0x00000010),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  77 : MMX,PENT,SD */
    {{UINT32_C(0x00000400),UINT32_C(0x00002020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  78 : LONG,MMX,SX,X86_64 */
    {{UINT32_C(0x00000020),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  79 : MMX,PENT,SQ */
    {{UINT32_C(0x00000000),UINT32_C(0x00002020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  80 : LONG,MMX,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000040)}}, /*  81 : P6 */
    {{UINT32_C(0x00000020),UINT32_C(0x00004000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  82 : 3DNOW,PENT,SQ */
    {{UINT32_C(0x00000000),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000001)}}, /*  83 : 8086,OBSOLETE,UNDOC */
    {{UINT32_C(0x00001200),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000002)}}, /*  84 : 186,AR0,SIZE */
    {{UINT32_C(0x00001200),UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  85 : 386,AR0,NOLONG,SIZE */
    {{UINT32_C(0x00000010),UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  86 : 386,NOLONG,SD */
    {{UINT32_C(0x00001200),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  87 : AR0,LONG,SIZE,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  88 : PENT,PRIV */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  89 : X86_64 */
    {{UINT32_C(0x00000008),UINT32_C(0x00000200),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  90 : 8086,BND,SW */
    {{UINT32_C(0x00000008),UINT32_C(0x00000210),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000001)}}, /*  91 : 8086,BND,NOLONG,SW */
    {{UINT32_C(0x00000008),UINT32_C(0x00000220),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  92 : BND,LONG,SW,X86_64 */
    {{UINT32_C(0x00000008),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  93 : LONG,SW,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000002),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000020)}}, /*  94 : PENT,SMM */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004)}}, /*  95 : 286 */
    {{UINT32_C(0x00004006),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  96 : 386,AR2,SB,SM2 */
    {{UINT32_C(0x00004006),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /*  97 : AR2,LONG,SB,SM2,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /*  98 : 386,UNDOC */
    {{UINT32_C(0x00000000),UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000040)}}, /*  99 : P6,PRIV */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000004),UINT32_C(0x00000002)}}, /* 100 : 186,OBSOLETE */
    {{UINT32_C(0x00000001),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /* 101 : 386,SM,UNDOC */
    {{UINT32_C(0x00000001),UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000010)}}, /* 102 : 486,LOCK,SM */
    {{UINT32_C(0x00000008),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /* 103 : 386,SW,UNDOC */
    {{UINT32_C(0x00000010),UINT32_C(0x00000400),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /* 104 : 386,SD,UNDOC */
    {{UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000040)}}, /* 105 : P6,SM */
    {{UINT32_C(0x00000000),UINT32_C(0x00000200),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000008)}}, /* 106 : 386,BND */
    {{UINT32_C(0x00000000),UINT32_C(0x00008000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 107 : KATMAI,SSE */
    {{UINT32_C(0x00000000),UINT32_C(0x0000a000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 108 : KATMAI,MMX,SSE */
    {{UINT32_C(0x00002010),UINT32_C(0x00008000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 109 : AR1,KATMAI,SD,SSE */
    {{UINT32_C(0x00002020),UINT32_C(0x00008020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 110 : AR1,LONG,SQ,SSE,X86_64 */
    {{UINT32_C(0x00002010),UINT32_C(0x00008020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 111 : AR1,LONG,SD,SSE,X86_64 */
    {{UINT32_C(0x00000020),UINT32_C(0x0000a000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 112 : KATMAI,MMX,SQ,SSE */
    {{UINT32_C(0x00000000),UINT32_C(0x00008020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 113 : LONG,SSE,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00009000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000040)}}, /* 114 : FPU,P6,SSE */
    {{UINT32_C(0x00000000),UINT32_C(0x00009020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 115 : FPU,LONG,SSE,X86_64 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000800)}}, /* 116 : NEHALEM */
    {{UINT32_C(0x00000000),UINT32_C(0x00000001),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000800)}}, /* 117 : NEHALEM,PRIV */
    {{UINT32_C(0x00000000),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000800)}}, /* 118 : LONG,NEHALEM */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00004000)}}, /* 119 : FUTURE */
    {{UINT32_C(0x00000000),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00004000)}}, /* 120 : FUTURE,LONG */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 121 : KATMAI */
    {{UINT32_C(0x00000000),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 122 : KATMAI,MMX */
    {{UINT32_C(0x00000020),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 123 : KATMAI,MMX,SQ */
    {{UINT32_C(0x00004004),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 124 : AR2,KATMAI,MMX,SB */
    {{UINT32_C(0x00004006),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000080)}}, /* 125 : AR2,KATMAI,MMX,SB,SM2 */
    {{UINT32_C(0x00000000),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 126 : SSE2,WILLAMETTE */
    {{UINT32_C(0x00000040),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 127 : SO,SSE2,WILLAMETTE */
    {{UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 128 : SD,WILLAMETTE */
    {{UINT32_C(0x00000020),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 129 : LONG,SQ,X86_64 */
    {{UINT32_C(0x00000010),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 130 : SD,SSE2,WILLAMETTE */
    {{UINT32_C(0x00000020),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 131 : SQ,SSE2,WILLAMETTE */
    {{UINT32_C(0x00000000),UINT32_C(0x00010020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 132 : LONG,SSE2,X86_64 */
    {{UINT32_C(0x00000020),UINT32_C(0x00002000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 133 : MMX,SQ,WILLAMETTE */
    {{UINT32_C(0x00004004),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 134 : AR2,SB,SSE2,WILLAMETTE */
    {{UINT32_C(0x00004004),UINT32_C(0x00010020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 135 : AR2,LONG,SB,SSE2,X86_64 */
    {{UINT32_C(0x00004006),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 136 : AR2,SB,SM2,SSE2,WILLAMETTE */
    {{UINT32_C(0x00002004),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 137 : AR1,SB,SSE2,WILLAMETTE */
    {{UINT32_C(0x00002020),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 138 : AR1,SQ,SSE2,WILLAMETTE */
    {{UINT32_C(0x00002020),UINT32_C(0x00010020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 139 : AR1,LONG,SQ,SSE2,X86_64 */
    {{UINT32_C(0x00002010),UINT32_C(0x00010000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000100)}}, /* 140 : AR1,SD,SSE2,WILLAMETTE */
    {{UINT32_C(0x00000040),UINT32_C(0x00020000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000200)}}, /* 141 : PRESCOTT,SO,SSE3 */
    {{UINT32_C(0x00000020),UINT32_C(0x00020000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000200)}}, /* 142 : PRESCOTT,SQ,SSE3 */
    {{UINT32_C(0x00000000),UINT32_C(0x00020000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000200)}}, /* 143 : PRESCOTT,SSE3 */
    {{UINT32_C(0x00000020),UINT32_C(0x00082000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000)}}, /* 144 : MMX,SQ,SSSE3 */
    {{UINT32_C(0x00000000),UINT32_C(0x00080000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000)}}, /* 145 : SSSE3 */
    {{UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00040040)}}, /* 146 : AMD,P6 */
    {{UINT32_C(0x00000000),UINT32_C(0x00200000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000)}}, /* 147 : SSE41 */
    {{UINT32_C(0x00000000),UINT32_C(0x00200020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 148 : LONG,SSE41,X86_64 */
    {{UINT32_C(0x00004004),UINT32_C(0x00200000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000)}}, /* 149 : AR2,SB,SSE41 */
    {{UINT32_C(0x00004004),UINT32_C(0x00200020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000400)}}, /* 150 : AR2,LONG,SB,SSE41,X86_64 */
    {{UINT32_C(0x00000020),UINT32_C(0x00200000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000)}}, /* 151 : SQ,SSE41 */
    {{UINT32_C(0x00000010),UINT32_C(0x00200000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000)}}, /* 152 : SD,SSE41 */
    {{UINT32_C(0x00000008),UINT32_C(0x00200000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000)}}, /* 153 : SSE41,SW */
    {{UINT32_C(0x00000008),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000800)}}, /* 154 : NEHALEM,SW */
    {{UINT32_C(0x00000010),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000800)}}, /* 155 : NEHALEM,SD */
    {{UINT32_C(0x00000020),UINT32_C(0x00000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00000800)}}, /* 156 : LONG,NEHALEM,SQ */
    {{UINT32_C(0x00000000),UINT32_C(0x08000000),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00004000)}}, /* 157 : BMI1,FUTURE */
    {{UINT32_C(0x00000000),UINT32_C(0x08000020),UINT32_C(0x00000000),UINT32_C(0x00000000),UINT32_C(0x00004000)}}, /* 158 : BMI1,FUTURE,LONG */
};
