/* This file auto-generated from insns.dat by insns.pl - don't edit it */
#include "pch.h"
#include "nasm.h"
#include "insns.h"

static const struct itemplate instrux[] = {
    /*    0 */ {I_RESB, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    1 */ {I_RESW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    2 */ {I_RESD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    3 */ {I_RESQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    4 */ {I_REST, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    5 */ {I_RESO, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    6 */ {I_RESY, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    7 */ {I_RESZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7548, 0},
    /*    8 */ {I_AAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8418, 1},
    /*    9 */ {I_AAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7410, 1},
    /*   10 */ {I_AAD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7414, 2},
    /*   11 */ {I_AAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7418, 1},
    /*   12 */ {I_AAM, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7422, 2},
    /*   13 */ {I_AAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8421, 1},
    /*   14 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5615, 3},
    /*   15 */ {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5616, 0},
    /*   16 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3107, 3},
    /*   17 */ {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3108, 0},
    /*   18 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3113, 4},
    /*   19 */ {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3114, 5},
    /*   20 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3119, 6},
    /*   21 */ {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3120, 7},
    /*   22 */ {I_ADC, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7426, 8},
    /*   23 */ {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7426, 0},
    /*   24 */ {I_ADC, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5620, 8},
    /*   25 */ {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5620, 0},
    /*   26 */ {I_ADC, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5625, 9},
    /*   27 */ {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5625, 5},
    /*   28 */ {I_ADC, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5630, 10},
    /*   29 */ {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5630, 7},
    /*   30 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+965, 11},
    /*   31 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+972, 12},
    /*   32 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+979, 13},
    /*   33 */ {I_ADC, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7430, 8},
    /*   34 */ {I_ADC, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5635, 8},
    /*   35 */ {I_ADC, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5640, 9},
    /*   36 */ {I_ADC, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5645, 10},
    /*   37 */ {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3125, 3},
    /*   38 */ {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3131, 3},
    /*   39 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+986, 3},
    /*   40 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+993, 4},
    /*   41 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1000, 6},
    /*   42 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+986, 3},
    /*   43 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+993, 4},
    /*   44 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5650, 3},
    /*   45 */ {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5651, 0},
    /*   46 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3137, 3},
    /*   47 */ {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3138, 0},
    /*   48 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3143, 4},
    /*   49 */ {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3144, 5},
    /*   50 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3149, 6},
    /*   51 */ {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3150, 7},
    /*   52 */ {I_ADD, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7434, 8},
    /*   53 */ {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7434, 0},
    /*   54 */ {I_ADD, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5655, 8},
    /*   55 */ {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5655, 0},
    /*   56 */ {I_ADD, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5660, 9},
    /*   57 */ {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5660, 5},
    /*   58 */ {I_ADD, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5665, 10},
    /*   59 */ {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5665, 7},
    /*   60 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1007, 11},
    /*   61 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1014, 12},
    /*   62 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1021, 13},
    /*   63 */ {I_ADD, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7438, 8},
    /*   64 */ {I_ADD, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5670, 8},
    /*   65 */ {I_ADD, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5675, 9},
    /*   66 */ {I_ADD, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5680, 10},
    /*   67 */ {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3155, 3},
    /*   68 */ {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3161, 3},
    /*   69 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1028, 3},
    /*   70 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1035, 4},
    /*   71 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1042, 6},
    /*   72 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3155, 3},
    /*   73 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3161, 3},
    /*   74 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1028, 3},
    /*   75 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1035, 4},
    /*   76 */ {I_AND, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5685, 3},
    /*   77 */ {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5686, 0},
    /*   78 */ {I_AND, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3167, 3},
    /*   79 */ {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3168, 0},
    /*   80 */ {I_AND, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3173, 4},
    /*   81 */ {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3174, 5},
    /*   82 */ {I_AND, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3179, 6},
    /*   83 */ {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3180, 7},
    /*   84 */ {I_AND, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7442, 8},
    /*   85 */ {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7442, 0},
    /*   86 */ {I_AND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5690, 8},
    /*   87 */ {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5690, 0},
    /*   88 */ {I_AND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5695, 9},
    /*   89 */ {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5695, 5},
    /*   90 */ {I_AND, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5700, 10},
    /*   91 */ {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5700, 7},
    /*   92 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1049, 11},
    /*   93 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1056, 12},
    /*   94 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1063, 13},
    /*   95 */ {I_AND, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7446, 8},
    /*   96 */ {I_AND, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5705, 8},
    /*   97 */ {I_AND, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5710, 9},
    /*   98 */ {I_AND, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5715, 10},
    /*   99 */ {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3185, 3},
    /*  100 */ {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3191, 3},
    /*  101 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1070, 3},
    /*  102 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1077, 4},
    /*  103 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1084, 6},
    /*  104 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3185, 3},
    /*  105 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3191, 3},
    /*  106 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1070, 3},
    /*  107 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1077, 4},
    /*  108 */ {I_ARPL, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7450, 14},
    /*  109 */ {I_ARPL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7450, 15},
    /*  110 */ {I_BOUND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5720, 16},
    /*  111 */ {I_BOUND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5725, 17},
    /*  112 */ {I_BSF, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1091, 9},
    /*  113 */ {I_BSF, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1091, 5},
    /*  114 */ {I_BSF, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1098, 9},
    /*  115 */ {I_BSF, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1098, 5},
    /*  116 */ {I_BSF, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1105, 10},
    /*  117 */ {I_BSF, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1105, 7},
    /*  118 */ {I_BSR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1112, 9},
    /*  119 */ {I_BSR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1112, 5},
    /*  120 */ {I_BSR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1119, 9},
    /*  121 */ {I_BSR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1119, 5},
    /*  122 */ {I_BSR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1126, 10},
    /*  123 */ {I_BSR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1126, 7},
    /*  124 */ {I_BSWAP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3197, 18},
    /*  125 */ {I_BSWAP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3203, 7},
    /*  126 */ {I_BT, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3209, 9},
    /*  127 */ {I_BT, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3209, 5},
    /*  128 */ {I_BT, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3215, 9},
    /*  129 */ {I_BT, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3215, 5},
    /*  130 */ {I_BT, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3221, 10},
    /*  131 */ {I_BT, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3221, 7},
    /*  132 */ {I_BT, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1133, 5},
    /*  133 */ {I_BT, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1140, 5},
    /*  134 */ {I_BT, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1147, 7},
    /*  135 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1154, 4},
    /*  136 */ {I_BTC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1155, 5},
    /*  137 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1161, 4},
    /*  138 */ {I_BTC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1162, 5},
    /*  139 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1168, 6},
    /*  140 */ {I_BTC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1169, 7},
    /*  141 */ {I_BTC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+117, 12},
    /*  142 */ {I_BTC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+125, 12},
    /*  143 */ {I_BTC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+133, 13},
    /*  144 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1175, 4},
    /*  145 */ {I_BTR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1176, 5},
    /*  146 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1182, 4},
    /*  147 */ {I_BTR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1183, 5},
    /*  148 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1189, 6},
    /*  149 */ {I_BTR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1190, 7},
    /*  150 */ {I_BTR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+141, 12},
    /*  151 */ {I_BTR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+149, 12},
    /*  152 */ {I_BTR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+157, 13},
    /*  153 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1196, 4},
    /*  154 */ {I_BTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1197, 5},
    /*  155 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1203, 4},
    /*  156 */ {I_BTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1204, 5},
    /*  157 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1210, 6},
    /*  158 */ {I_BTS, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1211, 7},
    /*  159 */ {I_BTS, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+165, 12},
    /*  160 */ {I_BTS, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+173, 12},
    /*  161 */ {I_BTS, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+181, 13},
    /*  162 */ {I_CALL, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5730, 19},
    /*  163 */ {I_CALL, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5735, 20},
    /*  164 */ {I_CALL, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5740, 21},
    /*  165 */ {I_CALL, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5745, 22},
    /*  166 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3245, 1},
    /*  167 */ {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3251, 1},
    /*  168 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3251, 1},
    /*  169 */ {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3257, 17},
    /*  170 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3257, 17},
    /*  171 */ {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5750, 1},
    /*  172 */ {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5755, 7},
    /*  173 */ {I_CALL, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5760, 0},
    /*  174 */ {I_CALL, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5765, 5},
    /*  175 */ {I_CALL, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5755, 7},
    /*  176 */ {I_CALL, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5770, 19},
    /*  177 */ {I_CALL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5775, 20},
    /*  178 */ {I_CALL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5780, 21},
    /*  179 */ {I_CALL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5785, 22},
    /*  180 */ {I_CBW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7454, 0},
    /*  181 */ {I_CDQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7458, 5},
    /*  182 */ {I_CDQE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7462, 7},
    /*  183 */ {I_CLC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7167, 0},
    /*  184 */ {I_CLD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5528, 0},
    /*  185 */ {I_CLI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6502, 0},
    /*  186 */ {I_CLTS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7466, 23},
    /*  187 */ {I_CMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8424, 0},
    /*  188 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7470, 8},
    /*  189 */ {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7470, 0},
    /*  190 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5790, 8},
    /*  191 */ {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5790, 0},
    /*  192 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5795, 9},
    /*  193 */ {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5795, 5},
    /*  194 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5800, 10},
    /*  195 */ {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5800, 7},
    /*  196 */ {I_CMP, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7474, 8},
    /*  197 */ {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7474, 0},
    /*  198 */ {I_CMP, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5805, 8},
    /*  199 */ {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5805, 0},
    /*  200 */ {I_CMP, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5810, 9},
    /*  201 */ {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5810, 5},
    /*  202 */ {I_CMP, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5815, 10},
    /*  203 */ {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5815, 7},
    /*  204 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3263, 0},
    /*  205 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3269, 5},
    /*  206 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3275, 7},
    /*  207 */ {I_CMP, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7478, 8},
    /*  208 */ {I_CMP, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5820, 8},
    /*  209 */ {I_CMP, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5825, 9},
    /*  210 */ {I_CMP, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5830, 10},
    /*  211 */ {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5835, 8},
    /*  212 */ {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5840, 8},
    /*  213 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3281, 8},
    /*  214 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3287, 9},
    /*  215 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3293, 10},
    /*  216 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5835, 8},
    /*  217 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5840, 8},
    /*  218 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3281, 8},
    /*  219 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3287, 9},
    /*  220 */ {I_CMPSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7482, 0},
    /*  221 */ {I_CMPSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5845, 5},
    /*  222 */ {I_CMPSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5850, 7},
    /*  223 */ {I_CMPSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5855, 0},
    /*  224 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3299, 24},
    /*  225 */ {I_CMPXCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3300, 25},
    /*  226 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1217, 24},
    /*  227 */ {I_CMPXCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1218, 25},
    /*  228 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1224, 24},
    /*  229 */ {I_CMPXCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1225, 25},
    /*  230 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1231, 6},
    /*  231 */ {I_CMPXCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1232, 7},
    /*  232 */ {I_CMPXCHG8B, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1238, 28},
    /*  233 */ {I_CMPXCHG16B, 1, {MEMORY|BITS128,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3317, 13},
    /*  234 */ {I_CPUID, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7486, 25},
    /*  235 */ {I_CQO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7490, 7},
    /*  236 */ {I_CWD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7494, 0},
    /*  237 */ {I_CWDE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7498, 5},
    /*  238 */ {I_DAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8427, 1},
    /*  239 */ {I_DAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8430, 1},
    /*  240 */ {I_DEC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7502, 1},
    /*  241 */ {I_DEC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7506, 17},
    /*  242 */ {I_DEC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5865, 11},
    /*  243 */ {I_DEC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3323, 11},
    /*  244 */ {I_DEC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3329, 12},
    /*  245 */ {I_DEC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3335, 13},
    /*  246 */ {I_DIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7510, 0},
    /*  247 */ {I_DIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5870, 0},
    /*  248 */ {I_DIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5875, 5},
    /*  249 */ {I_DIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5880, 7},
    /*  250 */ {I_EMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7514, 29},
    /*  251 */ {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5885, 30},
    /*  252 */ {I_EQU, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8480, 0},
    /*  253 */ {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+8480, 0},
    /*  254 */ {I_F2XM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7518, 31},
    /*  255 */ {I_FABS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7522, 31},
    /*  256 */ {I_FADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7526, 31},
    /*  257 */ {I_FADD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7530, 31},
    /*  258 */ {I_FADD, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5890, 31},
    /*  259 */ {I_FADD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5895, 31},
    /*  260 */ {I_FADD, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5890, 31},
    /*  261 */ {I_FADD, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5900, 31},
    /*  262 */ {I_FADDP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5905, 31},
    /*  263 */ {I_FADDP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5905, 31},
    /*  264 */ {I_FBLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7538, 31},
    /*  265 */ {I_FBLD, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7538, 31},
    /*  266 */ {I_FBSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7542, 31},
    /*  267 */ {I_FBSTP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7542, 31},
    /*  268 */ {I_FCHS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7546, 31},
    /*  269 */ {I_FCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5910, 31},
    /*  270 */ {I_FCMOVB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5915, 32},
    /*  271 */ {I_FCMOVB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5920, 32},
    /*  272 */ {I_FCMOVBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5925, 32},
    /*  273 */ {I_FCMOVBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5930, 32},
    /*  274 */ {I_FCMOVE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5935, 32},
    /*  275 */ {I_FCMOVE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5940, 32},
    /*  276 */ {I_FCMOVNB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5945, 32},
    /*  277 */ {I_FCMOVNB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5950, 32},
    /*  278 */ {I_FCMOVNBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5955, 32},
    /*  279 */ {I_FCMOVNBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5960, 32},
    /*  280 */ {I_FCMOVNE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5965, 32},
    /*  281 */ {I_FCMOVNE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5970, 32},
    /*  282 */ {I_FCMOVNU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5975, 32},
    /*  283 */ {I_FCMOVNU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5980, 32},
    /*  284 */ {I_FCMOVU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5985, 32},
    /*  285 */ {I_FCMOVU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5990, 32},
    /*  286 */ {I_FCOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7582, 31},
    /*  287 */ {I_FCOM, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7586, 31},
    /*  288 */ {I_FCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5995, 31},
    /*  289 */ {I_FCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6000, 31},
    /*  290 */ {I_FCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6005, 32},
    /*  291 */ {I_FCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6010, 32},
    /*  292 */ {I_FCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6015, 32},
    /*  293 */ {I_FCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6020, 32},
    /*  294 */ {I_FCOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7602, 31},
    /*  295 */ {I_FCOMP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7606, 31},
    /*  296 */ {I_FCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6025, 31},
    /*  297 */ {I_FCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6030, 31},
    /*  298 */ {I_FCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7614, 31},
    /*  299 */ {I_FCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7618, 33},
    /*  300 */ {I_FDECSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7622, 31},
    /*  301 */ {I_FDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6035, 31},
    /*  302 */ {I_FDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7626, 31},
    /*  303 */ {I_FDIV, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7630, 31},
    /*  304 */ {I_FDIV, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6040, 31},
    /*  305 */ {I_FDIV, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6045, 31},
    /*  306 */ {I_FDIV, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6040, 31},
    /*  307 */ {I_FDIV, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6050, 31},
    /*  308 */ {I_FDIVP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6055, 31},
    /*  309 */ {I_FDIVP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6055, 31},
    /*  310 */ {I_FDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7638, 31},
    /*  311 */ {I_FDIVR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7642, 31},
    /*  312 */ {I_FDIVR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6060, 31},
    /*  313 */ {I_FDIVR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6060, 31},
    /*  314 */ {I_FDIVR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6065, 31},
    /*  315 */ {I_FDIVR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6070, 31},
    /*  316 */ {I_FDIVRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6075, 31},
    /*  317 */ {I_FDIVRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6075, 31},
    /*  318 */ {I_FEMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7650, 34},
    /*  319 */ {I_FENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6080, 31},
    /*  320 */ {I_FFREE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6085, 31},
    /*  321 */ {I_FFREE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7654, 31},
    /*  322 */ {I_FFREEP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6090, 35},
    /*  323 */ {I_FFREEP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7658, 35},
    /*  324 */ {I_FIADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7662, 31},
    /*  325 */ {I_FIADD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7666, 31},
    /*  326 */ {I_FICOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7670, 31},
    /*  327 */ {I_FICOM, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7674, 31},
    /*  328 */ {I_FICOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7678, 31},
    /*  329 */ {I_FICOMP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7682, 31},
    /*  330 */ {I_FIDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7686, 31},
    /*  331 */ {I_FIDIV, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7690, 31},
    /*  332 */ {I_FIDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7694, 31},
    /*  333 */ {I_FIDIVR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7698, 31},
    /*  334 */ {I_FILD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7702, 31},
    /*  335 */ {I_FILD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7706, 31},
    /*  336 */ {I_FILD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7710, 31},
    /*  337 */ {I_FIMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7714, 31},
    /*  338 */ {I_FIMUL, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7718, 31},
    /*  339 */ {I_FINCSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7722, 31},
    /*  340 */ {I_FINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6095, 31},
    /*  341 */ {I_FIST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7726, 31},
    /*  342 */ {I_FIST, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7730, 31},
    /*  343 */ {I_FISTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7734, 31},
    /*  344 */ {I_FISTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7738, 31},
    /*  345 */ {I_FISTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7742, 31},
    /*  346 */ {I_FISTTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7746, 36},
    /*  347 */ {I_FISTTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7750, 36},
    /*  348 */ {I_FISTTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7754, 36},
    /*  349 */ {I_FISUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7758, 31},
    /*  350 */ {I_FISUB, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7762, 31},
    /*  351 */ {I_FISUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7766, 31},
    /*  352 */ {I_FISUBR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7770, 31},
    /*  353 */ {I_FLD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7774, 31},
    /*  354 */ {I_FLD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7778, 31},
    /*  355 */ {I_FLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7782, 31},
    /*  356 */ {I_FLD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6100, 31},
    /*  357 */ {I_FLD1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7790, 31},
    /*  358 */ {I_FLDCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7794, 37},
    /*  359 */ {I_FLDENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7798, 31},
    /*  360 */ {I_FLDL2E, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7802, 31},
    /*  361 */ {I_FLDL2T, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7806, 31},
    /*  362 */ {I_FLDLG2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7810, 31},
    /*  363 */ {I_FLDLN2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7814, 31},
    /*  364 */ {I_FLDPI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7818, 31},
    /*  365 */ {I_FLDZ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7822, 31},
    /*  366 */ {I_FMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7826, 31},
    /*  367 */ {I_FMUL, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7830, 31},
    /*  368 */ {I_FMUL, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6105, 31},
    /*  369 */ {I_FMUL, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6105, 31},
    /*  370 */ {I_FMUL, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6110, 31},
    /*  371 */ {I_FMUL, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6115, 31},
    /*  372 */ {I_FMULP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6120, 31},
    /*  373 */ {I_FMULP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6120, 31},
    /*  374 */ {I_FNCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5911, 31},
    /*  375 */ {I_FNDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6036, 31},
    /*  376 */ {I_FNENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6081, 31},
    /*  377 */ {I_FNINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6096, 31},
    /*  378 */ {I_FNOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7838, 31},
    /*  379 */ {I_FNSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6126, 31},
    /*  380 */ {I_FNSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6136, 37},
    /*  381 */ {I_FNSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6141, 31},
    /*  382 */ {I_FNSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6151, 37},
    /*  383 */ {I_FNSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6156, 38},
    /*  384 */ {I_FPATAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7842, 31},
    /*  385 */ {I_FPREM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7846, 31},
    /*  386 */ {I_FPREM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7850, 33},
    /*  387 */ {I_FPTAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7854, 31},
    /*  388 */ {I_FRNDINT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7858, 31},
    /*  389 */ {I_FRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7862, 31},
    /*  390 */ {I_FSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6125, 31},
    /*  391 */ {I_FSCALE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7866, 31},
    /*  392 */ {I_FSETPM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7870, 38},
    /*  393 */ {I_FSIN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7874, 33},
    /*  394 */ {I_FSINCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7878, 33},
    /*  395 */ {I_FSQRT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7882, 31},
    /*  396 */ {I_FST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7886, 31},
    /*  397 */ {I_FST, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7890, 31},
    /*  398 */ {I_FST, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6130, 31},
    /*  399 */ {I_FSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6135, 37},
    /*  400 */ {I_FSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6140, 31},
    /*  401 */ {I_FSTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7898, 31},
    /*  402 */ {I_FSTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7902, 31},
    /*  403 */ {I_FSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7906, 31},
    /*  404 */ {I_FSTP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6145, 31},
    /*  405 */ {I_FSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6150, 37},
    /*  406 */ {I_FSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6155, 38},
    /*  407 */ {I_FSUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7914, 31},
    /*  408 */ {I_FSUB, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7918, 31},
    /*  409 */ {I_FSUB, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6160, 31},
    /*  410 */ {I_FSUB, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6160, 31},
    /*  411 */ {I_FSUB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6165, 31},
    /*  412 */ {I_FSUB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6170, 31},
    /*  413 */ {I_FSUBP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6175, 31},
    /*  414 */ {I_FSUBP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6175, 31},
    /*  415 */ {I_FSUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7926, 31},
    /*  416 */ {I_FSUBR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7930, 31},
    /*  417 */ {I_FSUBR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6180, 31},
    /*  418 */ {I_FSUBR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6180, 31},
    /*  419 */ {I_FSUBR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6185, 31},
    /*  420 */ {I_FSUBR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6190, 31},
    /*  421 */ {I_FSUBRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6195, 31},
    /*  422 */ {I_FSUBRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6195, 31},
    /*  423 */ {I_FTST, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7938, 31},
    /*  424 */ {I_FUCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6200, 33},
    /*  425 */ {I_FUCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6205, 33},
    /*  426 */ {I_FUCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6210, 32},
    /*  427 */ {I_FUCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6215, 32},
    /*  428 */ {I_FUCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6220, 32},
    /*  429 */ {I_FUCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6225, 32},
    /*  430 */ {I_FUCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6230, 33},
    /*  431 */ {I_FUCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6235, 33},
    /*  432 */ {I_FUCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7958, 33},
    /*  433 */ {I_FXAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7962, 31},
    /*  434 */ {I_FXCH, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6240, 31},
    /*  435 */ {I_FXCH, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6240, 31},
    /*  436 */ {I_FXCH, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6245, 31},
    /*  437 */ {I_FXTRACT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7970, 31},
    /*  438 */ {I_FYL2X, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7974, 31},
    /*  439 */ {I_FYL2XP1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7978, 31},
    /*  440 */ {I_HLT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8433, 39},
    /*  441 */ {I_IDIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7982, 0},
    /*  442 */ {I_IDIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6250, 0},
    /*  443 */ {I_IDIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6255, 5},
    /*  444 */ {I_IDIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6260, 7},
    /*  445 */ {I_IMUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7986, 0},
    /*  446 */ {I_IMUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6265, 0},
    /*  447 */ {I_IMUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6270, 5},
    /*  448 */ {I_IMUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6275, 7},
    /*  449 */ {I_IMUL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3341, 9},
    /*  450 */ {I_IMUL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3341, 5},
    /*  451 */ {I_IMUL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3347, 9},
    /*  452 */ {I_IMUL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3347, 5},
    /*  453 */ {I_IMUL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3353, 10},
    /*  454 */ {I_IMUL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3353, 7},
    /*  455 */ {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3359, 43},
    /*  456 */ {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+3365, 44},
    /*  457 */ {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3359, 30},
    /*  458 */ {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+3365, 30},
    /*  459 */ {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3371, 45},
    /*  460 */ {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+3377, 9},
    /*  461 */ {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3371, 5},
    /*  462 */ {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+3377, 5},
    /*  463 */ {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3383, 46},
    /*  464 */ {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+3389, 46},
    /*  465 */ {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3383, 7},
    /*  466 */ {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+3389, 7},
    /*  467 */ {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3401, 30},
    /*  468 */ {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3407, 30},
    /*  469 */ {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3413, 5},
    /*  470 */ {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3419, 5},
    /*  471 */ {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3425, 7},
    /*  472 */ {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3431, 7},
    /*  473 */ {I_IN, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7990, 47},
    /*  474 */ {I_IN, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6280, 47},
    /*  475 */ {I_IN, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6285, 48},
    /*  476 */ {I_IN, 2, {REG_AL,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8439, 0},
    /*  477 */ {I_IN, 2, {REG_AX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7994, 0},
    /*  478 */ {I_IN, 2, {REG_EAX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7998, 5},
    /*  479 */ {I_INC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8002, 1},
    /*  480 */ {I_INC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8006, 17},
    /*  481 */ {I_INC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6290, 11},
    /*  482 */ {I_INC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3437, 11},
    /*  483 */ {I_INC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3443, 12},
    /*  484 */ {I_INC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3449, 13},
    /*  485 */ {I_INSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8442, 30},
    /*  486 */ {I_INSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8010, 5},
    /*  487 */ {I_INSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8014, 30},
    /*  488 */ {I_INT, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8018, 47},
    /*  489 */ {I_INT1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8436, 5},
    /*  490 */ {I_INT3, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8445, 0},
    /*  491 */ {I_INTO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8448, 1},
    /*  492 */ {I_INVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8022, 49},
    /*  493 */ {I_INVPCID, 2, {REG_GPR|BITS32,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1245, 50},
    /*  494 */ {I_INVPCID, 2, {REG_GPR|BITS64,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1245, 51},
    /*  495 */ {I_INVLPG, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6295, 49},
    /*  496 */ {I_INVLPGA, 2, {REG_AX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+3455, 52},
    /*  497 */ {I_INVLPGA, 2, {REG_EAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+3461, 53},
    /*  498 */ {I_INVLPGA, 2, {REG_RAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1252, 54},
    /*  499 */ {I_INVLPGA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3462, 53},
    /*  500 */ {I_IRET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8026, 0},
    /*  501 */ {I_IRETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8030, 5},
    /*  502 */ {I_IRETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8034, 7},
    /*  503 */ {I_IRETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8038, 0},
    /*  504 */ {I_JCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6300, 1},
    /*  505 */ {I_JECXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6305, 5},
    /*  506 */ {I_JRCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3467, 7},
    /*  507 */ {I_JMP, 1, {IMMEDIATE|SHORT,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6311, 0},
    /*  508 */ {I_JMP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6315, 19},
    /*  509 */ {I_JMP, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6320, 20},
    /*  510 */ {I_JMP, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6325, 21},
    /*  511 */ {I_JMP, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6330, 22},
    /*  512 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3491, 1},
    /*  513 */ {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3497, 1},
    /*  514 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3497, 1},
    /*  515 */ {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3503, 17},
    /*  516 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3503, 17},
    /*  517 */ {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6335, 1},
    /*  518 */ {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6340, 7},
    /*  519 */ {I_JMP, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6345, 0},
    /*  520 */ {I_JMP, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6350, 5},
    /*  521 */ {I_JMP, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6340, 7},
    /*  522 */ {I_JMP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6355, 19},
    /*  523 */ {I_JMP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6360, 20},
    /*  524 */ {I_JMP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6365, 21},
    /*  525 */ {I_JMP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6370, 22},
    /*  526 */ {I_JMPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1259, 55},
    /*  527 */ {I_JMPE, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1266, 55},
    /*  528 */ {I_JMPE, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1273, 55},
    /*  529 */ {I_JMPE, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1280, 55},
    /*  530 */ {I_JMPE, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1287, 55},
    /*  531 */ {I_LAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8451, 0},
    /*  532 */ {I_LAR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3509, 56},
    /*  533 */ {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3509, 57},
    /*  534 */ {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3509, 58},
    /*  535 */ {I_LAR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3515, 60},
    /*  536 */ {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3515, 58},
    /*  537 */ {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3515, 58},
    /*  538 */ {I_LAR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3521, 61},
    /*  539 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3521, 59},
    /*  540 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3521, 59},
    /*  541 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3521, 59},
    /*  542 */ {I_LDS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6375, 1},
    /*  543 */ {I_LDS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6380, 17},
    /*  544 */ {I_LEA, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6385, 62},
    /*  545 */ {I_LEA, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6390, 63},
    /*  546 */ {I_LEA, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6395, 64},
    /*  547 */ {I_LEAVE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6647, 30},
    /*  548 */ {I_LES, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6400, 1},
    /*  549 */ {I_LES, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6405, 17},
    /*  550 */ {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3527, 54},
    /*  551 */ {I_LFS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3533, 5},
    /*  552 */ {I_LFS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3539, 5},
    /*  553 */ {I_LFS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3545, 7},
    /*  554 */ {I_LGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6410, 23},
    /*  555 */ {I_LGS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3551, 5},
    /*  556 */ {I_LGS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3557, 5},
    /*  557 */ {I_LGS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3563, 7},
    /*  558 */ {I_LIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6415, 23},
    /*  559 */ {I_LLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6420, 65},
    /*  560 */ {I_LLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6420, 65},
    /*  561 */ {I_LLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6420, 65},
    /*  562 */ {I_LMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6425, 23},
    /*  563 */ {I_LMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6425, 23},
    /*  564 */ {I_LMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6425, 23},
    /*  565 */ {I_LODSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8454, 0},
    /*  566 */ {I_LODSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8050, 5},
    /*  567 */ {I_LODSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8054, 7},
    /*  568 */ {I_LODSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8058, 0},
    /*  569 */ {I_LOOP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6430, 0},
    /*  570 */ {I_LOOP, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6435, 1},
    /*  571 */ {I_LOOP, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6440, 5},
    /*  572 */ {I_LOOP, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6445, 7},
    /*  573 */ {I_LOOPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6450, 0},
    /*  574 */ {I_LOOPE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6455, 1},
    /*  575 */ {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6460, 5},
    /*  576 */ {I_LOOPE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6465, 7},
    /*  577 */ {I_LOOPNE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6470, 0},
    /*  578 */ {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6475, 1},
    /*  579 */ {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6480, 5},
    /*  580 */ {I_LOOPNE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6485, 7},
    /*  581 */ {I_LOOPNZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6470, 0},
    /*  582 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6475, 1},
    /*  583 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6480, 5},
    /*  584 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6485, 7},
    /*  585 */ {I_LOOPZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6450, 0},
    /*  586 */ {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6455, 1},
    /*  587 */ {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6460, 5},
    /*  588 */ {I_LOOPZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6465, 7},
    /*  589 */ {I_LSL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3569, 56},
    /*  590 */ {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3569, 57},
    /*  591 */ {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3569, 58},
    /*  592 */ {I_LSL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3575, 60},
    /*  593 */ {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3575, 58},
    /*  594 */ {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3575, 58},
    /*  595 */ {I_LSL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3581, 61},
    /*  596 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3581, 59},
    /*  597 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3581, 59},
    /*  598 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3581, 59},
    /*  599 */ {I_LSS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3587, 5},
    /*  600 */ {I_LSS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3593, 5},
    /*  601 */ {I_LSS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3599, 7},
    /*  602 */ {I_LTR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6490, 65},
    /*  603 */ {I_LTR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6490, 65},
    /*  604 */ {I_LTR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6490, 65},
    /*  605 */ {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3605, 54},
    /*  606 */ {I_MONITOR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6495, 67},
    /*  607 */ {I_MONITORX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6500, 69},
    /*  608 */ {I_MOV, 2, {MEMORY,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6521, 70},
    /*  609 */ {I_MOV, 2, {REG_GPR|BITS16,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6505, 0},
    /*  610 */ {I_MOV, 2, {REG_GPR|BITS32,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6510, 5},
    /*  611 */ {I_MOV, 2, {RM_GPR|BITS64,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+6520, 7},
    /*  612 */ {I_MOV, 2, {REG_SREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6541, 70},
    /*  613 */ {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6530, 0},
    /*  614 */ {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6535, 5},
    /*  615 */ {I_MOV, 2, {REG_SREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6540, 7},
    /*  616 */ {I_MOV, 2, {REG_AL,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+8062, 8},
    /*  617 */ {I_MOV, 2, {REG_AX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+6545, 8},
    /*  618 */ {I_MOV, 2, {REG_EAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+6550, 9},
    /*  619 */ {I_MOV, 2, {REG_RAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+6555, 10},
    /*  620 */ {I_MOV, 2, {MEM_OFFS,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8066, 74},
    /*  621 */ {I_MOV, 2, {MEM_OFFS,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6560, 74},
    /*  622 */ {I_MOV, 2, {MEM_OFFS,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6565, 75},
    /*  623 */ {I_MOV, 2, {MEM_OFFS,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6570, 76},
    /*  624 */ {I_MOV, 2, {REG_GPR|BITS32,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3611, 77},
    /*  625 */ {I_MOV, 2, {REG_GPR|BITS64,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3617, 78},
    /*  626 */ {I_MOV, 2, {REG_CREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3623, 77},
    /*  627 */ {I_MOV, 2, {REG_CREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3629, 78},
    /*  628 */ {I_MOV, 2, {REG_GPR|BITS32,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3636, 77},
    /*  629 */ {I_MOV, 2, {REG_GPR|BITS64,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3635, 78},
    /*  630 */ {I_MOV, 2, {REG_DREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3642, 77},
    /*  631 */ {I_MOV, 2, {REG_DREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3641, 78},
    /*  632 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6585, 8},
    /*  633 */ {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6586, 0},
    /*  634 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3647, 8},
    /*  635 */ {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3648, 0},
    /*  636 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3653, 9},
    /*  637 */ {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3654, 5},
    /*  638 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3659, 10},
    /*  639 */ {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3660, 7},
    /*  640 */ {I_MOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8070, 8},
    /*  641 */ {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8070, 0},
    /*  642 */ {I_MOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6590, 8},
    /*  643 */ {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6590, 0},
    /*  644 */ {I_MOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6595, 9},
    /*  645 */ {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6595, 5},
    /*  646 */ {I_MOV, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6600, 10},
    /*  647 */ {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6600, 7},
    /*  648 */ {I_MOV, 2, {REG_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+8074, 8},
    /*  649 */ {I_MOV, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6605, 8},
    /*  650 */ {I_MOV, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6610, 9},
    /*  651 */ {I_MOV, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6620, 10},
    /*  652 */ {I_MOV, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3665, 8},
    /*  653 */ {I_MOV, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1322, 8},
    /*  654 */ {I_MOV, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1329, 9},
    /*  655 */ {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1336, 10},
    /*  656 */ {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1336, 7},
    /*  657 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3665, 8},
    /*  658 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1322, 8},
    /*  659 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1329, 9},
    /*  660 */ {I_MOVD, 2, {MMXREG,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3671, 80},
    /*  661 */ {I_MOVD, 2, {RM_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3677, 80},
    /*  662 */ {I_MOVQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+3683, 82},
    /*  663 */ {I_MOVQ, 2, {RM_MMX,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3689, 82},
    /*  664 */ {I_MOVQ, 2, {MMXREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1343, 83},
    /*  665 */ {I_MOVQ, 2, {RM_GPR|BITS64,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+1350, 83},
    /*  666 */ {I_MOVSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+250, 0},
    /*  667 */ {I_MOVSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8078, 5},
    /*  668 */ {I_MOVSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8082, 7},
    /*  669 */ {I_MOVSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8086, 0},
    /*  670 */ {I_MOVSX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3695, 48},
    /*  671 */ {I_MOVSX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3695, 5},
    /*  672 */ {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3701, 5},
    /*  673 */ {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3707, 5},
    /*  674 */ {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3713, 7},
    /*  675 */ {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3719, 7},
    /*  676 */ {I_MOVSXD, 2, {REG_GPR|BITS64,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6625, 7},
    /*  677 */ {I_MOVZX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3725, 48},
    /*  678 */ {I_MOVZX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3725, 5},
    /*  679 */ {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3731, 5},
    /*  680 */ {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3737, 5},
    /*  681 */ {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3743, 7},
    /*  682 */ {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3749, 7},
    /*  683 */ {I_MUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8090, 0},
    /*  684 */ {I_MUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6630, 0},
    /*  685 */ {I_MUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6635, 5},
    /*  686 */ {I_MUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 7},
    /*  687 */ {I_MWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6645, 67},
    /*  688 */ {I_MWAITX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6650, 69},
    /*  689 */ {I_NEG, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6655, 11},
    /*  690 */ {I_NEG, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3755, 11},
    /*  691 */ {I_NEG, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3761, 12},
    /*  692 */ {I_NEG, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3767, 13},
    /*  693 */ {I_NOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6660, 0},
    /*  694 */ {I_NOP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3773, 84},
    /*  695 */ {I_NOP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3779, 84},
    /*  696 */ {I_NOP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3785, 7},
    /*  697 */ {I_NOT, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6665, 11},
    /*  698 */ {I_NOT, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3791, 11},
    /*  699 */ {I_NOT, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3797, 12},
    /*  700 */ {I_NOT, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3803, 13},
    /*  701 */ {I_OR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6670, 3},
    /*  702 */ {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6671, 0},
    /*  703 */ {I_OR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3809, 3},
    /*  704 */ {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3810, 0},
    /*  705 */ {I_OR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3815, 4},
    /*  706 */ {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3816, 5},
    /*  707 */ {I_OR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3821, 6},
    /*  708 */ {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3822, 7},
    /*  709 */ {I_OR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8094, 8},
    /*  710 */ {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8094, 0},
    /*  711 */ {I_OR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6675, 8},
    /*  712 */ {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6675, 0},
    /*  713 */ {I_OR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6680, 9},
    /*  714 */ {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6680, 5},
    /*  715 */ {I_OR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6685, 10},
    /*  716 */ {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6685, 7},
    /*  717 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1357, 11},
    /*  718 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1364, 12},
    /*  719 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1371, 13},
    /*  720 */ {I_OR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+8098, 8},
    /*  721 */ {I_OR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6690, 8},
    /*  722 */ {I_OR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6695, 9},
    /*  723 */ {I_OR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6700, 10},
    /*  724 */ {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3827, 3},
    /*  725 */ {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3833, 3},
    /*  726 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1378, 3},
    /*  727 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1385, 4},
    /*  728 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1392, 6},
    /*  729 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3827, 3},
    /*  730 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3833, 3},
    /*  731 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1378, 3},
    /*  732 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1385, 4},
    /*  733 */ {I_OUT, 2, {IMMEDIATE,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8102, 47},
    /*  734 */ {I_OUT, 2, {IMMEDIATE,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6705, 47},
    /*  735 */ {I_OUT, 2, {IMMEDIATE,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+6710, 48},
    /*  736 */ {I_OUT, 2, {REG_DX,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7397, 0},
    /*  737 */ {I_OUT, 2, {REG_DX,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8106, 0},
    /*  738 */ {I_OUT, 2, {REG_DX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8110, 5},
    /*  739 */ {I_OUTSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8457, 30},
    /*  740 */ {I_OUTSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8114, 5},
    /*  741 */ {I_OUTSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8118, 30},
    /*  742 */ {I_PACKSSDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1399, 82},
    /*  743 */ {I_PACKSSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1406, 82},
    /*  744 */ {I_PACKUSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1413, 82},
    /*  745 */ {I_PADDB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1420, 82},
    /*  746 */ {I_PADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1427, 82},
    /*  747 */ {I_PADDSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1434, 82},
    /*  748 */ {I_PADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1441, 82},
    /*  749 */ {I_PADDUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1448, 82},
    /*  750 */ {I_PADDUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1455, 82},
    /*  751 */ {I_PADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1462, 82},
    /*  752 */ {I_PAND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1469, 82},
    /*  753 */ {I_PANDN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1476, 82},
    /*  754 */ {I_PAUSE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8122, 0},
    /*  755 */ {I_PAVGUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+189, 85},
    /*  756 */ {I_PCMPEQB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1483, 82},
    /*  757 */ {I_PCMPEQD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1490, 82},
    /*  758 */ {I_PCMPEQW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1497, 82},
    /*  759 */ {I_PCMPGTB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1504, 82},
    /*  760 */ {I_PCMPGTD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1511, 82},
    /*  761 */ {I_PCMPGTW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1518, 82},
    /*  762 */ {I_PF2ID, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+197, 85},
    /*  763 */ {I_PFACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+205, 85},
    /*  764 */ {I_PFADD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+213, 85},
    /*  765 */ {I_PFCMPEQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+221, 85},
    /*  766 */ {I_PFCMPGE, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+229, 85},
    /*  767 */ {I_PFCMPGT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+237, 85},
    /*  768 */ {I_PFMAX, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+245, 85},
    /*  769 */ {I_PFMIN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+253, 85},
    /*  770 */ {I_PFMUL, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+261, 85},
    /*  771 */ {I_PFRCP, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+269, 85},
    /*  772 */ {I_PFRCPIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+277, 85},
    /*  773 */ {I_PFRCPIT2, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+285, 85},
    /*  774 */ {I_PFRSQIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+293, 85},
    /*  775 */ {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+301, 85},
    /*  776 */ {I_PFSUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+309, 85},
    /*  777 */ {I_PFSUBR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+317, 85},
    /*  778 */ {I_PI2FD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+325, 85},
    /*  779 */ {I_PMADDWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1525, 82},
    /*  780 */ {I_PMULHRWA, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+333, 85},
    /*  781 */ {I_PMULHW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1532, 82},
    /*  782 */ {I_PMULLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1539, 82},
    /*  783 */ {I_POP, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8126, 0},
    /*  784 */ {I_POP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8130, 17},
    /*  785 */ {I_POP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8134, 7},
    /*  786 */ {I_POP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6715, 0},
    /*  787 */ {I_POP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6720, 17},
    /*  788 */ {I_POP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6725, 7},
    /*  789 */ {I_POP, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+626, 1},
    /*  790 */ {I_POP, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8463, 1},
    /*  791 */ {I_POP, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8466, 1},
    /*  792 */ {I_POP, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8138, 5},
    /*  793 */ {I_POP, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8142, 5},
    /*  794 */ {I_POPA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8146, 16},
    /*  795 */ {I_POPAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8150, 17},
    /*  796 */ {I_POPAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8154, 16},
    /*  797 */ {I_POPF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8158, 0},
    /*  798 */ {I_POPFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8162, 17},
    /*  799 */ {I_POPFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8162, 7},
    /*  800 */ {I_POPFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8166, 0},
    /*  801 */ {I_POR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1546, 82},
    /*  802 */ {I_PREFETCH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6730, 85},
    /*  803 */ {I_PREFETCHW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6735, 85},
    /*  804 */ {I_PSLLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1553, 82},
    /*  805 */ {I_PSLLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1560, 29},
    /*  806 */ {I_PSLLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1567, 82},
    /*  807 */ {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1574, 29},
    /*  808 */ {I_PSLLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1581, 82},
    /*  809 */ {I_PSLLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1588, 29},
    /*  810 */ {I_PSRAD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1595, 82},
    /*  811 */ {I_PSRAD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1602, 29},
    /*  812 */ {I_PSRAW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1609, 82},
    /*  813 */ {I_PSRAW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1616, 29},
    /*  814 */ {I_PSRLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1623, 82},
    /*  815 */ {I_PSRLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1630, 29},
    /*  816 */ {I_PSRLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1637, 82},
    /*  817 */ {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1644, 29},
    /*  818 */ {I_PSRLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1651, 82},
    /*  819 */ {I_PSRLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1658, 29},
    /*  820 */ {I_PSUBB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1665, 82},
    /*  821 */ {I_PSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1672, 82},
    /*  822 */ {I_PSUBSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1679, 82},
    /*  823 */ {I_PSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1686, 82},
    /*  824 */ {I_PSUBUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1693, 82},
    /*  825 */ {I_PSUBUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1700, 82},
    /*  826 */ {I_PSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1707, 82},
    /*  827 */ {I_PUNPCKHBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1714, 82},
    /*  828 */ {I_PUNPCKHDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1721, 82},
    /*  829 */ {I_PUNPCKHWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1728, 82},
    /*  830 */ {I_PUNPCKLBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1735, 82},
    /*  831 */ {I_PUNPCKLDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1742, 82},
    /*  832 */ {I_PUNPCKLWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1749, 82},
    /*  833 */ {I_PUSH, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8170, 0},
    /*  834 */ {I_PUSH, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8174, 17},
    /*  835 */ {I_PUSH, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8178, 7},
    /*  836 */ {I_PUSH, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6740, 0},
    /*  837 */ {I_PUSH, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6745, 17},
    /*  838 */ {I_PUSH, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6750, 7},
    /*  839 */ {I_PUSH, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+594, 1},
    /*  840 */ {I_PUSH, 1, {REG_CS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8469, 1},
    /*  841 */ {I_PUSH, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8472, 1},
    /*  842 */ {I_PUSH, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8475, 1},
    /*  843 */ {I_PUSH, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8182, 5},
    /*  844 */ {I_PUSH, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8186, 5},
    /*  845 */ {I_PUSH, 1, {IMMEDIATE|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6776, 30},
    /*  846 */ {I_PUSH, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6760, 87},
    /*  847 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6770, 88},
    /*  848 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6770, 89},
    /*  849 */ {I_PUSH, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6780, 90},
    /*  850 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6780, 90},
    /*  851 */ {I_PUSHA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8190, 16},
    /*  852 */ {I_PUSHAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8194, 17},
    /*  853 */ {I_PUSHAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8198, 16},
    /*  854 */ {I_PUSHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8202, 0},
    /*  855 */ {I_PUSHFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8206, 17},
    /*  856 */ {I_PUSHFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8206, 7},
    /*  857 */ {I_PUSHFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8210, 0},
    /*  858 */ {I_PXOR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1756, 82},
    /*  859 */ {I_RCL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8214, 0},
    /*  860 */ {I_RCL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8218, 0},
    /*  861 */ {I_RCL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6785, 30},
    /*  862 */ {I_RCL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6790, 0},
    /*  863 */ {I_RCL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6795, 0},
    /*  864 */ {I_RCL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3839, 30},
    /*  865 */ {I_RCL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6800, 5},
    /*  866 */ {I_RCL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6805, 5},
    /*  867 */ {I_RCL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3845, 5},
    /*  868 */ {I_RCL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6810, 7},
    /*  869 */ {I_RCL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6815, 7},
    /*  870 */ {I_RCL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3851, 7},
    /*  871 */ {I_RCR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8222, 0},
    /*  872 */ {I_RCR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8226, 0},
    /*  873 */ {I_RCR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6820, 30},
    /*  874 */ {I_RCR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6825, 0},
    /*  875 */ {I_RCR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6830, 0},
    /*  876 */ {I_RCR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3857, 30},
    /*  877 */ {I_RCR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6835, 5},
    /*  878 */ {I_RCR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6840, 5},
    /*  879 */ {I_RCR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3863, 5},
    /*  880 */ {I_RCR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6845, 7},
    /*  881 */ {I_RCR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6850, 7},
    /*  882 */ {I_RCR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3869, 7},
    /*  883 */ {I_RDMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8230, 91},
    /*  884 */ {I_RDPMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8234, 84},
    /*  885 */ {I_RDTSC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8238, 25},
    /*  886 */ {I_RDTSCP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6855, 92},
    /*  887 */ {I_RET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8259, 19},
    /*  888 */ {I_RET, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6881, 93},
    /*  889 */ {I_RETF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8263, 0},
    /*  890 */ {I_RETF, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6886, 70},
    /*  891 */ {I_RETN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8259, 19},
    /*  892 */ {I_RETN, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6881, 93},
    /*  893 */ {I_RETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8242, 19},
    /*  894 */ {I_RETW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6881, 93},
    /*  895 */ {I_RETFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8246, 0},
    /*  896 */ {I_RETFW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6860, 70},
    /*  897 */ {I_RETNW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8242, 19},
    /*  898 */ {I_RETNW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6865, 93},
    /*  899 */ {I_RETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8250, 20},
    /*  900 */ {I_RETD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6870, 94},
    /*  901 */ {I_RETFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8254, 0},
    /*  902 */ {I_RETFD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6875, 70},
    /*  903 */ {I_RETND, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8250, 20},
    /*  904 */ {I_RETND, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6870, 94},
    /*  905 */ {I_RETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8258, 22},
    /*  906 */ {I_RETQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6880, 95},
    /*  907 */ {I_RETFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8262, 7},
    /*  908 */ {I_RETFQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6885, 96},
    /*  909 */ {I_RETNQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8258, 22},
    /*  910 */ {I_RETNQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6880, 95},
    /*  911 */ {I_ROL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8266, 0},
    /*  912 */ {I_ROL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8270, 0},
    /*  913 */ {I_ROL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6890, 30},
    /*  914 */ {I_ROL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6895, 0},
    /*  915 */ {I_ROL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6900, 0},
    /*  916 */ {I_ROL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3875, 30},
    /*  917 */ {I_ROL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6905, 5},
    /*  918 */ {I_ROL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6910, 5},
    /*  919 */ {I_ROL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3881, 5},
    /*  920 */ {I_ROL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6915, 7},
    /*  921 */ {I_ROL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6920, 7},
    /*  922 */ {I_ROL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3887, 7},
    /*  923 */ {I_ROR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8274, 0},
    /*  924 */ {I_ROR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8278, 0},
    /*  925 */ {I_ROR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6925, 30},
    /*  926 */ {I_ROR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6930, 0},
    /*  927 */ {I_ROR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6935, 0},
    /*  928 */ {I_ROR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3893, 30},
    /*  929 */ {I_ROR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6940, 5},
    /*  930 */ {I_ROR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6945, 5},
    /*  931 */ {I_ROR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3899, 5},
    /*  932 */ {I_ROR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6950, 7},
    /*  933 */ {I_ROR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6955, 7},
    /*  934 */ {I_ROR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3905, 7},
    /*  935 */ {I_RSM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8282, 97},
    /*  936 */ {I_SAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+218, 0},
    /*  937 */ {I_SALC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7387, 98},
    /*  938 */ {I_SAR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8294, 0},
    /*  939 */ {I_SAR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8298, 0},
    /*  940 */ {I_SAR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6995, 30},
    /*  941 */ {I_SAR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7000, 0},
    /*  942 */ {I_SAR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7005, 0},
    /*  943 */ {I_SAR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3929, 30},
    /*  944 */ {I_SAR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7010, 5},
    /*  945 */ {I_SAR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7015, 5},
    /*  946 */ {I_SAR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3935, 5},
    /*  947 */ {I_SAR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7020, 7},
    /*  948 */ {I_SAR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7025, 7},
    /*  949 */ {I_SAR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3941, 7},
    /*  950 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7030, 3},
    /*  951 */ {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7031, 0},
    /*  952 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3947, 3},
    /*  953 */ {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3948, 0},
    /*  954 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3953, 4},
    /*  955 */ {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3954, 5},
    /*  956 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3959, 6},
    /*  957 */ {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3960, 7},
    /*  958 */ {I_SBB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8302, 8},
    /*  959 */ {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8302, 0},
    /*  960 */ {I_SBB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7035, 8},
    /*  961 */ {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7035, 0},
    /*  962 */ {I_SBB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7040, 9},
    /*  963 */ {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7040, 5},
    /*  964 */ {I_SBB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7045, 10},
    /*  965 */ {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+7045, 7},
    /*  966 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1763, 11},
    /*  967 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1770, 12},
    /*  968 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1777, 13},
    /*  969 */ {I_SBB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+8306, 8},
    /*  970 */ {I_SBB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7050, 8},
    /*  971 */ {I_SBB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7055, 9},
    /*  972 */ {I_SBB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7060, 10},
    /*  973 */ {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3965, 3},
    /*  974 */ {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3971, 3},
    /*  975 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1784, 3},
    /*  976 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1791, 4},
    /*  977 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1798, 6},
    /*  978 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3965, 3},
    /*  979 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3971, 3},
    /*  980 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1784, 3},
    /*  981 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1791, 4},
    /*  982 */ {I_SCASB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8310, 0},
    /*  983 */ {I_SCASD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7065, 5},
    /*  984 */ {I_SCASQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7070, 7},
    /*  985 */ {I_SCASW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7075, 0},
    /*  986 */ {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3977, 54},
    /*  987 */ {I_SGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7080, 99},
    /*  988 */ {I_SHL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8286, 0},
    /*  989 */ {I_SHL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8290, 0},
    /*  990 */ {I_SHL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6960, 30},
    /*  991 */ {I_SHL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6965, 0},
    /*  992 */ {I_SHL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6970, 0},
    /*  993 */ {I_SHL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3911, 30},
    /*  994 */ {I_SHL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6975, 5},
    /*  995 */ {I_SHL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6980, 5},
    /*  996 */ {I_SHL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3917, 5},
    /*  997 */ {I_SHL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6985, 7},
    /*  998 */ {I_SHL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6990, 7},
    /*  999 */ {I_SHL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3923, 7},
    /* 1000 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1805, 100},
    /* 1001 */ {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1805, 100},
    /* 1002 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1812, 100},
    /* 1003 */ {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1812, 100},
    /* 1004 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1819, 101},
    /* 1005 */ {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1819, 101},
    /* 1006 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3983, 9},
    /* 1007 */ {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3983, 5},
    /* 1008 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3989, 9},
    /* 1009 */ {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3989, 5},
    /* 1010 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3995, 10},
    /* 1011 */ {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3995, 7},
    /* 1012 */ {I_SHR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8314, 0},
    /* 1013 */ {I_SHR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+8318, 0},
    /* 1014 */ {I_SHR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7085, 30},
    /* 1015 */ {I_SHR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7090, 0},
    /* 1016 */ {I_SHR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7095, 0},
    /* 1017 */ {I_SHR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4001, 30},
    /* 1018 */ {I_SHR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7100, 5},
    /* 1019 */ {I_SHR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7105, 5},
    /* 1020 */ {I_SHR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4007, 5},
    /* 1021 */ {I_SHR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7110, 7},
    /* 1022 */ {I_SHR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7115, 7},
    /* 1023 */ {I_SHR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4013, 7},
    /* 1024 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1826, 100},
    /* 1025 */ {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1826, 100},
    /* 1026 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1833, 100},
    /* 1027 */ {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1833, 100},
    /* 1028 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1840, 101},
    /* 1029 */ {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1840, 101},
    /* 1030 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+4019, 9},
    /* 1031 */ {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+4019, 5},
    /* 1032 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+4025, 9},
    /* 1033 */ {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+4025, 5},
    /* 1034 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+4031, 10},
    /* 1035 */ {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+4031, 7},
    /* 1036 */ {I_SIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7120, 99},
    /* 1037 */ {I_SLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4056, 99},
    /* 1038 */ {I_SLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4056, 99},
    /* 1039 */ {I_SLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4037, 99},
    /* 1040 */ {I_SLDT, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4043, 5},
    /* 1041 */ {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4055, 7},
    /* 1042 */ {I_SKINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7125, 7},
    /* 1043 */ {I_SMI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8436, 102},
    /* 1044 */ {I_SMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4074, 99},
    /* 1045 */ {I_SMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4074, 99},
    /* 1046 */ {I_SMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4061, 99},
    /* 1047 */ {I_SMSW, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4067, 5},
    /* 1048 */ {I_SMSW, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4073, 7},
    /* 1049 */ {I_STC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6857, 0},
    /* 1050 */ {I_STD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8478, 0},
    /* 1051 */ {I_STI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6652, 0},
    /* 1052 */ {I_STOSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+322, 0},
    /* 1053 */ {I_STOSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8322, 5},
    /* 1054 */ {I_STOSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8326, 7},
    /* 1055 */ {I_STOSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8330, 0},
    /* 1056 */ {I_STR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4092, 57},
    /* 1057 */ {I_STR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4092, 57},
    /* 1058 */ {I_STR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4079, 57},
    /* 1059 */ {I_STR, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4085, 58},
    /* 1060 */ {I_STR, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4091, 7},
    /* 1061 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7130, 3},
    /* 1062 */ {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7131, 0},
    /* 1063 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4097, 3},
    /* 1064 */ {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4098, 0},
    /* 1065 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4103, 4},
    /* 1066 */ {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4104, 5},
    /* 1067 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4109, 6},
    /* 1068 */ {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4110, 7},
    /* 1069 */ {I_SUB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8334, 8},
    /* 1070 */ {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8334, 0},
    /* 1071 */ {I_SUB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7135, 8},
    /* 1072 */ {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7135, 0},
    /* 1073 */ {I_SUB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7140, 9},
    /* 1074 */ {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7140, 5},
    /* 1075 */ {I_SUB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7145, 10},
    /* 1076 */ {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+7145, 7},
    /* 1077 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1847, 11},
    /* 1078 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1854, 12},
    /* 1079 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1861, 13},
    /* 1080 */ {I_SUB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+8338, 8},
    /* 1081 */ {I_SUB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7150, 8},
    /* 1082 */ {I_SUB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7155, 9},
    /* 1083 */ {I_SUB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7160, 10},
    /* 1084 */ {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4115, 3},
    /* 1085 */ {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4121, 3},
    /* 1086 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1868, 3},
    /* 1087 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1875, 4},
    /* 1088 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1882, 6},
    /* 1089 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4115, 3},
    /* 1090 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4121, 3},
    /* 1091 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1868, 3},
    /* 1092 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1875, 4},
    /* 1093 */ {I_SWAPGS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7165, 7},
    /* 1094 */ {I_SYSCALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8046, 103},
    /* 1095 */ {I_SYSENTER, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8342, 84},
    /* 1096 */ {I_SYSEXIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8346, 104},
    /* 1097 */ {I_SYSRET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8042, 105},
    /* 1098 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8350, 8},
    /* 1099 */ {I_TEST, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8350, 0},
    /* 1100 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7170, 8},
    /* 1101 */ {I_TEST, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7170, 0},
    /* 1102 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7175, 9},
    /* 1103 */ {I_TEST, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7175, 5},
    /* 1104 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+7180, 10},
    /* 1105 */ {I_TEST, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+7180, 7},
    /* 1106 */ {I_TEST, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8354, 8},
    /* 1107 */ {I_TEST, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7185, 8},
    /* 1108 */ {I_TEST, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7190, 9},
    /* 1109 */ {I_TEST, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7195, 10},
    /* 1110 */ {I_TEST, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+8358, 8},
    /* 1111 */ {I_TEST, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7200, 8},
    /* 1112 */ {I_TEST, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7205, 9},
    /* 1113 */ {I_TEST, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7210, 10},
    /* 1114 */ {I_TEST, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7215, 8},
    /* 1115 */ {I_TEST, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4127, 8},
    /* 1116 */ {I_TEST, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4133, 9},
    /* 1117 */ {I_TEST, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4139, 10},
    /* 1118 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7215, 8},
    /* 1119 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4127, 8},
    /* 1120 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4133, 9},
    /* 1121 */ {I_UD0, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8362, 106},
    /* 1122 */ {I_UD0, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4145, 30},
    /* 1123 */ {I_UD0, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4151, 30},
    /* 1124 */ {I_UD0, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4157, 30},
    /* 1125 */ {I_UD1, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4163, 30},
    /* 1126 */ {I_UD1, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4169, 30},
    /* 1127 */ {I_UD1, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4175, 30},
    /* 1128 */ {I_UD2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8370, 30},
    /* 1129 */ {I_VERR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7220, 57},
    /* 1130 */ {I_VERR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7220, 57},
    /* 1131 */ {I_VERR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7220, 57},
    /* 1132 */ {I_VERW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7225, 57},
    /* 1133 */ {I_VERW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7225, 57},
    /* 1134 */ {I_VERW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7225, 57},
    /* 1135 */ {I_FWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7944, 0},
    /* 1136 */ {I_WBINVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7406, 49},
    /* 1137 */ {I_WRMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8374, 91},
    /* 1138 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4193, 108},
    /* 1139 */ {I_XADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4194, 18},
    /* 1140 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1917, 108},
    /* 1141 */ {I_XADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1918, 18},
    /* 1142 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1924, 108},
    /* 1143 */ {I_XADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1925, 18},
    /* 1144 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1931, 6},
    /* 1145 */ {I_XADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1932, 7},
    /* 1146 */ {I_XCHG, 2, {REG_AX,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+8378, 0},
    /* 1147 */ {I_XCHG, 2, {REG_EAX,REG32NA,0,0,0}, NO_DECORATOR, nasm_bytecodes+8382, 5},
    /* 1148 */ {I_XCHG, 2, {REG_RAX,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+8386, 7},
    /* 1149 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8390, 0},
    /* 1150 */ {I_XCHG, 2, {REG32NA,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8394, 5},
    /* 1151 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8398, 7},
    /* 1152 */ {I_XCHG, 2, {REG_EAX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+8402, 17},
    /* 1153 */ {I_XCHG, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7230, 3},
    /* 1154 */ {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7231, 0},
    /* 1155 */ {I_XCHG, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4211, 3},
    /* 1156 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4212, 0},
    /* 1157 */ {I_XCHG, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4217, 4},
    /* 1158 */ {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4218, 5},
    /* 1159 */ {I_XCHG, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4223, 6},
    /* 1160 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4224, 7},
    /* 1161 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7235, 3},
    /* 1162 */ {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7236, 0},
    /* 1163 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4229, 3},
    /* 1164 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4230, 0},
    /* 1165 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4235, 4},
    /* 1166 */ {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4236, 5},
    /* 1167 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4241, 6},
    /* 1168 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4242, 7},
    /* 1169 */ {I_XLATB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5558, 0},
    /* 1170 */ {I_XLAT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5558, 0},
    /* 1171 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7240, 3},
    /* 1172 */ {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7241, 0},
    /* 1173 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4247, 3},
    /* 1174 */ {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4248, 0},
    /* 1175 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4253, 4},
    /* 1176 */ {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4254, 5},
    /* 1177 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4259, 6},
    /* 1178 */ {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4260, 7},
    /* 1179 */ {I_XOR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+8406, 8},
    /* 1180 */ {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+8406, 0},
    /* 1181 */ {I_XOR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7245, 8},
    /* 1182 */ {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7245, 0},
    /* 1183 */ {I_XOR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7250, 9},
    /* 1184 */ {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+7250, 5},
    /* 1185 */ {I_XOR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7255, 10},
    /* 1186 */ {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+7255, 7},
    /* 1187 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1938, 11},
    /* 1188 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1945, 12},
    /* 1189 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1952, 13},
    /* 1190 */ {I_XOR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+8410, 8},
    /* 1191 */ {I_XOR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7260, 8},
    /* 1192 */ {I_XOR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7265, 9},
    /* 1193 */ {I_XOR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7270, 10},
    /* 1194 */ {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4265, 3},
    /* 1195 */ {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4271, 3},
    /* 1196 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1959, 3},
    /* 1197 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1966, 4},
    /* 1198 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1973, 6},
    /* 1199 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4265, 3},
    /* 1200 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4271, 3},
    /* 1201 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1959, 3},
    /* 1202 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1966, 4},
    /* 1203 */ {I_CMOVcc, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1980, 111},
    /* 1204 */ {I_CMOVcc, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1980, 84},
    /* 1205 */ {I_CMOVcc, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1987, 111},
    /* 1206 */ {I_CMOVcc, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1987, 84},
    /* 1207 */ {I_CMOVcc, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1994, 10},
    /* 1208 */ {I_CMOVcc, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1994, 7},
    /* 1209 */ {I_Jcc, 1, {IMMEDIATE|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2001, 112},
    /* 1210 */ {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2008, 21},
    /* 1211 */ {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2015, 21},
    /* 1212 */ {I_Jcc, 1, {IMMEDIATE|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2022, 22},
    /* 1213 */ {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7276, 19},
    /* 1214 */ {I_SETcc, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4277, 48},
    /* 1215 */ {I_SETcc, 1, {REG_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4277, 5},
    /* 1216 */ {I_ADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4283, 113},
    /* 1217 */ {I_ADDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4289, 113},
    /* 1218 */ {I_ANDNPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4295, 113},
    /* 1219 */ {I_ANDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4301, 113},
    /* 1220 */ {I_CMPEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+341, 113},
    /* 1221 */ {I_CMPEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+349, 113},
    /* 1222 */ {I_CMPLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+357, 113},
    /* 1223 */ {I_CMPLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+365, 113},
    /* 1224 */ {I_CMPLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+373, 113},
    /* 1225 */ {I_CMPLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+381, 113},
    /* 1226 */ {I_CMPNEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+389, 113},
    /* 1227 */ {I_CMPNEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+397, 113},
    /* 1228 */ {I_CMPNLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+405, 113},
    /* 1229 */ {I_CMPNLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+413, 113},
    /* 1230 */ {I_CMPNLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+421, 113},
    /* 1231 */ {I_CMPNLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+429, 113},
    /* 1232 */ {I_CMPORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+437, 113},
    /* 1233 */ {I_CMPORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+445, 113},
    /* 1234 */ {I_CMPUNORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+453, 113},
    /* 1235 */ {I_CMPUNORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+461, 113},
    /* 1236 */ {I_CMPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2036, 113},
    /* 1237 */ {I_CMPSS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2043, 113},
    /* 1238 */ {I_COMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4307, 113},
    /* 1239 */ {I_CVTPI2PS, 2, {XMM_L16,RM_MMX|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4313, 114},
    /* 1240 */ {I_CVTPS2PI, 2, {MMXREG,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4319, 114},
    /* 1241 */ {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2051, 115},
    /* 1242 */ {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2050, 116},
    /* 1243 */ {I_CVTSS2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2058, 115},
    /* 1244 */ {I_CVTSS2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2058, 115},
    /* 1245 */ {I_CVTSS2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2057, 117},
    /* 1246 */ {I_CVTSS2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2057, 117},
    /* 1247 */ {I_CVTTPS2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4325, 118},
    /* 1248 */ {I_CVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2065, 115},
    /* 1249 */ {I_CVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2064, 117},
    /* 1250 */ {I_DIVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4331, 113},
    /* 1251 */ {I_DIVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4337, 113},
    /* 1252 */ {I_LDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4343, 113},
    /* 1253 */ {I_MAXPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4349, 113},
    /* 1254 */ {I_MAXSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4355, 113},
    /* 1255 */ {I_MINPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4361, 113},
    /* 1256 */ {I_MINSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4367, 113},
    /* 1257 */ {I_MOVAPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4373, 113},
    /* 1258 */ {I_MOVAPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4379, 113},
    /* 1259 */ {I_MOVHPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4385, 113},
    /* 1260 */ {I_MOVHPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4391, 113},
    /* 1261 */ {I_MOVLHPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4385, 113},
    /* 1262 */ {I_MOVLPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4187, 113},
    /* 1263 */ {I_MOVLPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4397, 113},
    /* 1264 */ {I_MOVHLPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4187, 113},
    /* 1265 */ {I_MOVMSKPS, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4403, 113},
    /* 1266 */ {I_MOVMSKPS, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2071, 119},
    /* 1267 */ {I_MOVNTPS, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4409, 113},
    /* 1268 */ {I_MOVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4415, 113},
    /* 1269 */ {I_MOVSS, 2, {RM_XMM_L16|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4421, 113},
    /* 1270 */ {I_MOVUPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4427, 113},
    /* 1271 */ {I_MOVUPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4433, 113},
    /* 1272 */ {I_MULPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4439, 113},
    /* 1273 */ {I_MULSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4445, 113},
    /* 1274 */ {I_ORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4451, 113},
    /* 1275 */ {I_RCPPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4457, 113},
    /* 1276 */ {I_RCPSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4463, 113},
    /* 1277 */ {I_RSQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4469, 113},
    /* 1278 */ {I_RSQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4475, 113},
    /* 1279 */ {I_SHUFPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2078, 113},
    /* 1280 */ {I_SQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4481, 113},
    /* 1281 */ {I_SQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4487, 113},
    /* 1282 */ {I_STMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4493, 113},
    /* 1283 */ {I_SUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4499, 113},
    /* 1284 */ {I_SUBSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4505, 113},
    /* 1285 */ {I_UCOMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4511, 113},
    /* 1286 */ {I_UNPCKHPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4517, 113},
    /* 1287 */ {I_UNPCKLPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4523, 113},
    /* 1288 */ {I_XORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4529, 113},
    /* 1289 */ {I_FXRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2086, 120},
    /* 1290 */ {I_FXRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2085, 121},
    /* 1291 */ {I_FXSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2093, 120},
    /* 1292 */ {I_FXSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2092, 121},
    /* 1293 */ {I_XGETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7280, 122},
    /* 1294 */ {I_XSETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7285, 123},
    /* 1295 */ {I_XSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2100, 122},
    /* 1296 */ {I_XSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2099, 124},
    /* 1297 */ {I_XSAVEC, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2107, 125},
    /* 1298 */ {I_XSAVEC64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2106, 126},
    /* 1299 */ {I_XSAVEOPT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2114, 125},
    /* 1300 */ {I_XSAVEOPT64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2113, 126},
    /* 1301 */ {I_XSAVES, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2121, 125},
    /* 1302 */ {I_XSAVES64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2120, 126},
    /* 1303 */ {I_XRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2128, 122},
    /* 1304 */ {I_XRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2127, 124},
    /* 1305 */ {I_XRSTORS, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2135, 125},
    /* 1306 */ {I_XRSTORS64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2134, 126},
    /* 1307 */ {I_PREFETCHNTA, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7290, 127},
    /* 1308 */ {I_PREFETCHT0, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7295, 127},
    /* 1309 */ {I_PREFETCHT1, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7300, 127},
    /* 1310 */ {I_PREFETCHT2, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7305, 127},
    /* 1311 */ {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3977, 127},
    /* 1312 */ {I_MASKMOVQ, 2, {MMXREG,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4535, 128},
    /* 1313 */ {I_MOVNTQ, 2, {MEMORY,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4541, 129},
    /* 1314 */ {I_PAVGB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2141, 129},
    /* 1315 */ {I_PAVGW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2148, 129},
    /* 1316 */ {I_PEXTRW, 3, {REG_GPR|BITS32,MMXREG,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2155, 130},
    /* 1317 */ {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2162, 130},
    /* 1318 */ {I_PINSRW, 3, {MMXREG,RM_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2162, 130},
    /* 1319 */ {I_PINSRW, 3, {MMXREG,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2162, 130},
    /* 1320 */ {I_PMAXSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2169, 129},
    /* 1321 */ {I_PMAXUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2176, 129},
    /* 1322 */ {I_PMINSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2183, 129},
    /* 1323 */ {I_PMINUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2190, 129},
    /* 1324 */ {I_PMOVMSKB, 2, {REG_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4547, 128},
    /* 1325 */ {I_PMULHUW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2197, 129},
    /* 1326 */ {I_PSADBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2204, 129},
    /* 1327 */ {I_PSHUFW, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+469, 131},
    /* 1328 */ {I_PF2IW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+477, 85},
    /* 1329 */ {I_PFNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+485, 85},
    /* 1330 */ {I_PFPNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+493, 85},
    /* 1331 */ {I_PI2FW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+501, 85},
    /* 1332 */ {I_PSWAPD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+509, 85},
    /* 1333 */ {I_MASKMOVDQU, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4553, 132},
    /* 1334 */ {I_CLFLUSH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4559, 132},
    /* 1335 */ {I_MOVNTDQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4565, 133},
    /* 1336 */ {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2212, 134},
    /* 1337 */ {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2211, 135},
    /* 1338 */ {I_MOVNTPD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4571, 133},
    /* 1339 */ {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3527, 132},
    /* 1340 */ {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3605, 132},
    /* 1341 */ {I_MOVD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2218, 136},
    /* 1342 */ {I_MOVD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2225, 136},
    /* 1343 */ {I_MOVD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2225, 132},
    /* 1344 */ {I_MOVD, 2, {RM_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2218, 132},
    /* 1345 */ {I_MOVDQA, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4577, 133},
    /* 1346 */ {I_MOVDQA, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4583, 133},
    /* 1347 */ {I_MOVDQU, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4589, 133},
    /* 1348 */ {I_MOVDQU, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4595, 133},
    /* 1349 */ {I_MOVDQ2Q, 2, {MMXREG,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4601, 132},
    /* 1350 */ {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4607, 132},
    /* 1351 */ {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4613, 132},
    /* 1352 */ {I_MOVQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4613, 137},
    /* 1353 */ {I_MOVQ, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4607, 137},
    /* 1354 */ {I_MOVQ, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2232, 138},
    /* 1355 */ {I_MOVQ, 2, {RM_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2239, 138},
    /* 1356 */ {I_MOVQ2DQ, 2, {XMM_L16,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4619, 132},
    /* 1357 */ {I_PACKSSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4625, 133},
    /* 1358 */ {I_PACKSSDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4631, 133},
    /* 1359 */ {I_PACKUSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4637, 133},
    /* 1360 */ {I_PADDB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4643, 133},
    /* 1361 */ {I_PADDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4649, 133},
    /* 1362 */ {I_PADDD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4655, 133},
    /* 1363 */ {I_PADDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+4661, 139},
    /* 1364 */ {I_PADDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4667, 133},
    /* 1365 */ {I_PADDSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4673, 133},
    /* 1366 */ {I_PADDSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4679, 133},
    /* 1367 */ {I_PADDUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4685, 133},
    /* 1368 */ {I_PADDUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4691, 133},
    /* 1369 */ {I_PAND, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4697, 133},
    /* 1370 */ {I_PANDN, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4703, 133},
    /* 1371 */ {I_PAVGB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4709, 133},
    /* 1372 */ {I_PAVGW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4715, 133},
    /* 1373 */ {I_PCMPEQB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4721, 133},
    /* 1374 */ {I_PCMPEQW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4727, 133},
    /* 1375 */ {I_PCMPEQD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4733, 133},
    /* 1376 */ {I_PCMPGTB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4739, 133},
    /* 1377 */ {I_PCMPGTW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4745, 133},
    /* 1378 */ {I_PCMPGTD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4751, 133},
    /* 1379 */ {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2246, 140},
    /* 1380 */ {I_PINSRW, 3, {XMM_L16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2253, 140},
    /* 1381 */ {I_PINSRW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2253, 140},
    /* 1382 */ {I_PINSRW, 3, {XMM_L16,MEMORY|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2253, 140},
    /* 1383 */ {I_PMADDWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4757, 133},
    /* 1384 */ {I_PMAXSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4763, 133},
    /* 1385 */ {I_PMAXUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4769, 133},
    /* 1386 */ {I_PMINSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4775, 133},
    /* 1387 */ {I_PMINUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4781, 133},
    /* 1388 */ {I_PMOVMSKB, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4787, 132},
    /* 1389 */ {I_PMULHUW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4793, 133},
    /* 1390 */ {I_PMULHW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4799, 133},
    /* 1391 */ {I_PMULLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4805, 133},
    /* 1392 */ {I_PMULUDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2260, 133},
    /* 1393 */ {I_PMULUDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4811, 133},
    /* 1394 */ {I_POR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4817, 133},
    /* 1395 */ {I_PSADBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4823, 133},
    /* 1396 */ {I_PSHUFD, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2267, 140},
    /* 1397 */ {I_PSHUFD, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2267, 142},
    /* 1398 */ {I_PSHUFHW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2274, 140},
    /* 1399 */ {I_PSHUFHW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2274, 142},
    /* 1400 */ {I_PSHUFLW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2281, 140},
    /* 1401 */ {I_PSHUFLW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2281, 142},
    /* 1402 */ {I_PSLLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2288, 143},
    /* 1403 */ {I_PSLLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4829, 133},
    /* 1404 */ {I_PSLLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2295, 143},
    /* 1405 */ {I_PSLLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4835, 133},
    /* 1406 */ {I_PSLLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2302, 143},
    /* 1407 */ {I_PSLLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4841, 133},
    /* 1408 */ {I_PSLLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2309, 143},
    /* 1409 */ {I_PSRAW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4847, 133},
    /* 1410 */ {I_PSRAW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2316, 143},
    /* 1411 */ {I_PSRAD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4853, 133},
    /* 1412 */ {I_PSRAD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2323, 143},
    /* 1413 */ {I_PSRLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2330, 143},
    /* 1414 */ {I_PSRLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4859, 133},
    /* 1415 */ {I_PSRLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2337, 143},
    /* 1416 */ {I_PSRLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4865, 133},
    /* 1417 */ {I_PSRLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2344, 143},
    /* 1418 */ {I_PSRLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4871, 133},
    /* 1419 */ {I_PSRLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2351, 143},
    /* 1420 */ {I_PSUBB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4877, 133},
    /* 1421 */ {I_PSUBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4883, 133},
    /* 1422 */ {I_PSUBD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4889, 133},
    /* 1423 */ {I_PSUBQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2358, 133},
    /* 1424 */ {I_PSUBQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4895, 133},
    /* 1425 */ {I_PSUBSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4901, 133},
    /* 1426 */ {I_PSUBSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4907, 133},
    /* 1427 */ {I_PSUBUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4913, 133},
    /* 1428 */ {I_PSUBUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4919, 133},
    /* 1429 */ {I_PUNPCKHBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4925, 133},
    /* 1430 */ {I_PUNPCKHWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4931, 133},
    /* 1431 */ {I_PUNPCKHDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4937, 133},
    /* 1432 */ {I_PUNPCKHQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4943, 133},
    /* 1433 */ {I_PUNPCKLBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4949, 133},
    /* 1434 */ {I_PUNPCKLWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4955, 133},
    /* 1435 */ {I_PUNPCKLDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4961, 133},
    /* 1436 */ {I_PUNPCKLQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4967, 133},
    /* 1437 */ {I_PXOR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4973, 133},
    /* 1438 */ {I_ADDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4979, 133},
    /* 1439 */ {I_ADDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4985, 137},
    /* 1440 */ {I_ANDNPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4991, 133},
    /* 1441 */ {I_ANDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4997, 133},
    /* 1442 */ {I_CMPEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+517, 133},
    /* 1443 */ {I_CMPEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+525, 137},
    /* 1444 */ {I_CMPLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+533, 133},
    /* 1445 */ {I_CMPLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+541, 137},
    /* 1446 */ {I_CMPLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+549, 133},
    /* 1447 */ {I_CMPLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+557, 137},
    /* 1448 */ {I_CMPNEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+565, 133},
    /* 1449 */ {I_CMPNEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+573, 137},
    /* 1450 */ {I_CMPNLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+581, 133},
    /* 1451 */ {I_CMPNLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+589, 137},
    /* 1452 */ {I_CMPNLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+597, 133},
    /* 1453 */ {I_CMPNLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+605, 137},
    /* 1454 */ {I_CMPORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+613, 133},
    /* 1455 */ {I_CMPORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+621, 137},
    /* 1456 */ {I_CMPUNORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+629, 133},
    /* 1457 */ {I_CMPUNORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+637, 137},
    /* 1458 */ {I_CMPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2365, 132},
    /* 1459 */ {I_CMPSD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2372, 132},
    /* 1460 */ {I_COMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5003, 132},
    /* 1461 */ {I_CVTDQ2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5009, 137},
    /* 1462 */ {I_CVTDQ2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5015, 133},
    /* 1463 */ {I_CVTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5021, 133},
    /* 1464 */ {I_CVTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5027, 133},
    /* 1465 */ {I_CVTPD2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5033, 133},
    /* 1466 */ {I_CVTPI2PD, 2, {XMM_L16,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5039, 137},
    /* 1467 */ {I_CVTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5045, 133},
    /* 1468 */ {I_CVTPS2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5051, 137},
    /* 1469 */ {I_CVTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2379, 144},
    /* 1470 */ {I_CVTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2379, 144},
    /* 1471 */ {I_CVTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2386, 145},
    /* 1472 */ {I_CVTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2386, 145},
    /* 1473 */ {I_CVTSD2SS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5057, 137},
    /* 1474 */ {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2393, 146},
    /* 1475 */ {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2400, 145},
    /* 1476 */ {I_CVTSS2SD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5063, 136},
    /* 1477 */ {I_CVTTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5069, 133},
    /* 1478 */ {I_CVTTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5075, 133},
    /* 1479 */ {I_CVTTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5081, 133},
    /* 1480 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2407, 144},
    /* 1481 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2407, 144},
    /* 1482 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2414, 145},
    /* 1483 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2414, 145},
    /* 1484 */ {I_DIVPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5087, 133},
    /* 1485 */ {I_DIVSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5093, 137},
    /* 1486 */ {I_MAXPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5099, 133},
    /* 1487 */ {I_MAXSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5105, 137},
    /* 1488 */ {I_MINPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5111, 133},
    /* 1489 */ {I_MINSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5117, 137},
    /* 1490 */ {I_MOVAPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5123, 132},
    /* 1491 */ {I_MOVAPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5129, 132},
    /* 1492 */ {I_MOVHPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5135, 132},
    /* 1493 */ {I_MOVHPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5141, 132},
    /* 1494 */ {I_MOVLPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5147, 132},
    /* 1495 */ {I_MOVLPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5153, 132},
    /* 1496 */ {I_MOVMSKPD, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5159, 132},
    /* 1497 */ {I_MOVMSKPD, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2421, 138},
    /* 1498 */ {I_MOVSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5165, 132},
    /* 1499 */ {I_MOVSD, 2, {RM_XMM_L16|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5171, 132},
    /* 1500 */ {I_MOVUPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5177, 132},
    /* 1501 */ {I_MOVUPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5183, 132},
    /* 1502 */ {I_MULPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5189, 133},
    /* 1503 */ {I_MULSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5195, 137},
    /* 1504 */ {I_ORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5201, 133},
    /* 1505 */ {I_SHUFPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2428, 132},
    /* 1506 */ {I_SQRTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5207, 133},
    /* 1507 */ {I_SQRTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5213, 132},
    /* 1508 */ {I_SUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5219, 133},
    /* 1509 */ {I_SUBSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5225, 132},
    /* 1510 */ {I_UCOMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5231, 132},
    /* 1511 */ {I_UNPCKHPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5237, 132},
    /* 1512 */ {I_UNPCKLPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5243, 132},
    /* 1513 */ {I_XORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5249, 132},
    /* 1514 */ {I_ADDSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5255, 147},
    /* 1515 */ {I_ADDSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5261, 147},
    /* 1516 */ {I_HADDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5267, 147},
    /* 1517 */ {I_HADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5273, 147},
    /* 1518 */ {I_HSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5279, 147},
    /* 1519 */ {I_HSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5285, 147},
    /* 1520 */ {I_LDDQU, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5291, 147},
    /* 1521 */ {I_MOVDDUP, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5297, 148},
    /* 1522 */ {I_MOVSHDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5303, 149},
    /* 1523 */ {I_MOVSLDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5309, 149},
    /* 1524 */ {I_CLGI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7310, 150},
    /* 1525 */ {I_STGI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7315, 150},
    /* 1526 */ {I_VMCALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7320, 151},
    /* 1527 */ {I_VMCLEAR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5315, 151},
    /* 1528 */ {I_VMFUNC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7325, 151},
    /* 1529 */ {I_VMLAUNCH, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7330, 151},
    /* 1530 */ {I_VMLOAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7335, 150},
    /* 1531 */ {I_VMMCALL, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7340, 150},
    /* 1532 */ {I_VMPTRLD, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5321, 151},
    /* 1533 */ {I_VMPTRST, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5327, 151},
    /* 1534 */ {I_VMREAD, 2, {RM_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2436, 152},
    /* 1535 */ {I_VMREAD, 2, {RM_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2435, 153},
    /* 1536 */ {I_VMRESUME, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7345, 151},
    /* 1537 */ {I_VMRUN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7350, 150},
    /* 1538 */ {I_VMSAVE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7355, 150},
    /* 1539 */ {I_VMWRITE, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2443, 152},
    /* 1540 */ {I_VMWRITE, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2442, 153},
    /* 1541 */ {I_VMXOFF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7360, 151},
    /* 1542 */ {I_VMXON, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5333, 151},
    /* 1543 */ {I_INVEPT, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+646, 154},
    /* 1544 */ {I_INVEPT, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+645, 155},
    /* 1545 */ {I_INVVPID, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+654, 154},
    /* 1546 */ {I_INVVPID, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+653, 155},
    /* 1547 */ {I_PABSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2449, 156},
    /* 1548 */ {I_PABSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2456, 157},
    /* 1549 */ {I_PABSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2463, 156},
    /* 1550 */ {I_PABSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2470, 157},
    /* 1551 */ {I_PABSD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2477, 156},
    /* 1552 */ {I_PABSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2484, 157},
    /* 1553 */ {I_PALIGNR, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+661, 156},
    /* 1554 */ {I_PALIGNR, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+669, 157},
    /* 1555 */ {I_PHADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2491, 156},
    /* 1556 */ {I_PHADDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2498, 157},
    /* 1557 */ {I_PHADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2505, 156},
    /* 1558 */ {I_PHADDD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2512, 157},
    /* 1559 */ {I_PHADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2519, 156},
    /* 1560 */ {I_PHADDSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2526, 157},
    /* 1561 */ {I_PHSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2533, 156},
    /* 1562 */ {I_PHSUBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2540, 157},
    /* 1563 */ {I_PHSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2547, 156},
    /* 1564 */ {I_PHSUBD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2554, 157},
    /* 1565 */ {I_PHSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2561, 156},
    /* 1566 */ {I_PHSUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2568, 157},
    /* 1567 */ {I_PMADDUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2575, 156},
    /* 1568 */ {I_PMADDUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2582, 157},
    /* 1569 */ {I_PMULHRSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2589, 156},
    /* 1570 */ {I_PMULHRSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2596, 157},
    /* 1571 */ {I_PSHUFB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2603, 156},
    /* 1572 */ {I_PSHUFB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2610, 157},
    /* 1573 */ {I_PSIGNB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2617, 156},
    /* 1574 */ {I_PSIGNB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2624, 157},
    /* 1575 */ {I_PSIGNW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2631, 156},
    /* 1576 */ {I_PSIGNW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2638, 157},
    /* 1577 */ {I_PSIGND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2645, 156},
    /* 1578 */ {I_PSIGND, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2652, 157},
    /* 1579 */ {I_EXTRQ, 3, {XMM_L16,IMMEDIATE,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+677, 158},
    /* 1580 */ {I_EXTRQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5339, 158},
    /* 1581 */ {I_INSERTQ, 4, {XMM_L16,XMM_L16,IMMEDIATE,IMMEDIATE,0}, NO_DECORATOR, nasm_bytecodes+685, 158},
    /* 1582 */ {I_INSERTQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5345, 158},
    /* 1583 */ {I_MOVNTSD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5351, 159},
    /* 1584 */ {I_MOVNTSS, 2, {MEMORY|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5357, 160},
    /* 1585 */ {I_LZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2659, 103},
    /* 1586 */ {I_LZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2666, 103},
    /* 1587 */ {I_LZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2673, 54},
    /* 1588 */ {I_BLENDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+693, 161},
    /* 1589 */ {I_BLENDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+701, 161},
    /* 1590 */ {I_BLENDVPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2680, 161},
    /* 1591 */ {I_BLENDVPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2680, 161},
    /* 1592 */ {I_BLENDVPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2687, 161},
    /* 1593 */ {I_BLENDVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2687, 161},
    /* 1594 */ {I_DPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+709, 161},
    /* 1595 */ {I_DPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+717, 161},
    /* 1596 */ {I_EXTRACTPS, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1, 161},
    /* 1597 */ {I_EXTRACTPS, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+0, 162},
    /* 1598 */ {I_INSERTPS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+725, 161},
    /* 1599 */ {I_MOVNTDQA, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2694, 161},
    /* 1600 */ {I_MPSADBW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+733, 161},
    /* 1601 */ {I_PACKUSDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2701, 161},
    /* 1602 */ {I_PBLENDVB, 3, {XMM_L16,RM_XMM_L16,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2708, 161},
    /* 1603 */ {I_PBLENDVB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2708, 161},
    /* 1604 */ {I_PBLENDW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+741, 161},
    /* 1605 */ {I_PCMPEQQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2715, 161},
    /* 1606 */ {I_PEXTRB, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10, 161},
    /* 1607 */ {I_PEXTRB, 3, {MEMORY|BITS8,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10, 161},
    /* 1608 */ {I_PEXTRB, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9, 162},
    /* 1609 */ {I_PEXTRD, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+18, 161},
    /* 1610 */ {I_PEXTRQ, 3, {RM_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+27, 162},
    /* 1611 */ {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+37, 161},
    /* 1612 */ {I_PEXTRW, 3, {MEMORY|BITS16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+37, 161},
    /* 1613 */ {I_PEXTRW, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+36, 162},
    /* 1614 */ {I_PHMINPOSUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2722, 161},
    /* 1615 */ {I_PINSRB, 3, {XMM_L16,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+46, 163},
    /* 1616 */ {I_PINSRB, 3, {XMM_L16,RM_GPR|BITS8,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+45, 163},
    /* 1617 */ {I_PINSRB, 3, {XMM_L16,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+46, 163},
    /* 1618 */ {I_PINSRD, 3, {XMM_L16,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+54, 163},
    /* 1619 */ {I_PINSRQ, 3, {XMM_L16,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+63, 164},
    /* 1620 */ {I_PMAXSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2729, 161},
    /* 1621 */ {I_PMAXSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2736, 161},
    /* 1622 */ {I_PMAXUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2743, 161},
    /* 1623 */ {I_PMAXUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2750, 161},
    /* 1624 */ {I_PMINSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2757, 161},
    /* 1625 */ {I_PMINSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2764, 161},
    /* 1626 */ {I_PMINUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2771, 161},
    /* 1627 */ {I_PMINUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2778, 161},
    /* 1628 */ {I_PMOVSXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2785, 165},
    /* 1629 */ {I_PMOVSXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2792, 166},
    /* 1630 */ {I_PMOVSXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2799, 167},
    /* 1631 */ {I_PMOVSXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2806, 165},
    /* 1632 */ {I_PMOVSXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2813, 166},
    /* 1633 */ {I_PMOVSXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2820, 165},
    /* 1634 */ {I_PMOVZXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2827, 165},
    /* 1635 */ {I_PMOVZXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2834, 166},
    /* 1636 */ {I_PMOVZXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2841, 167},
    /* 1637 */ {I_PMOVZXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2848, 165},
    /* 1638 */ {I_PMOVZXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2855, 166},
    /* 1639 */ {I_PMOVZXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2862, 165},
    /* 1640 */ {I_PMULDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2869, 161},
    /* 1641 */ {I_PMULLD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2876, 161},
    /* 1642 */ {I_PTEST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2883, 161},
    /* 1643 */ {I_ROUNDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+749, 161},
    /* 1644 */ {I_ROUNDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+757, 161},
    /* 1645 */ {I_ROUNDSD, 3, {XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+765, 161},
    /* 1646 */ {I_ROUNDSS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+773, 161},
    /* 1647 */ {I_GETSEC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+8414, 127},
    /* 1648 */ {I_MOVBE, 2, {REG_GPR|BITS16,MEMORY|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+781, 168},
    /* 1649 */ {I_MOVBE, 2, {REG_GPR|BITS32,MEMORY|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+789, 168},
    /* 1650 */ {I_MOVBE, 2, {REG_GPR|BITS64,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+797, 168},
    /* 1651 */ {I_MOVBE, 2, {MEMORY|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+805, 168},
    /* 1652 */ {I_MOVBE, 2, {MEMORY|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+813, 168},
    /* 1653 */ {I_MOVBE, 2, {MEMORY|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+821, 168},
    /* 1654 */ {I_AESENC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2890, 169},
    /* 1655 */ {I_AESENCLAST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2897, 169},
    /* 1656 */ {I_AESDEC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2904, 169},
    /* 1657 */ {I_AESDECLAST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2911, 169},
    /* 1658 */ {I_AESIMC, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2918, 169},
    /* 1659 */ {I_AESKEYGENASSIST, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+829, 169},
    /* 1660 */ {I_PCLMULLQLQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+72, 169},
    /* 1661 */ {I_PCLMULHQLQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+81, 169},
    /* 1662 */ {I_PCLMULLQHQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+90, 169},
    /* 1663 */ {I_PCLMULHQHQDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+99, 169},
    /* 1664 */ {I_PCLMULQDQ, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+837, 169},
    /* 1665 */ {I_RDFSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2925, 126},
    /* 1666 */ {I_RDFSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2932, 126},
    /* 1667 */ {I_RDGSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2939, 126},
    /* 1668 */ {I_RDGSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2946, 126},
    /* 1669 */ {I_RDRAND, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5363, 125},
    /* 1670 */ {I_RDRAND, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5369, 125},
    /* 1671 */ {I_RDRAND, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5375, 126},
    /* 1672 */ {I_WRFSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2953, 126},
    /* 1673 */ {I_WRFSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2960, 126},
    /* 1674 */ {I_WRGSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2967, 126},
    /* 1675 */ {I_WRGSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2974, 126},
    /* 1676 */ {I_ADCX, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+845, 125},
    /* 1677 */ {I_ADCX, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+853, 126},
    /* 1678 */ {I_ADOX, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+861, 125},
    /* 1679 */ {I_ADOX, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+869, 126},
    /* 1680 */ {I_RDSEED, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5381, 125},
    /* 1681 */ {I_RDSEED, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5387, 125},
    /* 1682 */ {I_RDSEED, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5393, 126},
    /* 1683 */ {I_CLAC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7365, 170},
    /* 1684 */ {I_STAC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7370, 170},
    /* 1685 */ {I_XABORT, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7375, 171},
    /* 1686 */ {I_XABORT, 1, {IMMEDIATE|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7375, 171},
    /* 1687 */ {I_XBEGIN, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5399, 171},
    /* 1688 */ {I_XBEGIN, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5405, 172},
    /* 1689 */ {I_XBEGIN, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5411, 172},
    /* 1690 */ {I_XBEGIN, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5417, 173},
    /* 1691 */ {I_XEND, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7380, 171},
    /* 1692 */ {I_XTEST, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7385, 174},
    /* 1693 */ {I_TZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2981, 175},
    /* 1694 */ {I_TZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2988, 175},
    /* 1695 */ {I_TZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2995, 176},
    /* 1696 */ {I_PREFETCHWT1, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7390, 177},
    /* 1697 */ {I_BNDMK, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5423, 178},
    /* 1698 */ {I_BNDCL, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3003, 179},
    /* 1699 */ {I_BNDCL, 2, {BNDREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3003, 180},
    /* 1700 */ {I_BNDCL, 2, {BNDREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3002, 181},
    /* 1701 */ {I_BNDCU, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3010, 179},
    /* 1702 */ {I_BNDCU, 2, {BNDREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3010, 180},
    /* 1703 */ {I_BNDCU, 2, {BNDREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3009, 181},
    /* 1704 */ {I_BNDCN, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3017, 179},
    /* 1705 */ {I_BNDCN, 2, {BNDREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3017, 180},
    /* 1706 */ {I_BNDCN, 2, {BNDREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3016, 181},
    /* 1707 */ {I_BNDMOV, 2, {BNDREG,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5429, 179},
    /* 1708 */ {I_BNDMOV, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5429, 179},
    /* 1709 */ {I_BNDMOV, 2, {BNDREG,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5435, 179},
    /* 1710 */ {I_BNDMOV, 2, {MEMORY,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5435, 179},
    /* 1711 */ {I_BNDLDX, 2, {BNDREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5430, 178},
    /* 1712 */ {I_BNDLDX, 3, {BNDREG,MEMORY,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+5441, 182},
    /* 1713 */ {I_BNDLDX, 3, {BNDREG,MEMORY,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+5441, 183},
    /* 1714 */ {I_BNDSTX, 2, {MEMORY,BNDREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5436, 178},
    /* 1715 */ {I_BNDSTX, 3, {MEMORY,REG_GPR|BITS32,BNDREG,0,0}, NO_DECORATOR, nasm_bytecodes+5447, 182},
    /* 1716 */ {I_BNDSTX, 3, {MEMORY,REG_GPR|BITS64,BNDREG,0,0}, NO_DECORATOR, nasm_bytecodes+5447, 183},
    /* 1717 */ {I_BNDSTX, 3, {MEMORY,BNDREG,REG_GPR|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+5453, 182},
    /* 1718 */ {I_BNDSTX, 3, {MEMORY,BNDREG,REG_GPR|BITS64,0,0}, NO_DECORATOR, nasm_bytecodes+5453, 183},
    /* 1719 */ {I_SHA1MSG1, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5459, 184},
    /* 1720 */ {I_SHA1MSG2, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5465, 184},
    /* 1721 */ {I_SHA1NEXTE, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5471, 184},
    /* 1722 */ {I_SHA1RNDS4, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+3023, 184},
    /* 1723 */ {I_SHA256MSG1, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5477, 184},
    /* 1724 */ {I_SHA256MSG2, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5483, 184},
    /* 1725 */ {I_SHA256RNDS2, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+5489, 184},
    /* 1726 */ {I_SHA256RNDS2, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+5489, 184},
    /* 1727 */ {I_RDPKRU, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7395, 126},
    /* 1728 */ {I_WRPKRU, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7400, 126},
    /* 1729 */ {I_RDPID, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3031, 185},
    /* 1730 */ {I_RDPID, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3030, 126},
    /* 1731 */ {I_RDPID, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3031, 186},
    /* 1732 */ {I_CLFLUSHOPT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5495, 125},
    /* 1733 */ {I_CLWB, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5501, 125},
    /* 1734 */ {I_PCOMMIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5507, 187},
    /* 1735 */ {I_CLZERO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5526, 188},
    /* 1736 */ {I_PTWRITE, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2100, 125},
    /* 1737 */ {I_PTWRITE, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2099, 126},
    /* 1738 */ {I_CLDEMOTE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5531, 125},
    /* 1739 */ {I_MOVDIRI, 2, {MEMORY|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3037, 191},
    /* 1740 */ {I_MOVDIRI, 2, {MEMORY|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3044, 192},
    /* 1741 */ {I_MOVDIR64B, 2, {REG_GPR|BITS16,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+877, 185},
    /* 1742 */ {I_MOVDIR64B, 2, {REG_GPR|BITS32,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+885, 125},
    /* 1743 */ {I_MOVDIR64B, 2, {REG_GPR|BITS64,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+108, 126},
    /* 1744 */ {I_PCONFIG, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5537, 125},
    /* 1745 */ {I_TPAUSE, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5501, 125},
    /* 1746 */ {I_UMONITOR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3051, 185},
    /* 1747 */ {I_UMONITOR, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3058, 125},
    /* 1748 */ {I_UMONITOR, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+893, 126},
    /* 1749 */ {I_UMWAIT, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5543, 125},
    /* 1750 */ {I_WBNOINVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7405, 125},
    /* 1751 */ {I_ENCLS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5549, 193},
    /* 1752 */ {I_ENCLU, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5555, 193},
    /* 1753 */ {I_ENCLV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5561, 193},
    /* 1754 */ {I_CLRSSBSY, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3059, 194},
    /* 1755 */ {I_ENDBR32, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5567, 194},
    /* 1756 */ {I_ENDBR64, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5573, 194},
    /* 1757 */ {I_INCSSPD, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3065, 194},
    /* 1758 */ {I_INCSSPQ, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3072, 195},
    /* 1759 */ {I_RDSSPD, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3079, 194},
    /* 1760 */ {I_RDSSPQ, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3086, 195},
    /* 1761 */ {I_RSTORSSP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5579, 194},
    /* 1762 */ {I_SAVEPREVSSP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5585, 194},
    /* 1763 */ {I_SETSSBSY, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5591, 194},
    /* 1764 */ {I_WRUSSD, 2, {MEMORY|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+901, 194},
    /* 1765 */ {I_WRUSSQ, 2, {MEMORY|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+909, 195},
    /* 1766 */ {I_WRSSD, 2, {MEMORY|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3093, 194},
    /* 1767 */ {I_WRSSQ, 2, {MEMORY|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3100, 195},
    /* 1768 */ {I_ENQCMD, 2, {REG_GPR|BITS16,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+917, 196},
    /* 1769 */ {I_ENQCMD, 2, {REG_GPR|BITS32,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+925, 196},
    /* 1770 */ {I_ENQCMD, 2, {REG_GPR|BITS64,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+933, 197},
    /* 1771 */ {I_ENQCMDS, 2, {REG_GPR|BITS16,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+941, 198},
    /* 1772 */ {I_ENQCMDS, 2, {REG_GPR|BITS32,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+949, 198},
    /* 1773 */ {I_ENQCMDS, 2, {REG_GPR|BITS64,MEMORY|BITS512,0,0,0}, NO_DECORATOR, nasm_bytecodes+957, 199},
    /* 1774 */ {I_PCONFIG, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5537, 200},
    /* 1775 */ {I_SERIALIZE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5597, 201},
    /* 1776 */ {I_WBNOINVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7405, 202},
    /* 1777 */ {I_XRESLDTRK, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5603, 203},
    /* 1778 */ {I_XSUSLDTRK, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5609, 203},
};

static const struct itemplate * const itable_00[] = {
    instrux + 44,
    instrux + 45,
};

static const struct itemplate * const itable_01[] = {
    instrux + 46,
    instrux + 47,
    instrux + 48,
    instrux + 49,
    instrux + 50,
    instrux + 51,
};

static const struct itemplate * const itable_02[] = {
    instrux + 52,
    instrux + 53,
};

static const struct itemplate * const itable_03[] = {
    instrux + 54,
    instrux + 55,
    instrux + 56,
    instrux + 57,
    instrux + 58,
    instrux + 59,
};

static const struct itemplate * const itable_04[] = {
    instrux + 63,
};

static const struct itemplate * const itable_05[] = {
    instrux + 64,
    instrux + 65,
    instrux + 66,
};

static const struct itemplate * const itable_06[] = {
    instrux + 839,
};

static const struct itemplate * const itable_07[] = {
    instrux + 789,
};

static const struct itemplate * const itable_08[] = {
    instrux + 701,
    instrux + 702,
};

static const struct itemplate * const itable_09[] = {
    instrux + 703,
    instrux + 704,
    instrux + 705,
    instrux + 706,
    instrux + 707,
    instrux + 708,
};

static const struct itemplate * const itable_0A[] = {
    instrux + 709,
    instrux + 710,
};

static const struct itemplate * const itable_0B[] = {
    instrux + 711,
    instrux + 712,
    instrux + 713,
    instrux + 714,
    instrux + 715,
    instrux + 716,
};

static const struct itemplate * const itable_0C[] = {
    instrux + 720,
};

static const struct itemplate * const itable_0D[] = {
    instrux + 721,
    instrux + 722,
    instrux + 723,
};

static const struct itemplate * const itable_0E[] = {
    instrux + 840,
};

static const struct itemplate * const itable_0F00[] = {
    instrux + 529,
    instrux + 530,
    instrux + 559,
    instrux + 560,
    instrux + 561,
    instrux + 602,
    instrux + 603,
    instrux + 604,
    instrux + 1037,
    instrux + 1038,
    instrux + 1039,
    instrux + 1040,
    instrux + 1041,
    instrux + 1056,
    instrux + 1057,
    instrux + 1058,
    instrux + 1059,
    instrux + 1060,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
};

static const struct itemplate * const itable_0F01[] = {
    instrux + 495,
    instrux + 496,
    instrux + 497,
    instrux + 498,
    instrux + 499,
    instrux + 554,
    instrux + 558,
    instrux + 562,
    instrux + 563,
    instrux + 564,
    instrux + 606,
    instrux + 607,
    instrux + 687,
    instrux + 688,
    instrux + 886,
    instrux + 987,
    instrux + 1036,
    instrux + 1042,
    instrux + 1044,
    instrux + 1045,
    instrux + 1046,
    instrux + 1047,
    instrux + 1048,
    instrux + 1093,
    instrux + 1293,
    instrux + 1294,
    instrux + 1524,
    instrux + 1525,
    instrux + 1526,
    instrux + 1528,
    instrux + 1529,
    instrux + 1530,
    instrux + 1531,
    instrux + 1536,
    instrux + 1537,
    instrux + 1538,
    instrux + 1541,
    instrux + 1683,
    instrux + 1684,
    instrux + 1691,
    instrux + 1692,
    instrux + 1727,
    instrux + 1728,
    instrux + 1735,
    instrux + 1744,
    instrux + 1751,
    instrux + 1752,
    instrux + 1753,
    instrux + 1761,
    instrux + 1762,
    instrux + 1763,
    instrux + 1774,
    instrux + 1775,
    instrux + 1777,
    instrux + 1778,
};

static const struct itemplate * const itable_0F02[] = {
    instrux + 532,
    instrux + 533,
    instrux + 534,
    instrux + 535,
    instrux + 536,
    instrux + 537,
    instrux + 538,
    instrux + 539,
    instrux + 540,
    instrux + 541,
};

static const struct itemplate * const itable_0F03[] = {
    instrux + 589,
    instrux + 590,
    instrux + 591,
    instrux + 592,
    instrux + 593,
    instrux + 594,
    instrux + 595,
    instrux + 596,
    instrux + 597,
    instrux + 598,
};

static const struct itemplate * const itable_0F05[] = {
    instrux + 1094,
};

static const struct itemplate * const itable_0F06[] = {
    instrux + 186,
};

static const struct itemplate * const itable_0F07[] = {
    instrux + 1097,
};

static const struct itemplate * const itable_0F08[] = {
    instrux + 492,
};

static const struct itemplate * const itable_0F09[] = {
    instrux + 1136,
    instrux + 1750,
    instrux + 1776,
};

static const struct itemplate * const itable_0F0B[] = {
    instrux + 1128,
};

static const struct itemplate * const itable_0F0D[] = {
    instrux + 802,
    instrux + 803,
    instrux + 1696,
};

static const struct itemplate * const itable_0F0E[] = {
    instrux + 318,
};

static const struct itemplate * const itable_0F0F[] = {
    instrux + 755,
    instrux + 762,
    instrux + 763,
    instrux + 764,
    instrux + 765,
    instrux + 766,
    instrux + 767,
    instrux + 768,
    instrux + 769,
    instrux + 770,
    instrux + 771,
    instrux + 772,
    instrux + 773,
    instrux + 774,
    instrux + 775,
    instrux + 776,
    instrux + 777,
    instrux + 778,
    instrux + 780,
    instrux + 1328,
    instrux + 1329,
    instrux + 1330,
    instrux + 1331,
    instrux + 1332,
};

static const struct itemplate * const itable_0F10[] = {
    instrux + 1268,
    instrux + 1270,
    instrux + 1498,
    instrux + 1500,
};

static const struct itemplate * const itable_0F11[] = {
    instrux + 1269,
    instrux + 1271,
    instrux + 1499,
    instrux + 1501,
};

static const struct itemplate * const itable_0F12[] = {
    instrux + 1262,
    instrux + 1264,
    instrux + 1495,
    instrux + 1521,
    instrux + 1523,
};

static const struct itemplate * const itable_0F13[] = {
    instrux + 1263,
    instrux + 1494,
};

static const struct itemplate * const itable_0F14[] = {
    instrux + 1287,
    instrux + 1512,
};

static const struct itemplate * const itable_0F15[] = {
    instrux + 1286,
    instrux + 1511,
};

static const struct itemplate * const itable_0F16[] = {
    instrux + 1259,
    instrux + 1261,
    instrux + 1493,
    instrux + 1522,
};

static const struct itemplate * const itable_0F17[] = {
    instrux + 1260,
    instrux + 1492,
};

static const struct itemplate * const itable_0F18[] = {
    instrux + 1307,
    instrux + 1308,
    instrux + 1309,
    instrux + 1310,
};

static const struct itemplate * const itable_0F1A[] = {
    instrux + 1698,
    instrux + 1699,
    instrux + 1700,
    instrux + 1701,
    instrux + 1702,
    instrux + 1703,
    instrux + 1707,
    instrux + 1708,
    instrux + 1711,
    instrux + 1712,
    instrux + 1713,
};

static const struct itemplate * const itable_0F1B[] = {
    instrux + 1697,
    instrux + 1704,
    instrux + 1705,
    instrux + 1706,
    instrux + 1709,
    instrux + 1710,
    instrux + 1714,
    instrux + 1715,
    instrux + 1716,
    instrux + 1717,
    instrux + 1718,
};

static const struct itemplate * const itable_0F1C[] = {
    instrux + 1738,
};

static const struct itemplate * const itable_0F1E[] = {
    instrux + 1755,
    instrux + 1756,
    instrux + 1759,
    instrux + 1760,
};

static const struct itemplate * const itable_0F1F[] = {
    instrux + 694,
    instrux + 695,
    instrux + 696,
};

static const struct itemplate * const itable_0F20[] = {
    instrux + 624,
    instrux + 625,
};

static const struct itemplate * const itable_0F21[] = {
    instrux + 628,
    instrux + 629,
};

static const struct itemplate * const itable_0F22[] = {
    instrux + 626,
    instrux + 627,
};

static const struct itemplate * const itable_0F23[] = {
    instrux + 630,
    instrux + 631,
};

static const struct itemplate * const itable_0F28[] = {
    instrux + 1257,
    instrux + 1490,
};

static const struct itemplate * const itable_0F29[] = {
    instrux + 1258,
    instrux + 1491,
};

static const struct itemplate * const itable_0F2A[] = {
    instrux + 1239,
    instrux + 1241,
    instrux + 1242,
    instrux + 1466,
    instrux + 1474,
    instrux + 1475,
};

static const struct itemplate * const itable_0F2B[] = {
    instrux + 1267,
    instrux + 1338,
    instrux + 1583,
    instrux + 1584,
};

static const struct itemplate * const itable_0F2C[] = {
    instrux + 1247,
    instrux + 1248,
    instrux + 1249,
    instrux + 1477,
    instrux + 1480,
    instrux + 1481,
    instrux + 1482,
    instrux + 1483,
};

static const struct itemplate * const itable_0F2D[] = {
    instrux + 1240,
    instrux + 1243,
    instrux + 1244,
    instrux + 1245,
    instrux + 1246,
    instrux + 1464,
    instrux + 1469,
    instrux + 1470,
    instrux + 1471,
    instrux + 1472,
};

static const struct itemplate * const itable_0F2E[] = {
    instrux + 1285,
    instrux + 1510,
};

static const struct itemplate * const itable_0F2F[] = {
    instrux + 1238,
    instrux + 1460,
};

static const struct itemplate * const itable_0F30[] = {
    instrux + 1137,
};

static const struct itemplate * const itable_0F31[] = {
    instrux + 885,
};

static const struct itemplate * const itable_0F32[] = {
    instrux + 883,
};

static const struct itemplate * const itable_0F33[] = {
    instrux + 884,
};

static const struct itemplate * const itable_0F34[] = {
    instrux + 1095,
};

static const struct itemplate * const itable_0F35[] = {
    instrux + 1096,
};

static const struct itemplate * const itable_0F37[] = {
    instrux + 1647,
};

static const struct itemplate * const itable_0F3800[] = {
    instrux + 1571,
    instrux + 1572,
};

static const struct itemplate * const itable_0F3801[] = {
    instrux + 1555,
    instrux + 1556,
};

static const struct itemplate * const itable_0F3802[] = {
    instrux + 1557,
    instrux + 1558,
};

static const struct itemplate * const itable_0F3803[] = {
    instrux + 1559,
    instrux + 1560,
};

static const struct itemplate * const itable_0F3804[] = {
    instrux + 1567,
    instrux + 1568,
};

static const struct itemplate * const itable_0F3805[] = {
    instrux + 1561,
    instrux + 1562,
};

static const struct itemplate * const itable_0F3806[] = {
    instrux + 1563,
    instrux + 1564,
};

static const struct itemplate * const itable_0F3807[] = {
    instrux + 1565,
    instrux + 1566,
};

static const struct itemplate * const itable_0F3808[] = {
    instrux + 1573,
    instrux + 1574,
};

static const struct itemplate * const itable_0F3809[] = {
    instrux + 1575,
    instrux + 1576,
};

static const struct itemplate * const itable_0F380A[] = {
    instrux + 1577,
    instrux + 1578,
};

static const struct itemplate * const itable_0F380B[] = {
    instrux + 1569,
    instrux + 1570,
};

static const struct itemplate * const itable_0F3810[] = {
    instrux + 1602,
    instrux + 1603,
};

static const struct itemplate * const itable_0F3814[] = {
    instrux + 1592,
    instrux + 1593,
};

static const struct itemplate * const itable_0F3815[] = {
    instrux + 1590,
    instrux + 1591,
};

static const struct itemplate * const itable_0F3817[] = {
    instrux + 1642,
};

static const struct itemplate * const itable_0F381C[] = {
    instrux + 1547,
    instrux + 1548,
};

static const struct itemplate * const itable_0F381D[] = {
    instrux + 1549,
    instrux + 1550,
};

static const struct itemplate * const itable_0F381E[] = {
    instrux + 1551,
    instrux + 1552,
};

static const struct itemplate * const itable_0F3820[] = {
    instrux + 1628,
};

static const struct itemplate * const itable_0F3821[] = {
    instrux + 1629,
};

static const struct itemplate * const itable_0F3822[] = {
    instrux + 1630,
};

static const struct itemplate * const itable_0F3823[] = {
    instrux + 1631,
};

static const struct itemplate * const itable_0F3824[] = {
    instrux + 1632,
};

static const struct itemplate * const itable_0F3825[] = {
    instrux + 1633,
};

static const struct itemplate * const itable_0F3828[] = {
    instrux + 1640,
};

static const struct itemplate * const itable_0F3829[] = {
    instrux + 1605,
};

static const struct itemplate * const itable_0F382A[] = {
    instrux + 1599,
};

static const struct itemplate * const itable_0F382B[] = {
    instrux + 1601,
};

static const struct itemplate * const itable_0F3830[] = {
    instrux + 1634,
};

static const struct itemplate * const itable_0F3831[] = {
    instrux + 1635,
};

static const struct itemplate * const itable_0F3832[] = {
    instrux + 1636,
};

static const struct itemplate * const itable_0F3833[] = {
    instrux + 1637,
};

static const struct itemplate * const itable_0F3834[] = {
    instrux + 1638,
};

static const struct itemplate * const itable_0F3835[] = {
    instrux + 1639,
};

static const struct itemplate * const itable_0F3838[] = {
    instrux + 1624,
};

static const struct itemplate * const itable_0F3839[] = {
    instrux + 1625,
};

static const struct itemplate * const itable_0F383A[] = {
    instrux + 1627,
};

static const struct itemplate * const itable_0F383B[] = {
    instrux + 1626,
};

static const struct itemplate * const itable_0F383C[] = {
    instrux + 1620,
};

static const struct itemplate * const itable_0F383D[] = {
    instrux + 1621,
};

static const struct itemplate * const itable_0F383E[] = {
    instrux + 1623,
};

static const struct itemplate * const itable_0F383F[] = {
    instrux + 1622,
};

static const struct itemplate * const itable_0F3840[] = {
    instrux + 1641,
};

static const struct itemplate * const itable_0F3841[] = {
    instrux + 1614,
};

static const struct itemplate * const itable_0F3880[] = {
    instrux + 1543,
    instrux + 1544,
};

static const struct itemplate * const itable_0F3881[] = {
    instrux + 1545,
    instrux + 1546,
};

static const struct itemplate * const itable_0F3882[] = {
    instrux + 493,
    instrux + 494,
};

static const struct itemplate * const itable_0F38C8[] = {
    instrux + 1721,
};

static const struct itemplate * const itable_0F38C9[] = {
    instrux + 1719,
};

static const struct itemplate * const itable_0F38CA[] = {
    instrux + 1720,
};

static const struct itemplate * const itable_0F38CB[] = {
    instrux + 1725,
    instrux + 1726,
};

static const struct itemplate * const itable_0F38CC[] = {
    instrux + 1723,
};

static const struct itemplate * const itable_0F38CD[] = {
    instrux + 1724,
};

static const struct itemplate * const itable_0F38DB[] = {
    instrux + 1658,
};

static const struct itemplate * const itable_0F38DC[] = {
    instrux + 1654,
};

static const struct itemplate * const itable_0F38DD[] = {
    instrux + 1655,
};

static const struct itemplate * const itable_0F38DE[] = {
    instrux + 1656,
};

static const struct itemplate * const itable_0F38DF[] = {
    instrux + 1657,
};

static const struct itemplate * const itable_0F38F0[] = {
    instrux + 1648,
    instrux + 1649,
    instrux + 1650,
};

static const struct itemplate * const itable_0F38F1[] = {
    instrux + 1651,
    instrux + 1652,
    instrux + 1653,
};

static const struct itemplate * const itable_0F38F5[] = {
    instrux + 1764,
    instrux + 1765,
};

static const struct itemplate * const itable_0F38F6[] = {
    instrux + 1676,
    instrux + 1677,
    instrux + 1678,
    instrux + 1679,
    instrux + 1766,
    instrux + 1767,
};

static const struct itemplate * const itable_0F38F8[] = {
    instrux + 1741,
    instrux + 1742,
    instrux + 1743,
    instrux + 1768,
    instrux + 1769,
    instrux + 1770,
    instrux + 1771,
    instrux + 1772,
    instrux + 1773,
};

static const struct itemplate * const itable_0F38F9[] = {
    instrux + 1739,
    instrux + 1740,
};

static const struct itemplate * const itable_0F3A08[] = {
    instrux + 1644,
};

static const struct itemplate * const itable_0F3A09[] = {
    instrux + 1643,
};

static const struct itemplate * const itable_0F3A0A[] = {
    instrux + 1646,
};

static const struct itemplate * const itable_0F3A0B[] = {
    instrux + 1645,
};

static const struct itemplate * const itable_0F3A0C[] = {
    instrux + 1589,
};

static const struct itemplate * const itable_0F3A0D[] = {
    instrux + 1588,
};

static const struct itemplate * const itable_0F3A0E[] = {
    instrux + 1604,
};

static const struct itemplate * const itable_0F3A0F[] = {
    instrux + 1553,
    instrux + 1554,
};

static const struct itemplate * const itable_0F3A14[] = {
    instrux + 1606,
    instrux + 1607,
    instrux + 1608,
};

static const struct itemplate * const itable_0F3A15[] = {
    instrux + 1611,
    instrux + 1612,
    instrux + 1613,
};

static const struct itemplate * const itable_0F3A16[] = {
    instrux + 1609,
    instrux + 1610,
};

static const struct itemplate * const itable_0F3A17[] = {
    instrux + 1596,
    instrux + 1597,
};

static const struct itemplate * const itable_0F3A20[] = {
    instrux + 1615,
    instrux + 1616,
    instrux + 1617,
};

static const struct itemplate * const itable_0F3A21[] = {
    instrux + 1598,
};

static const struct itemplate * const itable_0F3A22[] = {
    instrux + 1618,
    instrux + 1619,
};

static const struct itemplate * const itable_0F3A40[] = {
    instrux + 1595,
};

static const struct itemplate * const itable_0F3A41[] = {
    instrux + 1594,
};

static const struct itemplate * const itable_0F3A42[] = {
    instrux + 1600,
};

static const struct itemplate * const itable_0F3A44[] = {
    instrux + 1660,
    instrux + 1661,
    instrux + 1662,
    instrux + 1663,
    instrux + 1664,
};

static const struct itemplate * const itable_0F3ACC[] = {
    instrux + 1722,
};

static const struct itemplate * const itable_0F3ADF[] = {
    instrux + 1659,
};

static const struct itemplate * const itable_0F40[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F41[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F42[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F43[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F44[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F45[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F46[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F47[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F48[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F49[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F4A[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F4B[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F4C[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F4D[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F4E[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F4F[] = {
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
};

static const struct itemplate * const itable_0F50[] = {
    instrux + 1265,
    instrux + 1266,
    instrux + 1496,
    instrux + 1497,
};

static const struct itemplate * const itable_0F51[] = {
    instrux + 1280,
    instrux + 1281,
    instrux + 1506,
    instrux + 1507,
};

static const struct itemplate * const itable_0F52[] = {
    instrux + 1277,
    instrux + 1278,
};

static const struct itemplate * const itable_0F53[] = {
    instrux + 1275,
    instrux + 1276,
};

static const struct itemplate * const itable_0F54[] = {
    instrux + 1219,
    instrux + 1441,
};

static const struct itemplate * const itable_0F55[] = {
    instrux + 1218,
    instrux + 1440,
};

static const struct itemplate * const itable_0F56[] = {
    instrux + 1274,
    instrux + 1504,
};

static const struct itemplate * const itable_0F57[] = {
    instrux + 1288,
    instrux + 1513,
};

static const struct itemplate * const itable_0F58[] = {
    instrux + 1216,
    instrux + 1217,
    instrux + 1438,
    instrux + 1439,
};

static const struct itemplate * const itable_0F59[] = {
    instrux + 1272,
    instrux + 1273,
    instrux + 1502,
    instrux + 1503,
};

static const struct itemplate * const itable_0F5A[] = {
    instrux + 1465,
    instrux + 1468,
    instrux + 1473,
    instrux + 1476,
};

static const struct itemplate * const itable_0F5B[] = {
    instrux + 1462,
    instrux + 1467,
    instrux + 1479,
};

static const struct itemplate * const itable_0F5C[] = {
    instrux + 1283,
    instrux + 1284,
    instrux + 1508,
    instrux + 1509,
};

static const struct itemplate * const itable_0F5D[] = {
    instrux + 1255,
    instrux + 1256,
    instrux + 1488,
    instrux + 1489,
};

static const struct itemplate * const itable_0F5E[] = {
    instrux + 1250,
    instrux + 1251,
    instrux + 1484,
    instrux + 1485,
};

static const struct itemplate * const itable_0F5F[] = {
    instrux + 1253,
    instrux + 1254,
    instrux + 1486,
    instrux + 1487,
};

static const struct itemplate * const itable_0F60[] = {
    instrux + 830,
    instrux + 1433,
};

static const struct itemplate * const itable_0F61[] = {
    instrux + 832,
    instrux + 1434,
};

static const struct itemplate * const itable_0F62[] = {
    instrux + 831,
    instrux + 1435,
};

static const struct itemplate * const itable_0F63[] = {
    instrux + 743,
    instrux + 1357,
};

static const struct itemplate * const itable_0F64[] = {
    instrux + 759,
    instrux + 1376,
};

static const struct itemplate * const itable_0F65[] = {
    instrux + 761,
    instrux + 1377,
};

static const struct itemplate * const itable_0F66[] = {
    instrux + 760,
    instrux + 1378,
};

static const struct itemplate * const itable_0F67[] = {
    instrux + 744,
    instrux + 1359,
};

static const struct itemplate * const itable_0F68[] = {
    instrux + 827,
    instrux + 1429,
};

static const struct itemplate * const itable_0F69[] = {
    instrux + 829,
    instrux + 1430,
};

static const struct itemplate * const itable_0F6A[] = {
    instrux + 828,
    instrux + 1431,
};

static const struct itemplate * const itable_0F6B[] = {
    instrux + 742,
    instrux + 1358,
};

static const struct itemplate * const itable_0F6C[] = {
    instrux + 1436,
};

static const struct itemplate * const itable_0F6D[] = {
    instrux + 1432,
};

static const struct itemplate * const itable_0F6E[] = {
    instrux + 660,
    instrux + 664,
    instrux + 1342,
    instrux + 1343,
    instrux + 1354,
};

static const struct itemplate * const itable_0F6F[] = {
    instrux + 662,
    instrux + 1345,
    instrux + 1347,
};

static const struct itemplate * const itable_0F70[] = {
    instrux + 1327,
    instrux + 1396,
    instrux + 1397,
    instrux + 1398,
    instrux + 1399,
    instrux + 1400,
    instrux + 1401,
};

static const struct itemplate * const itable_0F71[] = {
    instrux + 809,
    instrux + 813,
    instrux + 819,
    instrux + 1404,
    instrux + 1410,
    instrux + 1415,
};

static const struct itemplate * const itable_0F72[] = {
    instrux + 805,
    instrux + 811,
    instrux + 815,
    instrux + 1406,
    instrux + 1412,
    instrux + 1417,
};

static const struct itemplate * const itable_0F73[] = {
    instrux + 807,
    instrux + 817,
    instrux + 1402,
    instrux + 1408,
    instrux + 1413,
    instrux + 1419,
};

static const struct itemplate * const itable_0F74[] = {
    instrux + 756,
    instrux + 1373,
};

static const struct itemplate * const itable_0F75[] = {
    instrux + 758,
    instrux + 1374,
};

static const struct itemplate * const itable_0F76[] = {
    instrux + 757,
    instrux + 1375,
};

static const struct itemplate * const itable_0F77[] = {
    instrux + 250,
};

static const struct itemplate * const itable_0F78[] = {
    instrux + 1534,
    instrux + 1535,
    instrux + 1579,
    instrux + 1581,
};

static const struct itemplate * const itable_0F79[] = {
    instrux + 1539,
    instrux + 1540,
    instrux + 1580,
    instrux + 1582,
};

static const struct itemplate * const itable_0F7C[] = {
    instrux + 1516,
    instrux + 1517,
};

static const struct itemplate * const itable_0F7D[] = {
    instrux + 1518,
    instrux + 1519,
};

static const struct itemplate * const itable_0F7E[] = {
    instrux + 661,
    instrux + 665,
    instrux + 1341,
    instrux + 1344,
    instrux + 1350,
    instrux + 1353,
    instrux + 1355,
};

static const struct itemplate * const itable_0F7F[] = {
    instrux + 663,
    instrux + 1346,
    instrux + 1348,
};

static const struct itemplate * const itable_0F80[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F81[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F82[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F83[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F84[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F85[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F86[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F87[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F88[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F89[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F8A[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F8B[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F8C[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F8D[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F8E[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F8F[] = {
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
};

static const struct itemplate * const itable_0F90[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F91[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F92[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F93[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F94[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F95[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F96[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F97[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F98[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F99[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F9A[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F9B[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F9C[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F9D[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F9E[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0F9F[] = {
    instrux + 1214,
    instrux + 1215,
};

static const struct itemplate * const itable_0FA0[] = {
    instrux + 843,
};

static const struct itemplate * const itable_0FA1[] = {
    instrux + 792,
};

static const struct itemplate * const itable_0FA2[] = {
    instrux + 234,
};

static const struct itemplate * const itable_0FA3[] = {
    instrux + 126,
    instrux + 127,
    instrux + 128,
    instrux + 129,
    instrux + 130,
    instrux + 131,
};

static const struct itemplate * const itable_0FA4[] = {
    instrux + 1000,
    instrux + 1001,
    instrux + 1002,
    instrux + 1003,
    instrux + 1004,
    instrux + 1005,
};

static const struct itemplate * const itable_0FA5[] = {
    instrux + 1006,
    instrux + 1007,
    instrux + 1008,
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
};

static const struct itemplate * const itable_0FA8[] = {
    instrux + 844,
};

static const struct itemplate * const itable_0FA9[] = {
    instrux + 793,
};

static const struct itemplate * const itable_0FAA[] = {
    instrux + 935,
};

static const struct itemplate * const itable_0FAB[] = {
    instrux + 153,
    instrux + 154,
    instrux + 155,
    instrux + 156,
    instrux + 157,
    instrux + 158,
};

static const struct itemplate * const itable_0FAC[] = {
    instrux + 1024,
    instrux + 1025,
    instrux + 1026,
    instrux + 1027,
    instrux + 1028,
    instrux + 1029,
};

static const struct itemplate * const itable_0FAD[] = {
    instrux + 1030,
    instrux + 1031,
    instrux + 1032,
    instrux + 1033,
    instrux + 1034,
    instrux + 1035,
};

static const struct itemplate * const itable_0FAE[] = {
    instrux + 550,
    instrux + 605,
    instrux + 986,
    instrux + 1252,
    instrux + 1282,
    instrux + 1289,
    instrux + 1290,
    instrux + 1291,
    instrux + 1292,
    instrux + 1295,
    instrux + 1296,
    instrux + 1299,
    instrux + 1300,
    instrux + 1303,
    instrux + 1304,
    instrux + 1311,
    instrux + 1334,
    instrux + 1339,
    instrux + 1340,
    instrux + 1665,
    instrux + 1666,
    instrux + 1667,
    instrux + 1668,
    instrux + 1672,
    instrux + 1673,
    instrux + 1674,
    instrux + 1675,
    instrux + 1732,
    instrux + 1733,
    instrux + 1734,
    instrux + 1736,
    instrux + 1737,
    instrux + 1745,
    instrux + 1746,
    instrux + 1747,
    instrux + 1748,
    instrux + 1749,
    instrux + 1754,
    instrux + 1757,
    instrux + 1758,
};

static const struct itemplate * const itable_0FAF[] = {
    instrux + 449,
    instrux + 450,
    instrux + 451,
    instrux + 452,
    instrux + 453,
    instrux + 454,
};

static const struct itemplate * const itable_0FB0[] = {
    instrux + 224,
    instrux + 225,
};

static const struct itemplate * const itable_0FB1[] = {
    instrux + 226,
    instrux + 227,
    instrux + 228,
    instrux + 229,
    instrux + 230,
    instrux + 231,
};

static const struct itemplate * const itable_0FB2[] = {
    instrux + 599,
    instrux + 600,
    instrux + 601,
};

static const struct itemplate * const itable_0FB3[] = {
    instrux + 144,
    instrux + 145,
    instrux + 146,
    instrux + 147,
    instrux + 148,
    instrux + 149,
};

static const struct itemplate * const itable_0FB4[] = {
    instrux + 551,
    instrux + 552,
    instrux + 553,
};

static const struct itemplate * const itable_0FB5[] = {
    instrux + 555,
    instrux + 556,
    instrux + 557,
};

static const struct itemplate * const itable_0FB6[] = {
    instrux + 677,
    instrux + 678,
    instrux + 679,
    instrux + 681,
};

static const struct itemplate * const itable_0FB7[] = {
    instrux + 680,
    instrux + 682,
};

static const struct itemplate * const itable_0FB8[] = {
    instrux + 526,
    instrux + 527,
    instrux + 528,
};

static const struct itemplate * const itable_0FB9[] = {
    instrux + 1125,
    instrux + 1126,
    instrux + 1127,
};

static const struct itemplate * const itable_0FBA[] = {
    instrux + 132,
    instrux + 133,
    instrux + 134,
    instrux + 141,
    instrux + 142,
    instrux + 143,
    instrux + 150,
    instrux + 151,
    instrux + 152,
    instrux + 159,
    instrux + 160,
    instrux + 161,
};

static const struct itemplate * const itable_0FBB[] = {
    instrux + 135,
    instrux + 136,
    instrux + 137,
    instrux + 138,
    instrux + 139,
    instrux + 140,
};

static const struct itemplate * const itable_0FBC[] = {
    instrux + 112,
    instrux + 113,
    instrux + 114,
    instrux + 115,
    instrux + 116,
    instrux + 117,
    instrux + 1693,
    instrux + 1694,
    instrux + 1695,
};

static const struct itemplate * const itable_0FBD[] = {
    instrux + 118,
    instrux + 119,
    instrux + 120,
    instrux + 121,
    instrux + 122,
    instrux + 123,
    instrux + 1585,
    instrux + 1586,
    instrux + 1587,
};

static const struct itemplate * const itable_0FBE[] = {
    instrux + 670,
    instrux + 671,
    instrux + 672,
    instrux + 674,
};

static const struct itemplate * const itable_0FBF[] = {
    instrux + 673,
    instrux + 675,
};

static const struct itemplate * const itable_0FC0[] = {
    instrux + 1138,
    instrux + 1139,
};

static const struct itemplate * const itable_0FC1[] = {
    instrux + 1140,
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
};

static const struct itemplate * const itable_0FC2[] = {
    instrux + 1220,
    instrux + 1221,
    instrux + 1222,
    instrux + 1223,
    instrux + 1224,
    instrux + 1225,
    instrux + 1226,
    instrux + 1227,
    instrux + 1228,
    instrux + 1229,
    instrux + 1230,
    instrux + 1231,
    instrux + 1232,
    instrux + 1233,
    instrux + 1234,
    instrux + 1235,
    instrux + 1236,
    instrux + 1237,
    instrux + 1442,
    instrux + 1443,
    instrux + 1444,
    instrux + 1445,
    instrux + 1446,
    instrux + 1447,
    instrux + 1448,
    instrux + 1449,
    instrux + 1450,
    instrux + 1451,
    instrux + 1452,
    instrux + 1453,
    instrux + 1454,
    instrux + 1455,
    instrux + 1456,
    instrux + 1457,
    instrux + 1458,
    instrux + 1459,
};

static const struct itemplate * const itable_0FC3[] = {
    instrux + 1336,
    instrux + 1337,
};

static const struct itemplate * const itable_0FC4[] = {
    instrux + 1317,
    instrux + 1318,
    instrux + 1319,
    instrux + 1380,
    instrux + 1381,
    instrux + 1382,
};

static const struct itemplate * const itable_0FC5[] = {
    instrux + 1316,
    instrux + 1379,
};

static const struct itemplate * const itable_0FC6[] = {
    instrux + 1279,
    instrux + 1505,
};

static const struct itemplate * const itable_0FC7[] = {
    instrux + 232,
    instrux + 233,
    instrux + 1297,
    instrux + 1298,
    instrux + 1301,
    instrux + 1302,
    instrux + 1305,
    instrux + 1306,
    instrux + 1527,
    instrux + 1532,
    instrux + 1533,
    instrux + 1542,
    instrux + 1669,
    instrux + 1670,
    instrux + 1671,
    instrux + 1680,
    instrux + 1681,
    instrux + 1682,
    instrux + 1729,
    instrux + 1730,
    instrux + 1731,
};

static const struct itemplate * const itable_0FC8[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FC9[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FCA[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FCB[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FCC[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FCD[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FCE[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FCF[] = {
    instrux + 124,
    instrux + 125,
};

static const struct itemplate * const itable_0FD0[] = {
    instrux + 1514,
    instrux + 1515,
};

static const struct itemplate * const itable_0FD1[] = {
    instrux + 818,
    instrux + 1414,
};

static const struct itemplate * const itable_0FD2[] = {
    instrux + 814,
    instrux + 1416,
};

static const struct itemplate * const itable_0FD3[] = {
    instrux + 816,
    instrux + 1418,
};

static const struct itemplate * const itable_0FD4[] = {
    instrux + 1363,
    instrux + 1364,
};

static const struct itemplate * const itable_0FD5[] = {
    instrux + 782,
    instrux + 1391,
};

static const struct itemplate * const itable_0FD6[] = {
    instrux + 1349,
    instrux + 1351,
    instrux + 1352,
    instrux + 1356,
};

static const struct itemplate * const itable_0FD7[] = {
    instrux + 1324,
    instrux + 1388,
};

static const struct itemplate * const itable_0FD8[] = {
    instrux + 824,
    instrux + 1427,
};

static const struct itemplate * const itable_0FD9[] = {
    instrux + 825,
    instrux + 1428,
};

static const struct itemplate * const itable_0FDA[] = {
    instrux + 1323,
    instrux + 1387,
};

static const struct itemplate * const itable_0FDB[] = {
    instrux + 752,
    instrux + 1369,
};

static const struct itemplate * const itable_0FDC[] = {
    instrux + 749,
    instrux + 1367,
};

static const struct itemplate * const itable_0FDD[] = {
    instrux + 750,
    instrux + 1368,
};

static const struct itemplate * const itable_0FDE[] = {
    instrux + 1321,
    instrux + 1385,
};

static const struct itemplate * const itable_0FDF[] = {
    instrux + 753,
    instrux + 1370,
};

static const struct itemplate * const itable_0FE0[] = {
    instrux + 1314,
    instrux + 1371,
};

static const struct itemplate * const itable_0FE1[] = {
    instrux + 812,
    instrux + 1409,
};

static const struct itemplate * const itable_0FE2[] = {
    instrux + 810,
    instrux + 1411,
};

static const struct itemplate * const itable_0FE3[] = {
    instrux + 1315,
    instrux + 1372,
};

static const struct itemplate * const itable_0FE4[] = {
    instrux + 1325,
    instrux + 1389,
};

static const struct itemplate * const itable_0FE5[] = {
    instrux + 781,
    instrux + 1390,
};

static const struct itemplate * const itable_0FE6[] = {
    instrux + 1461,
    instrux + 1463,
    instrux + 1478,
};

static const struct itemplate * const itable_0FE7[] = {
    instrux + 1313,
    instrux + 1335,
};

static const struct itemplate * const itable_0FE8[] = {
    instrux + 822,
    instrux + 1425,
};

static const struct itemplate * const itable_0FE9[] = {
    instrux + 823,
    instrux + 1426,
};

static const struct itemplate * const itable_0FEA[] = {
    instrux + 1322,
    instrux + 1386,
};

static const struct itemplate * const itable_0FEB[] = {
    instrux + 801,
    instrux + 1394,
};

static const struct itemplate * const itable_0FEC[] = {
    instrux + 747,
    instrux + 1365,
};

static const struct itemplate * const itable_0FED[] = {
    instrux + 748,
    instrux + 1366,
};

static const struct itemplate * const itable_0FEE[] = {
    instrux + 1320,
    instrux + 1384,
};

static const struct itemplate * const itable_0FEF[] = {
    instrux + 858,
    instrux + 1437,
};

static const struct itemplate * const itable_0FF0[] = {
    instrux + 1520,
};

static const struct itemplate * const itable_0FF1[] = {
    instrux + 808,
    instrux + 1403,
};

static const struct itemplate * const itable_0FF2[] = {
    instrux + 804,
    instrux + 1405,
};

static const struct itemplate * const itable_0FF3[] = {
    instrux + 806,
    instrux + 1407,
};

static const struct itemplate * const itable_0FF4[] = {
    instrux + 1392,
    instrux + 1393,
};

static const struct itemplate * const itable_0FF5[] = {
    instrux + 779,
    instrux + 1383,
};

static const struct itemplate * const itable_0FF6[] = {
    instrux + 1326,
    instrux + 1395,
};

static const struct itemplate * const itable_0FF7[] = {
    instrux + 1312,
    instrux + 1333,
};

static const struct itemplate * const itable_0FF8[] = {
    instrux + 820,
    instrux + 1420,
};

static const struct itemplate * const itable_0FF9[] = {
    instrux + 826,
    instrux + 1421,
};

static const struct itemplate * const itable_0FFA[] = {
    instrux + 821,
    instrux + 1422,
};

static const struct itemplate * const itable_0FFB[] = {
    instrux + 1423,
    instrux + 1424,
};

static const struct itemplate * const itable_0FFC[] = {
    instrux + 745,
    instrux + 1360,
};

static const struct itemplate * const itable_0FFD[] = {
    instrux + 751,
    instrux + 1361,
};

static const struct itemplate * const itable_0FFE[] = {
    instrux + 746,
    instrux + 1362,
};

static const struct itemplate * const itable_0FFF[] = {
    instrux + 1121,
    instrux + 1122,
    instrux + 1123,
    instrux + 1124,
};

static const struct itemplate * const itable_10[] = {
    instrux + 14,
    instrux + 15,
};

static const struct itemplate * const itable_11[] = {
    instrux + 16,
    instrux + 17,
    instrux + 18,
    instrux + 19,
    instrux + 20,
    instrux + 21,
};

static const struct itemplate * const itable_12[] = {
    instrux + 22,
    instrux + 23,
};

static const struct itemplate * const itable_13[] = {
    instrux + 24,
    instrux + 25,
    instrux + 26,
    instrux + 27,
    instrux + 28,
    instrux + 29,
};

static const struct itemplate * const itable_14[] = {
    instrux + 33,
};

static const struct itemplate * const itable_15[] = {
    instrux + 34,
    instrux + 35,
    instrux + 36,
};

static const struct itemplate * const itable_16[] = {
    instrux + 841,
};

static const struct itemplate * const itable_17[] = {
    instrux + 790,
};

static const struct itemplate * const itable_18[] = {
    instrux + 950,
    instrux + 951,
};

static const struct itemplate * const itable_19[] = {
    instrux + 952,
    instrux + 953,
    instrux + 954,
    instrux + 955,
    instrux + 956,
    instrux + 957,
};

static const struct itemplate * const itable_1A[] = {
    instrux + 958,
    instrux + 959,
};

static const struct itemplate * const itable_1B[] = {
    instrux + 960,
    instrux + 961,
    instrux + 962,
    instrux + 963,
    instrux + 964,
    instrux + 965,
};

static const struct itemplate * const itable_1C[] = {
    instrux + 969,
};

static const struct itemplate * const itable_1D[] = {
    instrux + 970,
    instrux + 971,
    instrux + 972,
};

static const struct itemplate * const itable_1E[] = {
    instrux + 842,
};

static const struct itemplate * const itable_1F[] = {
    instrux + 791,
};

static const struct itemplate * const itable_20[] = {
    instrux + 76,
    instrux + 77,
};

static const struct itemplate * const itable_21[] = {
    instrux + 78,
    instrux + 79,
    instrux + 80,
    instrux + 81,
    instrux + 82,
    instrux + 83,
};

static const struct itemplate * const itable_22[] = {
    instrux + 84,
    instrux + 85,
};

static const struct itemplate * const itable_23[] = {
    instrux + 86,
    instrux + 87,
    instrux + 88,
    instrux + 89,
    instrux + 90,
    instrux + 91,
};

static const struct itemplate * const itable_24[] = {
    instrux + 95,
};

static const struct itemplate * const itable_25[] = {
    instrux + 96,
    instrux + 97,
    instrux + 98,
};

static const struct itemplate * const itable_27[] = {
    instrux + 238,
};

static const struct itemplate * const itable_28[] = {
    instrux + 1061,
    instrux + 1062,
};

static const struct itemplate * const itable_29[] = {
    instrux + 1063,
    instrux + 1064,
    instrux + 1065,
    instrux + 1066,
    instrux + 1067,
    instrux + 1068,
};

static const struct itemplate * const itable_2A[] = {
    instrux + 1069,
    instrux + 1070,
};

static const struct itemplate * const itable_2B[] = {
    instrux + 1071,
    instrux + 1072,
    instrux + 1073,
    instrux + 1074,
    instrux + 1075,
    instrux + 1076,
};

static const struct itemplate * const itable_2C[] = {
    instrux + 1080,
};

static const struct itemplate * const itable_2D[] = {
    instrux + 1081,
    instrux + 1082,
    instrux + 1083,
};

static const struct itemplate * const itable_2F[] = {
    instrux + 239,
};

static const struct itemplate * const itable_30[] = {
    instrux + 1171,
    instrux + 1172,
};

static const struct itemplate * const itable_31[] = {
    instrux + 1173,
    instrux + 1174,
    instrux + 1175,
    instrux + 1176,
    instrux + 1177,
    instrux + 1178,
};

static const struct itemplate * const itable_32[] = {
    instrux + 1179,
    instrux + 1180,
};

static const struct itemplate * const itable_33[] = {
    instrux + 1181,
    instrux + 1182,
    instrux + 1183,
    instrux + 1184,
    instrux + 1185,
    instrux + 1186,
};

static const struct itemplate * const itable_34[] = {
    instrux + 1190,
};

static const struct itemplate * const itable_35[] = {
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
};

static const struct itemplate * const itable_37[] = {
    instrux + 8,
};

static const struct itemplate * const itable_38[] = {
    instrux + 188,
    instrux + 189,
};

static const struct itemplate * const itable_39[] = {
    instrux + 190,
    instrux + 191,
    instrux + 192,
    instrux + 193,
    instrux + 194,
    instrux + 195,
};

static const struct itemplate * const itable_3A[] = {
    instrux + 196,
    instrux + 197,
};

static const struct itemplate * const itable_3B[] = {
    instrux + 198,
    instrux + 199,
    instrux + 200,
    instrux + 201,
    instrux + 202,
    instrux + 203,
};

static const struct itemplate * const itable_3C[] = {
    instrux + 207,
};

static const struct itemplate * const itable_3D[] = {
    instrux + 208,
    instrux + 209,
    instrux + 210,
};

static const struct itemplate * const itable_3F[] = {
    instrux + 13,
};

static const struct itemplate * const itable_40[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_41[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_42[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_43[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_44[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_45[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_46[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_47[] = {
    instrux + 479,
    instrux + 480,
};

static const struct itemplate * const itable_48[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_49[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_4A[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_4B[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_4C[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_4D[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_4E[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_4F[] = {
    instrux + 240,
    instrux + 241,
};

static const struct itemplate * const itable_50[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_51[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_52[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_53[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_54[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_55[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_56[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_57[] = {
    instrux + 833,
    instrux + 834,
    instrux + 835,
};

static const struct itemplate * const itable_58[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_59[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_5A[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_5B[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_5C[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_5D[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_5E[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_5F[] = {
    instrux + 783,
    instrux + 784,
    instrux + 785,
};

static const struct itemplate * const itable_60[] = {
    instrux + 851,
    instrux + 852,
    instrux + 853,
};

static const struct itemplate * const itable_61[] = {
    instrux + 794,
    instrux + 795,
    instrux + 796,
};

static const struct itemplate * const itable_62[] = {
    instrux + 110,
    instrux + 111,
};

static const struct itemplate * const itable_63[] = {
    instrux + 108,
    instrux + 109,
    instrux + 676,
};

static const struct itemplate * const itable_68[] = {
    instrux + 846,
    instrux + 847,
    instrux + 848,
    instrux + 849,
    instrux + 850,
};

static const struct itemplate * const itable_69[] = {
    instrux + 456,
    instrux + 458,
    instrux + 460,
    instrux + 462,
    instrux + 464,
    instrux + 466,
    instrux + 468,
    instrux + 470,
    instrux + 472,
};

static const struct itemplate * const itable_6A[] = {
    instrux + 845,
};

static const struct itemplate * const itable_6B[] = {
    instrux + 455,
    instrux + 457,
    instrux + 459,
    instrux + 461,
    instrux + 463,
    instrux + 465,
    instrux + 467,
    instrux + 469,
    instrux + 471,
};

static const struct itemplate * const itable_6C[] = {
    instrux + 485,
};

static const struct itemplate * const itable_6D[] = {
    instrux + 486,
    instrux + 487,
};

static const struct itemplate * const itable_6E[] = {
    instrux + 739,
};

static const struct itemplate * const itable_6F[] = {
    instrux + 740,
    instrux + 741,
};

static const struct itemplate * const itable_70[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_71[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_72[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_73[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_74[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_75[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_76[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_77[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_78[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_79[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_7A[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_7B[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_7C[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_7D[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_7E[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_7F[] = {
    instrux + 1213,
};

static const struct itemplate * const itable_80[] = {
    instrux + 37,
    instrux + 67,
    instrux + 72,
    instrux + 99,
    instrux + 104,
    instrux + 211,
    instrux + 216,
    instrux + 724,
    instrux + 729,
    instrux + 973,
    instrux + 978,
    instrux + 1084,
    instrux + 1089,
    instrux + 1194,
    instrux + 1199,
};

static const struct itemplate * const itable_81[] = {
    instrux + 39,
    instrux + 40,
    instrux + 41,
    instrux + 42,
    instrux + 43,
    instrux + 69,
    instrux + 70,
    instrux + 71,
    instrux + 74,
    instrux + 75,
    instrux + 101,
    instrux + 102,
    instrux + 103,
    instrux + 106,
    instrux + 107,
    instrux + 213,
    instrux + 214,
    instrux + 215,
    instrux + 218,
    instrux + 219,
    instrux + 726,
    instrux + 727,
    instrux + 728,
    instrux + 731,
    instrux + 732,
    instrux + 975,
    instrux + 976,
    instrux + 977,
    instrux + 980,
    instrux + 981,
    instrux + 1086,
    instrux + 1087,
    instrux + 1088,
    instrux + 1091,
    instrux + 1092,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
    instrux + 1201,
    instrux + 1202,
};

static const struct itemplate * const itable_82[] = {
    instrux + 38,
    instrux + 68,
    instrux + 73,
    instrux + 100,
    instrux + 105,
    instrux + 212,
    instrux + 217,
    instrux + 725,
    instrux + 730,
    instrux + 974,
    instrux + 979,
    instrux + 1085,
    instrux + 1090,
    instrux + 1195,
    instrux + 1200,
};

static const struct itemplate * const itable_83[] = {
    instrux + 30,
    instrux + 31,
    instrux + 32,
    instrux + 60,
    instrux + 61,
    instrux + 62,
    instrux + 92,
    instrux + 93,
    instrux + 94,
    instrux + 204,
    instrux + 205,
    instrux + 206,
    instrux + 717,
    instrux + 718,
    instrux + 719,
    instrux + 966,
    instrux + 967,
    instrux + 968,
    instrux + 1077,
    instrux + 1078,
    instrux + 1079,
    instrux + 1187,
    instrux + 1188,
    instrux + 1189,
};

static const struct itemplate * const itable_84[] = {
    instrux + 1098,
    instrux + 1099,
    instrux + 1106,
};

static const struct itemplate * const itable_85[] = {
    instrux + 1100,
    instrux + 1101,
    instrux + 1102,
    instrux + 1103,
    instrux + 1104,
    instrux + 1105,
    instrux + 1107,
    instrux + 1108,
    instrux + 1109,
};

static const struct itemplate * const itable_86[] = {
    instrux + 1153,
    instrux + 1154,
    instrux + 1161,
    instrux + 1162,
};

static const struct itemplate * const itable_87[] = {
    instrux + 1155,
    instrux + 1156,
    instrux + 1157,
    instrux + 1158,
    instrux + 1159,
    instrux + 1160,
    instrux + 1163,
    instrux + 1164,
    instrux + 1165,
    instrux + 1166,
    instrux + 1167,
    instrux + 1168,
};

static const struct itemplate * const itable_88[] = {
    instrux + 632,
    instrux + 633,
};

static const struct itemplate * const itable_89[] = {
    instrux + 634,
    instrux + 635,
    instrux + 636,
    instrux + 637,
    instrux + 638,
    instrux + 639,
};

static const struct itemplate * const itable_8A[] = {
    instrux + 640,
    instrux + 641,
};

static const struct itemplate * const itable_8B[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
    instrux + 645,
    instrux + 646,
    instrux + 647,
};

static const struct itemplate * const itable_8C[] = {
    instrux + 608,
    instrux + 609,
    instrux + 610,
    instrux + 611,
};

static const struct itemplate * const itable_8D[] = {
    instrux + 544,
    instrux + 545,
    instrux + 546,
};

static const struct itemplate * const itable_8E[] = {
    instrux + 612,
    instrux + 613,
    instrux + 614,
    instrux + 615,
};

static const struct itemplate * const itable_8F[] = {
    instrux + 786,
    instrux + 787,
    instrux + 788,
};

static const struct itemplate * const itable_90[] = {
    instrux + 693,
    instrux + 754,
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
    instrux + 1152,
};

static const struct itemplate * const itable_91[] = {
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
};

static const struct itemplate * const itable_92[] = {
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
};

static const struct itemplate * const itable_93[] = {
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
};

static const struct itemplate * const itable_94[] = {
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
};

static const struct itemplate * const itable_95[] = {
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
};

static const struct itemplate * const itable_96[] = {
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
};

static const struct itemplate * const itable_97[] = {
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
};

static const struct itemplate * const itable_98[] = {
    instrux + 180,
    instrux + 182,
    instrux + 237,
};

static const struct itemplate * const itable_99[] = {
    instrux + 181,
    instrux + 235,
    instrux + 236,
};

static const struct itemplate * const itable_9A[] = {
    instrux + 166,
    instrux + 167,
    instrux + 168,
    instrux + 169,
    instrux + 170,
};

static const struct itemplate * const itable_9C[] = {
    instrux + 854,
    instrux + 855,
    instrux + 856,
    instrux + 857,
};

static const struct itemplate * const itable_9D[] = {
    instrux + 797,
    instrux + 798,
    instrux + 799,
    instrux + 800,
};

static const struct itemplate * const itable_9E[] = {
    instrux + 936,
};

static const struct itemplate * const itable_9F[] = {
    instrux + 531,
};

static const struct itemplate * const itable_A0[] = {
    instrux + 616,
};

static const struct itemplate * const itable_A1[] = {
    instrux + 617,
    instrux + 618,
    instrux + 619,
};

static const struct itemplate * const itable_A2[] = {
    instrux + 620,
};

static const struct itemplate * const itable_A3[] = {
    instrux + 621,
    instrux + 622,
    instrux + 623,
};

static const struct itemplate * const itable_A4[] = {
    instrux + 666,
};

static const struct itemplate * const itable_A5[] = {
    instrux + 667,
    instrux + 668,
    instrux + 669,
};

static const struct itemplate * const itable_A6[] = {
    instrux + 220,
};

static const struct itemplate * const itable_A7[] = {
    instrux + 221,
    instrux + 222,
    instrux + 223,
};

static const struct itemplate * const itable_A8[] = {
    instrux + 1110,
};

static const struct itemplate * const itable_A9[] = {
    instrux + 1111,
    instrux + 1112,
    instrux + 1113,
};

static const struct itemplate * const itable_AA[] = {
    instrux + 1052,
};

static const struct itemplate * const itable_AB[] = {
    instrux + 1053,
    instrux + 1054,
    instrux + 1055,
};

static const struct itemplate * const itable_AC[] = {
    instrux + 565,
};

static const struct itemplate * const itable_AD[] = {
    instrux + 566,
    instrux + 567,
    instrux + 568,
};

static const struct itemplate * const itable_AE[] = {
    instrux + 982,
};

static const struct itemplate * const itable_AF[] = {
    instrux + 983,
    instrux + 984,
    instrux + 985,
};

static const struct itemplate * const itable_B0[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B1[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B2[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B3[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B4[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B5[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B6[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B7[] = {
    instrux + 648,
};

static const struct itemplate * const itable_B8[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_B9[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_BA[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_BB[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_BC[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_BD[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_BE[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_BF[] = {
    instrux + 649,
    instrux + 650,
    instrux + 651,
};

static const struct itemplate * const itable_C0[] = {
    instrux + 861,
    instrux + 873,
    instrux + 913,
    instrux + 925,
    instrux + 940,
    instrux + 990,
    instrux + 1014,
};

static const struct itemplate * const itable_C1[] = {
    instrux + 864,
    instrux + 867,
    instrux + 870,
    instrux + 876,
    instrux + 879,
    instrux + 882,
    instrux + 916,
    instrux + 919,
    instrux + 922,
    instrux + 928,
    instrux + 931,
    instrux + 934,
    instrux + 943,
    instrux + 946,
    instrux + 949,
    instrux + 993,
    instrux + 996,
    instrux + 999,
    instrux + 1017,
    instrux + 1020,
    instrux + 1023,
};

static const struct itemplate * const itable_C2[] = {
    instrux + 888,
    instrux + 892,
    instrux + 894,
    instrux + 898,
    instrux + 900,
    instrux + 904,
    instrux + 906,
    instrux + 910,
};

static const struct itemplate * const itable_C3[] = {
    instrux + 887,
    instrux + 891,
    instrux + 893,
    instrux + 897,
    instrux + 899,
    instrux + 903,
    instrux + 905,
    instrux + 909,
};

static const struct itemplate * const itable_C4[] = {
    instrux + 548,
    instrux + 549,
};

static const struct itemplate * const itable_C5[] = {
    instrux + 542,
    instrux + 543,
};

static const struct itemplate * const itable_C6[] = {
    instrux + 652,
    instrux + 657,
    instrux + 1685,
    instrux + 1686,
};

static const struct itemplate * const itable_C7[] = {
    instrux + 653,
    instrux + 654,
    instrux + 655,
    instrux + 656,
    instrux + 658,
    instrux + 659,
    instrux + 1687,
    instrux + 1688,
    instrux + 1689,
    instrux + 1690,
};

static const struct itemplate * const itable_C8[] = {
    instrux + 251,
};

static const struct itemplate * const itable_C9[] = {
    instrux + 547,
};

static const struct itemplate * const itable_CA[] = {
    instrux + 890,
    instrux + 896,
    instrux + 902,
    instrux + 908,
};

static const struct itemplate * const itable_CB[] = {
    instrux + 889,
    instrux + 895,
    instrux + 901,
    instrux + 907,
};

static const struct itemplate * const itable_CC[] = {
    instrux + 490,
};

static const struct itemplate * const itable_CD[] = {
    instrux + 488,
};

static const struct itemplate * const itable_CE[] = {
    instrux + 491,
};

static const struct itemplate * const itable_CF[] = {
    instrux + 500,
    instrux + 501,
    instrux + 502,
    instrux + 503,
};

static const struct itemplate * const itable_D0[] = {
    instrux + 859,
    instrux + 871,
    instrux + 911,
    instrux + 923,
    instrux + 938,
    instrux + 988,
    instrux + 1012,
};

static const struct itemplate * const itable_D1[] = {
    instrux + 862,
    instrux + 865,
    instrux + 868,
    instrux + 874,
    instrux + 877,
    instrux + 880,
    instrux + 914,
    instrux + 917,
    instrux + 920,
    instrux + 926,
    instrux + 929,
    instrux + 932,
    instrux + 941,
    instrux + 944,
    instrux + 947,
    instrux + 991,
    instrux + 994,
    instrux + 997,
    instrux + 1015,
    instrux + 1018,
    instrux + 1021,
};

static const struct itemplate * const itable_D2[] = {
    instrux + 860,
    instrux + 872,
    instrux + 912,
    instrux + 924,
    instrux + 939,
    instrux + 989,
    instrux + 1013,
};

static const struct itemplate * const itable_D3[] = {
    instrux + 863,
    instrux + 866,
    instrux + 869,
    instrux + 875,
    instrux + 878,
    instrux + 881,
    instrux + 915,
    instrux + 918,
    instrux + 921,
    instrux + 927,
    instrux + 930,
    instrux + 933,
    instrux + 942,
    instrux + 945,
    instrux + 948,
    instrux + 992,
    instrux + 995,
    instrux + 998,
    instrux + 1016,
    instrux + 1019,
    instrux + 1022,
};

static const struct itemplate * const itable_D4[] = {
    instrux + 11,
    instrux + 12,
};

static const struct itemplate * const itable_D5[] = {
    instrux + 9,
    instrux + 10,
};

static const struct itemplate * const itable_D6[] = {
    instrux + 937,
};

static const struct itemplate * const itable_D7[] = {
    instrux + 1169,
    instrux + 1170,
};

static const struct itemplate * const itable_D8[] = {
    instrux + 256,
    instrux + 259,
    instrux + 261,
    instrux + 286,
    instrux + 288,
    instrux + 289,
    instrux + 294,
    instrux + 296,
    instrux + 297,
    instrux + 302,
    instrux + 305,
    instrux + 307,
    instrux + 310,
    instrux + 314,
    instrux + 315,
    instrux + 366,
    instrux + 370,
    instrux + 371,
    instrux + 407,
    instrux + 411,
    instrux + 412,
    instrux + 415,
    instrux + 419,
    instrux + 420,
};

static const struct itemplate * const itable_D9[] = {
    instrux + 254,
    instrux + 255,
    instrux + 268,
    instrux + 299,
    instrux + 300,
    instrux + 339,
    instrux + 353,
    instrux + 356,
    instrux + 357,
    instrux + 358,
    instrux + 359,
    instrux + 360,
    instrux + 361,
    instrux + 362,
    instrux + 363,
    instrux + 364,
    instrux + 365,
    instrux + 378,
    instrux + 380,
    instrux + 381,
    instrux + 384,
    instrux + 385,
    instrux + 386,
    instrux + 387,
    instrux + 388,
    instrux + 391,
    instrux + 393,
    instrux + 394,
    instrux + 395,
    instrux + 396,
    instrux + 399,
    instrux + 400,
    instrux + 401,
    instrux + 423,
    instrux + 433,
    instrux + 434,
    instrux + 435,
    instrux + 436,
    instrux + 437,
    instrux + 438,
    instrux + 439,
};

static const struct itemplate * const itable_DA[] = {
    instrux + 270,
    instrux + 271,
    instrux + 272,
    instrux + 273,
    instrux + 274,
    instrux + 275,
    instrux + 284,
    instrux + 285,
    instrux + 324,
    instrux + 326,
    instrux + 328,
    instrux + 330,
    instrux + 332,
    instrux + 337,
    instrux + 349,
    instrux + 351,
    instrux + 432,
};

static const struct itemplate * const itable_DB[] = {
    instrux + 269,
    instrux + 276,
    instrux + 277,
    instrux + 278,
    instrux + 279,
    instrux + 280,
    instrux + 281,
    instrux + 282,
    instrux + 283,
    instrux + 290,
    instrux + 291,
    instrux + 301,
    instrux + 319,
    instrux + 334,
    instrux + 340,
    instrux + 341,
    instrux + 343,
    instrux + 347,
    instrux + 355,
    instrux + 374,
    instrux + 375,
    instrux + 376,
    instrux + 377,
    instrux + 392,
    instrux + 403,
    instrux + 426,
    instrux + 427,
};

static const struct itemplate * const itable_DC[] = {
    instrux + 257,
    instrux + 258,
    instrux + 260,
    instrux + 287,
    instrux + 295,
    instrux + 303,
    instrux + 304,
    instrux + 306,
    instrux + 311,
    instrux + 312,
    instrux + 313,
    instrux + 367,
    instrux + 368,
    instrux + 369,
    instrux + 408,
    instrux + 409,
    instrux + 410,
    instrux + 416,
    instrux + 417,
    instrux + 418,
};

static const struct itemplate * const itable_DD[] = {
    instrux + 320,
    instrux + 321,
    instrux + 348,
    instrux + 354,
    instrux + 379,
    instrux + 382,
    instrux + 389,
    instrux + 390,
    instrux + 397,
    instrux + 398,
    instrux + 402,
    instrux + 404,
    instrux + 405,
    instrux + 424,
    instrux + 425,
    instrux + 430,
    instrux + 431,
};

static const struct itemplate * const itable_DE[] = {
    instrux + 262,
    instrux + 263,
    instrux + 298,
    instrux + 308,
    instrux + 309,
    instrux + 316,
    instrux + 317,
    instrux + 325,
    instrux + 327,
    instrux + 329,
    instrux + 331,
    instrux + 333,
    instrux + 338,
    instrux + 350,
    instrux + 352,
    instrux + 372,
    instrux + 373,
    instrux + 413,
    instrux + 414,
    instrux + 421,
    instrux + 422,
};

static const struct itemplate * const itable_DF[] = {
    instrux + 264,
    instrux + 265,
    instrux + 266,
    instrux + 267,
    instrux + 292,
    instrux + 293,
    instrux + 322,
    instrux + 323,
    instrux + 335,
    instrux + 336,
    instrux + 342,
    instrux + 344,
    instrux + 345,
    instrux + 346,
    instrux + 383,
    instrux + 406,
    instrux + 428,
    instrux + 429,
};

static const struct itemplate * const itable_E0[] = {
    instrux + 577,
    instrux + 578,
    instrux + 579,
    instrux + 580,
    instrux + 581,
    instrux + 582,
    instrux + 583,
    instrux + 584,
};

static const struct itemplate * const itable_E1[] = {
    instrux + 573,
    instrux + 574,
    instrux + 575,
    instrux + 576,
    instrux + 585,
    instrux + 586,
    instrux + 587,
    instrux + 588,
};

static const struct itemplate * const itable_E2[] = {
    instrux + 569,
    instrux + 570,
    instrux + 571,
    instrux + 572,
};

static const struct itemplate * const itable_E3[] = {
    instrux + 504,
    instrux + 505,
    instrux + 506,
};

static const struct itemplate * const itable_E4[] = {
    instrux + 473,
};

static const struct itemplate * const itable_E5[] = {
    instrux + 474,
    instrux + 475,
};

static const struct itemplate * const itable_E6[] = {
    instrux + 733,
};

static const struct itemplate * const itable_E7[] = {
    instrux + 734,
    instrux + 735,
};

static const struct itemplate * const itable_E8[] = {
    instrux + 162,
    instrux + 163,
    instrux + 164,
    instrux + 165,
};

static const struct itemplate * const itable_E9[] = {
    instrux + 508,
    instrux + 509,
    instrux + 510,
    instrux + 511,
};

static const struct itemplate * const itable_EA[] = {
    instrux + 512,
    instrux + 513,
    instrux + 514,
    instrux + 515,
    instrux + 516,
};

static const struct itemplate * const itable_EB[] = {
    instrux + 507,
};

static const struct itemplate * const itable_EC[] = {
    instrux + 476,
};

static const struct itemplate * const itable_ED[] = {
    instrux + 477,
    instrux + 478,
};

static const struct itemplate * const itable_EE[] = {
    instrux + 736,
};

static const struct itemplate * const itable_EF[] = {
    instrux + 737,
    instrux + 738,
};

static const struct itemplate * const itable_F1[] = {
    instrux + 489,
    instrux + 1043,
};

static const struct itemplate * const itable_F4[] = {
    instrux + 440,
};

static const struct itemplate * const itable_F5[] = {
    instrux + 187,
};

static const struct itemplate * const itable_F6[] = {
    instrux + 246,
    instrux + 441,
    instrux + 445,
    instrux + 683,
    instrux + 689,
    instrux + 697,
    instrux + 1114,
    instrux + 1118,
};

static const struct itemplate * const itable_F7[] = {
    instrux + 247,
    instrux + 248,
    instrux + 249,
    instrux + 442,
    instrux + 443,
    instrux + 444,
    instrux + 446,
    instrux + 447,
    instrux + 448,
    instrux + 684,
    instrux + 685,
    instrux + 686,
    instrux + 690,
    instrux + 691,
    instrux + 692,
    instrux + 698,
    instrux + 699,
    instrux + 700,
    instrux + 1115,
    instrux + 1116,
    instrux + 1117,
    instrux + 1119,
    instrux + 1120,
};

static const struct itemplate * const itable_F8[] = {
    instrux + 183,
};

static const struct itemplate * const itable_F9[] = {
    instrux + 1049,
};

static const struct itemplate * const itable_FA[] = {
    instrux + 185,
};

static const struct itemplate * const itable_FB[] = {
    instrux + 1051,
};

static const struct itemplate * const itable_FC[] = {
    instrux + 184,
};

static const struct itemplate * const itable_FD[] = {
    instrux + 1050,
};

static const struct itemplate * const itable_FE[] = {
    instrux + 242,
    instrux + 481,
};

static const struct itemplate * const itable_FF[] = {
    instrux + 171,
    instrux + 172,
    instrux + 173,
    instrux + 174,
    instrux + 175,
    instrux + 176,
    instrux + 177,
    instrux + 178,
    instrux + 179,
    instrux + 243,
    instrux + 244,
    instrux + 245,
    instrux + 482,
    instrux + 483,
    instrux + 484,
    instrux + 517,
    instrux + 518,
    instrux + 519,
    instrux + 520,
    instrux + 521,
    instrux + 522,
    instrux + 523,
    instrux + 524,
    instrux + 525,
    instrux + 836,
    instrux + 837,
    instrux + 838,
};

static const struct disasm_index itable_0F38[256] = {
    /* 0x00 */ { itable_0F3800, 2 },
    /* 0x01 */ { itable_0F3801, 2 },
    /* 0x02 */ { itable_0F3802, 2 },
    /* 0x03 */ { itable_0F3803, 2 },
    /* 0x04 */ { itable_0F3804, 2 },
    /* 0x05 */ { itable_0F3805, 2 },
    /* 0x06 */ { itable_0F3806, 2 },
    /* 0x07 */ { itable_0F3807, 2 },
    /* 0x08 */ { itable_0F3808, 2 },
    /* 0x09 */ { itable_0F3809, 2 },
    /* 0x0a */ { itable_0F380A, 2 },
    /* 0x0b */ { itable_0F380B, 2 },
    /* 0x0c */ { NULL, 0 },
    /* 0x0d */ { NULL, 0 },
    /* 0x0e */ { NULL, 0 },
    /* 0x0f */ { NULL, 0 },
    /* 0x10 */ { itable_0F3810, 2 },
    /* 0x11 */ { NULL, 0 },
    /* 0x12 */ { NULL, 0 },
    /* 0x13 */ { NULL, 0 },
    /* 0x14 */ { itable_0F3814, 2 },
    /* 0x15 */ { itable_0F3815, 2 },
    /* 0x16 */ { NULL, 0 },
    /* 0x17 */ { itable_0F3817, 1 },
    /* 0x18 */ { NULL, 0 },
    /* 0x19 */ { NULL, 0 },
    /* 0x1a */ { NULL, 0 },
    /* 0x1b */ { NULL, 0 },
    /* 0x1c */ { itable_0F381C, 2 },
    /* 0x1d */ { itable_0F381D, 2 },
    /* 0x1e */ { itable_0F381E, 2 },
    /* 0x1f */ { NULL, 0 },
    /* 0x20 */ { itable_0F3820, 1 },
    /* 0x21 */ { itable_0F3821, 1 },
    /* 0x22 */ { itable_0F3822, 1 },
    /* 0x23 */ { itable_0F3823, 1 },
    /* 0x24 */ { itable_0F3824, 1 },
    /* 0x25 */ { itable_0F3825, 1 },
    /* 0x26 */ { NULL, 0 },
    /* 0x27 */ { NULL, 0 },
    /* 0x28 */ { itable_0F3828, 1 },
    /* 0x29 */ { itable_0F3829, 1 },
    /* 0x2a */ { itable_0F382A, 1 },
    /* 0x2b */ { itable_0F382B, 1 },
    /* 0x2c */ { NULL, 0 },
    /* 0x2d */ { NULL, 0 },
    /* 0x2e */ { NULL, 0 },
    /* 0x2f */ { NULL, 0 },
    /* 0x30 */ { itable_0F3830, 1 },
    /* 0x31 */ { itable_0F3831, 1 },
    /* 0x32 */ { itable_0F3832, 1 },
    /* 0x33 */ { itable_0F3833, 1 },
    /* 0x34 */ { itable_0F3834, 1 },
    /* 0x35 */ { itable_0F3835, 1 },
    /* 0x36 */ { NULL, 0 },
    /* 0x37 */ { NULL, 0 },
    /* 0x38 */ { itable_0F3838, 1 },
    /* 0x39 */ { itable_0F3839, 1 },
    /* 0x3a */ { itable_0F383A, 1 },
    /* 0x3b */ { itable_0F383B, 1 },
    /* 0x3c */ { itable_0F383C, 1 },
    /* 0x3d */ { itable_0F383D, 1 },
    /* 0x3e */ { itable_0F383E, 1 },
    /* 0x3f */ { itable_0F383F, 1 },
    /* 0x40 */ { itable_0F3840, 1 },
    /* 0x41 */ { itable_0F3841, 1 },
    /* 0x42 */ { NULL, 0 },
    /* 0x43 */ { NULL, 0 },
    /* 0x44 */ { NULL, 0 },
    /* 0x45 */ { NULL, 0 },
    /* 0x46 */ { NULL, 0 },
    /* 0x47 */ { NULL, 0 },
    /* 0x48 */ { NULL, 0 },
    /* 0x49 */ { NULL, 0 },
    /* 0x4a */ { NULL, 0 },
    /* 0x4b */ { NULL, 0 },
    /* 0x4c */ { NULL, 0 },
    /* 0x4d */ { NULL, 0 },
    /* 0x4e */ { NULL, 0 },
    /* 0x4f */ { NULL, 0 },
    /* 0x50 */ { NULL, 0 },
    /* 0x51 */ { NULL, 0 },
    /* 0x52 */ { NULL, 0 },
    /* 0x53 */ { NULL, 0 },
    /* 0x54 */ { NULL, 0 },
    /* 0x55 */ { NULL, 0 },
    /* 0x56 */ { NULL, 0 },
    /* 0x57 */ { NULL, 0 },
    /* 0x58 */ { NULL, 0 },
    /* 0x59 */ { NULL, 0 },
    /* 0x5a */ { NULL, 0 },
    /* 0x5b */ { NULL, 0 },
    /* 0x5c */ { NULL, 0 },
    /* 0x5d */ { NULL, 0 },
    /* 0x5e */ { NULL, 0 },
    /* 0x5f */ { NULL, 0 },
    /* 0x60 */ { NULL, 0 },
    /* 0x61 */ { NULL, 0 },
    /* 0x62 */ { NULL, 0 },
    /* 0x63 */ { NULL, 0 },
    /* 0x64 */ { NULL, 0 },
    /* 0x65 */ { NULL, 0 },
    /* 0x66 */ { NULL, 0 },
    /* 0x67 */ { NULL, 0 },
    /* 0x68 */ { NULL, 0 },
    /* 0x69 */ { NULL, 0 },
    /* 0x6a */ { NULL, 0 },
    /* 0x6b */ { NULL, 0 },
    /* 0x6c */ { NULL, 0 },
    /* 0x6d */ { NULL, 0 },
    /* 0x6e */ { NULL, 0 },
    /* 0x6f */ { NULL, 0 },
    /* 0x70 */ { NULL, 0 },
    /* 0x71 */ { NULL, 0 },
    /* 0x72 */ { NULL, 0 },
    /* 0x73 */ { NULL, 0 },
    /* 0x74 */ { NULL, 0 },
    /* 0x75 */ { NULL, 0 },
    /* 0x76 */ { NULL, 0 },
    /* 0x77 */ { NULL, 0 },
    /* 0x78 */ { NULL, 0 },
    /* 0x79 */ { NULL, 0 },
    /* 0x7a */ { NULL, 0 },
    /* 0x7b */ { NULL, 0 },
    /* 0x7c */ { NULL, 0 },
    /* 0x7d */ { NULL, 0 },
    /* 0x7e */ { NULL, 0 },
    /* 0x7f */ { NULL, 0 },
    /* 0x80 */ { itable_0F3880, 2 },
    /* 0x81 */ { itable_0F3881, 2 },
    /* 0x82 */ { itable_0F3882, 2 },
    /* 0x83 */ { NULL, 0 },
    /* 0x84 */ { NULL, 0 },
    /* 0x85 */ { NULL, 0 },
    /* 0x86 */ { NULL, 0 },
    /* 0x87 */ { NULL, 0 },
    /* 0x88 */ { NULL, 0 },
    /* 0x89 */ { NULL, 0 },
    /* 0x8a */ { NULL, 0 },
    /* 0x8b */ { NULL, 0 },
    /* 0x8c */ { NULL, 0 },
    /* 0x8d */ { NULL, 0 },
    /* 0x8e */ { NULL, 0 },
    /* 0x8f */ { NULL, 0 },
    /* 0x90 */ { NULL, 0 },
    /* 0x91 */ { NULL, 0 },
    /* 0x92 */ { NULL, 0 },
    /* 0x93 */ { NULL, 0 },
    /* 0x94 */ { NULL, 0 },
    /* 0x95 */ { NULL, 0 },
    /* 0x96 */ { NULL, 0 },
    /* 0x97 */ { NULL, 0 },
    /* 0x98 */ { NULL, 0 },
    /* 0x99 */ { NULL, 0 },
    /* 0x9a */ { NULL, 0 },
    /* 0x9b */ { NULL, 0 },
    /* 0x9c */ { NULL, 0 },
    /* 0x9d */ { NULL, 0 },
    /* 0x9e */ { NULL, 0 },
    /* 0x9f */ { NULL, 0 },
    /* 0xa0 */ { NULL, 0 },
    /* 0xa1 */ { NULL, 0 },
    /* 0xa2 */ { NULL, 0 },
    /* 0xa3 */ { NULL, 0 },
    /* 0xa4 */ { NULL, 0 },
    /* 0xa5 */ { NULL, 0 },
    /* 0xa6 */ { NULL, 0 },
    /* 0xa7 */ { NULL, 0 },
    /* 0xa8 */ { NULL, 0 },
    /* 0xa9 */ { NULL, 0 },
    /* 0xaa */ { NULL, 0 },
    /* 0xab */ { NULL, 0 },
    /* 0xac */ { NULL, 0 },
    /* 0xad */ { NULL, 0 },
    /* 0xae */ { NULL, 0 },
    /* 0xaf */ { NULL, 0 },
    /* 0xb0 */ { NULL, 0 },
    /* 0xb1 */ { NULL, 0 },
    /* 0xb2 */ { NULL, 0 },
    /* 0xb3 */ { NULL, 0 },
    /* 0xb4 */ { NULL, 0 },
    /* 0xb5 */ { NULL, 0 },
    /* 0xb6 */ { NULL, 0 },
    /* 0xb7 */ { NULL, 0 },
    /* 0xb8 */ { NULL, 0 },
    /* 0xb9 */ { NULL, 0 },
    /* 0xba */ { NULL, 0 },
    /* 0xbb */ { NULL, 0 },
    /* 0xbc */ { NULL, 0 },
    /* 0xbd */ { NULL, 0 },
    /* 0xbe */ { NULL, 0 },
    /* 0xbf */ { NULL, 0 },
    /* 0xc0 */ { NULL, 0 },
    /* 0xc1 */ { NULL, 0 },
    /* 0xc2 */ { NULL, 0 },
    /* 0xc3 */ { NULL, 0 },
    /* 0xc4 */ { NULL, 0 },
    /* 0xc5 */ { NULL, 0 },
    /* 0xc6 */ { NULL, 0 },
    /* 0xc7 */ { NULL, 0 },
    /* 0xc8 */ { itable_0F38C8, 1 },
    /* 0xc9 */ { itable_0F38C9, 1 },
    /* 0xca */ { itable_0F38CA, 1 },
    /* 0xcb */ { itable_0F38CB, 2 },
    /* 0xcc */ { itable_0F38CC, 1 },
    /* 0xcd */ { itable_0F38CD, 1 },
    /* 0xce */ { NULL, 0 },
    /* 0xcf */ { NULL, 0 },
    /* 0xd0 */ { NULL, 0 },
    /* 0xd1 */ { NULL, 0 },
    /* 0xd2 */ { NULL, 0 },
    /* 0xd3 */ { NULL, 0 },
    /* 0xd4 */ { NULL, 0 },
    /* 0xd5 */ { NULL, 0 },
    /* 0xd6 */ { NULL, 0 },
    /* 0xd7 */ { NULL, 0 },
    /* 0xd8 */ { NULL, 0 },
    /* 0xd9 */ { NULL, 0 },
    /* 0xda */ { NULL, 0 },
    /* 0xdb */ { itable_0F38DB, 1 },
    /* 0xdc */ { itable_0F38DC, 1 },
    /* 0xdd */ { itable_0F38DD, 1 },
    /* 0xde */ { itable_0F38DE, 1 },
    /* 0xdf */ { itable_0F38DF, 1 },
    /* 0xe0 */ { NULL, 0 },
    /* 0xe1 */ { NULL, 0 },
    /* 0xe2 */ { NULL, 0 },
    /* 0xe3 */ { NULL, 0 },
    /* 0xe4 */ { NULL, 0 },
    /* 0xe5 */ { NULL, 0 },
    /* 0xe6 */ { NULL, 0 },
    /* 0xe7 */ { NULL, 0 },
    /* 0xe8 */ { NULL, 0 },
    /* 0xe9 */ { NULL, 0 },
    /* 0xea */ { NULL, 0 },
    /* 0xeb */ { NULL, 0 },
    /* 0xec */ { NULL, 0 },
    /* 0xed */ { NULL, 0 },
    /* 0xee */ { NULL, 0 },
    /* 0xef */ { NULL, 0 },
    /* 0xf0 */ { itable_0F38F0, 3 },
    /* 0xf1 */ { itable_0F38F1, 3 },
    /* 0xf2 */ { NULL, 0 },
    /* 0xf3 */ { NULL, 0 },
    /* 0xf4 */ { NULL, 0 },
    /* 0xf5 */ { itable_0F38F5, 2 },
    /* 0xf6 */ { itable_0F38F6, 6 },
    /* 0xf7 */ { NULL, 0 },
    /* 0xf8 */ { itable_0F38F8, 9 },
    /* 0xf9 */ { itable_0F38F9, 2 },
    /* 0xfa */ { NULL, 0 },
    /* 0xfb */ { NULL, 0 },
    /* 0xfc */ { NULL, 0 },
    /* 0xfd */ { NULL, 0 },
    /* 0xfe */ { NULL, 0 },
    /* 0xff */ { NULL, 0 },
};

static const struct disasm_index itable_0F3A[256] = {
    /* 0x00 */ { NULL, 0 },
    /* 0x01 */ { NULL, 0 },
    /* 0x02 */ { NULL, 0 },
    /* 0x03 */ { NULL, 0 },
    /* 0x04 */ { NULL, 0 },
    /* 0x05 */ { NULL, 0 },
    /* 0x06 */ { NULL, 0 },
    /* 0x07 */ { NULL, 0 },
    /* 0x08 */ { itable_0F3A08, 1 },
    /* 0x09 */ { itable_0F3A09, 1 },
    /* 0x0a */ { itable_0F3A0A, 1 },
    /* 0x0b */ { itable_0F3A0B, 1 },
    /* 0x0c */ { itable_0F3A0C, 1 },
    /* 0x0d */ { itable_0F3A0D, 1 },
    /* 0x0e */ { itable_0F3A0E, 1 },
    /* 0x0f */ { itable_0F3A0F, 2 },
    /* 0x10 */ { NULL, 0 },
    /* 0x11 */ { NULL, 0 },
    /* 0x12 */ { NULL, 0 },
    /* 0x13 */ { NULL, 0 },
    /* 0x14 */ { itable_0F3A14, 3 },
    /* 0x15 */ { itable_0F3A15, 3 },
    /* 0x16 */ { itable_0F3A16, 2 },
    /* 0x17 */ { itable_0F3A17, 2 },
    /* 0x18 */ { NULL, 0 },
    /* 0x19 */ { NULL, 0 },
    /* 0x1a */ { NULL, 0 },
    /* 0x1b */ { NULL, 0 },
    /* 0x1c */ { NULL, 0 },
    /* 0x1d */ { NULL, 0 },
    /* 0x1e */ { NULL, 0 },
    /* 0x1f */ { NULL, 0 },
    /* 0x20 */ { itable_0F3A20, 3 },
    /* 0x21 */ { itable_0F3A21, 1 },
    /* 0x22 */ { itable_0F3A22, 2 },
    /* 0x23 */ { NULL, 0 },
    /* 0x24 */ { NULL, 0 },
    /* 0x25 */ { NULL, 0 },
    /* 0x26 */ { NULL, 0 },
    /* 0x27 */ { NULL, 0 },
    /* 0x28 */ { NULL, 0 },
    /* 0x29 */ { NULL, 0 },
    /* 0x2a */ { NULL, 0 },
    /* 0x2b */ { NULL, 0 },
    /* 0x2c */ { NULL, 0 },
    /* 0x2d */ { NULL, 0 },
    /* 0x2e */ { NULL, 0 },
    /* 0x2f */ { NULL, 0 },
    /* 0x30 */ { NULL, 0 },
    /* 0x31 */ { NULL, 0 },
    /* 0x32 */ { NULL, 0 },
    /* 0x33 */ { NULL, 0 },
    /* 0x34 */ { NULL, 0 },
    /* 0x35 */ { NULL, 0 },
    /* 0x36 */ { NULL, 0 },
    /* 0x37 */ { NULL, 0 },
    /* 0x38 */ { NULL, 0 },
    /* 0x39 */ { NULL, 0 },
    /* 0x3a */ { NULL, 0 },
    /* 0x3b */ { NULL, 0 },
    /* 0x3c */ { NULL, 0 },
    /* 0x3d */ { NULL, 0 },
    /* 0x3e */ { NULL, 0 },
    /* 0x3f */ { NULL, 0 },
    /* 0x40 */ { itable_0F3A40, 1 },
    /* 0x41 */ { itable_0F3A41, 1 },
    /* 0x42 */ { itable_0F3A42, 1 },
    /* 0x43 */ { NULL, 0 },
    /* 0x44 */ { itable_0F3A44, 5 },
    /* 0x45 */ { NULL, 0 },
    /* 0x46 */ { NULL, 0 },
    /* 0x47 */ { NULL, 0 },
    /* 0x48 */ { NULL, 0 },
    /* 0x49 */ { NULL, 0 },
    /* 0x4a */ { NULL, 0 },
    /* 0x4b */ { NULL, 0 },
    /* 0x4c */ { NULL, 0 },
    /* 0x4d */ { NULL, 0 },
    /* 0x4e */ { NULL, 0 },
    /* 0x4f */ { NULL, 0 },
    /* 0x50 */ { NULL, 0 },
    /* 0x51 */ { NULL, 0 },
    /* 0x52 */ { NULL, 0 },
    /* 0x53 */ { NULL, 0 },
    /* 0x54 */ { NULL, 0 },
    /* 0x55 */ { NULL, 0 },
    /* 0x56 */ { NULL, 0 },
    /* 0x57 */ { NULL, 0 },
    /* 0x58 */ { NULL, 0 },
    /* 0x59 */ { NULL, 0 },
    /* 0x5a */ { NULL, 0 },
    /* 0x5b */ { NULL, 0 },
    /* 0x5c */ { NULL, 0 },
    /* 0x5d */ { NULL, 0 },
    /* 0x5e */ { NULL, 0 },
    /* 0x5f */ { NULL, 0 },
    /* 0x60 */ { NULL, 0 },
    /* 0x61 */ { NULL, 0 },
    /* 0x62 */ { NULL, 0 },
    /* 0x63 */ { NULL, 0 },
    /* 0x64 */ { NULL, 0 },
    /* 0x65 */ { NULL, 0 },
    /* 0x66 */ { NULL, 0 },
    /* 0x67 */ { NULL, 0 },
    /* 0x68 */ { NULL, 0 },
    /* 0x69 */ { NULL, 0 },
    /* 0x6a */ { NULL, 0 },
    /* 0x6b */ { NULL, 0 },
    /* 0x6c */ { NULL, 0 },
    /* 0x6d */ { NULL, 0 },
    /* 0x6e */ { NULL, 0 },
    /* 0x6f */ { NULL, 0 },
    /* 0x70 */ { NULL, 0 },
    /* 0x71 */ { NULL, 0 },
    /* 0x72 */ { NULL, 0 },
    /* 0x73 */ { NULL, 0 },
    /* 0x74 */ { NULL, 0 },
    /* 0x75 */ { NULL, 0 },
    /* 0x76 */ { NULL, 0 },
    /* 0x77 */ { NULL, 0 },
    /* 0x78 */ { NULL, 0 },
    /* 0x79 */ { NULL, 0 },
    /* 0x7a */ { NULL, 0 },
    /* 0x7b */ { NULL, 0 },
    /* 0x7c */ { NULL, 0 },
    /* 0x7d */ { NULL, 0 },
    /* 0x7e */ { NULL, 0 },
    /* 0x7f */ { NULL, 0 },
    /* 0x80 */ { NULL, 0 },
    /* 0x81 */ { NULL, 0 },
    /* 0x82 */ { NULL, 0 },
    /* 0x83 */ { NULL, 0 },
    /* 0x84 */ { NULL, 0 },
    /* 0x85 */ { NULL, 0 },
    /* 0x86 */ { NULL, 0 },
    /* 0x87 */ { NULL, 0 },
    /* 0x88 */ { NULL, 0 },
    /* 0x89 */ { NULL, 0 },
    /* 0x8a */ { NULL, 0 },
    /* 0x8b */ { NULL, 0 },
    /* 0x8c */ { NULL, 0 },
    /* 0x8d */ { NULL, 0 },
    /* 0x8e */ { NULL, 0 },
    /* 0x8f */ { NULL, 0 },
    /* 0x90 */ { NULL, 0 },
    /* 0x91 */ { NULL, 0 },
    /* 0x92 */ { NULL, 0 },
    /* 0x93 */ { NULL, 0 },
    /* 0x94 */ { NULL, 0 },
    /* 0x95 */ { NULL, 0 },
    /* 0x96 */ { NULL, 0 },
    /* 0x97 */ { NULL, 0 },
    /* 0x98 */ { NULL, 0 },
    /* 0x99 */ { NULL, 0 },
    /* 0x9a */ { NULL, 0 },
    /* 0x9b */ { NULL, 0 },
    /* 0x9c */ { NULL, 0 },
    /* 0x9d */ { NULL, 0 },
    /* 0x9e */ { NULL, 0 },
    /* 0x9f */ { NULL, 0 },
    /* 0xa0 */ { NULL, 0 },
    /* 0xa1 */ { NULL, 0 },
    /* 0xa2 */ { NULL, 0 },
    /* 0xa3 */ { NULL, 0 },
    /* 0xa4 */ { NULL, 0 },
    /* 0xa5 */ { NULL, 0 },
    /* 0xa6 */ { NULL, 0 },
    /* 0xa7 */ { NULL, 0 },
    /* 0xa8 */ { NULL, 0 },
    /* 0xa9 */ { NULL, 0 },
    /* 0xaa */ { NULL, 0 },
    /* 0xab */ { NULL, 0 },
    /* 0xac */ { NULL, 0 },
    /* 0xad */ { NULL, 0 },
    /* 0xae */ { NULL, 0 },
    /* 0xaf */ { NULL, 0 },
    /* 0xb0 */ { NULL, 0 },
    /* 0xb1 */ { NULL, 0 },
    /* 0xb2 */ { NULL, 0 },
    /* 0xb3 */ { NULL, 0 },
    /* 0xb4 */ { NULL, 0 },
    /* 0xb5 */ { NULL, 0 },
    /* 0xb6 */ { NULL, 0 },
    /* 0xb7 */ { NULL, 0 },
    /* 0xb8 */ { NULL, 0 },
    /* 0xb9 */ { NULL, 0 },
    /* 0xba */ { NULL, 0 },
    /* 0xbb */ { NULL, 0 },
    /* 0xbc */ { NULL, 0 },
    /* 0xbd */ { NULL, 0 },
    /* 0xbe */ { NULL, 0 },
    /* 0xbf */ { NULL, 0 },
    /* 0xc0 */ { NULL, 0 },
    /* 0xc1 */ { NULL, 0 },
    /* 0xc2 */ { NULL, 0 },
    /* 0xc3 */ { NULL, 0 },
    /* 0xc4 */ { NULL, 0 },
    /* 0xc5 */ { NULL, 0 },
    /* 0xc6 */ { NULL, 0 },
    /* 0xc7 */ { NULL, 0 },
    /* 0xc8 */ { NULL, 0 },
    /* 0xc9 */ { NULL, 0 },
    /* 0xca */ { NULL, 0 },
    /* 0xcb */ { NULL, 0 },
    /* 0xcc */ { itable_0F3ACC, 1 },
    /* 0xcd */ { NULL, 0 },
    /* 0xce */ { NULL, 0 },
    /* 0xcf */ { NULL, 0 },
    /* 0xd0 */ { NULL, 0 },
    /* 0xd1 */ { NULL, 0 },
    /* 0xd2 */ { NULL, 0 },
    /* 0xd3 */ { NULL, 0 },
    /* 0xd4 */ { NULL, 0 },
    /* 0xd5 */ { NULL, 0 },
    /* 0xd6 */ { NULL, 0 },
    /* 0xd7 */ { NULL, 0 },
    /* 0xd8 */ { NULL, 0 },
    /* 0xd9 */ { NULL, 0 },
    /* 0xda */ { NULL, 0 },
    /* 0xdb */ { NULL, 0 },
    /* 0xdc */ { NULL, 0 },
    /* 0xdd */ { NULL, 0 },
    /* 0xde */ { NULL, 0 },
    /* 0xdf */ { itable_0F3ADF, 1 },
    /* 0xe0 */ { NULL, 0 },
    /* 0xe1 */ { NULL, 0 },
    /* 0xe2 */ { NULL, 0 },
    /* 0xe3 */ { NULL, 0 },
    /* 0xe4 */ { NULL, 0 },
    /* 0xe5 */ { NULL, 0 },
    /* 0xe6 */ { NULL, 0 },
    /* 0xe7 */ { NULL, 0 },
    /* 0xe8 */ { NULL, 0 },
    /* 0xe9 */ { NULL, 0 },
    /* 0xea */ { NULL, 0 },
    /* 0xeb */ { NULL, 0 },
    /* 0xec */ { NULL, 0 },
    /* 0xed */ { NULL, 0 },
    /* 0xee */ { NULL, 0 },
    /* 0xef */ { NULL, 0 },
    /* 0xf0 */ { NULL, 0 },
    /* 0xf1 */ { NULL, 0 },
    /* 0xf2 */ { NULL, 0 },
    /* 0xf3 */ { NULL, 0 },
    /* 0xf4 */ { NULL, 0 },
    /* 0xf5 */ { NULL, 0 },
    /* 0xf6 */ { NULL, 0 },
    /* 0xf7 */ { NULL, 0 },
    /* 0xf8 */ { NULL, 0 },
    /* 0xf9 */ { NULL, 0 },
    /* 0xfa */ { NULL, 0 },
    /* 0xfb */ { NULL, 0 },
    /* 0xfc */ { NULL, 0 },
    /* 0xfd */ { NULL, 0 },
    /* 0xfe */ { NULL, 0 },
    /* 0xff */ { NULL, 0 },
};

static const struct disasm_index itable_0F[256] = {
    /* 0x00 */ { itable_0F00, 24 },
    /* 0x01 */ { itable_0F01, 55 },
    /* 0x02 */ { itable_0F02, 10 },
    /* 0x03 */ { itable_0F03, 10 },
    /* 0x04 */ { NULL, 0 },
    /* 0x05 */ { itable_0F05, 1 },
    /* 0x06 */ { itable_0F06, 1 },
    /* 0x07 */ { itable_0F07, 1 },
    /* 0x08 */ { itable_0F08, 1 },
    /* 0x09 */ { itable_0F09, 3 },
    /* 0x0a */ { NULL, 0 },
    /* 0x0b */ { itable_0F0B, 1 },
    /* 0x0c */ { NULL, 0 },
    /* 0x0d */ { itable_0F0D, 3 },
    /* 0x0e */ { itable_0F0E, 1 },
    /* 0x0f */ { itable_0F0F, 24 },
    /* 0x10 */ { itable_0F10, 4 },
    /* 0x11 */ { itable_0F11, 4 },
    /* 0x12 */ { itable_0F12, 5 },
    /* 0x13 */ { itable_0F13, 2 },
    /* 0x14 */ { itable_0F14, 2 },
    /* 0x15 */ { itable_0F15, 2 },
    /* 0x16 */ { itable_0F16, 4 },
    /* 0x17 */ { itable_0F17, 2 },
    /* 0x18 */ { itable_0F18, 4 },
    /* 0x19 */ { NULL, 0 },
    /* 0x1a */ { itable_0F1A, 11 },
    /* 0x1b */ { itable_0F1B, 11 },
    /* 0x1c */ { itable_0F1C, 1 },
    /* 0x1d */ { NULL, 0 },
    /* 0x1e */ { itable_0F1E, 4 },
    /* 0x1f */ { itable_0F1F, 3 },
    /* 0x20 */ { itable_0F20, 2 },
    /* 0x21 */ { itable_0F21, 2 },
    /* 0x22 */ { itable_0F22, 2 },
    /* 0x23 */ { itable_0F23, 2 },
    /* 0x24 */ { NULL, 0 },
    /* 0x25 */ { NULL, 0 },
    /* 0x26 */ { NULL, 0 },
    /* 0x27 */ { NULL, 0 },
    /* 0x28 */ { itable_0F28, 2 },
    /* 0x29 */ { itable_0F29, 2 },
    /* 0x2a */ { itable_0F2A, 6 },
    /* 0x2b */ { itable_0F2B, 4 },
    /* 0x2c */ { itable_0F2C, 8 },
    /* 0x2d */ { itable_0F2D, 10 },
    /* 0x2e */ { itable_0F2E, 2 },
    /* 0x2f */ { itable_0F2F, 2 },
    /* 0x30 */ { itable_0F30, 1 },
    /* 0x31 */ { itable_0F31, 1 },
    /* 0x32 */ { itable_0F32, 1 },
    /* 0x33 */ { itable_0F33, 1 },
    /* 0x34 */ { itable_0F34, 1 },
    /* 0x35 */ { itable_0F35, 1 },
    /* 0x36 */ { NULL, 0 },
    /* 0x37 */ { itable_0F37, 1 },
    /* 0x38 */ { itable_0F38, -1 },
    /* 0x39 */ { NULL, 0 },
    /* 0x3a */ { itable_0F3A, -1 },
    /* 0x3b */ { NULL, 0 },
    /* 0x3c */ { NULL, 0 },
    /* 0x3d */ { NULL, 0 },
    /* 0x3e */ { NULL, 0 },
    /* 0x3f */ { NULL, 0 },
    /* 0x40 */ { itable_0F40, 6 },
    /* 0x41 */ { itable_0F41, 6 },
    /* 0x42 */ { itable_0F42, 6 },
    /* 0x43 */ { itable_0F43, 6 },
    /* 0x44 */ { itable_0F44, 6 },
    /* 0x45 */ { itable_0F45, 6 },
    /* 0x46 */ { itable_0F46, 6 },
    /* 0x47 */ { itable_0F47, 6 },
    /* 0x48 */ { itable_0F48, 6 },
    /* 0x49 */ { itable_0F49, 6 },
    /* 0x4a */ { itable_0F4A, 6 },
    /* 0x4b */ { itable_0F4B, 6 },
    /* 0x4c */ { itable_0F4C, 6 },
    /* 0x4d */ { itable_0F4D, 6 },
    /* 0x4e */ { itable_0F4E, 6 },
    /* 0x4f */ { itable_0F4F, 6 },
    /* 0x50 */ { itable_0F50, 4 },
    /* 0x51 */ { itable_0F51, 4 },
    /* 0x52 */ { itable_0F52, 2 },
    /* 0x53 */ { itable_0F53, 2 },
    /* 0x54 */ { itable_0F54, 2 },
    /* 0x55 */ { itable_0F55, 2 },
    /* 0x56 */ { itable_0F56, 2 },
    /* 0x57 */ { itable_0F57, 2 },
    /* 0x58 */ { itable_0F58, 4 },
    /* 0x59 */ { itable_0F59, 4 },
    /* 0x5a */ { itable_0F5A, 4 },
    /* 0x5b */ { itable_0F5B, 3 },
    /* 0x5c */ { itable_0F5C, 4 },
    /* 0x5d */ { itable_0F5D, 4 },
    /* 0x5e */ { itable_0F5E, 4 },
    /* 0x5f */ { itable_0F5F, 4 },
    /* 0x60 */ { itable_0F60, 2 },
    /* 0x61 */ { itable_0F61, 2 },
    /* 0x62 */ { itable_0F62, 2 },
    /* 0x63 */ { itable_0F63, 2 },
    /* 0x64 */ { itable_0F64, 2 },
    /* 0x65 */ { itable_0F65, 2 },
    /* 0x66 */ { itable_0F66, 2 },
    /* 0x67 */ { itable_0F67, 2 },
    /* 0x68 */ { itable_0F68, 2 },
    /* 0x69 */ { itable_0F69, 2 },
    /* 0x6a */ { itable_0F6A, 2 },
    /* 0x6b */ { itable_0F6B, 2 },
    /* 0x6c */ { itable_0F6C, 1 },
    /* 0x6d */ { itable_0F6D, 1 },
    /* 0x6e */ { itable_0F6E, 5 },
    /* 0x6f */ { itable_0F6F, 3 },
    /* 0x70 */ { itable_0F70, 7 },
    /* 0x71 */ { itable_0F71, 6 },
    /* 0x72 */ { itable_0F72, 6 },
    /* 0x73 */ { itable_0F73, 6 },
    /* 0x74 */ { itable_0F74, 2 },
    /* 0x75 */ { itable_0F75, 2 },
    /* 0x76 */ { itable_0F76, 2 },
    /* 0x77 */ { itable_0F77, 1 },
    /* 0x78 */ { itable_0F78, 4 },
    /* 0x79 */ { itable_0F79, 4 },
    /* 0x7a */ { NULL, 0 },
    /* 0x7b */ { NULL, 0 },
    /* 0x7c */ { itable_0F7C, 2 },
    /* 0x7d */ { itable_0F7D, 2 },
    /* 0x7e */ { itable_0F7E, 7 },
    /* 0x7f */ { itable_0F7F, 3 },
    /* 0x80 */ { itable_0F80, 4 },
    /* 0x81 */ { itable_0F81, 4 },
    /* 0x82 */ { itable_0F82, 4 },
    /* 0x83 */ { itable_0F83, 4 },
    /* 0x84 */ { itable_0F84, 4 },
    /* 0x85 */ { itable_0F85, 4 },
    /* 0x86 */ { itable_0F86, 4 },
    /* 0x87 */ { itable_0F87, 4 },
    /* 0x88 */ { itable_0F88, 4 },
    /* 0x89 */ { itable_0F89, 4 },
    /* 0x8a */ { itable_0F8A, 4 },
    /* 0x8b */ { itable_0F8B, 4 },
    /* 0x8c */ { itable_0F8C, 4 },
    /* 0x8d */ { itable_0F8D, 4 },
    /* 0x8e */ { itable_0F8E, 4 },
    /* 0x8f */ { itable_0F8F, 4 },
    /* 0x90 */ { itable_0F90, 2 },
    /* 0x91 */ { itable_0F91, 2 },
    /* 0x92 */ { itable_0F92, 2 },
    /* 0x93 */ { itable_0F93, 2 },
    /* 0x94 */ { itable_0F94, 2 },
    /* 0x95 */ { itable_0F95, 2 },
    /* 0x96 */ { itable_0F96, 2 },
    /* 0x97 */ { itable_0F97, 2 },
    /* 0x98 */ { itable_0F98, 2 },
    /* 0x99 */ { itable_0F99, 2 },
    /* 0x9a */ { itable_0F9A, 2 },
    /* 0x9b */ { itable_0F9B, 2 },
    /* 0x9c */ { itable_0F9C, 2 },
    /* 0x9d */ { itable_0F9D, 2 },
    /* 0x9e */ { itable_0F9E, 2 },
    /* 0x9f */ { itable_0F9F, 2 },
    /* 0xa0 */ { itable_0FA0, 1 },
    /* 0xa1 */ { itable_0FA1, 1 },
    /* 0xa2 */ { itable_0FA2, 1 },
    /* 0xa3 */ { itable_0FA3, 6 },
    /* 0xa4 */ { itable_0FA4, 6 },
    /* 0xa5 */ { itable_0FA5, 6 },
    /* 0xa6 */ { NULL, 0 },
    /* 0xa7 */ { NULL, 0 },
    /* 0xa8 */ { itable_0FA8, 1 },
    /* 0xa9 */ { itable_0FA9, 1 },
    /* 0xaa */ { itable_0FAA, 1 },
    /* 0xab */ { itable_0FAB, 6 },
    /* 0xac */ { itable_0FAC, 6 },
    /* 0xad */ { itable_0FAD, 6 },
    /* 0xae */ { itable_0FAE, 40 },
    /* 0xaf */ { itable_0FAF, 6 },
    /* 0xb0 */ { itable_0FB0, 2 },
    /* 0xb1 */ { itable_0FB1, 6 },
    /* 0xb2 */ { itable_0FB2, 3 },
    /* 0xb3 */ { itable_0FB3, 6 },
    /* 0xb4 */ { itable_0FB4, 3 },
    /* 0xb5 */ { itable_0FB5, 3 },
    /* 0xb6 */ { itable_0FB6, 4 },
    /* 0xb7 */ { itable_0FB7, 2 },
    /* 0xb8 */ { itable_0FB8, 3 },
    /* 0xb9 */ { itable_0FB9, 3 },
    /* 0xba */ { itable_0FBA, 12 },
    /* 0xbb */ { itable_0FBB, 6 },
    /* 0xbc */ { itable_0FBC, 9 },
    /* 0xbd */ { itable_0FBD, 9 },
    /* 0xbe */ { itable_0FBE, 4 },
    /* 0xbf */ { itable_0FBF, 2 },
    /* 0xc0 */ { itable_0FC0, 2 },
    /* 0xc1 */ { itable_0FC1, 6 },
    /* 0xc2 */ { itable_0FC2, 36 },
    /* 0xc3 */ { itable_0FC3, 2 },
    /* 0xc4 */ { itable_0FC4, 6 },
    /* 0xc5 */ { itable_0FC5, 2 },
    /* 0xc6 */ { itable_0FC6, 2 },
    /* 0xc7 */ { itable_0FC7, 21 },
    /* 0xc8 */ { itable_0FC8, 2 },
    /* 0xc9 */ { itable_0FC9, 2 },
    /* 0xca */ { itable_0FCA, 2 },
    /* 0xcb */ { itable_0FCB, 2 },
    /* 0xcc */ { itable_0FCC, 2 },
    /* 0xcd */ { itable_0FCD, 2 },
    /* 0xce */ { itable_0FCE, 2 },
    /* 0xcf */ { itable_0FCF, 2 },
    /* 0xd0 */ { itable_0FD0, 2 },
    /* 0xd1 */ { itable_0FD1, 2 },
    /* 0xd2 */ { itable_0FD2, 2 },
    /* 0xd3 */ { itable_0FD3, 2 },
    /* 0xd4 */ { itable_0FD4, 2 },
    /* 0xd5 */ { itable_0FD5, 2 },
    /* 0xd6 */ { itable_0FD6, 4 },
    /* 0xd7 */ { itable_0FD7, 2 },
    /* 0xd8 */ { itable_0FD8, 2 },
    /* 0xd9 */ { itable_0FD9, 2 },
    /* 0xda */ { itable_0FDA, 2 },
    /* 0xdb */ { itable_0FDB, 2 },
    /* 0xdc */ { itable_0FDC, 2 },
    /* 0xdd */ { itable_0FDD, 2 },
    /* 0xde */ { itable_0FDE, 2 },
    /* 0xdf */ { itable_0FDF, 2 },
    /* 0xe0 */ { itable_0FE0, 2 },
    /* 0xe1 */ { itable_0FE1, 2 },
    /* 0xe2 */ { itable_0FE2, 2 },
    /* 0xe3 */ { itable_0FE3, 2 },
    /* 0xe4 */ { itable_0FE4, 2 },
    /* 0xe5 */ { itable_0FE5, 2 },
    /* 0xe6 */ { itable_0FE6, 3 },
    /* 0xe7 */ { itable_0FE7, 2 },
    /* 0xe8 */ { itable_0FE8, 2 },
    /* 0xe9 */ { itable_0FE9, 2 },
    /* 0xea */ { itable_0FEA, 2 },
    /* 0xeb */ { itable_0FEB, 2 },
    /* 0xec */ { itable_0FEC, 2 },
    /* 0xed */ { itable_0FED, 2 },
    /* 0xee */ { itable_0FEE, 2 },
    /* 0xef */ { itable_0FEF, 2 },
    /* 0xf0 */ { itable_0FF0, 1 },
    /* 0xf1 */ { itable_0FF1, 2 },
    /* 0xf2 */ { itable_0FF2, 2 },
    /* 0xf3 */ { itable_0FF3, 2 },
    /* 0xf4 */ { itable_0FF4, 2 },
    /* 0xf5 */ { itable_0FF5, 2 },
    /* 0xf6 */ { itable_0FF6, 2 },
    /* 0xf7 */ { itable_0FF7, 2 },
    /* 0xf8 */ { itable_0FF8, 2 },
    /* 0xf9 */ { itable_0FF9, 2 },
    /* 0xfa */ { itable_0FFA, 2 },
    /* 0xfb */ { itable_0FFB, 2 },
    /* 0xfc */ { itable_0FFC, 2 },
    /* 0xfd */ { itable_0FFD, 2 },
    /* 0xfe */ { itable_0FFE, 2 },
    /* 0xff */ { itable_0FFF, 4 },
};

const struct disasm_index itable[256] = {
    /* 0x00 */ { itable_00, 2 },
    /* 0x01 */ { itable_01, 6 },
    /* 0x02 */ { itable_02, 2 },
    /* 0x03 */ { itable_03, 6 },
    /* 0x04 */ { itable_04, 1 },
    /* 0x05 */ { itable_05, 3 },
    /* 0x06 */ { itable_06, 1 },
    /* 0x07 */ { itable_07, 1 },
    /* 0x08 */ { itable_08, 2 },
    /* 0x09 */ { itable_09, 6 },
    /* 0x0a */ { itable_0A, 2 },
    /* 0x0b */ { itable_0B, 6 },
    /* 0x0c */ { itable_0C, 1 },
    /* 0x0d */ { itable_0D, 3 },
    /* 0x0e */ { itable_0E, 1 },
    /* 0x0f */ { itable_0F, -1 },
    /* 0x10 */ { itable_10, 2 },
    /* 0x11 */ { itable_11, 6 },
    /* 0x12 */ { itable_12, 2 },
    /* 0x13 */ { itable_13, 6 },
    /* 0x14 */ { itable_14, 1 },
    /* 0x15 */ { itable_15, 3 },
    /* 0x16 */ { itable_16, 1 },
    /* 0x17 */ { itable_17, 1 },
    /* 0x18 */ { itable_18, 2 },
    /* 0x19 */ { itable_19, 6 },
    /* 0x1a */ { itable_1A, 2 },
    /* 0x1b */ { itable_1B, 6 },
    /* 0x1c */ { itable_1C, 1 },
    /* 0x1d */ { itable_1D, 3 },
    /* 0x1e */ { itable_1E, 1 },
    /* 0x1f */ { itable_1F, 1 },
    /* 0x20 */ { itable_20, 2 },
    /* 0x21 */ { itable_21, 6 },
    /* 0x22 */ { itable_22, 2 },
    /* 0x23 */ { itable_23, 6 },
    /* 0x24 */ { itable_24, 1 },
    /* 0x25 */ { itable_25, 3 },
    /* 0x26 */ { NULL, 0 },
    /* 0x27 */ { itable_27, 1 },
    /* 0x28 */ { itable_28, 2 },
    /* 0x29 */ { itable_29, 6 },
    /* 0x2a */ { itable_2A, 2 },
    /* 0x2b */ { itable_2B, 6 },
    /* 0x2c */ { itable_2C, 1 },
    /* 0x2d */ { itable_2D, 3 },
    /* 0x2e */ { NULL, 0 },
    /* 0x2f */ { itable_2F, 1 },
    /* 0x30 */ { itable_30, 2 },
    /* 0x31 */ { itable_31, 6 },
    /* 0x32 */ { itable_32, 2 },
    /* 0x33 */ { itable_33, 6 },
    /* 0x34 */ { itable_34, 1 },
    /* 0x35 */ { itable_35, 3 },
    /* 0x36 */ { NULL, 0 },
    /* 0x37 */ { itable_37, 1 },
    /* 0x38 */ { itable_38, 2 },
    /* 0x39 */ { itable_39, 6 },
    /* 0x3a */ { itable_3A, 2 },
    /* 0x3b */ { itable_3B, 6 },
    /* 0x3c */ { itable_3C, 1 },
    /* 0x3d */ { itable_3D, 3 },
    /* 0x3e */ { NULL, 0 },
    /* 0x3f */ { itable_3F, 1 },
    /* 0x40 */ { itable_40, 2 },
    /* 0x41 */ { itable_41, 2 },
    /* 0x42 */ { itable_42, 2 },
    /* 0x43 */ { itable_43, 2 },
    /* 0x44 */ { itable_44, 2 },
    /* 0x45 */ { itable_45, 2 },
    /* 0x46 */ { itable_46, 2 },
    /* 0x47 */ { itable_47, 2 },
    /* 0x48 */ { itable_48, 2 },
    /* 0x49 */ { itable_49, 2 },
    /* 0x4a */ { itable_4A, 2 },
    /* 0x4b */ { itable_4B, 2 },
    /* 0x4c */ { itable_4C, 2 },
    /* 0x4d */ { itable_4D, 2 },
    /* 0x4e */ { itable_4E, 2 },
    /* 0x4f */ { itable_4F, 2 },
    /* 0x50 */ { itable_50, 3 },
    /* 0x51 */ { itable_51, 3 },
    /* 0x52 */ { itable_52, 3 },
    /* 0x53 */ { itable_53, 3 },
    /* 0x54 */ { itable_54, 3 },
    /* 0x55 */ { itable_55, 3 },
    /* 0x56 */ { itable_56, 3 },
    /* 0x57 */ { itable_57, 3 },
    /* 0x58 */ { itable_58, 3 },
    /* 0x59 */ { itable_59, 3 },
    /* 0x5a */ { itable_5A, 3 },
    /* 0x5b */ { itable_5B, 3 },
    /* 0x5c */ { itable_5C, 3 },
    /* 0x5d */ { itable_5D, 3 },
    /* 0x5e */ { itable_5E, 3 },
    /* 0x5f */ { itable_5F, 3 },
    /* 0x60 */ { itable_60, 3 },
    /* 0x61 */ { itable_61, 3 },
    /* 0x62 */ { itable_62, 2 },
    /* 0x63 */ { itable_63, 3 },
    /* 0x64 */ { NULL, 0 },
    /* 0x65 */ { NULL, 0 },
    /* 0x66 */ { NULL, 0 },
    /* 0x67 */ { NULL, 0 },
    /* 0x68 */ { itable_68, 5 },
    /* 0x69 */ { itable_69, 9 },
    /* 0x6a */ { itable_6A, 1 },
    /* 0x6b */ { itable_6B, 9 },
    /* 0x6c */ { itable_6C, 1 },
    /* 0x6d */ { itable_6D, 2 },
    /* 0x6e */ { itable_6E, 1 },
    /* 0x6f */ { itable_6F, 2 },
    /* 0x70 */ { itable_70, 1 },
    /* 0x71 */ { itable_71, 1 },
    /* 0x72 */ { itable_72, 1 },
    /* 0x73 */ { itable_73, 1 },
    /* 0x74 */ { itable_74, 1 },
    /* 0x75 */ { itable_75, 1 },
    /* 0x76 */ { itable_76, 1 },
    /* 0x77 */ { itable_77, 1 },
    /* 0x78 */ { itable_78, 1 },
    /* 0x79 */ { itable_79, 1 },
    /* 0x7a */ { itable_7A, 1 },
    /* 0x7b */ { itable_7B, 1 },
    /* 0x7c */ { itable_7C, 1 },
    /* 0x7d */ { itable_7D, 1 },
    /* 0x7e */ { itable_7E, 1 },
    /* 0x7f */ { itable_7F, 1 },
    /* 0x80 */ { itable_80, 15 },
    /* 0x81 */ { itable_81, 40 },
    /* 0x82 */ { itable_82, 15 },
    /* 0x83 */ { itable_83, 24 },
    /* 0x84 */ { itable_84, 3 },
    /* 0x85 */ { itable_85, 9 },
    /* 0x86 */ { itable_86, 4 },
    /* 0x87 */ { itable_87, 12 },
    /* 0x88 */ { itable_88, 2 },
    /* 0x89 */ { itable_89, 6 },
    /* 0x8a */ { itable_8A, 2 },
    /* 0x8b */ { itable_8B, 6 },
    /* 0x8c */ { itable_8C, 4 },
    /* 0x8d */ { itable_8D, 3 },
    /* 0x8e */ { itable_8E, 4 },
    /* 0x8f */ { itable_8F, 3 },
    /* 0x90 */ { itable_90, 9 },
    /* 0x91 */ { itable_91, 6 },
    /* 0x92 */ { itable_92, 6 },
    /* 0x93 */ { itable_93, 6 },
    /* 0x94 */ { itable_94, 6 },
    /* 0x95 */ { itable_95, 6 },
    /* 0x96 */ { itable_96, 6 },
    /* 0x97 */ { itable_97, 6 },
    /* 0x98 */ { itable_98, 3 },
    /* 0x99 */ { itable_99, 3 },
    /* 0x9a */ { itable_9A, 5 },
    /* 0x9b */ { NULL, 0 },
    /* 0x9c */ { itable_9C, 4 },
    /* 0x9d */ { itable_9D, 4 },
    /* 0x9e */ { itable_9E, 1 },
    /* 0x9f */ { itable_9F, 1 },
    /* 0xa0 */ { itable_A0, 1 },
    /* 0xa1 */ { itable_A1, 3 },
    /* 0xa2 */ { itable_A2, 1 },
    /* 0xa3 */ { itable_A3, 3 },
    /* 0xa4 */ { itable_A4, 1 },
    /* 0xa5 */ { itable_A5, 3 },
    /* 0xa6 */ { itable_A6, 1 },
    /* 0xa7 */ { itable_A7, 3 },
    /* 0xa8 */ { itable_A8, 1 },
    /* 0xa9 */ { itable_A9, 3 },
    /* 0xaa */ { itable_AA, 1 },
    /* 0xab */ { itable_AB, 3 },
    /* 0xac */ { itable_AC, 1 },
    /* 0xad */ { itable_AD, 3 },
    /* 0xae */ { itable_AE, 1 },
    /* 0xaf */ { itable_AF, 3 },
    /* 0xb0 */ { itable_B0, 1 },
    /* 0xb1 */ { itable_B1, 1 },
    /* 0xb2 */ { itable_B2, 1 },
    /* 0xb3 */ { itable_B3, 1 },
    /* 0xb4 */ { itable_B4, 1 },
    /* 0xb5 */ { itable_B5, 1 },
    /* 0xb6 */ { itable_B6, 1 },
    /* 0xb7 */ { itable_B7, 1 },
    /* 0xb8 */ { itable_B8, 3 },
    /* 0xb9 */ { itable_B9, 3 },
    /* 0xba */ { itable_BA, 3 },
    /* 0xbb */ { itable_BB, 3 },
    /* 0xbc */ { itable_BC, 3 },
    /* 0xbd */ { itable_BD, 3 },
    /* 0xbe */ { itable_BE, 3 },
    /* 0xbf */ { itable_BF, 3 },
    /* 0xc0 */ { itable_C0, 7 },
    /* 0xc1 */ { itable_C1, 21 },
    /* 0xc2 */ { itable_C2, 8 },
    /* 0xc3 */ { itable_C3, 8 },
    /* 0xc4 */ { itable_C4, 2 },
    /* 0xc5 */ { itable_C5, 2 },
    /* 0xc6 */ { itable_C6, 4 },
    /* 0xc7 */ { itable_C7, 10 },
    /* 0xc8 */ { itable_C8, 1 },
    /* 0xc9 */ { itable_C9, 1 },
    /* 0xca */ { itable_CA, 4 },
    /* 0xcb */ { itable_CB, 4 },
    /* 0xcc */ { itable_CC, 1 },
    /* 0xcd */ { itable_CD, 1 },
    /* 0xce */ { itable_CE, 1 },
    /* 0xcf */ { itable_CF, 4 },
    /* 0xd0 */ { itable_D0, 7 },
    /* 0xd1 */ { itable_D1, 21 },
    /* 0xd2 */ { itable_D2, 7 },
    /* 0xd3 */ { itable_D3, 21 },
    /* 0xd4 */ { itable_D4, 2 },
    /* 0xd5 */ { itable_D5, 2 },
    /* 0xd6 */ { itable_D6, 1 },
    /* 0xd7 */ { itable_D7, 2 },
    /* 0xd8 */ { itable_D8, 24 },
    /* 0xd9 */ { itable_D9, 41 },
    /* 0xda */ { itable_DA, 17 },
    /* 0xdb */ { itable_DB, 27 },
    /* 0xdc */ { itable_DC, 20 },
    /* 0xdd */ { itable_DD, 17 },
    /* 0xde */ { itable_DE, 21 },
    /* 0xdf */ { itable_DF, 18 },
    /* 0xe0 */ { itable_E0, 8 },
    /* 0xe1 */ { itable_E1, 8 },
    /* 0xe2 */ { itable_E2, 4 },
    /* 0xe3 */ { itable_E3, 3 },
    /* 0xe4 */ { itable_E4, 1 },
    /* 0xe5 */ { itable_E5, 2 },
    /* 0xe6 */ { itable_E6, 1 },
    /* 0xe7 */ { itable_E7, 2 },
    /* 0xe8 */ { itable_E8, 4 },
    /* 0xe9 */ { itable_E9, 4 },
    /* 0xea */ { itable_EA, 5 },
    /* 0xeb */ { itable_EB, 1 },
    /* 0xec */ { itable_EC, 1 },
    /* 0xed */ { itable_ED, 2 },
    /* 0xee */ { itable_EE, 1 },
    /* 0xef */ { itable_EF, 2 },
    /* 0xf0 */ { NULL, 0 },
    /* 0xf1 */ { itable_F1, 2 },
    /* 0xf2 */ { NULL, 0 },
    /* 0xf3 */ { NULL, 0 },
    /* 0xf4 */ { itable_F4, 1 },
    /* 0xf5 */ { itable_F5, 1 },
    /* 0xf6 */ { itable_F6, 8 },
    /* 0xf7 */ { itable_F7, 23 },
    /* 0xf8 */ { itable_F8, 1 },
    /* 0xf9 */ { itable_F9, 1 },
    /* 0xfa */ { itable_FA, 1 },
    /* 0xfb */ { itable_FB, 1 },
    /* 0xfc */ { itable_FC, 1 },
    /* 0xfd */ { itable_FD, 1 },
    /* 0xfe */ { itable_FE, 2 },
    /* 0xff */ { itable_FF, 27 },
};

const struct disasm_index * const itable_vex[NASM_VEX_CLASSES][32][4] =
{
    {
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
    },
    {
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
    },
    {
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
        { NULL,          NULL,          NULL,          NULL,          },
    },
};
