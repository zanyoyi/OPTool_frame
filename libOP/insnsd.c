/* This file auto-generated from insns.dat by insns.pl - don't edit it */
#include "pch.h"
#include "nasm.h"
#include "insns.h"

static const struct itemplate instrux[] = {
    /*    0 */ {I_RESB, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    1 */ {I_RESW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    2 */ {I_RESD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    3 */ {I_RESQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    4 */ {I_REST, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    5 */ {I_RESO, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    6 */ {I_RESY, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    7 */ {I_RESZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6681, 0},
    /*    8 */ {I_AAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7551, 1},
    /*    9 */ {I_AAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6543, 1},
    /*   10 */ {I_AAD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6547, 2},
    /*   11 */ {I_AAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6551, 1},
    /*   12 */ {I_AAM, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6555, 2},
    /*   13 */ {I_AAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7554, 1},
    /*   14 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4863, 3},
    /*   15 */ {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4864, 0},
    /*   16 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2631, 3},
    /*   17 */ {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2632, 0},
    /*   18 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2637, 4},
    /*   19 */ {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2638, 5},
    /*   20 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2643, 6},
    /*   21 */ {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2644, 7},
    /*   22 */ {I_ADC, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6559, 8},
    /*   23 */ {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6559, 0},
    /*   24 */ {I_ADC, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4868, 8},
    /*   25 */ {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4868, 0},
    /*   26 */ {I_ADC, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4873, 9},
    /*   27 */ {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4873, 5},
    /*   28 */ {I_ADC, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4878, 10},
    /*   29 */ {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4878, 7},
    /*   30 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+720, 11},
    /*   31 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+727, 12},
    /*   32 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+734, 13},
    /*   33 */ {I_ADC, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6563, 8},
    /*   34 */ {I_ADC, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4883, 8},
    /*   35 */ {I_ADC, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4888, 9},
    /*   36 */ {I_ADC, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4893, 10},
    /*   37 */ {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2649, 3},
    /*   38 */ {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2655, 3},
    /*   39 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+741, 3},
    /*   40 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+748, 4},
    /*   41 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+755, 6},
    /*   42 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+741, 3},
    /*   43 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+748, 4},
    /*   44 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4898, 3},
    /*   45 */ {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4899, 0},
    /*   46 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2661, 3},
    /*   47 */ {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2662, 0},
    /*   48 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2667, 4},
    /*   49 */ {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2668, 5},
    /*   50 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2673, 6},
    /*   51 */ {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2674, 7},
    /*   52 */ {I_ADD, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6567, 8},
    /*   53 */ {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6567, 0},
    /*   54 */ {I_ADD, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4903, 8},
    /*   55 */ {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4903, 0},
    /*   56 */ {I_ADD, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4908, 9},
    /*   57 */ {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4908, 5},
    /*   58 */ {I_ADD, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4913, 10},
    /*   59 */ {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4913, 7},
    /*   60 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+762, 11},
    /*   61 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+769, 12},
    /*   62 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+776, 13},
    /*   63 */ {I_ADD, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6571, 8},
    /*   64 */ {I_ADD, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4918, 8},
    /*   65 */ {I_ADD, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4923, 9},
    /*   66 */ {I_ADD, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4928, 10},
    /*   67 */ {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2679, 3},
    /*   68 */ {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2685, 3},
    /*   69 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+783, 3},
    /*   70 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+790, 4},
    /*   71 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+797, 6},
    /*   72 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2679, 3},
    /*   73 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2685, 3},
    /*   74 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+783, 3},
    /*   75 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+790, 4},
    /*   76 */ {I_AND, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4933, 3},
    /*   77 */ {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4934, 0},
    /*   78 */ {I_AND, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2691, 3},
    /*   79 */ {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2692, 0},
    /*   80 */ {I_AND, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2697, 4},
    /*   81 */ {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2698, 5},
    /*   82 */ {I_AND, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2703, 6},
    /*   83 */ {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2704, 7},
    /*   84 */ {I_AND, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6575, 8},
    /*   85 */ {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6575, 0},
    /*   86 */ {I_AND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4938, 8},
    /*   87 */ {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4938, 0},
    /*   88 */ {I_AND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4943, 9},
    /*   89 */ {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4943, 5},
    /*   90 */ {I_AND, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4948, 10},
    /*   91 */ {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4948, 7},
    /*   92 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+804, 11},
    /*   93 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+811, 12},
    /*   94 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+818, 13},
    /*   95 */ {I_AND, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6579, 8},
    /*   96 */ {I_AND, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4953, 8},
    /*   97 */ {I_AND, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4958, 9},
    /*   98 */ {I_AND, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4963, 10},
    /*   99 */ {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2709, 3},
    /*  100 */ {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2715, 3},
    /*  101 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+825, 3},
    /*  102 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+832, 4},
    /*  103 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+839, 6},
    /*  104 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2709, 3},
    /*  105 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2715, 3},
    /*  106 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+825, 3},
    /*  107 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+832, 4},
    /*  108 */ {I_ARPL, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6583, 14},
    /*  109 */ {I_ARPL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6583, 15},
    /*  110 */ {I_BOUND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4968, 16},
    /*  111 */ {I_BOUND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4973, 17},
    /*  112 */ {I_BSF, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+846, 9},
    /*  113 */ {I_BSF, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+846, 5},
    /*  114 */ {I_BSF, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+853, 9},
    /*  115 */ {I_BSF, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+853, 5},
    /*  116 */ {I_BSF, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+860, 10},
    /*  117 */ {I_BSF, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+860, 7},
    /*  118 */ {I_BSR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+867, 9},
    /*  119 */ {I_BSR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+867, 5},
    /*  120 */ {I_BSR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+874, 9},
    /*  121 */ {I_BSR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+874, 5},
    /*  122 */ {I_BSR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+881, 10},
    /*  123 */ {I_BSR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+881, 7},
    /*  124 */ {I_BSWAP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2721, 18},
    /*  125 */ {I_BSWAP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2727, 7},
    /*  126 */ {I_BT, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2733, 9},
    /*  127 */ {I_BT, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2733, 5},
    /*  128 */ {I_BT, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2739, 9},
    /*  129 */ {I_BT, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2739, 5},
    /*  130 */ {I_BT, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2745, 10},
    /*  131 */ {I_BT, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2745, 7},
    /*  132 */ {I_BT, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+888, 5},
    /*  133 */ {I_BT, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+895, 5},
    /*  134 */ {I_BT, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+902, 7},
    /*  135 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+909, 4},
    /*  136 */ {I_BTC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+910, 5},
    /*  137 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+916, 4},
    /*  138 */ {I_BTC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+917, 5},
    /*  139 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+923, 6},
    /*  140 */ {I_BTC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+924, 7},
    /*  141 */ {I_BTC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+72, 12},
    /*  142 */ {I_BTC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+80, 12},
    /*  143 */ {I_BTC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+88, 13},
    /*  144 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+930, 4},
    /*  145 */ {I_BTR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+931, 5},
    /*  146 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+937, 4},
    /*  147 */ {I_BTR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+938, 5},
    /*  148 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+944, 6},
    /*  149 */ {I_BTR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+945, 7},
    /*  150 */ {I_BTR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+96, 12},
    /*  151 */ {I_BTR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+104, 12},
    /*  152 */ {I_BTR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+112, 13},
    /*  153 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+951, 4},
    /*  154 */ {I_BTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+952, 5},
    /*  155 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+958, 4},
    /*  156 */ {I_BTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+959, 5},
    /*  157 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+965, 6},
    /*  158 */ {I_BTS, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+966, 7},
    /*  159 */ {I_BTS, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+120, 12},
    /*  160 */ {I_BTS, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+128, 12},
    /*  161 */ {I_BTS, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+136, 13},
    /*  162 */ {I_CALL, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4978, 19},
    /*  163 */ {I_CALL, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4983, 20},
    /*  164 */ {I_CALL, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4988, 21},
    /*  165 */ {I_CALL, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4993, 22},
    /*  166 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2769, 1},
    /*  167 */ {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2775, 1},
    /*  168 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2775, 1},
    /*  169 */ {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2781, 17},
    /*  170 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2781, 17},
    /*  171 */ {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4998, 1},
    /*  172 */ {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5003, 7},
    /*  173 */ {I_CALL, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5008, 0},
    /*  174 */ {I_CALL, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5013, 5},
    /*  175 */ {I_CALL, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5003, 7},
    /*  176 */ {I_CALL, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5018, 19},
    /*  177 */ {I_CALL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5023, 20},
    /*  178 */ {I_CALL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5028, 21},
    /*  179 */ {I_CALL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5033, 22},
    /*  180 */ {I_CBW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6587, 0},
    /*  181 */ {I_CDQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6591, 5},
    /*  182 */ {I_CDQE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6595, 7},
    /*  183 */ {I_CLC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7557, 0},
    /*  184 */ {I_CLD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7560, 0},
    /*  185 */ {I_CLI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5750, 0},
    /*  186 */ {I_CLTS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6599, 23},
    /*  187 */ {I_CMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7563, 0},
    /*  188 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6603, 8},
    /*  189 */ {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6603, 0},
    /*  190 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5038, 8},
    /*  191 */ {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5038, 0},
    /*  192 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5043, 9},
    /*  193 */ {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5043, 5},
    /*  194 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5048, 10},
    /*  195 */ {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5048, 7},
    /*  196 */ {I_CMP, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6607, 8},
    /*  197 */ {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6607, 0},
    /*  198 */ {I_CMP, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5053, 8},
    /*  199 */ {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5053, 0},
    /*  200 */ {I_CMP, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5058, 9},
    /*  201 */ {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5058, 5},
    /*  202 */ {I_CMP, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5063, 10},
    /*  203 */ {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5063, 7},
    /*  204 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2787, 0},
    /*  205 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2793, 5},
    /*  206 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2799, 7},
    /*  207 */ {I_CMP, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6611, 8},
    /*  208 */ {I_CMP, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5068, 8},
    /*  209 */ {I_CMP, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5073, 9},
    /*  210 */ {I_CMP, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5078, 10},
    /*  211 */ {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5083, 8},
    /*  212 */ {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5088, 8},
    /*  213 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2805, 8},
    /*  214 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2811, 9},
    /*  215 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2817, 10},
    /*  216 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5083, 8},
    /*  217 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5088, 8},
    /*  218 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2805, 8},
    /*  219 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2811, 9},
    /*  220 */ {I_CMPSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6615, 0},
    /*  221 */ {I_CMPSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5093, 5},
    /*  222 */ {I_CMPSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5098, 7},
    /*  223 */ {I_CMPSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5103, 0},
    /*  224 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2823, 24},
    /*  225 */ {I_CMPXCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2824, 25},
    /*  226 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+972, 24},
    /*  227 */ {I_CMPXCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+973, 25},
    /*  228 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+979, 24},
    /*  229 */ {I_CMPXCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+980, 25},
    /*  230 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+986, 6},
    /*  231 */ {I_CMPXCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+987, 7},
    /*  232 */ {I_CMPXCHG8B, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+993, 28},
    /*  233 */ {I_CMPXCHG16B, 1, {MEMORY|BITS128,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2841, 13},
    /*  234 */ {I_CPUID, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6619, 25},
    /*  235 */ {I_CQO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6623, 7},
    /*  236 */ {I_CWD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6627, 0},
    /*  237 */ {I_CWDE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6631, 5},
    /*  238 */ {I_DAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7566, 1},
    /*  239 */ {I_DAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7569, 1},
    /*  240 */ {I_DEC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6635, 1},
    /*  241 */ {I_DEC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6639, 17},
    /*  242 */ {I_DEC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5113, 11},
    /*  243 */ {I_DEC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2847, 11},
    /*  244 */ {I_DEC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2853, 12},
    /*  245 */ {I_DEC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2859, 13},
    /*  246 */ {I_DIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6643, 0},
    /*  247 */ {I_DIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5118, 0},
    /*  248 */ {I_DIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5123, 5},
    /*  249 */ {I_DIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5128, 7},
    /*  250 */ {I_EMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6647, 29},
    /*  251 */ {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5133, 30},
    /*  252 */ {I_EQU, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7628, 0},
    /*  253 */ {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7628, 0},
    /*  254 */ {I_F2XM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6651, 31},
    /*  255 */ {I_FABS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6655, 31},
    /*  256 */ {I_FADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6659, 31},
    /*  257 */ {I_FADD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6663, 31},
    /*  258 */ {I_FADD, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5138, 31},
    /*  259 */ {I_FADD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5143, 31},
    /*  260 */ {I_FADD, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5138, 31},
    /*  261 */ {I_FADD, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5148, 31},
    /*  262 */ {I_FADDP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5153, 31},
    /*  263 */ {I_FADDP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5153, 31},
    /*  264 */ {I_FBLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6671, 31},
    /*  265 */ {I_FBLD, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6671, 31},
    /*  266 */ {I_FBSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6675, 31},
    /*  267 */ {I_FBSTP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6675, 31},
    /*  268 */ {I_FCHS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6679, 31},
    /*  269 */ {I_FCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5158, 31},
    /*  270 */ {I_FCMOVB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5163, 32},
    /*  271 */ {I_FCMOVB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5168, 32},
    /*  272 */ {I_FCMOVBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5173, 32},
    /*  273 */ {I_FCMOVBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5178, 32},
    /*  274 */ {I_FCMOVE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5183, 32},
    /*  275 */ {I_FCMOVE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5188, 32},
    /*  276 */ {I_FCMOVNB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5193, 32},
    /*  277 */ {I_FCMOVNB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5198, 32},
    /*  278 */ {I_FCMOVNBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5203, 32},
    /*  279 */ {I_FCMOVNBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5208, 32},
    /*  280 */ {I_FCMOVNE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5213, 32},
    /*  281 */ {I_FCMOVNE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5218, 32},
    /*  282 */ {I_FCMOVNU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5223, 32},
    /*  283 */ {I_FCMOVNU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5228, 32},
    /*  284 */ {I_FCMOVU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5233, 32},
    /*  285 */ {I_FCMOVU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5238, 32},
    /*  286 */ {I_FCOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6715, 31},
    /*  287 */ {I_FCOM, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6719, 31},
    /*  288 */ {I_FCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5243, 31},
    /*  289 */ {I_FCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5248, 31},
    /*  290 */ {I_FCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5253, 32},
    /*  291 */ {I_FCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5258, 32},
    /*  292 */ {I_FCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5263, 32},
    /*  293 */ {I_FCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5268, 32},
    /*  294 */ {I_FCOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6735, 31},
    /*  295 */ {I_FCOMP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6739, 31},
    /*  296 */ {I_FCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5273, 31},
    /*  297 */ {I_FCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5278, 31},
    /*  298 */ {I_FCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6747, 31},
    /*  299 */ {I_FCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6751, 33},
    /*  300 */ {I_FDECSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6755, 31},
    /*  301 */ {I_FDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5283, 31},
    /*  302 */ {I_FDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6759, 31},
    /*  303 */ {I_FDIV, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6763, 31},
    /*  304 */ {I_FDIV, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5288, 31},
    /*  305 */ {I_FDIV, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5293, 31},
    /*  306 */ {I_FDIV, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5288, 31},
    /*  307 */ {I_FDIV, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5298, 31},
    /*  308 */ {I_FDIVP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5303, 31},
    /*  309 */ {I_FDIVP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5303, 31},
    /*  310 */ {I_FDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6771, 31},
    /*  311 */ {I_FDIVR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6775, 31},
    /*  312 */ {I_FDIVR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5308, 31},
    /*  313 */ {I_FDIVR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5308, 31},
    /*  314 */ {I_FDIVR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5313, 31},
    /*  315 */ {I_FDIVR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5318, 31},
    /*  316 */ {I_FDIVRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5323, 31},
    /*  317 */ {I_FDIVRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5323, 31},
    /*  318 */ {I_FEMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6783, 34},
    /*  319 */ {I_FENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5328, 31},
    /*  320 */ {I_FFREE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5333, 31},
    /*  321 */ {I_FFREE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6787, 31},
    /*  322 */ {I_FFREEP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5338, 35},
    /*  323 */ {I_FFREEP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6791, 35},
    /*  324 */ {I_FIADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6795, 31},
    /*  325 */ {I_FIADD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6799, 31},
    /*  326 */ {I_FICOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6803, 31},
    /*  327 */ {I_FICOM, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6807, 31},
    /*  328 */ {I_FICOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6811, 31},
    /*  329 */ {I_FICOMP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6815, 31},
    /*  330 */ {I_FIDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6819, 31},
    /*  331 */ {I_FIDIV, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6823, 31},
    /*  332 */ {I_FIDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6827, 31},
    /*  333 */ {I_FIDIVR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6831, 31},
    /*  334 */ {I_FILD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6835, 31},
    /*  335 */ {I_FILD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6839, 31},
    /*  336 */ {I_FILD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6843, 31},
    /*  337 */ {I_FIMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6847, 31},
    /*  338 */ {I_FIMUL, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6851, 31},
    /*  339 */ {I_FINCSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6855, 31},
    /*  340 */ {I_FINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5343, 31},
    /*  341 */ {I_FIST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6859, 31},
    /*  342 */ {I_FIST, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6863, 31},
    /*  343 */ {I_FISTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6867, 31},
    /*  344 */ {I_FISTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6871, 31},
    /*  345 */ {I_FISTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6875, 31},
    /*  346 */ {I_FISTTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6879, 36},
    /*  347 */ {I_FISTTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6883, 36},
    /*  348 */ {I_FISTTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6887, 36},
    /*  349 */ {I_FISUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6891, 31},
    /*  350 */ {I_FISUB, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6895, 31},
    /*  351 */ {I_FISUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6899, 31},
    /*  352 */ {I_FISUBR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6903, 31},
    /*  353 */ {I_FLD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6907, 31},
    /*  354 */ {I_FLD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6911, 31},
    /*  355 */ {I_FLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6915, 31},
    /*  356 */ {I_FLD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5348, 31},
    /*  357 */ {I_FLD1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6923, 31},
    /*  358 */ {I_FLDCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6927, 37},
    /*  359 */ {I_FLDENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6931, 31},
    /*  360 */ {I_FLDL2E, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6935, 31},
    /*  361 */ {I_FLDL2T, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6939, 31},
    /*  362 */ {I_FLDLG2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6943, 31},
    /*  363 */ {I_FLDLN2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6947, 31},
    /*  364 */ {I_FLDPI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6951, 31},
    /*  365 */ {I_FLDZ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6955, 31},
    /*  366 */ {I_FMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6959, 31},
    /*  367 */ {I_FMUL, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6963, 31},
    /*  368 */ {I_FMUL, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5353, 31},
    /*  369 */ {I_FMUL, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5353, 31},
    /*  370 */ {I_FMUL, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5358, 31},
    /*  371 */ {I_FMUL, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5363, 31},
    /*  372 */ {I_FMULP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5368, 31},
    /*  373 */ {I_FMULP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5368, 31},
    /*  374 */ {I_FNCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5159, 31},
    /*  375 */ {I_FNDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5284, 31},
    /*  376 */ {I_FNENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5329, 31},
    /*  377 */ {I_FNINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5344, 31},
    /*  378 */ {I_FNOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6971, 31},
    /*  379 */ {I_FNSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5374, 31},
    /*  380 */ {I_FNSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5384, 37},
    /*  381 */ {I_FNSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5389, 31},
    /*  382 */ {I_FNSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5399, 37},
    /*  383 */ {I_FNSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5404, 38},
    /*  384 */ {I_FPATAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6975, 31},
    /*  385 */ {I_FPREM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6979, 31},
    /*  386 */ {I_FPREM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6983, 33},
    /*  387 */ {I_FPTAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6987, 31},
    /*  388 */ {I_FRNDINT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6991, 31},
    /*  389 */ {I_FRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6995, 31},
    /*  390 */ {I_FSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5373, 31},
    /*  391 */ {I_FSCALE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6999, 31},
    /*  392 */ {I_FSETPM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7003, 38},
    /*  393 */ {I_FSIN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7007, 33},
    /*  394 */ {I_FSINCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7011, 33},
    /*  395 */ {I_FSQRT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7015, 31},
    /*  396 */ {I_FST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7019, 31},
    /*  397 */ {I_FST, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7023, 31},
    /*  398 */ {I_FST, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5378, 31},
    /*  399 */ {I_FSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5383, 37},
    /*  400 */ {I_FSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5388, 31},
    /*  401 */ {I_FSTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7031, 31},
    /*  402 */ {I_FSTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7035, 31},
    /*  403 */ {I_FSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7039, 31},
    /*  404 */ {I_FSTP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5393, 31},
    /*  405 */ {I_FSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5398, 37},
    /*  406 */ {I_FSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5403, 38},
    /*  407 */ {I_FSUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7047, 31},
    /*  408 */ {I_FSUB, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7051, 31},
    /*  409 */ {I_FSUB, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5408, 31},
    /*  410 */ {I_FSUB, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5408, 31},
    /*  411 */ {I_FSUB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5413, 31},
    /*  412 */ {I_FSUB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5418, 31},
    /*  413 */ {I_FSUBP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5423, 31},
    /*  414 */ {I_FSUBP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5423, 31},
    /*  415 */ {I_FSUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7059, 31},
    /*  416 */ {I_FSUBR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7063, 31},
    /*  417 */ {I_FSUBR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5428, 31},
    /*  418 */ {I_FSUBR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5428, 31},
    /*  419 */ {I_FSUBR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5433, 31},
    /*  420 */ {I_FSUBR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5438, 31},
    /*  421 */ {I_FSUBRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5443, 31},
    /*  422 */ {I_FSUBRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5443, 31},
    /*  423 */ {I_FTST, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7071, 31},
    /*  424 */ {I_FUCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5448, 33},
    /*  425 */ {I_FUCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5453, 33},
    /*  426 */ {I_FUCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5458, 32},
    /*  427 */ {I_FUCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5463, 32},
    /*  428 */ {I_FUCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5468, 32},
    /*  429 */ {I_FUCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5473, 32},
    /*  430 */ {I_FUCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5478, 33},
    /*  431 */ {I_FUCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5483, 33},
    /*  432 */ {I_FUCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7091, 33},
    /*  433 */ {I_FXAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7095, 31},
    /*  434 */ {I_FXCH, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5488, 31},
    /*  435 */ {I_FXCH, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5488, 31},
    /*  436 */ {I_FXCH, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5493, 31},
    /*  437 */ {I_FXTRACT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7103, 31},
    /*  438 */ {I_FYL2X, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7107, 31},
    /*  439 */ {I_FYL2XP1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7111, 31},
    /*  440 */ {I_HLT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7572, 39},
    /*  441 */ {I_IDIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7115, 0},
    /*  442 */ {I_IDIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5498, 0},
    /*  443 */ {I_IDIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5503, 5},
    /*  444 */ {I_IDIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5508, 7},
    /*  445 */ {I_IMUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7119, 0},
    /*  446 */ {I_IMUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5513, 0},
    /*  447 */ {I_IMUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5518, 5},
    /*  448 */ {I_IMUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5523, 7},
    /*  449 */ {I_IMUL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2865, 9},
    /*  450 */ {I_IMUL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2865, 5},
    /*  451 */ {I_IMUL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2871, 9},
    /*  452 */ {I_IMUL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2871, 5},
    /*  453 */ {I_IMUL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2877, 10},
    /*  454 */ {I_IMUL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2877, 7},
    /*  455 */ {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2883, 43},
    /*  456 */ {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+2889, 44},
    /*  457 */ {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2883, 30},
    /*  458 */ {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+2889, 30},
    /*  459 */ {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2895, 45},
    /*  460 */ {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2901, 9},
    /*  461 */ {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2895, 5},
    /*  462 */ {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2901, 5},
    /*  463 */ {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2907, 46},
    /*  464 */ {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2913, 46},
    /*  465 */ {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2907, 7},
    /*  466 */ {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2913, 7},
    /*  467 */ {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2925, 30},
    /*  468 */ {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2931, 30},
    /*  469 */ {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2937, 5},
    /*  470 */ {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2943, 5},
    /*  471 */ {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2949, 7},
    /*  472 */ {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2955, 7},
    /*  473 */ {I_IN, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7123, 47},
    /*  474 */ {I_IN, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5528, 47},
    /*  475 */ {I_IN, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5533, 48},
    /*  476 */ {I_IN, 2, {REG_AL,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7578, 0},
    /*  477 */ {I_IN, 2, {REG_AX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7127, 0},
    /*  478 */ {I_IN, 2, {REG_EAX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7131, 5},
    /*  479 */ {I_INC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7135, 1},
    /*  480 */ {I_INC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7139, 17},
    /*  481 */ {I_INC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5538, 11},
    /*  482 */ {I_INC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2961, 11},
    /*  483 */ {I_INC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2967, 12},
    /*  484 */ {I_INC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2973, 13},
    /*  485 */ {I_INSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7581, 30},
    /*  486 */ {I_INSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7143, 5},
    /*  487 */ {I_INSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7147, 30},
    /*  488 */ {I_INT, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7151, 47},
    /*  489 */ {I_INT1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7575, 5},
    /*  490 */ {I_INT3, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7584, 0},
    /*  491 */ {I_INTO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7587, 1},
    /*  492 */ {I_INVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7155, 49},
    /*  493 */ {I_INVPCID, 2, {REG_GPR|BITS32,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1000, 50},
    /*  494 */ {I_INVPCID, 2, {REG_GPR|BITS64,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+1000, 51},
    /*  495 */ {I_INVLPG, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5543, 49},
    /*  496 */ {I_INVLPGA, 2, {REG_AX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2979, 52},
    /*  497 */ {I_INVLPGA, 2, {REG_EAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2985, 53},
    /*  498 */ {I_INVLPGA, 2, {REG_RAX,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1007, 54},
    /*  499 */ {I_INVLPGA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2986, 53},
    /*  500 */ {I_IRET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7159, 0},
    /*  501 */ {I_IRETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7163, 5},
    /*  502 */ {I_IRETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7167, 7},
    /*  503 */ {I_IRETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7171, 0},
    /*  504 */ {I_JCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5548, 1},
    /*  505 */ {I_JECXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5553, 5},
    /*  506 */ {I_JRCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2991, 7},
    /*  507 */ {I_JMP, 1, {IMMEDIATE|SHORT,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5559, 0},
    /*  508 */ {I_JMP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5563, 19},
    /*  509 */ {I_JMP, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5568, 20},
    /*  510 */ {I_JMP, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5573, 21},
    /*  511 */ {I_JMP, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5578, 22},
    /*  512 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3015, 1},
    /*  513 */ {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3021, 1},
    /*  514 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3021, 1},
    /*  515 */ {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3027, 17},
    /*  516 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3027, 17},
    /*  517 */ {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5583, 1},
    /*  518 */ {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5588, 7},
    /*  519 */ {I_JMP, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5593, 0},
    /*  520 */ {I_JMP, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5598, 5},
    /*  521 */ {I_JMP, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5588, 7},
    /*  522 */ {I_JMP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5603, 19},
    /*  523 */ {I_JMP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5608, 20},
    /*  524 */ {I_JMP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5613, 21},
    /*  525 */ {I_JMP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5618, 22},
    /*  526 */ {I_JMPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1014, 55},
    /*  527 */ {I_JMPE, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1021, 55},
    /*  528 */ {I_JMPE, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1028, 55},
    /*  529 */ {I_JMPE, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1035, 55},
    /*  530 */ {I_JMPE, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1042, 55},
    /*  531 */ {I_LAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7590, 0},
    /*  532 */ {I_LAR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3033, 56},
    /*  533 */ {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3033, 57},
    /*  534 */ {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3033, 58},
    /*  535 */ {I_LAR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3039, 60},
    /*  536 */ {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3039, 58},
    /*  537 */ {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3039, 58},
    /*  538 */ {I_LAR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3045, 61},
    /*  539 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3045, 59},
    /*  540 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3045, 59},
    /*  541 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3045, 59},
    /*  542 */ {I_LDS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5623, 1},
    /*  543 */ {I_LDS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5628, 17},
    /*  544 */ {I_LEA, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5633, 62},
    /*  545 */ {I_LEA, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5638, 63},
    /*  546 */ {I_LEA, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5643, 64},
    /*  547 */ {I_LEAVE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5890, 30},
    /*  548 */ {I_LES, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5648, 1},
    /*  549 */ {I_LES, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5653, 17},
    /*  550 */ {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3051, 54},
    /*  551 */ {I_LFS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3057, 5},
    /*  552 */ {I_LFS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3063, 5},
    /*  553 */ {I_LFS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3069, 7},
    /*  554 */ {I_LGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5658, 23},
    /*  555 */ {I_LGS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3075, 5},
    /*  556 */ {I_LGS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3081, 5},
    /*  557 */ {I_LGS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3087, 7},
    /*  558 */ {I_LIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5663, 23},
    /*  559 */ {I_LLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5668, 65},
    /*  560 */ {I_LLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5668, 65},
    /*  561 */ {I_LLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5668, 65},
    /*  562 */ {I_LMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5673, 23},
    /*  563 */ {I_LMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5673, 23},
    /*  564 */ {I_LMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5673, 23},
    /*  565 */ {I_LODSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7593, 0},
    /*  566 */ {I_LODSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7183, 5},
    /*  567 */ {I_LODSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7187, 7},
    /*  568 */ {I_LODSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7191, 0},
    /*  569 */ {I_LOOP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5678, 0},
    /*  570 */ {I_LOOP, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5683, 1},
    /*  571 */ {I_LOOP, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5688, 5},
    /*  572 */ {I_LOOP, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5693, 7},
    /*  573 */ {I_LOOPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5698, 0},
    /*  574 */ {I_LOOPE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5703, 1},
    /*  575 */ {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5708, 5},
    /*  576 */ {I_LOOPE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5713, 7},
    /*  577 */ {I_LOOPNE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5718, 0},
    /*  578 */ {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5723, 1},
    /*  579 */ {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5728, 5},
    /*  580 */ {I_LOOPNE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5733, 7},
    /*  581 */ {I_LOOPNZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5718, 0},
    /*  582 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5723, 1},
    /*  583 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5728, 5},
    /*  584 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5733, 7},
    /*  585 */ {I_LOOPZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5698, 0},
    /*  586 */ {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5703, 1},
    /*  587 */ {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5708, 5},
    /*  588 */ {I_LOOPZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5713, 7},
    /*  589 */ {I_LSL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3093, 56},
    /*  590 */ {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3093, 57},
    /*  591 */ {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3093, 58},
    /*  592 */ {I_LSL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3099, 60},
    /*  593 */ {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3099, 58},
    /*  594 */ {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3099, 58},
    /*  595 */ {I_LSL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3105, 61},
    /*  596 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3105, 59},
    /*  597 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3105, 59},
    /*  598 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3105, 59},
    /*  599 */ {I_LSS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3111, 5},
    /*  600 */ {I_LSS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3117, 5},
    /*  601 */ {I_LSS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3123, 7},
    /*  602 */ {I_LTR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5738, 65},
    /*  603 */ {I_LTR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5738, 65},
    /*  604 */ {I_LTR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5738, 65},
    /*  605 */ {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3129, 54},
    /*  606 */ {I_MONITOR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5743, 67},
    /*  607 */ {I_MONITORX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5748, 69},
    /*  608 */ {I_MOV, 2, {MEMORY,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5769, 70},
    /*  609 */ {I_MOV, 2, {REG_GPR|BITS16,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5753, 0},
    /*  610 */ {I_MOV, 2, {REG_GPR|BITS32,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5758, 5},
    /*  611 */ {I_MOV, 2, {RM_GPR|BITS64,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5768, 7},
    /*  612 */ {I_MOV, 2, {REG_SREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5789, 70},
    /*  613 */ {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5778, 0},
    /*  614 */ {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5783, 5},
    /*  615 */ {I_MOV, 2, {REG_SREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5788, 7},
    /*  616 */ {I_MOV, 2, {REG_AL,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+7195, 8},
    /*  617 */ {I_MOV, 2, {REG_AX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+5793, 8},
    /*  618 */ {I_MOV, 2, {REG_EAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+5798, 9},
    /*  619 */ {I_MOV, 2, {REG_RAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+5803, 10},
    /*  620 */ {I_MOV, 2, {MEM_OFFS,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7199, 74},
    /*  621 */ {I_MOV, 2, {MEM_OFFS,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5808, 74},
    /*  622 */ {I_MOV, 2, {MEM_OFFS,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5813, 75},
    /*  623 */ {I_MOV, 2, {MEM_OFFS,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5818, 76},
    /*  624 */ {I_MOV, 2, {REG_GPR|BITS32,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3135, 77},
    /*  625 */ {I_MOV, 2, {REG_GPR|BITS64,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3141, 78},
    /*  626 */ {I_MOV, 2, {REG_CREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3147, 77},
    /*  627 */ {I_MOV, 2, {REG_CREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3153, 78},
    /*  628 */ {I_MOV, 2, {REG_GPR|BITS32,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3160, 77},
    /*  629 */ {I_MOV, 2, {REG_GPR|BITS64,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3159, 78},
    /*  630 */ {I_MOV, 2, {REG_DREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3166, 77},
    /*  631 */ {I_MOV, 2, {REG_DREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3165, 78},
    /*  632 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5833, 8},
    /*  633 */ {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5834, 0},
    /*  634 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3171, 8},
    /*  635 */ {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3172, 0},
    /*  636 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3177, 9},
    /*  637 */ {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3178, 5},
    /*  638 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3183, 10},
    /*  639 */ {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3184, 7},
    /*  640 */ {I_MOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7203, 8},
    /*  641 */ {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7203, 0},
    /*  642 */ {I_MOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5838, 8},
    /*  643 */ {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5838, 0},
    /*  644 */ {I_MOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5843, 9},
    /*  645 */ {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5843, 5},
    /*  646 */ {I_MOV, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5848, 10},
    /*  647 */ {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5848, 7},
    /*  648 */ {I_MOV, 2, {REG_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7207, 8},
    /*  649 */ {I_MOV, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5853, 8},
    /*  650 */ {I_MOV, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5858, 9},
    /*  651 */ {I_MOV, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5868, 10},
    /*  652 */ {I_MOV, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3189, 8},
    /*  653 */ {I_MOV, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1077, 8},
    /*  654 */ {I_MOV, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1084, 9},
    /*  655 */ {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1091, 10},
    /*  656 */ {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1091, 7},
    /*  657 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3189, 8},
    /*  658 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1077, 8},
    /*  659 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1084, 9},
    /*  660 */ {I_MOVD, 2, {MMXREG,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3195, 80},
    /*  661 */ {I_MOVD, 2, {RM_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3201, 80},
    /*  662 */ {I_MOVQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+3207, 82},
    /*  663 */ {I_MOVQ, 2, {RM_MMX,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3213, 82},
    /*  664 */ {I_MOVQ, 2, {MMXREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1098, 83},
    /*  665 */ {I_MOVQ, 2, {RM_GPR|BITS64,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+1105, 83},
    /*  666 */ {I_MOVSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+205, 0},
    /*  667 */ {I_MOVSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7211, 5},
    /*  668 */ {I_MOVSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7215, 7},
    /*  669 */ {I_MOVSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7219, 0},
    /*  670 */ {I_MOVSX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3219, 48},
    /*  671 */ {I_MOVSX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3219, 5},
    /*  672 */ {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3225, 5},
    /*  673 */ {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3231, 5},
    /*  674 */ {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3237, 7},
    /*  675 */ {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3243, 7},
    /*  676 */ {I_MOVZX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3249, 48},
    /*  677 */ {I_MOVZX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3249, 5},
    /*  678 */ {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3255, 5},
    /*  679 */ {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3261, 5},
    /*  680 */ {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3267, 7},
    /*  681 */ {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3273, 7},
    /*  682 */ {I_MUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7223, 0},
    /*  683 */ {I_MUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5873, 0},
    /*  684 */ {I_MUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5878, 5},
    /*  685 */ {I_MUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5883, 7},
    /*  686 */ {I_MWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5888, 67},
    /*  687 */ {I_MWAITX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5893, 69},
    /*  688 */ {I_NEG, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5898, 11},
    /*  689 */ {I_NEG, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3279, 11},
    /*  690 */ {I_NEG, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3285, 12},
    /*  691 */ {I_NEG, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3291, 13},
    /*  692 */ {I_NOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5903, 0},
    /*  693 */ {I_NOP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3297, 84},
    /*  694 */ {I_NOP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3303, 84},
    /*  695 */ {I_NOP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3309, 7},
    /*  696 */ {I_NOT, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5908, 11},
    /*  697 */ {I_NOT, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3315, 11},
    /*  698 */ {I_NOT, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3321, 12},
    /*  699 */ {I_NOT, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3327, 13},
    /*  700 */ {I_OR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5913, 3},
    /*  701 */ {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5914, 0},
    /*  702 */ {I_OR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3333, 3},
    /*  703 */ {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3334, 0},
    /*  704 */ {I_OR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3339, 4},
    /*  705 */ {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3340, 5},
    /*  706 */ {I_OR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3345, 6},
    /*  707 */ {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3346, 7},
    /*  708 */ {I_OR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7227, 8},
    /*  709 */ {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7227, 0},
    /*  710 */ {I_OR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5918, 8},
    /*  711 */ {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5918, 0},
    /*  712 */ {I_OR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5923, 9},
    /*  713 */ {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5923, 5},
    /*  714 */ {I_OR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5928, 10},
    /*  715 */ {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5928, 7},
    /*  716 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1112, 11},
    /*  717 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1119, 12},
    /*  718 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1126, 13},
    /*  719 */ {I_OR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7231, 8},
    /*  720 */ {I_OR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5933, 8},
    /*  721 */ {I_OR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5938, 9},
    /*  722 */ {I_OR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5943, 10},
    /*  723 */ {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3351, 3},
    /*  724 */ {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3357, 3},
    /*  725 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1133, 3},
    /*  726 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1140, 4},
    /*  727 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1147, 6},
    /*  728 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3351, 3},
    /*  729 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3357, 3},
    /*  730 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1133, 3},
    /*  731 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1140, 4},
    /*  732 */ {I_OUT, 2, {IMMEDIATE,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7235, 47},
    /*  733 */ {I_OUT, 2, {IMMEDIATE,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5948, 47},
    /*  734 */ {I_OUT, 2, {IMMEDIATE,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5953, 48},
    /*  735 */ {I_OUT, 2, {REG_DX,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7596, 0},
    /*  736 */ {I_OUT, 2, {REG_DX,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7239, 0},
    /*  737 */ {I_OUT, 2, {REG_DX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7243, 5},
    /*  738 */ {I_OUTSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7599, 30},
    /*  739 */ {I_OUTSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7247, 5},
    /*  740 */ {I_OUTSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7251, 30},
    /*  741 */ {I_PACKSSDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1154, 82},
    /*  742 */ {I_PACKSSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1161, 82},
    /*  743 */ {I_PACKUSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1168, 82},
    /*  744 */ {I_PADDB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1175, 82},
    /*  745 */ {I_PADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1182, 82},
    /*  746 */ {I_PADDSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1189, 82},
    /*  747 */ {I_PADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1196, 82},
    /*  748 */ {I_PADDUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1203, 82},
    /*  749 */ {I_PADDUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1210, 82},
    /*  750 */ {I_PADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1217, 82},
    /*  751 */ {I_PAND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1224, 82},
    /*  752 */ {I_PANDN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1231, 82},
    /*  753 */ {I_PAUSE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7255, 0},
    /*  754 */ {I_PAVGUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+144, 85},
    /*  755 */ {I_PCMPEQB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1238, 82},
    /*  756 */ {I_PCMPEQD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1245, 82},
    /*  757 */ {I_PCMPEQW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1252, 82},
    /*  758 */ {I_PCMPGTB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1259, 82},
    /*  759 */ {I_PCMPGTD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1266, 82},
    /*  760 */ {I_PCMPGTW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1273, 82},
    /*  761 */ {I_PF2ID, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+152, 85},
    /*  762 */ {I_PFACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+160, 85},
    /*  763 */ {I_PFADD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+168, 85},
    /*  764 */ {I_PFCMPEQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+176, 85},
    /*  765 */ {I_PFCMPGE, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+184, 85},
    /*  766 */ {I_PFCMPGT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+192, 85},
    /*  767 */ {I_PFMAX, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+200, 85},
    /*  768 */ {I_PFMIN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+208, 85},
    /*  769 */ {I_PFMUL, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+216, 85},
    /*  770 */ {I_PFRCP, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+224, 85},
    /*  771 */ {I_PFRCPIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+232, 85},
    /*  772 */ {I_PFRCPIT2, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+240, 85},
    /*  773 */ {I_PFRSQIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+248, 85},
    /*  774 */ {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+256, 85},
    /*  775 */ {I_PFSUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+264, 85},
    /*  776 */ {I_PFSUBR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+272, 85},
    /*  777 */ {I_PI2FD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+280, 85},
    /*  778 */ {I_PMADDWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1280, 82},
    /*  779 */ {I_PMULHRWA, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+288, 85},
    /*  780 */ {I_PMULHW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1287, 82},
    /*  781 */ {I_PMULLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1294, 82},
    /*  782 */ {I_POP, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7259, 0},
    /*  783 */ {I_POP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7263, 17},
    /*  784 */ {I_POP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7267, 7},
    /*  785 */ {I_POP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5958, 0},
    /*  786 */ {I_POP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5963, 17},
    /*  787 */ {I_POP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5968, 7},
    /*  788 */ {I_POP, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+581, 1},
    /*  789 */ {I_POP, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7605, 1},
    /*  790 */ {I_POP, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7608, 1},
    /*  791 */ {I_POP, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7271, 5},
    /*  792 */ {I_POP, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7275, 5},
    /*  793 */ {I_POPA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7279, 16},
    /*  794 */ {I_POPAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7283, 17},
    /*  795 */ {I_POPAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7287, 16},
    /*  796 */ {I_POPF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7291, 0},
    /*  797 */ {I_POPFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7295, 17},
    /*  798 */ {I_POPFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7295, 7},
    /*  799 */ {I_POPFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7299, 0},
    /*  800 */ {I_POR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1301, 82},
    /*  801 */ {I_PREFETCH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5973, 85},
    /*  802 */ {I_PREFETCHW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5978, 85},
    /*  803 */ {I_PSLLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1308, 82},
    /*  804 */ {I_PSLLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1315, 29},
    /*  805 */ {I_PSLLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1322, 82},
    /*  806 */ {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1329, 29},
    /*  807 */ {I_PSLLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1336, 82},
    /*  808 */ {I_PSLLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1343, 29},
    /*  809 */ {I_PSRAD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1350, 82},
    /*  810 */ {I_PSRAD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1357, 29},
    /*  811 */ {I_PSRAW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1364, 82},
    /*  812 */ {I_PSRAW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1371, 29},
    /*  813 */ {I_PSRLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1378, 82},
    /*  814 */ {I_PSRLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1385, 29},
    /*  815 */ {I_PSRLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1392, 82},
    /*  816 */ {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1399, 29},
    /*  817 */ {I_PSRLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1406, 82},
    /*  818 */ {I_PSRLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1413, 29},
    /*  819 */ {I_PSUBB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1420, 82},
    /*  820 */ {I_PSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1427, 82},
    /*  821 */ {I_PSUBSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1434, 82},
    /*  822 */ {I_PSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1441, 82},
    /*  823 */ {I_PSUBUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1448, 82},
    /*  824 */ {I_PSUBUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1455, 82},
    /*  825 */ {I_PSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1462, 82},
    /*  826 */ {I_PUNPCKHBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1469, 82},
    /*  827 */ {I_PUNPCKHDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1476, 82},
    /*  828 */ {I_PUNPCKHWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1483, 82},
    /*  829 */ {I_PUNPCKLBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1490, 82},
    /*  830 */ {I_PUNPCKLDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1497, 82},
    /*  831 */ {I_PUNPCKLWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1504, 82},
    /*  832 */ {I_PUSH, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7303, 0},
    /*  833 */ {I_PUSH, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7307, 17},
    /*  834 */ {I_PUSH, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7311, 7},
    /*  835 */ {I_PUSH, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5983, 0},
    /*  836 */ {I_PUSH, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5988, 17},
    /*  837 */ {I_PUSH, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5993, 7},
    /*  838 */ {I_PUSH, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+549, 1},
    /*  839 */ {I_PUSH, 1, {REG_CS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7611, 1},
    /*  840 */ {I_PUSH, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7614, 1},
    /*  841 */ {I_PUSH, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7617, 1},
    /*  842 */ {I_PUSH, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7315, 5},
    /*  843 */ {I_PUSH, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7319, 5},
    /*  844 */ {I_PUSH, 1, {IMMEDIATE|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6019, 30},
    /*  845 */ {I_PUSH, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6003, 87},
    /*  846 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6013, 88},
    /*  847 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6013, 89},
    /*  848 */ {I_PUSH, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6023, 90},
    /*  849 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6023, 90},
    /*  850 */ {I_PUSHA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7323, 16},
    /*  851 */ {I_PUSHAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7327, 17},
    /*  852 */ {I_PUSHAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7331, 16},
    /*  853 */ {I_PUSHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7335, 0},
    /*  854 */ {I_PUSHFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7339, 17},
    /*  855 */ {I_PUSHFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7339, 7},
    /*  856 */ {I_PUSHFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7343, 0},
    /*  857 */ {I_PXOR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1511, 82},
    /*  858 */ {I_RCL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7347, 0},
    /*  859 */ {I_RCL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7351, 0},
    /*  860 */ {I_RCL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6028, 30},
    /*  861 */ {I_RCL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6033, 0},
    /*  862 */ {I_RCL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6038, 0},
    /*  863 */ {I_RCL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3363, 30},
    /*  864 */ {I_RCL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6043, 5},
    /*  865 */ {I_RCL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6048, 5},
    /*  866 */ {I_RCL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3369, 5},
    /*  867 */ {I_RCL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6053, 7},
    /*  868 */ {I_RCL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6058, 7},
    /*  869 */ {I_RCL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3375, 7},
    /*  870 */ {I_RCR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7355, 0},
    /*  871 */ {I_RCR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7359, 0},
    /*  872 */ {I_RCR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6063, 30},
    /*  873 */ {I_RCR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6068, 0},
    /*  874 */ {I_RCR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6073, 0},
    /*  875 */ {I_RCR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3381, 30},
    /*  876 */ {I_RCR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6078, 5},
    /*  877 */ {I_RCR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6083, 5},
    /*  878 */ {I_RCR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3387, 5},
    /*  879 */ {I_RCR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6088, 7},
    /*  880 */ {I_RCR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6093, 7},
    /*  881 */ {I_RCR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3393, 7},
    /*  882 */ {I_RDMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7363, 91},
    /*  883 */ {I_RDPMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7367, 84},
    /*  884 */ {I_RDTSC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7371, 25},
    /*  885 */ {I_RDTSCP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6098, 92},
    /*  886 */ {I_RET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7392, 19},
    /*  887 */ {I_RET, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6124, 93},
    /*  888 */ {I_RETF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7396, 0},
    /*  889 */ {I_RETF, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6129, 70},
    /*  890 */ {I_RETN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7392, 19},
    /*  891 */ {I_RETN, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6124, 93},
    /*  892 */ {I_RETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7375, 19},
    /*  893 */ {I_RETW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6124, 93},
    /*  894 */ {I_RETFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7379, 0},
    /*  895 */ {I_RETFW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6103, 70},
    /*  896 */ {I_RETNW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7375, 19},
    /*  897 */ {I_RETNW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6108, 93},
    /*  898 */ {I_RETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7383, 20},
    /*  899 */ {I_RETD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6113, 94},
    /*  900 */ {I_RETFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7387, 0},
    /*  901 */ {I_RETFD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6118, 70},
    /*  902 */ {I_RETND, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7383, 20},
    /*  903 */ {I_RETND, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6113, 94},
    /*  904 */ {I_RETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7391, 22},
    /*  905 */ {I_RETQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6123, 95},
    /*  906 */ {I_RETFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7395, 7},
    /*  907 */ {I_RETFQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6128, 96},
    /*  908 */ {I_RETNQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7391, 22},
    /*  909 */ {I_RETNQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6123, 95},
    /*  910 */ {I_ROL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7399, 0},
    /*  911 */ {I_ROL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7403, 0},
    /*  912 */ {I_ROL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6133, 30},
    /*  913 */ {I_ROL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6138, 0},
    /*  914 */ {I_ROL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6143, 0},
    /*  915 */ {I_ROL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3399, 30},
    /*  916 */ {I_ROL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6148, 5},
    /*  917 */ {I_ROL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6153, 5},
    /*  918 */ {I_ROL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3405, 5},
    /*  919 */ {I_ROL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6158, 7},
    /*  920 */ {I_ROL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6163, 7},
    /*  921 */ {I_ROL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3411, 7},
    /*  922 */ {I_ROR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7407, 0},
    /*  923 */ {I_ROR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7411, 0},
    /*  924 */ {I_ROR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6168, 30},
    /*  925 */ {I_ROR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6173, 0},
    /*  926 */ {I_ROR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6178, 0},
    /*  927 */ {I_ROR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3417, 30},
    /*  928 */ {I_ROR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6183, 5},
    /*  929 */ {I_ROR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6188, 5},
    /*  930 */ {I_ROR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3423, 5},
    /*  931 */ {I_ROR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6193, 7},
    /*  932 */ {I_ROR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6198, 7},
    /*  933 */ {I_ROR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3429, 7},
    /*  934 */ {I_RSM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7415, 97},
    /*  935 */ {I_SAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+173, 0},
    /*  936 */ {I_SALC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7620, 98},
    /*  937 */ {I_SAR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7427, 0},
    /*  938 */ {I_SAR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7431, 0},
    /*  939 */ {I_SAR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6238, 30},
    /*  940 */ {I_SAR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6243, 0},
    /*  941 */ {I_SAR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6248, 0},
    /*  942 */ {I_SAR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3453, 30},
    /*  943 */ {I_SAR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6253, 5},
    /*  944 */ {I_SAR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6258, 5},
    /*  945 */ {I_SAR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3459, 5},
    /*  946 */ {I_SAR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6263, 7},
    /*  947 */ {I_SAR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6268, 7},
    /*  948 */ {I_SAR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3465, 7},
    /*  949 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6273, 3},
    /*  950 */ {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6274, 0},
    /*  951 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3471, 3},
    /*  952 */ {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3472, 0},
    /*  953 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3477, 4},
    /*  954 */ {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3478, 5},
    /*  955 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3483, 6},
    /*  956 */ {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3484, 7},
    /*  957 */ {I_SBB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7435, 8},
    /*  958 */ {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7435, 0},
    /*  959 */ {I_SBB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6278, 8},
    /*  960 */ {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6278, 0},
    /*  961 */ {I_SBB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6283, 9},
    /*  962 */ {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6283, 5},
    /*  963 */ {I_SBB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6288, 10},
    /*  964 */ {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6288, 7},
    /*  965 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1518, 11},
    /*  966 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1525, 12},
    /*  967 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1532, 13},
    /*  968 */ {I_SBB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7439, 8},
    /*  969 */ {I_SBB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6293, 8},
    /*  970 */ {I_SBB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6298, 9},
    /*  971 */ {I_SBB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6303, 10},
    /*  972 */ {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3489, 3},
    /*  973 */ {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3495, 3},
    /*  974 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1539, 3},
    /*  975 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1546, 4},
    /*  976 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1553, 6},
    /*  977 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3489, 3},
    /*  978 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3495, 3},
    /*  979 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1539, 3},
    /*  980 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1546, 4},
    /*  981 */ {I_SCASB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7443, 0},
    /*  982 */ {I_SCASD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6308, 5},
    /*  983 */ {I_SCASQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6313, 7},
    /*  984 */ {I_SCASW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6318, 0},
    /*  985 */ {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3501, 54},
    /*  986 */ {I_SGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6323, 99},
    /*  987 */ {I_SHL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7419, 0},
    /*  988 */ {I_SHL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7423, 0},
    /*  989 */ {I_SHL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6203, 30},
    /*  990 */ {I_SHL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6208, 0},
    /*  991 */ {I_SHL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6213, 0},
    /*  992 */ {I_SHL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3435, 30},
    /*  993 */ {I_SHL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6218, 5},
    /*  994 */ {I_SHL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6223, 5},
    /*  995 */ {I_SHL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3441, 5},
    /*  996 */ {I_SHL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6228, 7},
    /*  997 */ {I_SHL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6233, 7},
    /*  998 */ {I_SHL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3447, 7},
    /*  999 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1560, 100},
    /* 1000 */ {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1560, 100},
    /* 1001 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1567, 100},
    /* 1002 */ {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1567, 100},
    /* 1003 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1574, 101},
    /* 1004 */ {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1574, 101},
    /* 1005 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3507, 9},
    /* 1006 */ {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3507, 5},
    /* 1007 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3513, 9},
    /* 1008 */ {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3513, 5},
    /* 1009 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3519, 10},
    /* 1010 */ {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3519, 7},
    /* 1011 */ {I_SHR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7447, 0},
    /* 1012 */ {I_SHR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7451, 0},
    /* 1013 */ {I_SHR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6328, 30},
    /* 1014 */ {I_SHR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6333, 0},
    /* 1015 */ {I_SHR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6338, 0},
    /* 1016 */ {I_SHR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3525, 30},
    /* 1017 */ {I_SHR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6343, 5},
    /* 1018 */ {I_SHR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6348, 5},
    /* 1019 */ {I_SHR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3531, 5},
    /* 1020 */ {I_SHR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6353, 7},
    /* 1021 */ {I_SHR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6358, 7},
    /* 1022 */ {I_SHR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3537, 7},
    /* 1023 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1581, 100},
    /* 1024 */ {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1581, 100},
    /* 1025 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1588, 100},
    /* 1026 */ {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1588, 100},
    /* 1027 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1595, 101},
    /* 1028 */ {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1595, 101},
    /* 1029 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3543, 9},
    /* 1030 */ {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3543, 5},
    /* 1031 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3549, 9},
    /* 1032 */ {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3549, 5},
    /* 1033 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3555, 10},
    /* 1034 */ {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3555, 7},
    /* 1035 */ {I_SIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6363, 99},
    /* 1036 */ {I_SLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3580, 99},
    /* 1037 */ {I_SLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3580, 99},
    /* 1038 */ {I_SLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3561, 99},
    /* 1039 */ {I_SLDT, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3567, 5},
    /* 1040 */ {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3579, 7},
    /* 1041 */ {I_SMI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7575, 102},
    /* 1042 */ {I_SMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3598, 99},
    /* 1043 */ {I_SMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3598, 99},
    /* 1044 */ {I_SMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3585, 99},
    /* 1045 */ {I_SMSW, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3591, 5},
    /* 1046 */ {I_SMSW, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3597, 7},
    /* 1047 */ {I_STC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6100, 0},
    /* 1048 */ {I_STD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7623, 0},
    /* 1049 */ {I_STI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5895, 0},
    /* 1050 */ {I_STOSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+277, 0},
    /* 1051 */ {I_STOSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7455, 5},
    /* 1052 */ {I_STOSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7459, 7},
    /* 1053 */ {I_STOSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7463, 0},
    /* 1054 */ {I_STR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3616, 57},
    /* 1055 */ {I_STR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3616, 57},
    /* 1056 */ {I_STR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3603, 57},
    /* 1057 */ {I_STR, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3609, 58},
    /* 1058 */ {I_STR, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3615, 7},
    /* 1059 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6368, 3},
    /* 1060 */ {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6369, 0},
    /* 1061 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3621, 3},
    /* 1062 */ {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3622, 0},
    /* 1063 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3627, 4},
    /* 1064 */ {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3628, 5},
    /* 1065 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3633, 6},
    /* 1066 */ {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3634, 7},
    /* 1067 */ {I_SUB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7467, 8},
    /* 1068 */ {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7467, 0},
    /* 1069 */ {I_SUB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6373, 8},
    /* 1070 */ {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6373, 0},
    /* 1071 */ {I_SUB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6378, 9},
    /* 1072 */ {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6378, 5},
    /* 1073 */ {I_SUB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6383, 10},
    /* 1074 */ {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6383, 7},
    /* 1075 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1602, 11},
    /* 1076 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1609, 12},
    /* 1077 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1616, 13},
    /* 1078 */ {I_SUB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7471, 8},
    /* 1079 */ {I_SUB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6388, 8},
    /* 1080 */ {I_SUB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6393, 9},
    /* 1081 */ {I_SUB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6398, 10},
    /* 1082 */ {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3639, 3},
    /* 1083 */ {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3645, 3},
    /* 1084 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1623, 3},
    /* 1085 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1630, 4},
    /* 1086 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1637, 6},
    /* 1087 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3639, 3},
    /* 1088 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3645, 3},
    /* 1089 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1623, 3},
    /* 1090 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1630, 4},
    /* 1091 */ {I_SYSENTER, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7475, 84},
    /* 1092 */ {I_SYSEXIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7479, 103},
    /* 1093 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7483, 8},
    /* 1094 */ {I_TEST, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7483, 0},
    /* 1095 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6403, 8},
    /* 1096 */ {I_TEST, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6403, 0},
    /* 1097 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6408, 9},
    /* 1098 */ {I_TEST, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6408, 5},
    /* 1099 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6413, 10},
    /* 1100 */ {I_TEST, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6413, 7},
    /* 1101 */ {I_TEST, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7487, 8},
    /* 1102 */ {I_TEST, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6418, 8},
    /* 1103 */ {I_TEST, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6423, 9},
    /* 1104 */ {I_TEST, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6428, 10},
    /* 1105 */ {I_TEST, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7491, 8},
    /* 1106 */ {I_TEST, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6433, 8},
    /* 1107 */ {I_TEST, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6438, 9},
    /* 1108 */ {I_TEST, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6443, 10},
    /* 1109 */ {I_TEST, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6448, 8},
    /* 1110 */ {I_TEST, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3651, 8},
    /* 1111 */ {I_TEST, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3657, 9},
    /* 1112 */ {I_TEST, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3663, 10},
    /* 1113 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6448, 8},
    /* 1114 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3651, 8},
    /* 1115 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3657, 9},
    /* 1116 */ {I_UD0, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7495, 104},
    /* 1117 */ {I_UD0, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3669, 30},
    /* 1118 */ {I_UD0, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3675, 30},
    /* 1119 */ {I_UD0, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3681, 30},
    /* 1120 */ {I_UD1, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3687, 30},
    /* 1121 */ {I_UD1, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3693, 30},
    /* 1122 */ {I_UD1, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3699, 30},
    /* 1123 */ {I_UD2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7503, 30},
    /* 1124 */ {I_VERR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6453, 57},
    /* 1125 */ {I_VERR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6453, 57},
    /* 1126 */ {I_VERR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6453, 57},
    /* 1127 */ {I_VERW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6458, 57},
    /* 1128 */ {I_VERW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6458, 57},
    /* 1129 */ {I_VERW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6458, 57},
    /* 1130 */ {I_FWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7077, 0},
    /* 1131 */ {I_WBINVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7507, 49},
    /* 1132 */ {I_WRMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7511, 91},
    /* 1133 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3717, 106},
    /* 1134 */ {I_XADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3718, 18},
    /* 1135 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1672, 106},
    /* 1136 */ {I_XADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1673, 18},
    /* 1137 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1679, 106},
    /* 1138 */ {I_XADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1680, 18},
    /* 1139 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1686, 6},
    /* 1140 */ {I_XADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1687, 7},
    /* 1141 */ {I_XCHG, 2, {REG_AX,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7515, 0},
    /* 1142 */ {I_XCHG, 2, {REG_EAX,REG32NA,0,0,0}, NO_DECORATOR, nasm_bytecodes+7519, 5},
    /* 1143 */ {I_XCHG, 2, {REG_RAX,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+7523, 7},
    /* 1144 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7527, 0},
    /* 1145 */ {I_XCHG, 2, {REG32NA,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7531, 5},
    /* 1146 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7535, 7},
    /* 1147 */ {I_XCHG, 2, {REG_EAX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7539, 17},
    /* 1148 */ {I_XCHG, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6463, 3},
    /* 1149 */ {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6464, 0},
    /* 1150 */ {I_XCHG, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3735, 3},
    /* 1151 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3736, 0},
    /* 1152 */ {I_XCHG, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3741, 4},
    /* 1153 */ {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3742, 5},
    /* 1154 */ {I_XCHG, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3747, 6},
    /* 1155 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3748, 7},
    /* 1156 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6468, 3},
    /* 1157 */ {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6469, 0},
    /* 1158 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3753, 3},
    /* 1159 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3754, 0},
    /* 1160 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3759, 4},
    /* 1161 */ {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3760, 5},
    /* 1162 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3765, 6},
    /* 1163 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3766, 7},
    /* 1164 */ {I_XLATB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7626, 0},
    /* 1165 */ {I_XLAT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7626, 0},
    /* 1166 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6473, 3},
    /* 1167 */ {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6474, 0},
    /* 1168 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3771, 3},
    /* 1169 */ {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3772, 0},
    /* 1170 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3777, 4},
    /* 1171 */ {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3778, 5},
    /* 1172 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3783, 6},
    /* 1173 */ {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3784, 7},
    /* 1174 */ {I_XOR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7543, 8},
    /* 1175 */ {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7543, 0},
    /* 1176 */ {I_XOR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6478, 8},
    /* 1177 */ {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6478, 0},
    /* 1178 */ {I_XOR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6483, 9},
    /* 1179 */ {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6483, 5},
    /* 1180 */ {I_XOR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6488, 10},
    /* 1181 */ {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6488, 7},
    /* 1182 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1693, 11},
    /* 1183 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1700, 12},
    /* 1184 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1707, 13},
    /* 1185 */ {I_XOR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7547, 8},
    /* 1186 */ {I_XOR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6493, 8},
    /* 1187 */ {I_XOR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6498, 9},
    /* 1188 */ {I_XOR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6503, 10},
    /* 1189 */ {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3789, 3},
    /* 1190 */ {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3795, 3},
    /* 1191 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1714, 3},
    /* 1192 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1721, 4},
    /* 1193 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1728, 6},
    /* 1194 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3789, 3},
    /* 1195 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3795, 3},
    /* 1196 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1714, 3},
    /* 1197 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1721, 4},
    /* 1198 */ {I_CMOVcc, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1735, 109},
    /* 1199 */ {I_CMOVcc, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1735, 84},
    /* 1200 */ {I_CMOVcc, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1742, 109},
    /* 1201 */ {I_CMOVcc, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1742, 84},
    /* 1202 */ {I_CMOVcc, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1749, 10},
    /* 1203 */ {I_CMOVcc, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1749, 7},
    /* 1204 */ {I_Jcc, 1, {IMMEDIATE|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1756, 110},
    /* 1205 */ {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1763, 21},
    /* 1206 */ {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1770, 21},
    /* 1207 */ {I_Jcc, 1, {IMMEDIATE|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1777, 22},
    /* 1208 */ {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6509, 19},
    /* 1209 */ {I_SETcc, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3801, 48},
    /* 1210 */ {I_SETcc, 1, {REG_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3801, 5},
    /* 1211 */ {I_ADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3807, 111},
    /* 1212 */ {I_ADDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3813, 111},
    /* 1213 */ {I_ANDNPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3819, 111},
    /* 1214 */ {I_ANDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3825, 111},
    /* 1215 */ {I_CMPEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+296, 111},
    /* 1216 */ {I_CMPEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+304, 111},
    /* 1217 */ {I_CMPLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+312, 111},
    /* 1218 */ {I_CMPLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+320, 111},
    /* 1219 */ {I_CMPLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+328, 111},
    /* 1220 */ {I_CMPLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+336, 111},
    /* 1221 */ {I_CMPNEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+344, 111},
    /* 1222 */ {I_CMPNEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+352, 111},
    /* 1223 */ {I_CMPNLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+360, 111},
    /* 1224 */ {I_CMPNLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+368, 111},
    /* 1225 */ {I_CMPNLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+376, 111},
    /* 1226 */ {I_CMPNLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+384, 111},
    /* 1227 */ {I_CMPORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+392, 111},
    /* 1228 */ {I_CMPORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+400, 111},
    /* 1229 */ {I_CMPUNORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+408, 111},
    /* 1230 */ {I_CMPUNORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+416, 111},
    /* 1231 */ {I_CMPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1791, 111},
    /* 1232 */ {I_CMPSS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1798, 111},
    /* 1233 */ {I_COMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3831, 111},
    /* 1234 */ {I_CVTPI2PS, 2, {XMM_L16,RM_MMX|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3837, 112},
    /* 1235 */ {I_CVTPS2PI, 2, {MMXREG,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3843, 112},
    /* 1236 */ {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1806, 113},
    /* 1237 */ {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1805, 114},
    /* 1238 */ {I_CVTSS2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1813, 113},
    /* 1239 */ {I_CVTSS2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1813, 113},
    /* 1240 */ {I_CVTSS2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1812, 115},
    /* 1241 */ {I_CVTSS2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1812, 115},
    /* 1242 */ {I_CVTTPS2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3849, 116},
    /* 1243 */ {I_CVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1820, 113},
    /* 1244 */ {I_CVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1819, 115},
    /* 1245 */ {I_DIVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3855, 111},
    /* 1246 */ {I_DIVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3861, 111},
    /* 1247 */ {I_LDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3867, 111},
    /* 1248 */ {I_MAXPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3873, 111},
    /* 1249 */ {I_MAXSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3879, 111},
    /* 1250 */ {I_MINPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3885, 111},
    /* 1251 */ {I_MINSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3891, 111},
    /* 1252 */ {I_MOVAPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3897, 111},
    /* 1253 */ {I_MOVAPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3903, 111},
    /* 1254 */ {I_MOVHPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3909, 111},
    /* 1255 */ {I_MOVHPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3915, 111},
    /* 1256 */ {I_MOVLHPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3909, 111},
    /* 1257 */ {I_MOVLPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3711, 111},
    /* 1258 */ {I_MOVLPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3921, 111},
    /* 1259 */ {I_MOVHLPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3711, 111},
    /* 1260 */ {I_MOVMSKPS, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3927, 111},
    /* 1261 */ {I_MOVMSKPS, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1826, 117},
    /* 1262 */ {I_MOVNTPS, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3933, 111},
    /* 1263 */ {I_MOVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3939, 111},
    /* 1264 */ {I_MOVSS, 2, {RM_XMM_L16|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3945, 111},
    /* 1265 */ {I_MOVUPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3951, 111},
    /* 1266 */ {I_MOVUPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3957, 111},
    /* 1267 */ {I_MULPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3963, 111},
    /* 1268 */ {I_MULSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3969, 111},
    /* 1269 */ {I_ORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3975, 111},
    /* 1270 */ {I_RCPPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3981, 111},
    /* 1271 */ {I_RCPSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3987, 111},
    /* 1272 */ {I_RSQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3993, 111},
    /* 1273 */ {I_RSQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3999, 111},
    /* 1274 */ {I_SHUFPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1833, 111},
    /* 1275 */ {I_SQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4005, 111},
    /* 1276 */ {I_SQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4011, 111},
    /* 1277 */ {I_STMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4017, 111},
    /* 1278 */ {I_SUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4023, 111},
    /* 1279 */ {I_SUBSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4029, 111},
    /* 1280 */ {I_UCOMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4035, 111},
    /* 1281 */ {I_UNPCKHPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4041, 111},
    /* 1282 */ {I_UNPCKLPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4047, 111},
    /* 1283 */ {I_XORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4053, 111},
    /* 1284 */ {I_FXRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1841, 118},
    /* 1285 */ {I_FXRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1840, 119},
    /* 1286 */ {I_FXSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1848, 118},
    /* 1287 */ {I_FXSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1847, 119},
    /* 1288 */ {I_XGETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6513, 120},
    /* 1289 */ {I_XSETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6518, 121},
    /* 1290 */ {I_XSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1855, 120},
    /* 1291 */ {I_XSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1854, 122},
    /* 1292 */ {I_XSAVEC, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1862, 123},
    /* 1293 */ {I_XSAVEC64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1861, 124},
    /* 1294 */ {I_XSAVEOPT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1869, 123},
    /* 1295 */ {I_XSAVEOPT64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1868, 124},
    /* 1296 */ {I_XSAVES, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1876, 123},
    /* 1297 */ {I_XSAVES64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1875, 124},
    /* 1298 */ {I_XRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1883, 120},
    /* 1299 */ {I_XRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1882, 122},
    /* 1300 */ {I_XRSTORS, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1890, 123},
    /* 1301 */ {I_XRSTORS64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1889, 124},
    /* 1302 */ {I_PREFETCHNTA, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6523, 125},
    /* 1303 */ {I_PREFETCHT0, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6528, 125},
    /* 1304 */ {I_PREFETCHT1, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6533, 125},
    /* 1305 */ {I_PREFETCHT2, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6538, 125},
    /* 1306 */ {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3501, 125},
    /* 1307 */ {I_MASKMOVQ, 2, {MMXREG,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4059, 126},
    /* 1308 */ {I_MOVNTQ, 2, {MEMORY,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4065, 127},
    /* 1309 */ {I_PAVGB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1896, 127},
    /* 1310 */ {I_PAVGW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1903, 127},
    /* 1311 */ {I_PEXTRW, 3, {REG_GPR|BITS32,MMXREG,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1910, 128},
    /* 1312 */ {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1917, 128},
    /* 1313 */ {I_PINSRW, 3, {MMXREG,RM_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1917, 128},
    /* 1314 */ {I_PINSRW, 3, {MMXREG,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1917, 128},
    /* 1315 */ {I_PMAXSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1924, 127},
    /* 1316 */ {I_PMAXUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1931, 127},
    /* 1317 */ {I_PMINSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1938, 127},
    /* 1318 */ {I_PMINUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1945, 127},
    /* 1319 */ {I_PMOVMSKB, 2, {REG_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4071, 126},
    /* 1320 */ {I_PMULHUW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1952, 127},
    /* 1321 */ {I_PSADBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1959, 127},
    /* 1322 */ {I_PSHUFW, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+424, 129},
    /* 1323 */ {I_PF2IW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+432, 85},
    /* 1324 */ {I_PFNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+440, 85},
    /* 1325 */ {I_PFPNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+448, 85},
    /* 1326 */ {I_PI2FW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+456, 85},
    /* 1327 */ {I_PSWAPD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+464, 85},
    /* 1328 */ {I_MASKMOVDQU, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4077, 130},
    /* 1329 */ {I_CLFLUSH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4083, 130},
    /* 1330 */ {I_MOVNTDQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4089, 131},
    /* 1331 */ {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1967, 132},
    /* 1332 */ {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1966, 133},
    /* 1333 */ {I_MOVNTPD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4095, 131},
    /* 1334 */ {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3051, 130},
    /* 1335 */ {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3129, 130},
    /* 1336 */ {I_MOVD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1973, 134},
    /* 1337 */ {I_MOVD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1980, 134},
    /* 1338 */ {I_MOVD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1980, 130},
    /* 1339 */ {I_MOVD, 2, {RM_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1973, 130},
    /* 1340 */ {I_MOVDQA, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4101, 131},
    /* 1341 */ {I_MOVDQA, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4107, 131},
    /* 1342 */ {I_MOVDQU, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4113, 131},
    /* 1343 */ {I_MOVDQU, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4119, 131},
    /* 1344 */ {I_MOVDQ2Q, 2, {MMXREG,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4125, 130},
    /* 1345 */ {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4131, 130},
    /* 1346 */ {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4137, 130},
    /* 1347 */ {I_MOVQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4137, 135},
    /* 1348 */ {I_MOVQ, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4131, 135},
    /* 1349 */ {I_MOVQ, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1987, 136},
    /* 1350 */ {I_MOVQ, 2, {RM_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1994, 136},
    /* 1351 */ {I_MOVQ2DQ, 2, {XMM_L16,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4143, 130},
    /* 1352 */ {I_PACKSSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4149, 131},
    /* 1353 */ {I_PACKSSDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4155, 131},
    /* 1354 */ {I_PACKUSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4161, 131},
    /* 1355 */ {I_PADDB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4167, 131},
    /* 1356 */ {I_PADDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4173, 131},
    /* 1357 */ {I_PADDD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4179, 131},
    /* 1358 */ {I_PADDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+4185, 137},
    /* 1359 */ {I_PADDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4191, 131},
    /* 1360 */ {I_PADDSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4197, 131},
    /* 1361 */ {I_PADDSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4203, 131},
    /* 1362 */ {I_PADDUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4209, 131},
    /* 1363 */ {I_PADDUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4215, 131},
    /* 1364 */ {I_PAND, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4221, 131},
    /* 1365 */ {I_PANDN, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4227, 131},
    /* 1366 */ {I_PAVGB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4233, 131},
    /* 1367 */ {I_PAVGW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4239, 131},
    /* 1368 */ {I_PCMPEQB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4245, 131},
    /* 1369 */ {I_PCMPEQW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4251, 131},
    /* 1370 */ {I_PCMPEQD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4257, 131},
    /* 1371 */ {I_PCMPGTB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4263, 131},
    /* 1372 */ {I_PCMPGTW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4269, 131},
    /* 1373 */ {I_PCMPGTD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4275, 131},
    /* 1374 */ {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2001, 138},
    /* 1375 */ {I_PINSRW, 3, {XMM_L16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2008, 138},
    /* 1376 */ {I_PINSRW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2008, 138},
    /* 1377 */ {I_PINSRW, 3, {XMM_L16,MEMORY|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2008, 138},
    /* 1378 */ {I_PMADDWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4281, 131},
    /* 1379 */ {I_PMAXSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4287, 131},
    /* 1380 */ {I_PMAXUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4293, 131},
    /* 1381 */ {I_PMINSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4299, 131},
    /* 1382 */ {I_PMINUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4305, 131},
    /* 1383 */ {I_PMOVMSKB, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4311, 130},
    /* 1384 */ {I_PMULHUW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4317, 131},
    /* 1385 */ {I_PMULHW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4323, 131},
    /* 1386 */ {I_PMULLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4329, 131},
    /* 1387 */ {I_PMULUDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2015, 131},
    /* 1388 */ {I_PMULUDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4335, 131},
    /* 1389 */ {I_POR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4341, 131},
    /* 1390 */ {I_PSADBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4347, 131},
    /* 1391 */ {I_PSHUFD, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2022, 138},
    /* 1392 */ {I_PSHUFD, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2022, 140},
    /* 1393 */ {I_PSHUFHW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2029, 138},
    /* 1394 */ {I_PSHUFHW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2029, 140},
    /* 1395 */ {I_PSHUFLW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2036, 138},
    /* 1396 */ {I_PSHUFLW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+2036, 140},
    /* 1397 */ {I_PSLLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2043, 141},
    /* 1398 */ {I_PSLLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4353, 131},
    /* 1399 */ {I_PSLLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2050, 141},
    /* 1400 */ {I_PSLLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4359, 131},
    /* 1401 */ {I_PSLLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2057, 141},
    /* 1402 */ {I_PSLLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4365, 131},
    /* 1403 */ {I_PSLLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2064, 141},
    /* 1404 */ {I_PSRAW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4371, 131},
    /* 1405 */ {I_PSRAW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2071, 141},
    /* 1406 */ {I_PSRAD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4377, 131},
    /* 1407 */ {I_PSRAD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2078, 141},
    /* 1408 */ {I_PSRLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2085, 141},
    /* 1409 */ {I_PSRLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4383, 131},
    /* 1410 */ {I_PSRLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2092, 141},
    /* 1411 */ {I_PSRLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4389, 131},
    /* 1412 */ {I_PSRLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2099, 141},
    /* 1413 */ {I_PSRLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4395, 131},
    /* 1414 */ {I_PSRLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2106, 141},
    /* 1415 */ {I_PSUBB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4401, 131},
    /* 1416 */ {I_PSUBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4407, 131},
    /* 1417 */ {I_PSUBD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4413, 131},
    /* 1418 */ {I_PSUBQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2113, 131},
    /* 1419 */ {I_PSUBQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4419, 131},
    /* 1420 */ {I_PSUBSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4425, 131},
    /* 1421 */ {I_PSUBSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4431, 131},
    /* 1422 */ {I_PSUBUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4437, 131},
    /* 1423 */ {I_PSUBUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4443, 131},
    /* 1424 */ {I_PUNPCKHBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4449, 131},
    /* 1425 */ {I_PUNPCKHWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4455, 131},
    /* 1426 */ {I_PUNPCKHDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4461, 131},
    /* 1427 */ {I_PUNPCKHQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4467, 131},
    /* 1428 */ {I_PUNPCKLBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4473, 131},
    /* 1429 */ {I_PUNPCKLWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4479, 131},
    /* 1430 */ {I_PUNPCKLDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4485, 131},
    /* 1431 */ {I_PUNPCKLQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4491, 131},
    /* 1432 */ {I_PXOR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4497, 131},
    /* 1433 */ {I_ADDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4503, 131},
    /* 1434 */ {I_ADDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4509, 135},
    /* 1435 */ {I_ANDNPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4515, 131},
    /* 1436 */ {I_ANDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4521, 131},
    /* 1437 */ {I_CMPEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+472, 131},
    /* 1438 */ {I_CMPEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+480, 135},
    /* 1439 */ {I_CMPLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+488, 131},
    /* 1440 */ {I_CMPLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+496, 135},
    /* 1441 */ {I_CMPLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+504, 131},
    /* 1442 */ {I_CMPLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+512, 135},
    /* 1443 */ {I_CMPNEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+520, 131},
    /* 1444 */ {I_CMPNEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+528, 135},
    /* 1445 */ {I_CMPNLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+536, 131},
    /* 1446 */ {I_CMPNLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+544, 135},
    /* 1447 */ {I_CMPNLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+552, 131},
    /* 1448 */ {I_CMPNLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+560, 135},
    /* 1449 */ {I_CMPORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+568, 131},
    /* 1450 */ {I_CMPORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+576, 135},
    /* 1451 */ {I_CMPUNORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+584, 131},
    /* 1452 */ {I_CMPUNORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+592, 135},
    /* 1453 */ {I_CMPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2120, 130},
    /* 1454 */ {I_CMPSD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2127, 130},
    /* 1455 */ {I_COMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4527, 130},
    /* 1456 */ {I_CVTDQ2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4533, 135},
    /* 1457 */ {I_CVTDQ2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4539, 131},
    /* 1458 */ {I_CVTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4545, 131},
    /* 1459 */ {I_CVTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4551, 131},
    /* 1460 */ {I_CVTPD2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4557, 131},
    /* 1461 */ {I_CVTPI2PD, 2, {XMM_L16,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+4563, 135},
    /* 1462 */ {I_CVTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4569, 131},
    /* 1463 */ {I_CVTPS2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4575, 135},
    /* 1464 */ {I_CVTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2134, 142},
    /* 1465 */ {I_CVTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2134, 142},
    /* 1466 */ {I_CVTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2141, 143},
    /* 1467 */ {I_CVTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2141, 143},
    /* 1468 */ {I_CVTSD2SS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4581, 135},
    /* 1469 */ {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2148, 144},
    /* 1470 */ {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2155, 143},
    /* 1471 */ {I_CVTSS2SD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4587, 134},
    /* 1472 */ {I_CVTTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4593, 131},
    /* 1473 */ {I_CVTTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4599, 131},
    /* 1474 */ {I_CVTTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4605, 131},
    /* 1475 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2162, 142},
    /* 1476 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2162, 142},
    /* 1477 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2169, 143},
    /* 1478 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2169, 143},
    /* 1479 */ {I_DIVPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4611, 131},
    /* 1480 */ {I_DIVSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4617, 135},
    /* 1481 */ {I_MAXPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4623, 131},
    /* 1482 */ {I_MAXSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4629, 135},
    /* 1483 */ {I_MINPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4635, 131},
    /* 1484 */ {I_MINSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4641, 135},
    /* 1485 */ {I_MOVAPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4647, 130},
    /* 1486 */ {I_MOVAPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4653, 130},
    /* 1487 */ {I_MOVHPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4659, 130},
    /* 1488 */ {I_MOVHPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4665, 130},
    /* 1489 */ {I_MOVLPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4671, 130},
    /* 1490 */ {I_MOVLPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4677, 130},
    /* 1491 */ {I_MOVMSKPD, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4683, 130},
    /* 1492 */ {I_MOVMSKPD, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2176, 136},
    /* 1493 */ {I_MOVSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4689, 130},
    /* 1494 */ {I_MOVSD, 2, {RM_XMM_L16|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4695, 130},
    /* 1495 */ {I_MOVUPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4701, 130},
    /* 1496 */ {I_MOVUPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4707, 130},
    /* 1497 */ {I_MULPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4713, 131},
    /* 1498 */ {I_MULSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4719, 135},
    /* 1499 */ {I_ORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4725, 131},
    /* 1500 */ {I_SHUFPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2183, 130},
    /* 1501 */ {I_SQRTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4731, 131},
    /* 1502 */ {I_SQRTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4737, 130},
    /* 1503 */ {I_SUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4743, 131},
    /* 1504 */ {I_SUBSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4749, 130},
    /* 1505 */ {I_UCOMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4755, 130},
    /* 1506 */ {I_UNPCKHPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4761, 130},
    /* 1507 */ {I_UNPCKLPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4767, 130},
    /* 1508 */ {I_XORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4773, 130},
    /* 1509 */ {I_ADDSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4779, 145},
    /* 1510 */ {I_ADDSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4785, 145},
    /* 1511 */ {I_HADDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4791, 145},
    /* 1512 */ {I_HADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4797, 145},
    /* 1513 */ {I_HSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4803, 145},
    /* 1514 */ {I_HSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4809, 145},
    /* 1515 */ {I_LDDQU, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4815, 145},
    /* 1516 */ {I_MOVDDUP, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4821, 146},
    /* 1517 */ {I_MOVSHDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4827, 147},
    /* 1518 */ {I_MOVSLDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4833, 147},
    /* 1519 */ {I_PABSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2190, 148},
    /* 1520 */ {I_PABSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2197, 149},
    /* 1521 */ {I_PABSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2204, 148},
    /* 1522 */ {I_PABSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2211, 149},
    /* 1523 */ {I_PABSD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2218, 148},
    /* 1524 */ {I_PABSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2225, 149},
    /* 1525 */ {I_PALIGNR, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+600, 148},
    /* 1526 */ {I_PALIGNR, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+608, 149},
    /* 1527 */ {I_PHADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2232, 148},
    /* 1528 */ {I_PHADDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2239, 149},
    /* 1529 */ {I_PHADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2246, 148},
    /* 1530 */ {I_PHADDD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2253, 149},
    /* 1531 */ {I_PHADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2260, 148},
    /* 1532 */ {I_PHADDSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2267, 149},
    /* 1533 */ {I_PHSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2274, 148},
    /* 1534 */ {I_PHSUBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2281, 149},
    /* 1535 */ {I_PHSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2288, 148},
    /* 1536 */ {I_PHSUBD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2295, 149},
    /* 1537 */ {I_PHSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2302, 148},
    /* 1538 */ {I_PHSUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2309, 149},
    /* 1539 */ {I_PMADDUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2316, 148},
    /* 1540 */ {I_PMADDUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2323, 149},
    /* 1541 */ {I_PMULHRSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2330, 148},
    /* 1542 */ {I_PMULHRSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2337, 149},
    /* 1543 */ {I_PSHUFB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2344, 148},
    /* 1544 */ {I_PSHUFB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2351, 149},
    /* 1545 */ {I_PSIGNB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2358, 148},
    /* 1546 */ {I_PSIGNB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2365, 149},
    /* 1547 */ {I_PSIGNW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2372, 148},
    /* 1548 */ {I_PSIGNW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2379, 149},
    /* 1549 */ {I_PSIGND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2386, 148},
    /* 1550 */ {I_PSIGND, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2393, 149},
    /* 1551 */ {I_EXTRQ, 3, {XMM_L16,IMMEDIATE,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+616, 150},
    /* 1552 */ {I_EXTRQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4839, 150},
    /* 1553 */ {I_INSERTQ, 4, {XMM_L16,XMM_L16,IMMEDIATE,IMMEDIATE,0}, NO_DECORATOR, nasm_bytecodes+624, 150},
    /* 1554 */ {I_INSERTQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4845, 150},
    /* 1555 */ {I_MOVNTSD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4851, 151},
    /* 1556 */ {I_MOVNTSS, 2, {MEMORY|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4857, 152},
    /* 1557 */ {I_LZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2400, 153},
    /* 1558 */ {I_LZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2407, 153},
    /* 1559 */ {I_LZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2414, 54},
    /* 1560 */ {I_BLENDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+632, 154},
    /* 1561 */ {I_BLENDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+640, 154},
    /* 1562 */ {I_BLENDVPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2421, 154},
    /* 1563 */ {I_BLENDVPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2421, 154},
    /* 1564 */ {I_BLENDVPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2428, 154},
    /* 1565 */ {I_BLENDVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2428, 154},
    /* 1566 */ {I_DPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+648, 154},
    /* 1567 */ {I_DPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+656, 154},
    /* 1568 */ {I_EXTRACTPS, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1, 154},
    /* 1569 */ {I_EXTRACTPS, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+0, 155},
    /* 1570 */ {I_INSERTPS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+664, 154},
    /* 1571 */ {I_MOVNTDQA, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2435, 154},
    /* 1572 */ {I_MPSADBW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+672, 154},
    /* 1573 */ {I_PACKUSDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2442, 154},
    /* 1574 */ {I_PBLENDVB, 3, {XMM_L16,RM_XMM_L16,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2449, 154},
    /* 1575 */ {I_PBLENDVB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2449, 154},
    /* 1576 */ {I_PBLENDW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+680, 154},
    /* 1577 */ {I_PCMPEQQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2456, 154},
    /* 1578 */ {I_PEXTRB, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10, 154},
    /* 1579 */ {I_PEXTRB, 3, {MEMORY|BITS8,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10, 154},
    /* 1580 */ {I_PEXTRB, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9, 155},
    /* 1581 */ {I_PEXTRD, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+18, 154},
    /* 1582 */ {I_PEXTRQ, 3, {RM_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+27, 155},
    /* 1583 */ {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+37, 154},
    /* 1584 */ {I_PEXTRW, 3, {MEMORY|BITS16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+37, 154},
    /* 1585 */ {I_PEXTRW, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+36, 155},
    /* 1586 */ {I_PHMINPOSUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2463, 154},
    /* 1587 */ {I_PINSRB, 3, {XMM_L16,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+46, 156},
    /* 1588 */ {I_PINSRB, 3, {XMM_L16,RM_GPR|BITS8,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+45, 156},
    /* 1589 */ {I_PINSRB, 3, {XMM_L16,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+46, 156},
    /* 1590 */ {I_PINSRD, 3, {XMM_L16,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+54, 156},
    /* 1591 */ {I_PINSRQ, 3, {XMM_L16,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+63, 157},
    /* 1592 */ {I_PMAXSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2470, 154},
    /* 1593 */ {I_PMAXSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2477, 154},
    /* 1594 */ {I_PMAXUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2484, 154},
    /* 1595 */ {I_PMAXUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2491, 154},
    /* 1596 */ {I_PMINSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2498, 154},
    /* 1597 */ {I_PMINSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2505, 154},
    /* 1598 */ {I_PMINUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2512, 154},
    /* 1599 */ {I_PMINUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2519, 154},
    /* 1600 */ {I_PMOVSXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2526, 158},
    /* 1601 */ {I_PMOVSXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2533, 159},
    /* 1602 */ {I_PMOVSXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2540, 160},
    /* 1603 */ {I_PMOVSXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2547, 158},
    /* 1604 */ {I_PMOVSXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2554, 159},
    /* 1605 */ {I_PMOVSXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2561, 158},
    /* 1606 */ {I_PMOVZXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2568, 158},
    /* 1607 */ {I_PMOVZXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2575, 159},
    /* 1608 */ {I_PMOVZXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2582, 160},
    /* 1609 */ {I_PMOVZXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2589, 158},
    /* 1610 */ {I_PMOVZXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2596, 159},
    /* 1611 */ {I_PMOVZXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2603, 158},
    /* 1612 */ {I_PMULDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2610, 154},
    /* 1613 */ {I_PMULLD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2617, 154},
    /* 1614 */ {I_PTEST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2624, 154},
    /* 1615 */ {I_ROUNDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+688, 154},
    /* 1616 */ {I_ROUNDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+696, 154},
    /* 1617 */ {I_ROUNDSD, 3, {XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+704, 154},
    /* 1618 */ {I_ROUNDSS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+712, 154},
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
    instrux + 838,
};

static const struct itemplate * const itable_07[] = {
    instrux + 788,
};

static const struct itemplate * const itable_08[] = {
    instrux + 700,
    instrux + 701,
};

static const struct itemplate * const itable_09[] = {
    instrux + 702,
    instrux + 703,
    instrux + 704,
    instrux + 705,
    instrux + 706,
    instrux + 707,
};

static const struct itemplate * const itable_0A[] = {
    instrux + 708,
    instrux + 709,
};

static const struct itemplate * const itable_0B[] = {
    instrux + 710,
    instrux + 711,
    instrux + 712,
    instrux + 713,
    instrux + 714,
    instrux + 715,
};

static const struct itemplate * const itable_0C[] = {
    instrux + 719,
};

static const struct itemplate * const itable_0D[] = {
    instrux + 720,
    instrux + 721,
    instrux + 722,
};

static const struct itemplate * const itable_0E[] = {
    instrux + 839,
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
    instrux + 1036,
    instrux + 1037,
    instrux + 1038,
    instrux + 1039,
    instrux + 1040,
    instrux + 1054,
    instrux + 1055,
    instrux + 1056,
    instrux + 1057,
    instrux + 1058,
    instrux + 1124,
    instrux + 1125,
    instrux + 1126,
    instrux + 1127,
    instrux + 1128,
    instrux + 1129,
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
    instrux + 686,
    instrux + 687,
    instrux + 885,
    instrux + 986,
    instrux + 1035,
    instrux + 1042,
    instrux + 1043,
    instrux + 1044,
    instrux + 1045,
    instrux + 1046,
    instrux + 1288,
    instrux + 1289,
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

static const struct itemplate * const itable_0F06[] = {
    instrux + 186,
};

static const struct itemplate * const itable_0F08[] = {
    instrux + 492,
};

static const struct itemplate * const itable_0F09[] = {
    instrux + 1131,
};

static const struct itemplate * const itable_0F0B[] = {
    instrux + 1123,
};

static const struct itemplate * const itable_0F0D[] = {
    instrux + 801,
    instrux + 802,
};

static const struct itemplate * const itable_0F0E[] = {
    instrux + 318,
};

static const struct itemplate * const itable_0F0F[] = {
    instrux + 754,
    instrux + 761,
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
    instrux + 779,
    instrux + 1323,
    instrux + 1324,
    instrux + 1325,
    instrux + 1326,
    instrux + 1327,
};

static const struct itemplate * const itable_0F10[] = {
    instrux + 1263,
    instrux + 1265,
    instrux + 1493,
    instrux + 1495,
};

static const struct itemplate * const itable_0F11[] = {
    instrux + 1264,
    instrux + 1266,
    instrux + 1494,
    instrux + 1496,
};

static const struct itemplate * const itable_0F12[] = {
    instrux + 1257,
    instrux + 1259,
    instrux + 1490,
    instrux + 1516,
    instrux + 1518,
};

static const struct itemplate * const itable_0F13[] = {
    instrux + 1258,
    instrux + 1489,
};

static const struct itemplate * const itable_0F14[] = {
    instrux + 1282,
    instrux + 1507,
};

static const struct itemplate * const itable_0F15[] = {
    instrux + 1281,
    instrux + 1506,
};

static const struct itemplate * const itable_0F16[] = {
    instrux + 1254,
    instrux + 1256,
    instrux + 1488,
    instrux + 1517,
};

static const struct itemplate * const itable_0F17[] = {
    instrux + 1255,
    instrux + 1487,
};

static const struct itemplate * const itable_0F18[] = {
    instrux + 1302,
    instrux + 1303,
    instrux + 1304,
    instrux + 1305,
};

static const struct itemplate * const itable_0F1F[] = {
    instrux + 693,
    instrux + 694,
    instrux + 695,
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
    instrux + 1252,
    instrux + 1485,
};

static const struct itemplate * const itable_0F29[] = {
    instrux + 1253,
    instrux + 1486,
};

static const struct itemplate * const itable_0F2A[] = {
    instrux + 1234,
    instrux + 1236,
    instrux + 1237,
    instrux + 1461,
    instrux + 1469,
    instrux + 1470,
};

static const struct itemplate * const itable_0F2B[] = {
    instrux + 1262,
    instrux + 1333,
    instrux + 1555,
    instrux + 1556,
};

static const struct itemplate * const itable_0F2C[] = {
    instrux + 1242,
    instrux + 1243,
    instrux + 1244,
    instrux + 1472,
    instrux + 1475,
    instrux + 1476,
    instrux + 1477,
    instrux + 1478,
};

static const struct itemplate * const itable_0F2D[] = {
    instrux + 1235,
    instrux + 1238,
    instrux + 1239,
    instrux + 1240,
    instrux + 1241,
    instrux + 1459,
    instrux + 1464,
    instrux + 1465,
    instrux + 1466,
    instrux + 1467,
};

static const struct itemplate * const itable_0F2E[] = {
    instrux + 1280,
    instrux + 1505,
};

static const struct itemplate * const itable_0F2F[] = {
    instrux + 1233,
    instrux + 1455,
};

static const struct itemplate * const itable_0F30[] = {
    instrux + 1132,
};

static const struct itemplate * const itable_0F31[] = {
    instrux + 884,
};

static const struct itemplate * const itable_0F32[] = {
    instrux + 882,
};

static const struct itemplate * const itable_0F33[] = {
    instrux + 883,
};

static const struct itemplate * const itable_0F34[] = {
    instrux + 1091,
};

static const struct itemplate * const itable_0F35[] = {
    instrux + 1092,
};

static const struct itemplate * const itable_0F3800[] = {
    instrux + 1543,
    instrux + 1544,
};

static const struct itemplate * const itable_0F3801[] = {
    instrux + 1527,
    instrux + 1528,
};

static const struct itemplate * const itable_0F3802[] = {
    instrux + 1529,
    instrux + 1530,
};

static const struct itemplate * const itable_0F3803[] = {
    instrux + 1531,
    instrux + 1532,
};

static const struct itemplate * const itable_0F3804[] = {
    instrux + 1539,
    instrux + 1540,
};

static const struct itemplate * const itable_0F3805[] = {
    instrux + 1533,
    instrux + 1534,
};

static const struct itemplate * const itable_0F3806[] = {
    instrux + 1535,
    instrux + 1536,
};

static const struct itemplate * const itable_0F3807[] = {
    instrux + 1537,
    instrux + 1538,
};

static const struct itemplate * const itable_0F3808[] = {
    instrux + 1545,
    instrux + 1546,
};

static const struct itemplate * const itable_0F3809[] = {
    instrux + 1547,
    instrux + 1548,
};

static const struct itemplate * const itable_0F380A[] = {
    instrux + 1549,
    instrux + 1550,
};

static const struct itemplate * const itable_0F380B[] = {
    instrux + 1541,
    instrux + 1542,
};

static const struct itemplate * const itable_0F3810[] = {
    instrux + 1574,
    instrux + 1575,
};

static const struct itemplate * const itable_0F3814[] = {
    instrux + 1564,
    instrux + 1565,
};

static const struct itemplate * const itable_0F3815[] = {
    instrux + 1562,
    instrux + 1563,
};

static const struct itemplate * const itable_0F3817[] = {
    instrux + 1614,
};

static const struct itemplate * const itable_0F381C[] = {
    instrux + 1519,
    instrux + 1520,
};

static const struct itemplate * const itable_0F381D[] = {
    instrux + 1521,
    instrux + 1522,
};

static const struct itemplate * const itable_0F381E[] = {
    instrux + 1523,
    instrux + 1524,
};

static const struct itemplate * const itable_0F3820[] = {
    instrux + 1600,
};

static const struct itemplate * const itable_0F3821[] = {
    instrux + 1601,
};

static const struct itemplate * const itable_0F3822[] = {
    instrux + 1602,
};

static const struct itemplate * const itable_0F3823[] = {
    instrux + 1603,
};

static const struct itemplate * const itable_0F3824[] = {
    instrux + 1604,
};

static const struct itemplate * const itable_0F3825[] = {
    instrux + 1605,
};

static const struct itemplate * const itable_0F3828[] = {
    instrux + 1612,
};

static const struct itemplate * const itable_0F3829[] = {
    instrux + 1577,
};

static const struct itemplate * const itable_0F382A[] = {
    instrux + 1571,
};

static const struct itemplate * const itable_0F382B[] = {
    instrux + 1573,
};

static const struct itemplate * const itable_0F3830[] = {
    instrux + 1606,
};

static const struct itemplate * const itable_0F3831[] = {
    instrux + 1607,
};

static const struct itemplate * const itable_0F3832[] = {
    instrux + 1608,
};

static const struct itemplate * const itable_0F3833[] = {
    instrux + 1609,
};

static const struct itemplate * const itable_0F3834[] = {
    instrux + 1610,
};

static const struct itemplate * const itable_0F3835[] = {
    instrux + 1611,
};

static const struct itemplate * const itable_0F3838[] = {
    instrux + 1596,
};

static const struct itemplate * const itable_0F3839[] = {
    instrux + 1597,
};

static const struct itemplate * const itable_0F383A[] = {
    instrux + 1599,
};

static const struct itemplate * const itable_0F383B[] = {
    instrux + 1598,
};

static const struct itemplate * const itable_0F383C[] = {
    instrux + 1592,
};

static const struct itemplate * const itable_0F383D[] = {
    instrux + 1593,
};

static const struct itemplate * const itable_0F383E[] = {
    instrux + 1595,
};

static const struct itemplate * const itable_0F383F[] = {
    instrux + 1594,
};

static const struct itemplate * const itable_0F3840[] = {
    instrux + 1613,
};

static const struct itemplate * const itable_0F3841[] = {
    instrux + 1586,
};

static const struct itemplate * const itable_0F3882[] = {
    instrux + 493,
    instrux + 494,
};

static const struct itemplate * const itable_0F3A08[] = {
    instrux + 1616,
};

static const struct itemplate * const itable_0F3A09[] = {
    instrux + 1615,
};

static const struct itemplate * const itable_0F3A0A[] = {
    instrux + 1618,
};

static const struct itemplate * const itable_0F3A0B[] = {
    instrux + 1617,
};

static const struct itemplate * const itable_0F3A0C[] = {
    instrux + 1561,
};

static const struct itemplate * const itable_0F3A0D[] = {
    instrux + 1560,
};

static const struct itemplate * const itable_0F3A0E[] = {
    instrux + 1576,
};

static const struct itemplate * const itable_0F3A0F[] = {
    instrux + 1525,
    instrux + 1526,
};

static const struct itemplate * const itable_0F3A14[] = {
    instrux + 1578,
    instrux + 1579,
    instrux + 1580,
};

static const struct itemplate * const itable_0F3A15[] = {
    instrux + 1583,
    instrux + 1584,
    instrux + 1585,
};

static const struct itemplate * const itable_0F3A16[] = {
    instrux + 1581,
    instrux + 1582,
};

static const struct itemplate * const itable_0F3A17[] = {
    instrux + 1568,
    instrux + 1569,
};

static const struct itemplate * const itable_0F3A20[] = {
    instrux + 1587,
    instrux + 1588,
    instrux + 1589,
};

static const struct itemplate * const itable_0F3A21[] = {
    instrux + 1570,
};

static const struct itemplate * const itable_0F3A22[] = {
    instrux + 1590,
    instrux + 1591,
};

static const struct itemplate * const itable_0F3A40[] = {
    instrux + 1567,
};

static const struct itemplate * const itable_0F3A41[] = {
    instrux + 1566,
};

static const struct itemplate * const itable_0F3A42[] = {
    instrux + 1572,
};

static const struct itemplate * const itable_0F40[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F41[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F42[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F43[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F44[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F45[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F46[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F47[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F48[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F49[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F4A[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F4B[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F4C[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F4D[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F4E[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F4F[] = {
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
};

static const struct itemplate * const itable_0F50[] = {
    instrux + 1260,
    instrux + 1261,
    instrux + 1491,
    instrux + 1492,
};

static const struct itemplate * const itable_0F51[] = {
    instrux + 1275,
    instrux + 1276,
    instrux + 1501,
    instrux + 1502,
};

static const struct itemplate * const itable_0F52[] = {
    instrux + 1272,
    instrux + 1273,
};

static const struct itemplate * const itable_0F53[] = {
    instrux + 1270,
    instrux + 1271,
};

static const struct itemplate * const itable_0F54[] = {
    instrux + 1214,
    instrux + 1436,
};

static const struct itemplate * const itable_0F55[] = {
    instrux + 1213,
    instrux + 1435,
};

static const struct itemplate * const itable_0F56[] = {
    instrux + 1269,
    instrux + 1499,
};

static const struct itemplate * const itable_0F57[] = {
    instrux + 1283,
    instrux + 1508,
};

static const struct itemplate * const itable_0F58[] = {
    instrux + 1211,
    instrux + 1212,
    instrux + 1433,
    instrux + 1434,
};

static const struct itemplate * const itable_0F59[] = {
    instrux + 1267,
    instrux + 1268,
    instrux + 1497,
    instrux + 1498,
};

static const struct itemplate * const itable_0F5A[] = {
    instrux + 1460,
    instrux + 1463,
    instrux + 1468,
    instrux + 1471,
};

static const struct itemplate * const itable_0F5B[] = {
    instrux + 1457,
    instrux + 1462,
    instrux + 1474,
};

static const struct itemplate * const itable_0F5C[] = {
    instrux + 1278,
    instrux + 1279,
    instrux + 1503,
    instrux + 1504,
};

static const struct itemplate * const itable_0F5D[] = {
    instrux + 1250,
    instrux + 1251,
    instrux + 1483,
    instrux + 1484,
};

static const struct itemplate * const itable_0F5E[] = {
    instrux + 1245,
    instrux + 1246,
    instrux + 1479,
    instrux + 1480,
};

static const struct itemplate * const itable_0F5F[] = {
    instrux + 1248,
    instrux + 1249,
    instrux + 1481,
    instrux + 1482,
};

static const struct itemplate * const itable_0F60[] = {
    instrux + 829,
    instrux + 1428,
};

static const struct itemplate * const itable_0F61[] = {
    instrux + 831,
    instrux + 1429,
};

static const struct itemplate * const itable_0F62[] = {
    instrux + 830,
    instrux + 1430,
};

static const struct itemplate * const itable_0F63[] = {
    instrux + 742,
    instrux + 1352,
};

static const struct itemplate * const itable_0F64[] = {
    instrux + 758,
    instrux + 1371,
};

static const struct itemplate * const itable_0F65[] = {
    instrux + 760,
    instrux + 1372,
};

static const struct itemplate * const itable_0F66[] = {
    instrux + 759,
    instrux + 1373,
};

static const struct itemplate * const itable_0F67[] = {
    instrux + 743,
    instrux + 1354,
};

static const struct itemplate * const itable_0F68[] = {
    instrux + 826,
    instrux + 1424,
};

static const struct itemplate * const itable_0F69[] = {
    instrux + 828,
    instrux + 1425,
};

static const struct itemplate * const itable_0F6A[] = {
    instrux + 827,
    instrux + 1426,
};

static const struct itemplate * const itable_0F6B[] = {
    instrux + 741,
    instrux + 1353,
};

static const struct itemplate * const itable_0F6C[] = {
    instrux + 1431,
};

static const struct itemplate * const itable_0F6D[] = {
    instrux + 1427,
};

static const struct itemplate * const itable_0F6E[] = {
    instrux + 660,
    instrux + 664,
    instrux + 1337,
    instrux + 1338,
    instrux + 1349,
};

static const struct itemplate * const itable_0F6F[] = {
    instrux + 662,
    instrux + 1340,
    instrux + 1342,
};

static const struct itemplate * const itable_0F70[] = {
    instrux + 1322,
    instrux + 1391,
    instrux + 1392,
    instrux + 1393,
    instrux + 1394,
    instrux + 1395,
    instrux + 1396,
};

static const struct itemplate * const itable_0F71[] = {
    instrux + 808,
    instrux + 812,
    instrux + 818,
    instrux + 1399,
    instrux + 1405,
    instrux + 1410,
};

static const struct itemplate * const itable_0F72[] = {
    instrux + 804,
    instrux + 810,
    instrux + 814,
    instrux + 1401,
    instrux + 1407,
    instrux + 1412,
};

static const struct itemplate * const itable_0F73[] = {
    instrux + 806,
    instrux + 816,
    instrux + 1397,
    instrux + 1403,
    instrux + 1408,
    instrux + 1414,
};

static const struct itemplate * const itable_0F74[] = {
    instrux + 755,
    instrux + 1368,
};

static const struct itemplate * const itable_0F75[] = {
    instrux + 757,
    instrux + 1369,
};

static const struct itemplate * const itable_0F76[] = {
    instrux + 756,
    instrux + 1370,
};

static const struct itemplate * const itable_0F77[] = {
    instrux + 250,
};

static const struct itemplate * const itable_0F78[] = {
    instrux + 1551,
    instrux + 1553,
};

static const struct itemplate * const itable_0F79[] = {
    instrux + 1552,
    instrux + 1554,
};

static const struct itemplate * const itable_0F7C[] = {
    instrux + 1511,
    instrux + 1512,
};

static const struct itemplate * const itable_0F7D[] = {
    instrux + 1513,
    instrux + 1514,
};

static const struct itemplate * const itable_0F7E[] = {
    instrux + 661,
    instrux + 665,
    instrux + 1336,
    instrux + 1339,
    instrux + 1345,
    instrux + 1348,
    instrux + 1350,
};

static const struct itemplate * const itable_0F7F[] = {
    instrux + 663,
    instrux + 1341,
    instrux + 1343,
};

static const struct itemplate * const itable_0F80[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F81[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F82[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F83[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F84[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F85[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F86[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F87[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F88[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F89[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F8A[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F8B[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F8C[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F8D[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F8E[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F8F[] = {
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
};

static const struct itemplate * const itable_0F90[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F91[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F92[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F93[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F94[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F95[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F96[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F97[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F98[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F99[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F9A[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F9B[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F9C[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F9D[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F9E[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0F9F[] = {
    instrux + 1209,
    instrux + 1210,
};

static const struct itemplate * const itable_0FA0[] = {
    instrux + 842,
};

static const struct itemplate * const itable_0FA1[] = {
    instrux + 791,
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
    instrux + 999,
    instrux + 1000,
    instrux + 1001,
    instrux + 1002,
    instrux + 1003,
    instrux + 1004,
};

static const struct itemplate * const itable_0FA5[] = {
    instrux + 1005,
    instrux + 1006,
    instrux + 1007,
    instrux + 1008,
    instrux + 1009,
    instrux + 1010,
};

static const struct itemplate * const itable_0FA8[] = {
    instrux + 843,
};

static const struct itemplate * const itable_0FA9[] = {
    instrux + 792,
};

static const struct itemplate * const itable_0FAA[] = {
    instrux + 934,
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
    instrux + 1023,
    instrux + 1024,
    instrux + 1025,
    instrux + 1026,
    instrux + 1027,
    instrux + 1028,
};

static const struct itemplate * const itable_0FAD[] = {
    instrux + 1029,
    instrux + 1030,
    instrux + 1031,
    instrux + 1032,
    instrux + 1033,
    instrux + 1034,
};

static const struct itemplate * const itable_0FAE[] = {
    instrux + 550,
    instrux + 605,
    instrux + 985,
    instrux + 1247,
    instrux + 1277,
    instrux + 1284,
    instrux + 1285,
    instrux + 1286,
    instrux + 1287,
    instrux + 1290,
    instrux + 1291,
    instrux + 1294,
    instrux + 1295,
    instrux + 1298,
    instrux + 1299,
    instrux + 1306,
    instrux + 1329,
    instrux + 1334,
    instrux + 1335,
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
    instrux + 676,
    instrux + 677,
    instrux + 678,
    instrux + 680,
};

static const struct itemplate * const itable_0FB7[] = {
    instrux + 679,
    instrux + 681,
};

static const struct itemplate * const itable_0FB8[] = {
    instrux + 526,
    instrux + 527,
    instrux + 528,
};

static const struct itemplate * const itable_0FB9[] = {
    instrux + 1120,
    instrux + 1121,
    instrux + 1122,
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
};

static const struct itemplate * const itable_0FBD[] = {
    instrux + 118,
    instrux + 119,
    instrux + 120,
    instrux + 121,
    instrux + 122,
    instrux + 123,
    instrux + 1557,
    instrux + 1558,
    instrux + 1559,
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
    instrux + 1133,
    instrux + 1134,
};

static const struct itemplate * const itable_0FC1[] = {
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
    instrux + 1138,
    instrux + 1139,
    instrux + 1140,
};

static const struct itemplate * const itable_0FC2[] = {
    instrux + 1215,
    instrux + 1216,
    instrux + 1217,
    instrux + 1218,
    instrux + 1219,
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
    instrux + 1437,
    instrux + 1438,
    instrux + 1439,
    instrux + 1440,
    instrux + 1441,
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
};

static const struct itemplate * const itable_0FC3[] = {
    instrux + 1331,
    instrux + 1332,
};

static const struct itemplate * const itable_0FC4[] = {
    instrux + 1312,
    instrux + 1313,
    instrux + 1314,
    instrux + 1375,
    instrux + 1376,
    instrux + 1377,
};

static const struct itemplate * const itable_0FC5[] = {
    instrux + 1311,
    instrux + 1374,
};

static const struct itemplate * const itable_0FC6[] = {
    instrux + 1274,
    instrux + 1500,
};

static const struct itemplate * const itable_0FC7[] = {
    instrux + 232,
    instrux + 233,
    instrux + 1292,
    instrux + 1293,
    instrux + 1296,
    instrux + 1297,
    instrux + 1300,
    instrux + 1301,
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
    instrux + 1509,
    instrux + 1510,
};

static const struct itemplate * const itable_0FD1[] = {
    instrux + 817,
    instrux + 1409,
};

static const struct itemplate * const itable_0FD2[] = {
    instrux + 813,
    instrux + 1411,
};

static const struct itemplate * const itable_0FD3[] = {
    instrux + 815,
    instrux + 1413,
};

static const struct itemplate * const itable_0FD4[] = {
    instrux + 1358,
    instrux + 1359,
};

static const struct itemplate * const itable_0FD5[] = {
    instrux + 781,
    instrux + 1386,
};

static const struct itemplate * const itable_0FD6[] = {
    instrux + 1344,
    instrux + 1346,
    instrux + 1347,
    instrux + 1351,
};

static const struct itemplate * const itable_0FD7[] = {
    instrux + 1319,
    instrux + 1383,
};

static const struct itemplate * const itable_0FD8[] = {
    instrux + 823,
    instrux + 1422,
};

static const struct itemplate * const itable_0FD9[] = {
    instrux + 824,
    instrux + 1423,
};

static const struct itemplate * const itable_0FDA[] = {
    instrux + 1318,
    instrux + 1382,
};

static const struct itemplate * const itable_0FDB[] = {
    instrux + 751,
    instrux + 1364,
};

static const struct itemplate * const itable_0FDC[] = {
    instrux + 748,
    instrux + 1362,
};

static const struct itemplate * const itable_0FDD[] = {
    instrux + 749,
    instrux + 1363,
};

static const struct itemplate * const itable_0FDE[] = {
    instrux + 1316,
    instrux + 1380,
};

static const struct itemplate * const itable_0FDF[] = {
    instrux + 752,
    instrux + 1365,
};

static const struct itemplate * const itable_0FE0[] = {
    instrux + 1309,
    instrux + 1366,
};

static const struct itemplate * const itable_0FE1[] = {
    instrux + 811,
    instrux + 1404,
};

static const struct itemplate * const itable_0FE2[] = {
    instrux + 809,
    instrux + 1406,
};

static const struct itemplate * const itable_0FE3[] = {
    instrux + 1310,
    instrux + 1367,
};

static const struct itemplate * const itable_0FE4[] = {
    instrux + 1320,
    instrux + 1384,
};

static const struct itemplate * const itable_0FE5[] = {
    instrux + 780,
    instrux + 1385,
};

static const struct itemplate * const itable_0FE6[] = {
    instrux + 1456,
    instrux + 1458,
    instrux + 1473,
};

static const struct itemplate * const itable_0FE7[] = {
    instrux + 1308,
    instrux + 1330,
};

static const struct itemplate * const itable_0FE8[] = {
    instrux + 821,
    instrux + 1420,
};

static const struct itemplate * const itable_0FE9[] = {
    instrux + 822,
    instrux + 1421,
};

static const struct itemplate * const itable_0FEA[] = {
    instrux + 1317,
    instrux + 1381,
};

static const struct itemplate * const itable_0FEB[] = {
    instrux + 800,
    instrux + 1389,
};

static const struct itemplate * const itable_0FEC[] = {
    instrux + 746,
    instrux + 1360,
};

static const struct itemplate * const itable_0FED[] = {
    instrux + 747,
    instrux + 1361,
};

static const struct itemplate * const itable_0FEE[] = {
    instrux + 1315,
    instrux + 1379,
};

static const struct itemplate * const itable_0FEF[] = {
    instrux + 857,
    instrux + 1432,
};

static const struct itemplate * const itable_0FF0[] = {
    instrux + 1515,
};

static const struct itemplate * const itable_0FF1[] = {
    instrux + 807,
    instrux + 1398,
};

static const struct itemplate * const itable_0FF2[] = {
    instrux + 803,
    instrux + 1400,
};

static const struct itemplate * const itable_0FF3[] = {
    instrux + 805,
    instrux + 1402,
};

static const struct itemplate * const itable_0FF4[] = {
    instrux + 1387,
    instrux + 1388,
};

static const struct itemplate * const itable_0FF5[] = {
    instrux + 778,
    instrux + 1378,
};

static const struct itemplate * const itable_0FF6[] = {
    instrux + 1321,
    instrux + 1390,
};

static const struct itemplate * const itable_0FF7[] = {
    instrux + 1307,
    instrux + 1328,
};

static const struct itemplate * const itable_0FF8[] = {
    instrux + 819,
    instrux + 1415,
};

static const struct itemplate * const itable_0FF9[] = {
    instrux + 825,
    instrux + 1416,
};

static const struct itemplate * const itable_0FFA[] = {
    instrux + 820,
    instrux + 1417,
};

static const struct itemplate * const itable_0FFB[] = {
    instrux + 1418,
    instrux + 1419,
};

static const struct itemplate * const itable_0FFC[] = {
    instrux + 744,
    instrux + 1355,
};

static const struct itemplate * const itable_0FFD[] = {
    instrux + 750,
    instrux + 1356,
};

static const struct itemplate * const itable_0FFE[] = {
    instrux + 745,
    instrux + 1357,
};

static const struct itemplate * const itable_0FFF[] = {
    instrux + 1116,
    instrux + 1117,
    instrux + 1118,
    instrux + 1119,
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
    instrux + 840,
};

static const struct itemplate * const itable_17[] = {
    instrux + 789,
};

static const struct itemplate * const itable_18[] = {
    instrux + 949,
    instrux + 950,
};

static const struct itemplate * const itable_19[] = {
    instrux + 951,
    instrux + 952,
    instrux + 953,
    instrux + 954,
    instrux + 955,
    instrux + 956,
};

static const struct itemplate * const itable_1A[] = {
    instrux + 957,
    instrux + 958,
};

static const struct itemplate * const itable_1B[] = {
    instrux + 959,
    instrux + 960,
    instrux + 961,
    instrux + 962,
    instrux + 963,
    instrux + 964,
};

static const struct itemplate * const itable_1C[] = {
    instrux + 968,
};

static const struct itemplate * const itable_1D[] = {
    instrux + 969,
    instrux + 970,
    instrux + 971,
};

static const struct itemplate * const itable_1E[] = {
    instrux + 841,
};

static const struct itemplate * const itable_1F[] = {
    instrux + 790,
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
    instrux + 1059,
    instrux + 1060,
};

static const struct itemplate * const itable_29[] = {
    instrux + 1061,
    instrux + 1062,
    instrux + 1063,
    instrux + 1064,
    instrux + 1065,
    instrux + 1066,
};

static const struct itemplate * const itable_2A[] = {
    instrux + 1067,
    instrux + 1068,
};

static const struct itemplate * const itable_2B[] = {
    instrux + 1069,
    instrux + 1070,
    instrux + 1071,
    instrux + 1072,
    instrux + 1073,
    instrux + 1074,
};

static const struct itemplate * const itable_2C[] = {
    instrux + 1078,
};

static const struct itemplate * const itable_2D[] = {
    instrux + 1079,
    instrux + 1080,
    instrux + 1081,
};

static const struct itemplate * const itable_2F[] = {
    instrux + 239,
};

static const struct itemplate * const itable_30[] = {
    instrux + 1166,
    instrux + 1167,
};

static const struct itemplate * const itable_31[] = {
    instrux + 1168,
    instrux + 1169,
    instrux + 1170,
    instrux + 1171,
    instrux + 1172,
    instrux + 1173,
};

static const struct itemplate * const itable_32[] = {
    instrux + 1174,
    instrux + 1175,
};

static const struct itemplate * const itable_33[] = {
    instrux + 1176,
    instrux + 1177,
    instrux + 1178,
    instrux + 1179,
    instrux + 1180,
    instrux + 1181,
};

static const struct itemplate * const itable_34[] = {
    instrux + 1185,
};

static const struct itemplate * const itable_35[] = {
    instrux + 1186,
    instrux + 1187,
    instrux + 1188,
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
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_51[] = {
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_52[] = {
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_53[] = {
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_54[] = {
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_55[] = {
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_56[] = {
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_57[] = {
    instrux + 832,
    instrux + 833,
    instrux + 834,
};

static const struct itemplate * const itable_58[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_59[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_5A[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_5B[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_5C[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_5D[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_5E[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_5F[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
};

static const struct itemplate * const itable_60[] = {
    instrux + 850,
    instrux + 851,
    instrux + 852,
};

static const struct itemplate * const itable_61[] = {
    instrux + 793,
    instrux + 794,
    instrux + 795,
};

static const struct itemplate * const itable_62[] = {
    instrux + 110,
    instrux + 111,
};

static const struct itemplate * const itable_63[] = {
    instrux + 108,
    instrux + 109,
};

static const struct itemplate * const itable_68[] = {
    instrux + 845,
    instrux + 846,
    instrux + 847,
    instrux + 848,
    instrux + 849,
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
    instrux + 844,
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
    instrux + 738,
};

static const struct itemplate * const itable_6F[] = {
    instrux + 739,
    instrux + 740,
};

static const struct itemplate * const itable_70[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_71[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_72[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_73[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_74[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_75[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_76[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_77[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_78[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_79[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_7A[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_7B[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_7C[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_7D[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_7E[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_7F[] = {
    instrux + 1208,
};

static const struct itemplate * const itable_80[] = {
    instrux + 37,
    instrux + 67,
    instrux + 72,
    instrux + 99,
    instrux + 104,
    instrux + 211,
    instrux + 216,
    instrux + 723,
    instrux + 728,
    instrux + 972,
    instrux + 977,
    instrux + 1082,
    instrux + 1087,
    instrux + 1189,
    instrux + 1194,
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
    instrux + 725,
    instrux + 726,
    instrux + 727,
    instrux + 730,
    instrux + 731,
    instrux + 974,
    instrux + 975,
    instrux + 976,
    instrux + 979,
    instrux + 980,
    instrux + 1084,
    instrux + 1085,
    instrux + 1086,
    instrux + 1089,
    instrux + 1090,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1196,
    instrux + 1197,
};

static const struct itemplate * const itable_82[] = {
    instrux + 38,
    instrux + 68,
    instrux + 73,
    instrux + 100,
    instrux + 105,
    instrux + 212,
    instrux + 217,
    instrux + 724,
    instrux + 729,
    instrux + 973,
    instrux + 978,
    instrux + 1083,
    instrux + 1088,
    instrux + 1190,
    instrux + 1195,
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
    instrux + 716,
    instrux + 717,
    instrux + 718,
    instrux + 965,
    instrux + 966,
    instrux + 967,
    instrux + 1075,
    instrux + 1076,
    instrux + 1077,
    instrux + 1182,
    instrux + 1183,
    instrux + 1184,
};

static const struct itemplate * const itable_84[] = {
    instrux + 1093,
    instrux + 1094,
    instrux + 1101,
};

static const struct itemplate * const itable_85[] = {
    instrux + 1095,
    instrux + 1096,
    instrux + 1097,
    instrux + 1098,
    instrux + 1099,
    instrux + 1100,
    instrux + 1102,
    instrux + 1103,
    instrux + 1104,
};

static const struct itemplate * const itable_86[] = {
    instrux + 1148,
    instrux + 1149,
    instrux + 1156,
    instrux + 1157,
};

static const struct itemplate * const itable_87[] = {
    instrux + 1150,
    instrux + 1151,
    instrux + 1152,
    instrux + 1153,
    instrux + 1154,
    instrux + 1155,
    instrux + 1158,
    instrux + 1159,
    instrux + 1160,
    instrux + 1161,
    instrux + 1162,
    instrux + 1163,
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
    instrux + 785,
    instrux + 786,
    instrux + 787,
};

static const struct itemplate * const itable_90[] = {
    instrux + 692,
    instrux + 753,
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
    instrux + 1147,
};

static const struct itemplate * const itable_91[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
};

static const struct itemplate * const itable_92[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
};

static const struct itemplate * const itable_93[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
};

static const struct itemplate * const itable_94[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
};

static const struct itemplate * const itable_95[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
};

static const struct itemplate * const itable_96[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
};

static const struct itemplate * const itable_97[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
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
    instrux + 853,
    instrux + 854,
    instrux + 855,
    instrux + 856,
};

static const struct itemplate * const itable_9D[] = {
    instrux + 796,
    instrux + 797,
    instrux + 798,
    instrux + 799,
};

static const struct itemplate * const itable_9E[] = {
    instrux + 935,
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
    instrux + 1105,
};

static const struct itemplate * const itable_A9[] = {
    instrux + 1106,
    instrux + 1107,
    instrux + 1108,
};

static const struct itemplate * const itable_AA[] = {
    instrux + 1050,
};

static const struct itemplate * const itable_AB[] = {
    instrux + 1051,
    instrux + 1052,
    instrux + 1053,
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
    instrux + 981,
};

static const struct itemplate * const itable_AF[] = {
    instrux + 982,
    instrux + 983,
    instrux + 984,
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
    instrux + 860,
    instrux + 872,
    instrux + 912,
    instrux + 924,
    instrux + 939,
    instrux + 989,
    instrux + 1013,
};

static const struct itemplate * const itable_C1[] = {
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

static const struct itemplate * const itable_C2[] = {
    instrux + 887,
    instrux + 891,
    instrux + 893,
    instrux + 897,
    instrux + 899,
    instrux + 903,
    instrux + 905,
    instrux + 909,
};

static const struct itemplate * const itable_C3[] = {
    instrux + 886,
    instrux + 890,
    instrux + 892,
    instrux + 896,
    instrux + 898,
    instrux + 902,
    instrux + 904,
    instrux + 908,
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
};

static const struct itemplate * const itable_C7[] = {
    instrux + 653,
    instrux + 654,
    instrux + 655,
    instrux + 656,
    instrux + 658,
    instrux + 659,
};

static const struct itemplate * const itable_C8[] = {
    instrux + 251,
};

static const struct itemplate * const itable_C9[] = {
    instrux + 547,
};

static const struct itemplate * const itable_CA[] = {
    instrux + 889,
    instrux + 895,
    instrux + 901,
    instrux + 907,
};

static const struct itemplate * const itable_CB[] = {
    instrux + 888,
    instrux + 894,
    instrux + 900,
    instrux + 906,
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
    instrux + 858,
    instrux + 870,
    instrux + 910,
    instrux + 922,
    instrux + 937,
    instrux + 987,
    instrux + 1011,
};

static const struct itemplate * const itable_D1[] = {
    instrux + 861,
    instrux + 864,
    instrux + 867,
    instrux + 873,
    instrux + 876,
    instrux + 879,
    instrux + 913,
    instrux + 916,
    instrux + 919,
    instrux + 925,
    instrux + 928,
    instrux + 931,
    instrux + 940,
    instrux + 943,
    instrux + 946,
    instrux + 990,
    instrux + 993,
    instrux + 996,
    instrux + 1014,
    instrux + 1017,
    instrux + 1020,
};

static const struct itemplate * const itable_D2[] = {
    instrux + 859,
    instrux + 871,
    instrux + 911,
    instrux + 923,
    instrux + 938,
    instrux + 988,
    instrux + 1012,
};

static const struct itemplate * const itable_D3[] = {
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

static const struct itemplate * const itable_D4[] = {
    instrux + 11,
    instrux + 12,
};

static const struct itemplate * const itable_D5[] = {
    instrux + 9,
    instrux + 10,
};

static const struct itemplate * const itable_D6[] = {
    instrux + 936,
};

static const struct itemplate * const itable_D7[] = {
    instrux + 1164,
    instrux + 1165,
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
    instrux + 732,
};

static const struct itemplate * const itable_E7[] = {
    instrux + 733,
    instrux + 734,
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
    instrux + 735,
};

static const struct itemplate * const itable_EF[] = {
    instrux + 736,
    instrux + 737,
};

static const struct itemplate * const itable_F1[] = {
    instrux + 489,
    instrux + 1041,
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
    instrux + 682,
    instrux + 688,
    instrux + 696,
    instrux + 1109,
    instrux + 1113,
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
    instrux + 683,
    instrux + 684,
    instrux + 685,
    instrux + 689,
    instrux + 690,
    instrux + 691,
    instrux + 697,
    instrux + 698,
    instrux + 699,
    instrux + 1110,
    instrux + 1111,
    instrux + 1112,
    instrux + 1114,
    instrux + 1115,
};

static const struct itemplate * const itable_F8[] = {
    instrux + 183,
};

static const struct itemplate * const itable_F9[] = {
    instrux + 1047,
};

static const struct itemplate * const itable_FA[] = {
    instrux + 185,
};

static const struct itemplate * const itable_FB[] = {
    instrux + 1049,
};

static const struct itemplate * const itable_FC[] = {
    instrux + 184,
};

static const struct itemplate * const itable_FD[] = {
    instrux + 1048,
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
    instrux + 835,
    instrux + 836,
    instrux + 837,
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
    /* 0x80 */ { NULL, 0 },
    /* 0x81 */ { NULL, 0 },
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
    /* 0xc8 */ { NULL, 0 },
    /* 0xc9 */ { NULL, 0 },
    /* 0xca */ { NULL, 0 },
    /* 0xcb */ { NULL, 0 },
    /* 0xcc */ { NULL, 0 },
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
    /* 0xdf */ { NULL, 0 },
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
    /* 0xcc */ { NULL, 0 },
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
    /* 0xdf */ { NULL, 0 },
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
    /* 0x01 */ { itable_0F01, 24 },
    /* 0x02 */ { itable_0F02, 10 },
    /* 0x03 */ { itable_0F03, 10 },
    /* 0x04 */ { NULL, 0 },
    /* 0x05 */ { NULL, 0 },
    /* 0x06 */ { itable_0F06, 1 },
    /* 0x07 */ { NULL, 0 },
    /* 0x08 */ { itable_0F08, 1 },
    /* 0x09 */ { itable_0F09, 1 },
    /* 0x0a */ { NULL, 0 },
    /* 0x0b */ { itable_0F0B, 1 },
    /* 0x0c */ { NULL, 0 },
    /* 0x0d */ { itable_0F0D, 2 },
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
    /* 0x1a */ { NULL, 0 },
    /* 0x1b */ { NULL, 0 },
    /* 0x1c */ { NULL, 0 },
    /* 0x1d */ { NULL, 0 },
    /* 0x1e */ { NULL, 0 },
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
    /* 0x37 */ { NULL, 0 },
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
    /* 0x78 */ { itable_0F78, 2 },
    /* 0x79 */ { itable_0F79, 2 },
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
    /* 0xae */ { itable_0FAE, 19 },
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
    /* 0xbc */ { itable_0FBC, 6 },
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
    /* 0xc7 */ { itable_0FC7, 8 },
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
    /* 0x63 */ { itable_63, 2 },
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
    /* 0xc6 */ { itable_C6, 2 },
    /* 0xc7 */ { itable_C7, 6 },
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
