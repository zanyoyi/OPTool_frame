/* This file auto-generated from insns.dat by insns.pl - don't edit it */
#include "pch.h"
#include "nasm.h"
#include "insns.h"

static const struct itemplate instrux[] = {
    /*    0 */ {I_RESB, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    1 */ {I_RESW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    2 */ {I_RESD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    3 */ {I_RESQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    4 */ {I_REST, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    5 */ {I_RESO, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    6 */ {I_RESY, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    7 */ {I_RESZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6640, 0},
    /*    8 */ {I_AAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7510, 1},
    /*    9 */ {I_AAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6502, 1},
    /*   10 */ {I_AAD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6506, 2},
    /*   11 */ {I_AAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6510, 1},
    /*   12 */ {I_AAM, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6514, 2},
    /*   13 */ {I_AAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7513, 1},
    /*   14 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4832, 3},
    /*   15 */ {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4833, 0},
    /*   16 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2636, 3},
    /*   17 */ {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2637, 0},
    /*   18 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2642, 4},
    /*   19 */ {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2643, 5},
    /*   20 */ {I_ADC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2648, 6},
    /*   21 */ {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2649, 7},
    /*   22 */ {I_ADC, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6518, 8},
    /*   23 */ {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6518, 0},
    /*   24 */ {I_ADC, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4837, 8},
    /*   25 */ {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4837, 0},
    /*   26 */ {I_ADC, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4842, 9},
    /*   27 */ {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4842, 5},
    /*   28 */ {I_ADC, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4847, 10},
    /*   29 */ {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4847, 7},
    /*   30 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+704, 11},
    /*   31 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+711, 12},
    /*   32 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+718, 13},
    /*   33 */ {I_ADC, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6522, 8},
    /*   34 */ {I_ADC, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4852, 8},
    /*   35 */ {I_ADC, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4857, 9},
    /*   36 */ {I_ADC, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4862, 10},
    /*   37 */ {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2654, 3},
    /*   38 */ {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2660, 3},
    /*   39 */ {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+725, 3},
    /*   40 */ {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+732, 4},
    /*   41 */ {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+739, 6},
    /*   42 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+725, 3},
    /*   43 */ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+732, 4},
    /*   44 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4867, 3},
    /*   45 */ {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4868, 0},
    /*   46 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2666, 3},
    /*   47 */ {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2667, 0},
    /*   48 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2672, 4},
    /*   49 */ {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2673, 5},
    /*   50 */ {I_ADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2678, 6},
    /*   51 */ {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2679, 7},
    /*   52 */ {I_ADD, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6526, 8},
    /*   53 */ {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6526, 0},
    /*   54 */ {I_ADD, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4872, 8},
    /*   55 */ {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4872, 0},
    /*   56 */ {I_ADD, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4877, 9},
    /*   57 */ {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4877, 5},
    /*   58 */ {I_ADD, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4882, 10},
    /*   59 */ {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4882, 7},
    /*   60 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+746, 11},
    /*   61 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+753, 12},
    /*   62 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+760, 13},
    /*   63 */ {I_ADD, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6530, 8},
    /*   64 */ {I_ADD, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4887, 8},
    /*   65 */ {I_ADD, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4892, 9},
    /*   66 */ {I_ADD, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4897, 10},
    /*   67 */ {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2684, 3},
    /*   68 */ {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2690, 3},
    /*   69 */ {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+767, 3},
    /*   70 */ {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+774, 4},
    /*   71 */ {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+781, 6},
    /*   72 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2684, 3},
    /*   73 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2690, 3},
    /*   74 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+767, 3},
    /*   75 */ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+774, 4},
    /*   76 */ {I_AND, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4902, 3},
    /*   77 */ {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+4903, 0},
    /*   78 */ {I_AND, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2696, 3},
    /*   79 */ {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2697, 0},
    /*   80 */ {I_AND, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2702, 4},
    /*   81 */ {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2703, 5},
    /*   82 */ {I_AND, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2708, 6},
    /*   83 */ {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2709, 7},
    /*   84 */ {I_AND, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6534, 8},
    /*   85 */ {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6534, 0},
    /*   86 */ {I_AND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4907, 8},
    /*   87 */ {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4907, 0},
    /*   88 */ {I_AND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4912, 9},
    /*   89 */ {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4912, 5},
    /*   90 */ {I_AND, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4917, 10},
    /*   91 */ {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4917, 7},
    /*   92 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+788, 11},
    /*   93 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+795, 12},
    /*   94 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+802, 13},
    /*   95 */ {I_AND, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6538, 8},
    /*   96 */ {I_AND, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4922, 8},
    /*   97 */ {I_AND, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4927, 9},
    /*   98 */ {I_AND, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+4932, 10},
    /*   99 */ {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2714, 3},
    /*  100 */ {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2720, 3},
    /*  101 */ {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+809, 3},
    /*  102 */ {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+816, 4},
    /*  103 */ {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+823, 6},
    /*  104 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2714, 3},
    /*  105 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2720, 3},
    /*  106 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+809, 3},
    /*  107 */ {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+816, 4},
    /*  108 */ {I_ARPL, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6542, 14},
    /*  109 */ {I_ARPL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6542, 15},
    /*  110 */ {I_BOUND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4937, 16},
    /*  111 */ {I_BOUND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4942, 17},
    /*  112 */ {I_BSF, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+830, 9},
    /*  113 */ {I_BSF, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+830, 5},
    /*  114 */ {I_BSF, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+837, 9},
    /*  115 */ {I_BSF, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+837, 5},
    /*  116 */ {I_BSF, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+844, 10},
    /*  117 */ {I_BSF, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+844, 7},
    /*  118 */ {I_BSR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+851, 9},
    /*  119 */ {I_BSR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+851, 5},
    /*  120 */ {I_BSR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+858, 9},
    /*  121 */ {I_BSR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+858, 5},
    /*  122 */ {I_BSR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+865, 10},
    /*  123 */ {I_BSR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+865, 7},
    /*  124 */ {I_BSWAP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2726, 18},
    /*  125 */ {I_BSWAP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2732, 7},
    /*  126 */ {I_BT, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2738, 9},
    /*  127 */ {I_BT, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2738, 5},
    /*  128 */ {I_BT, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2744, 9},
    /*  129 */ {I_BT, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2744, 5},
    /*  130 */ {I_BT, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2750, 10},
    /*  131 */ {I_BT, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2750, 7},
    /*  132 */ {I_BT, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+872, 5},
    /*  133 */ {I_BT, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+879, 5},
    /*  134 */ {I_BT, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+886, 7},
    /*  135 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+893, 4},
    /*  136 */ {I_BTC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+894, 5},
    /*  137 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+900, 4},
    /*  138 */ {I_BTC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+901, 5},
    /*  139 */ {I_BTC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+907, 6},
    /*  140 */ {I_BTC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+908, 7},
    /*  141 */ {I_BTC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+72, 12},
    /*  142 */ {I_BTC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+80, 12},
    /*  143 */ {I_BTC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+88, 13},
    /*  144 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+914, 4},
    /*  145 */ {I_BTR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+915, 5},
    /*  146 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+921, 4},
    /*  147 */ {I_BTR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+922, 5},
    /*  148 */ {I_BTR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+928, 6},
    /*  149 */ {I_BTR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+929, 7},
    /*  150 */ {I_BTR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+96, 12},
    /*  151 */ {I_BTR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+104, 12},
    /*  152 */ {I_BTR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+112, 13},
    /*  153 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+935, 4},
    /*  154 */ {I_BTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+936, 5},
    /*  155 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+942, 4},
    /*  156 */ {I_BTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+943, 5},
    /*  157 */ {I_BTS, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+949, 6},
    /*  158 */ {I_BTS, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+950, 7},
    /*  159 */ {I_BTS, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+120, 12},
    /*  160 */ {I_BTS, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+128, 12},
    /*  161 */ {I_BTS, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+136, 13},
    /*  162 */ {I_CALL, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4947, 19},
    /*  163 */ {I_CALL, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4952, 20},
    /*  164 */ {I_CALL, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4957, 21},
    /*  165 */ {I_CALL, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4962, 22},
    /*  166 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2774, 1},
    /*  167 */ {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2780, 1},
    /*  168 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2780, 1},
    /*  169 */ {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2786, 17},
    /*  170 */ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2786, 17},
    /*  171 */ {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4967, 1},
    /*  172 */ {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4972, 7},
    /*  173 */ {I_CALL, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4977, 0},
    /*  174 */ {I_CALL, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4982, 5},
    /*  175 */ {I_CALL, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4972, 7},
    /*  176 */ {I_CALL, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4987, 19},
    /*  177 */ {I_CALL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4992, 20},
    /*  178 */ {I_CALL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4997, 21},
    /*  179 */ {I_CALL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5002, 22},
    /*  180 */ {I_CBW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6546, 0},
    /*  181 */ {I_CDQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6550, 5},
    /*  182 */ {I_CDQE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6554, 7},
    /*  183 */ {I_CLC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7516, 0},
    /*  184 */ {I_CLD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7519, 0},
    /*  185 */ {I_CLI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7522, 0},
    /*  186 */ {I_CLTS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6558, 23},
    /*  187 */ {I_CMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7525, 0},
    /*  188 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6562, 8},
    /*  189 */ {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6562, 0},
    /*  190 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5007, 8},
    /*  191 */ {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5007, 0},
    /*  192 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5012, 9},
    /*  193 */ {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5012, 5},
    /*  194 */ {I_CMP, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5017, 10},
    /*  195 */ {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5017, 7},
    /*  196 */ {I_CMP, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6566, 8},
    /*  197 */ {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6566, 0},
    /*  198 */ {I_CMP, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5022, 8},
    /*  199 */ {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5022, 0},
    /*  200 */ {I_CMP, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5027, 9},
    /*  201 */ {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5027, 5},
    /*  202 */ {I_CMP, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5032, 10},
    /*  203 */ {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5032, 7},
    /*  204 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2792, 0},
    /*  205 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2798, 5},
    /*  206 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2804, 7},
    /*  207 */ {I_CMP, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6570, 8},
    /*  208 */ {I_CMP, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5037, 8},
    /*  209 */ {I_CMP, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5042, 9},
    /*  210 */ {I_CMP, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5047, 10},
    /*  211 */ {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5052, 8},
    /*  212 */ {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5057, 8},
    /*  213 */ {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2810, 8},
    /*  214 */ {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2816, 9},
    /*  215 */ {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2822, 10},
    /*  216 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5052, 8},
    /*  217 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5057, 8},
    /*  218 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2810, 8},
    /*  219 */ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2816, 9},
    /*  220 */ {I_CMPSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6574, 0},
    /*  221 */ {I_CMPSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5062, 5},
    /*  222 */ {I_CMPSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5067, 7},
    /*  223 */ {I_CMPSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5072, 0},
    /*  224 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2828, 24},
    /*  225 */ {I_CMPXCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2829, 25},
    /*  226 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+956, 24},
    /*  227 */ {I_CMPXCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+957, 25},
    /*  228 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+963, 24},
    /*  229 */ {I_CMPXCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+964, 25},
    /*  230 */ {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+970, 6},
    /*  231 */ {I_CMPXCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+971, 7},
    /*  232 */ {I_CMPXCHG8B, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+977, 28},
    /*  233 */ {I_CMPXCHG16B, 1, {MEMORY|BITS128,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2846, 13},
    /*  234 */ {I_CPUID, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6578, 25},
    /*  235 */ {I_CQO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6582, 7},
    /*  236 */ {I_CWD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6586, 0},
    /*  237 */ {I_CWDE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6590, 5},
    /*  238 */ {I_DAA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7528, 1},
    /*  239 */ {I_DAS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7531, 1},
    /*  240 */ {I_DEC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6594, 1},
    /*  241 */ {I_DEC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6598, 17},
    /*  242 */ {I_DEC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5082, 11},
    /*  243 */ {I_DEC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2852, 11},
    /*  244 */ {I_DEC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2858, 12},
    /*  245 */ {I_DEC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2864, 13},
    /*  246 */ {I_DIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6602, 0},
    /*  247 */ {I_DIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5087, 0},
    /*  248 */ {I_DIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5092, 5},
    /*  249 */ {I_DIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5097, 7},
    /*  250 */ {I_EMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6606, 29},
    /*  251 */ {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5102, 30},
    /*  252 */ {I_EQU, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7590, 0},
    /*  253 */ {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7590, 0},
    /*  254 */ {I_F2XM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6610, 31},
    /*  255 */ {I_FABS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6614, 31},
    /*  256 */ {I_FADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6618, 31},
    /*  257 */ {I_FADD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6622, 31},
    /*  258 */ {I_FADD, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5107, 31},
    /*  259 */ {I_FADD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5112, 31},
    /*  260 */ {I_FADD, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5107, 31},
    /*  261 */ {I_FADD, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5117, 31},
    /*  262 */ {I_FADDP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5122, 31},
    /*  263 */ {I_FADDP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5122, 31},
    /*  264 */ {I_FBLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6630, 31},
    /*  265 */ {I_FBLD, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6630, 31},
    /*  266 */ {I_FBSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6634, 31},
    /*  267 */ {I_FBSTP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6634, 31},
    /*  268 */ {I_FCHS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6638, 31},
    /*  269 */ {I_FCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5127, 31},
    /*  270 */ {I_FCMOVB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5132, 32},
    /*  271 */ {I_FCMOVB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5137, 32},
    /*  272 */ {I_FCMOVBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5142, 32},
    /*  273 */ {I_FCMOVBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5147, 32},
    /*  274 */ {I_FCMOVE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5152, 32},
    /*  275 */ {I_FCMOVE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5157, 32},
    /*  276 */ {I_FCMOVNB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5162, 32},
    /*  277 */ {I_FCMOVNB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5167, 32},
    /*  278 */ {I_FCMOVNBE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5172, 32},
    /*  279 */ {I_FCMOVNBE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5177, 32},
    /*  280 */ {I_FCMOVNE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5182, 32},
    /*  281 */ {I_FCMOVNE, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5187, 32},
    /*  282 */ {I_FCMOVNU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5192, 32},
    /*  283 */ {I_FCMOVNU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5197, 32},
    /*  284 */ {I_FCMOVU, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5202, 32},
    /*  285 */ {I_FCMOVU, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5207, 32},
    /*  286 */ {I_FCOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6674, 31},
    /*  287 */ {I_FCOM, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6678, 31},
    /*  288 */ {I_FCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5212, 31},
    /*  289 */ {I_FCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5217, 31},
    /*  290 */ {I_FCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5222, 32},
    /*  291 */ {I_FCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5227, 32},
    /*  292 */ {I_FCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5232, 32},
    /*  293 */ {I_FCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5237, 32},
    /*  294 */ {I_FCOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6694, 31},
    /*  295 */ {I_FCOMP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6698, 31},
    /*  296 */ {I_FCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5242, 31},
    /*  297 */ {I_FCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5247, 31},
    /*  298 */ {I_FCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6706, 31},
    /*  299 */ {I_FCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6710, 33},
    /*  300 */ {I_FDECSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6714, 31},
    /*  301 */ {I_FDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5252, 31},
    /*  302 */ {I_FDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6718, 31},
    /*  303 */ {I_FDIV, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6722, 31},
    /*  304 */ {I_FDIV, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5257, 31},
    /*  305 */ {I_FDIV, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5262, 31},
    /*  306 */ {I_FDIV, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5257, 31},
    /*  307 */ {I_FDIV, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5267, 31},
    /*  308 */ {I_FDIVP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5272, 31},
    /*  309 */ {I_FDIVP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5272, 31},
    /*  310 */ {I_FDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6730, 31},
    /*  311 */ {I_FDIVR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6734, 31},
    /*  312 */ {I_FDIVR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5277, 31},
    /*  313 */ {I_FDIVR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5277, 31},
    /*  314 */ {I_FDIVR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5282, 31},
    /*  315 */ {I_FDIVR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5287, 31},
    /*  316 */ {I_FDIVRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5292, 31},
    /*  317 */ {I_FDIVRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5292, 31},
    /*  318 */ {I_FEMMS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6742, 34},
    /*  319 */ {I_FENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5297, 31},
    /*  320 */ {I_FFREE, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5302, 31},
    /*  321 */ {I_FFREE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6746, 31},
    /*  322 */ {I_FFREEP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5307, 35},
    /*  323 */ {I_FFREEP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6750, 35},
    /*  324 */ {I_FIADD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6754, 31},
    /*  325 */ {I_FIADD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6758, 31},
    /*  326 */ {I_FICOM, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6762, 31},
    /*  327 */ {I_FICOM, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6766, 31},
    /*  328 */ {I_FICOMP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6770, 31},
    /*  329 */ {I_FICOMP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6774, 31},
    /*  330 */ {I_FIDIV, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6778, 31},
    /*  331 */ {I_FIDIV, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6782, 31},
    /*  332 */ {I_FIDIVR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6786, 31},
    /*  333 */ {I_FIDIVR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6790, 31},
    /*  334 */ {I_FILD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6794, 31},
    /*  335 */ {I_FILD, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6798, 31},
    /*  336 */ {I_FILD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6802, 31},
    /*  337 */ {I_FIMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6806, 31},
    /*  338 */ {I_FIMUL, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6810, 31},
    /*  339 */ {I_FINCSTP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6814, 31},
    /*  340 */ {I_FINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5312, 31},
    /*  341 */ {I_FIST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6818, 31},
    /*  342 */ {I_FIST, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6822, 31},
    /*  343 */ {I_FISTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6826, 31},
    /*  344 */ {I_FISTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6830, 31},
    /*  345 */ {I_FISTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6834, 31},
    /*  346 */ {I_FISTTP, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6838, 36},
    /*  347 */ {I_FISTTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6842, 36},
    /*  348 */ {I_FISTTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6846, 36},
    /*  349 */ {I_FISUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6850, 31},
    /*  350 */ {I_FISUB, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6854, 31},
    /*  351 */ {I_FISUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6858, 31},
    /*  352 */ {I_FISUBR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6862, 31},
    /*  353 */ {I_FLD, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6866, 31},
    /*  354 */ {I_FLD, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6870, 31},
    /*  355 */ {I_FLD, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6874, 31},
    /*  356 */ {I_FLD, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5317, 31},
    /*  357 */ {I_FLD1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6882, 31},
    /*  358 */ {I_FLDCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6886, 37},
    /*  359 */ {I_FLDENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6890, 31},
    /*  360 */ {I_FLDL2E, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6894, 31},
    /*  361 */ {I_FLDL2T, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6898, 31},
    /*  362 */ {I_FLDLG2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6902, 31},
    /*  363 */ {I_FLDLN2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6906, 31},
    /*  364 */ {I_FLDPI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6910, 31},
    /*  365 */ {I_FLDZ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6914, 31},
    /*  366 */ {I_FMUL, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6918, 31},
    /*  367 */ {I_FMUL, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6922, 31},
    /*  368 */ {I_FMUL, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5322, 31},
    /*  369 */ {I_FMUL, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5322, 31},
    /*  370 */ {I_FMUL, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5327, 31},
    /*  371 */ {I_FMUL, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5332, 31},
    /*  372 */ {I_FMULP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5337, 31},
    /*  373 */ {I_FMULP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5337, 31},
    /*  374 */ {I_FNCLEX, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5128, 31},
    /*  375 */ {I_FNDISI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5253, 31},
    /*  376 */ {I_FNENI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5298, 31},
    /*  377 */ {I_FNINIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5313, 31},
    /*  378 */ {I_FNOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6930, 31},
    /*  379 */ {I_FNSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5343, 31},
    /*  380 */ {I_FNSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5353, 37},
    /*  381 */ {I_FNSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5358, 31},
    /*  382 */ {I_FNSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5368, 37},
    /*  383 */ {I_FNSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5373, 38},
    /*  384 */ {I_FPATAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6934, 31},
    /*  385 */ {I_FPREM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6938, 31},
    /*  386 */ {I_FPREM1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6942, 33},
    /*  387 */ {I_FPTAN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6946, 31},
    /*  388 */ {I_FRNDINT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6950, 31},
    /*  389 */ {I_FRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6954, 31},
    /*  390 */ {I_FSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5342, 31},
    /*  391 */ {I_FSCALE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6958, 31},
    /*  392 */ {I_FSETPM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6962, 38},
    /*  393 */ {I_FSIN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6966, 33},
    /*  394 */ {I_FSINCOS, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6970, 33},
    /*  395 */ {I_FSQRT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6974, 31},
    /*  396 */ {I_FST, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6978, 31},
    /*  397 */ {I_FST, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6982, 31},
    /*  398 */ {I_FST, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5347, 31},
    /*  399 */ {I_FSTCW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5352, 37},
    /*  400 */ {I_FSTENV, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5357, 31},
    /*  401 */ {I_FSTP, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6990, 31},
    /*  402 */ {I_FSTP, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6994, 31},
    /*  403 */ {I_FSTP, 1, {MEMORY|BITS80,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6998, 31},
    /*  404 */ {I_FSTP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5362, 31},
    /*  405 */ {I_FSTSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5367, 37},
    /*  406 */ {I_FSTSW, 1, {REG_AX,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5372, 38},
    /*  407 */ {I_FSUB, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7006, 31},
    /*  408 */ {I_FSUB, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7010, 31},
    /*  409 */ {I_FSUB, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5377, 31},
    /*  410 */ {I_FSUB, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5377, 31},
    /*  411 */ {I_FSUB, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5382, 31},
    /*  412 */ {I_FSUB, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5387, 31},
    /*  413 */ {I_FSUBP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5392, 31},
    /*  414 */ {I_FSUBP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5392, 31},
    /*  415 */ {I_FSUBR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7018, 31},
    /*  416 */ {I_FSUBR, 1, {MEMORY|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7022, 31},
    /*  417 */ {I_FSUBR, 1, {FPUREG|TO,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5397, 31},
    /*  418 */ {I_FSUBR, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5397, 31},
    /*  419 */ {I_FSUBR, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5402, 31},
    /*  420 */ {I_FSUBR, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5407, 31},
    /*  421 */ {I_FSUBRP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5412, 31},
    /*  422 */ {I_FSUBRP, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5412, 31},
    /*  423 */ {I_FTST, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7030, 31},
    /*  424 */ {I_FUCOM, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5417, 33},
    /*  425 */ {I_FUCOM, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5422, 33},
    /*  426 */ {I_FUCOMI, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5427, 32},
    /*  427 */ {I_FUCOMI, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5432, 32},
    /*  428 */ {I_FUCOMIP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5437, 32},
    /*  429 */ {I_FUCOMIP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5442, 32},
    /*  430 */ {I_FUCOMP, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5447, 33},
    /*  431 */ {I_FUCOMP, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5452, 33},
    /*  432 */ {I_FUCOMPP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7050, 33},
    /*  433 */ {I_FXAM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7054, 31},
    /*  434 */ {I_FXCH, 1, {FPUREG,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5457, 31},
    /*  435 */ {I_FXCH, 2, {FPUREG,FPU0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5457, 31},
    /*  436 */ {I_FXCH, 2, {FPU0,FPUREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5462, 31},
    /*  437 */ {I_FXTRACT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7062, 31},
    /*  438 */ {I_FYL2X, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7066, 31},
    /*  439 */ {I_FYL2XP1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7070, 31},
    /*  440 */ {I_HLT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7534, 39},
    /*  441 */ {I_IDIV, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7074, 0},
    /*  442 */ {I_IDIV, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5467, 0},
    /*  443 */ {I_IDIV, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5472, 5},
    /*  444 */ {I_IDIV, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5477, 7},
    /*  445 */ {I_IMUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7078, 0},
    /*  446 */ {I_IMUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5482, 0},
    /*  447 */ {I_IMUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5487, 5},
    /*  448 */ {I_IMUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5492, 7},
    /*  449 */ {I_IMUL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2870, 9},
    /*  450 */ {I_IMUL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2870, 5},
    /*  451 */ {I_IMUL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2876, 9},
    /*  452 */ {I_IMUL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2876, 5},
    /*  453 */ {I_IMUL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2882, 10},
    /*  454 */ {I_IMUL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2882, 7},
    /*  455 */ {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2888, 43},
    /*  456 */ {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+2894, 44},
    /*  457 */ {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2888, 30},
    /*  458 */ {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS16,0,0}, NO_DECORATOR, nasm_bytecodes+2894, 30},
    /*  459 */ {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2900, 45},
    /*  460 */ {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2906, 9},
    /*  461 */ {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2900, 5},
    /*  462 */ {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2906, 5},
    /*  463 */ {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2912, 46},
    /*  464 */ {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2918, 46},
    /*  465 */ {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2912, 7},
    /*  466 */ {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS32,0,0}, NO_DECORATOR, nasm_bytecodes+2918, 7},
    /*  467 */ {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2930, 30},
    /*  468 */ {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2936, 30},
    /*  469 */ {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2942, 5},
    /*  470 */ {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2948, 5},
    /*  471 */ {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+2954, 7},
    /*  472 */ {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2960, 7},
    /*  473 */ {I_IN, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7082, 47},
    /*  474 */ {I_IN, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5497, 47},
    /*  475 */ {I_IN, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5502, 48},
    /*  476 */ {I_IN, 2, {REG_AL,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7540, 0},
    /*  477 */ {I_IN, 2, {REG_AX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7086, 0},
    /*  478 */ {I_IN, 2, {REG_EAX,REG_DX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7090, 5},
    /*  479 */ {I_INC, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7094, 1},
    /*  480 */ {I_INC, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7098, 17},
    /*  481 */ {I_INC, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5507, 11},
    /*  482 */ {I_INC, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2966, 11},
    /*  483 */ {I_INC, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2972, 12},
    /*  484 */ {I_INC, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2978, 13},
    /*  485 */ {I_INSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7543, 30},
    /*  486 */ {I_INSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7102, 5},
    /*  487 */ {I_INSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7106, 30},
    /*  488 */ {I_INT, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7110, 47},
    /*  489 */ {I_INT1, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7537, 5},
    /*  490 */ {I_INT3, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7546, 0},
    /*  491 */ {I_INTO, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7549, 1},
    /*  492 */ {I_INVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7114, 49},
    /*  493 */ {I_INVPCID, 2, {REG_GPR|BITS32,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+984, 50},
    /*  494 */ {I_INVPCID, 2, {REG_GPR|BITS64,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+984, 51},
    /*  495 */ {I_INVLPG, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5512, 49},
    /*  496 */ {I_IRET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7118, 0},
    /*  497 */ {I_IRETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7122, 5},
    /*  498 */ {I_IRETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7126, 7},
    /*  499 */ {I_IRETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7130, 0},
    /*  500 */ {I_JCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5517, 1},
    /*  501 */ {I_JECXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5522, 5},
    /*  502 */ {I_JRCXZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+2984, 7},
    /*  503 */ {I_JMP, 1, {IMMEDIATE|SHORT,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5528, 0},
    /*  504 */ {I_JMP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5532, 19},
    /*  505 */ {I_JMP, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5537, 20},
    /*  506 */ {I_JMP, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5542, 21},
    /*  507 */ {I_JMP, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5547, 22},
    /*  508 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3008, 1},
    /*  509 */ {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3014, 1},
    /*  510 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3014, 1},
    /*  511 */ {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3020, 17},
    /*  512 */ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3020, 17},
    /*  513 */ {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5552, 1},
    /*  514 */ {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5557, 7},
    /*  515 */ {I_JMP, 1, {MEMORY|BITS16|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5562, 0},
    /*  516 */ {I_JMP, 1, {MEMORY|BITS32|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5567, 5},
    /*  517 */ {I_JMP, 1, {MEMORY|BITS64|FAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5557, 7},
    /*  518 */ {I_JMP, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5572, 19},
    /*  519 */ {I_JMP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5577, 20},
    /*  520 */ {I_JMP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5582, 21},
    /*  521 */ {I_JMP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5587, 22},
    /*  522 */ {I_JMPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+991, 52},
    /*  523 */ {I_JMPE, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+998, 52},
    /*  524 */ {I_JMPE, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1005, 52},
    /*  525 */ {I_LAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7552, 0},
    /*  526 */ {I_LAR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3026, 53},
    /*  527 */ {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3026, 54},
    /*  528 */ {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3026, 55},
    /*  529 */ {I_LAR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3032, 57},
    /*  530 */ {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3032, 55},
    /*  531 */ {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3032, 55},
    /*  532 */ {I_LAR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3038, 58},
    /*  533 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3038, 56},
    /*  534 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3038, 56},
    /*  535 */ {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3038, 56},
    /*  536 */ {I_LDS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5592, 1},
    /*  537 */ {I_LDS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5597, 17},
    /*  538 */ {I_LEA, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5602, 59},
    /*  539 */ {I_LEA, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5607, 60},
    /*  540 */ {I_LEA, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5612, 61},
    /*  541 */ {I_LEAVE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5854, 30},
    /*  542 */ {I_LES, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5617, 1},
    /*  543 */ {I_LES, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5622, 17},
    /*  544 */ {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3044, 62},
    /*  545 */ {I_LFS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3050, 5},
    /*  546 */ {I_LFS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3056, 5},
    /*  547 */ {I_LFS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3062, 7},
    /*  548 */ {I_LGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5627, 23},
    /*  549 */ {I_LGS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3068, 5},
    /*  550 */ {I_LGS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3074, 5},
    /*  551 */ {I_LGS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3080, 7},
    /*  552 */ {I_LIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5632, 23},
    /*  553 */ {I_LLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5637, 63},
    /*  554 */ {I_LLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5637, 63},
    /*  555 */ {I_LLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5637, 63},
    /*  556 */ {I_LMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5642, 23},
    /*  557 */ {I_LMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5642, 23},
    /*  558 */ {I_LMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5642, 23},
    /*  559 */ {I_LODSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7555, 0},
    /*  560 */ {I_LODSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7142, 5},
    /*  561 */ {I_LODSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7146, 7},
    /*  562 */ {I_LODSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7150, 0},
    /*  563 */ {I_LOOP, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5647, 0},
    /*  564 */ {I_LOOP, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5652, 1},
    /*  565 */ {I_LOOP, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5657, 5},
    /*  566 */ {I_LOOP, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5662, 7},
    /*  567 */ {I_LOOPE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5667, 0},
    /*  568 */ {I_LOOPE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5672, 1},
    /*  569 */ {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5677, 5},
    /*  570 */ {I_LOOPE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5682, 7},
    /*  571 */ {I_LOOPNE, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5687, 0},
    /*  572 */ {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5692, 1},
    /*  573 */ {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5697, 5},
    /*  574 */ {I_LOOPNE, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5702, 7},
    /*  575 */ {I_LOOPNZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5687, 0},
    /*  576 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5692, 1},
    /*  577 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5697, 5},
    /*  578 */ {I_LOOPNZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5702, 7},
    /*  579 */ {I_LOOPZ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5667, 0},
    /*  580 */ {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5672, 1},
    /*  581 */ {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5677, 5},
    /*  582 */ {I_LOOPZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5682, 7},
    /*  583 */ {I_LSL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3086, 53},
    /*  584 */ {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3086, 54},
    /*  585 */ {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3086, 55},
    /*  586 */ {I_LSL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3092, 57},
    /*  587 */ {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3092, 55},
    /*  588 */ {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3092, 55},
    /*  589 */ {I_LSL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3098, 58},
    /*  590 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3098, 56},
    /*  591 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3098, 56},
    /*  592 */ {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3098, 56},
    /*  593 */ {I_LSS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3104, 5},
    /*  594 */ {I_LSS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3110, 5},
    /*  595 */ {I_LSS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3116, 7},
    /*  596 */ {I_LTR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5707, 63},
    /*  597 */ {I_LTR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5707, 63},
    /*  598 */ {I_LTR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5707, 63},
    /*  599 */ {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3122, 62},
    /*  600 */ {I_MONITOR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5712, 65},
    /*  601 */ {I_MOV, 2, {MEMORY,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5733, 67},
    /*  602 */ {I_MOV, 2, {REG_GPR|BITS16,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5717, 0},
    /*  603 */ {I_MOV, 2, {REG_GPR|BITS32,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5722, 5},
    /*  604 */ {I_MOV, 2, {RM_GPR|BITS64,REG_SREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+5732, 7},
    /*  605 */ {I_MOV, 2, {REG_SREG,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5753, 67},
    /*  606 */ {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5742, 0},
    /*  607 */ {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5747, 5},
    /*  608 */ {I_MOV, 2, {REG_SREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5752, 7},
    /*  609 */ {I_MOV, 2, {REG_AL,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+7154, 8},
    /*  610 */ {I_MOV, 2, {REG_AX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+5757, 8},
    /*  611 */ {I_MOV, 2, {REG_EAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+5762, 9},
    /*  612 */ {I_MOV, 2, {REG_RAX,MEM_OFFS,0,0,0}, NO_DECORATOR, nasm_bytecodes+5767, 10},
    /*  613 */ {I_MOV, 2, {MEM_OFFS,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7158, 71},
    /*  614 */ {I_MOV, 2, {MEM_OFFS,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5772, 71},
    /*  615 */ {I_MOV, 2, {MEM_OFFS,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5777, 72},
    /*  616 */ {I_MOV, 2, {MEM_OFFS,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5782, 73},
    /*  617 */ {I_MOV, 2, {REG_GPR|BITS32,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3128, 74},
    /*  618 */ {I_MOV, 2, {REG_GPR|BITS64,REG_CREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3134, 75},
    /*  619 */ {I_MOV, 2, {REG_CREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3140, 74},
    /*  620 */ {I_MOV, 2, {REG_CREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3146, 75},
    /*  621 */ {I_MOV, 2, {REG_GPR|BITS32,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3153, 74},
    /*  622 */ {I_MOV, 2, {REG_GPR|BITS64,REG_DREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3152, 75},
    /*  623 */ {I_MOV, 2, {REG_DREG,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3159, 74},
    /*  624 */ {I_MOV, 2, {REG_DREG,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3158, 75},
    /*  625 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5797, 8},
    /*  626 */ {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5798, 0},
    /*  627 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3164, 8},
    /*  628 */ {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3165, 0},
    /*  629 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3170, 9},
    /*  630 */ {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3171, 5},
    /*  631 */ {I_MOV, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3176, 10},
    /*  632 */ {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3177, 7},
    /*  633 */ {I_MOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7162, 8},
    /*  634 */ {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7162, 0},
    /*  635 */ {I_MOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5802, 8},
    /*  636 */ {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5802, 0},
    /*  637 */ {I_MOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5807, 9},
    /*  638 */ {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5807, 5},
    /*  639 */ {I_MOV, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5812, 10},
    /*  640 */ {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5812, 7},
    /*  641 */ {I_MOV, 2, {REG_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7166, 8},
    /*  642 */ {I_MOV, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5817, 8},
    /*  643 */ {I_MOV, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5822, 9},
    /*  644 */ {I_MOV, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5832, 10},
    /*  645 */ {I_MOV, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3182, 8},
    /*  646 */ {I_MOV, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1040, 8},
    /*  647 */ {I_MOV, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1047, 9},
    /*  648 */ {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1054, 10},
    /*  649 */ {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1054, 7},
    /*  650 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3182, 8},
    /*  651 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1040, 8},
    /*  652 */ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1047, 9},
    /*  653 */ {I_MOVD, 2, {MMXREG,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3188, 77},
    /*  654 */ {I_MOVD, 2, {RM_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3194, 77},
    /*  655 */ {I_MOVQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+3200, 79},
    /*  656 */ {I_MOVQ, 2, {RM_MMX,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+3206, 79},
    /*  657 */ {I_MOVQ, 2, {MMXREG,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1061, 80},
    /*  658 */ {I_MOVQ, 2, {RM_GPR|BITS64,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+1068, 80},
    /*  659 */ {I_MOVSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+205, 0},
    /*  660 */ {I_MOVSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7170, 5},
    /*  661 */ {I_MOVSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7174, 7},
    /*  662 */ {I_MOVSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7178, 0},
    /*  663 */ {I_MOVSX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3212, 48},
    /*  664 */ {I_MOVSX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3212, 5},
    /*  665 */ {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3218, 5},
    /*  666 */ {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3224, 5},
    /*  667 */ {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3230, 7},
    /*  668 */ {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3236, 7},
    /*  669 */ {I_MOVZX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3242, 48},
    /*  670 */ {I_MOVZX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3242, 5},
    /*  671 */ {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3248, 5},
    /*  672 */ {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3254, 5},
    /*  673 */ {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3260, 7},
    /*  674 */ {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3266, 7},
    /*  675 */ {I_MUL, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7182, 0},
    /*  676 */ {I_MUL, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5837, 0},
    /*  677 */ {I_MUL, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5842, 5},
    /*  678 */ {I_MUL, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5847, 7},
    /*  679 */ {I_MWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5852, 65},
    /*  680 */ {I_NEG, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5857, 11},
    /*  681 */ {I_NEG, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3272, 11},
    /*  682 */ {I_NEG, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3278, 12},
    /*  683 */ {I_NEG, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3284, 13},
    /*  684 */ {I_NOP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5862, 0},
    /*  685 */ {I_NOP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3290, 81},
    /*  686 */ {I_NOP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3296, 81},
    /*  687 */ {I_NOP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3302, 7},
    /*  688 */ {I_NOT, 1, {RM_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5867, 11},
    /*  689 */ {I_NOT, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3308, 11},
    /*  690 */ {I_NOT, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3314, 12},
    /*  691 */ {I_NOT, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3320, 13},
    /*  692 */ {I_OR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5872, 3},
    /*  693 */ {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5873, 0},
    /*  694 */ {I_OR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3326, 3},
    /*  695 */ {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3327, 0},
    /*  696 */ {I_OR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3332, 4},
    /*  697 */ {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3333, 5},
    /*  698 */ {I_OR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3338, 6},
    /*  699 */ {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3339, 7},
    /*  700 */ {I_OR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7186, 8},
    /*  701 */ {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7186, 0},
    /*  702 */ {I_OR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5877, 8},
    /*  703 */ {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+5877, 0},
    /*  704 */ {I_OR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5882, 9},
    /*  705 */ {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+5882, 5},
    /*  706 */ {I_OR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5887, 10},
    /*  707 */ {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+5887, 7},
    /*  708 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1075, 11},
    /*  709 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1082, 12},
    /*  710 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1089, 13},
    /*  711 */ {I_OR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7190, 8},
    /*  712 */ {I_OR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5892, 8},
    /*  713 */ {I_OR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5897, 9},
    /*  714 */ {I_OR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+5902, 10},
    /*  715 */ {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3344, 3},
    /*  716 */ {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3350, 3},
    /*  717 */ {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1096, 3},
    /*  718 */ {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1103, 4},
    /*  719 */ {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1110, 6},
    /*  720 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3344, 3},
    /*  721 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3350, 3},
    /*  722 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1096, 3},
    /*  723 */ {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1103, 4},
    /*  724 */ {I_OUT, 2, {IMMEDIATE,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7194, 47},
    /*  725 */ {I_OUT, 2, {IMMEDIATE,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5907, 47},
    /*  726 */ {I_OUT, 2, {IMMEDIATE,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+5912, 48},
    /*  727 */ {I_OUT, 2, {REG_DX,REG_AL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7558, 0},
    /*  728 */ {I_OUT, 2, {REG_DX,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7198, 0},
    /*  729 */ {I_OUT, 2, {REG_DX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7202, 5},
    /*  730 */ {I_OUTSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7561, 30},
    /*  731 */ {I_OUTSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7206, 5},
    /*  732 */ {I_OUTSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7210, 30},
    /*  733 */ {I_PACKSSDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1117, 79},
    /*  734 */ {I_PACKSSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1124, 79},
    /*  735 */ {I_PACKUSWB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1131, 79},
    /*  736 */ {I_PADDB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1138, 79},
    /*  737 */ {I_PADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1145, 79},
    /*  738 */ {I_PADDSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1152, 79},
    /*  739 */ {I_PADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1159, 79},
    /*  740 */ {I_PADDUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1166, 79},
    /*  741 */ {I_PADDUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1173, 79},
    /*  742 */ {I_PADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1180, 79},
    /*  743 */ {I_PAND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1187, 79},
    /*  744 */ {I_PANDN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1194, 79},
    /*  745 */ {I_PAUSE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7214, 0},
    /*  746 */ {I_PAVGUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+144, 82},
    /*  747 */ {I_PCMPEQB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1201, 79},
    /*  748 */ {I_PCMPEQD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1208, 79},
    /*  749 */ {I_PCMPEQW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1215, 79},
    /*  750 */ {I_PCMPGTB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1222, 79},
    /*  751 */ {I_PCMPGTD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1229, 79},
    /*  752 */ {I_PCMPGTW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1236, 79},
    /*  753 */ {I_PF2ID, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+152, 82},
    /*  754 */ {I_PFACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+160, 82},
    /*  755 */ {I_PFADD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+168, 82},
    /*  756 */ {I_PFCMPEQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+176, 82},
    /*  757 */ {I_PFCMPGE, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+184, 82},
    /*  758 */ {I_PFCMPGT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+192, 82},
    /*  759 */ {I_PFMAX, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+200, 82},
    /*  760 */ {I_PFMIN, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+208, 82},
    /*  761 */ {I_PFMUL, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+216, 82},
    /*  762 */ {I_PFRCP, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+224, 82},
    /*  763 */ {I_PFRCPIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+232, 82},
    /*  764 */ {I_PFRCPIT2, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+240, 82},
    /*  765 */ {I_PFRSQIT1, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+248, 82},
    /*  766 */ {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+256, 82},
    /*  767 */ {I_PFSUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+264, 82},
    /*  768 */ {I_PFSUBR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+272, 82},
    /*  769 */ {I_PI2FD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+280, 82},
    /*  770 */ {I_PMADDWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1243, 79},
    /*  771 */ {I_PMULHRWA, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+288, 82},
    /*  772 */ {I_PMULHW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1250, 79},
    /*  773 */ {I_PMULLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1257, 79},
    /*  774 */ {I_POP, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7218, 0},
    /*  775 */ {I_POP, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7222, 17},
    /*  776 */ {I_POP, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7226, 7},
    /*  777 */ {I_POP, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5917, 0},
    /*  778 */ {I_POP, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5922, 17},
    /*  779 */ {I_POP, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5927, 7},
    /*  780 */ {I_POP, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+581, 1},
    /*  781 */ {I_POP, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7567, 1},
    /*  782 */ {I_POP, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7570, 1},
    /*  783 */ {I_POP, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7230, 5},
    /*  784 */ {I_POP, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7234, 5},
    /*  785 */ {I_POPA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7238, 16},
    /*  786 */ {I_POPAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7242, 17},
    /*  787 */ {I_POPAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7246, 16},
    /*  788 */ {I_POPF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7250, 0},
    /*  789 */ {I_POPFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7254, 17},
    /*  790 */ {I_POPFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7254, 7},
    /*  791 */ {I_POPFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7258, 0},
    /*  792 */ {I_POR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1264, 79},
    /*  793 */ {I_PREFETCH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5932, 82},
    /*  794 */ {I_PREFETCHW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5937, 82},
    /*  795 */ {I_PSLLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1271, 79},
    /*  796 */ {I_PSLLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1278, 29},
    /*  797 */ {I_PSLLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1285, 79},
    /*  798 */ {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1292, 29},
    /*  799 */ {I_PSLLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1299, 79},
    /*  800 */ {I_PSLLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1306, 29},
    /*  801 */ {I_PSRAD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1313, 79},
    /*  802 */ {I_PSRAD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1320, 29},
    /*  803 */ {I_PSRAW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1327, 79},
    /*  804 */ {I_PSRAW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1334, 29},
    /*  805 */ {I_PSRLD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1341, 79},
    /*  806 */ {I_PSRLD, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1348, 29},
    /*  807 */ {I_PSRLQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1355, 79},
    /*  808 */ {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1362, 29},
    /*  809 */ {I_PSRLW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1369, 79},
    /*  810 */ {I_PSRLW, 2, {MMXREG,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1376, 29},
    /*  811 */ {I_PSUBB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1383, 79},
    /*  812 */ {I_PSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1390, 79},
    /*  813 */ {I_PSUBSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1397, 79},
    /*  814 */ {I_PSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1404, 79},
    /*  815 */ {I_PSUBUSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1411, 79},
    /*  816 */ {I_PSUBUSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1418, 79},
    /*  817 */ {I_PSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1425, 79},
    /*  818 */ {I_PUNPCKHBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1432, 79},
    /*  819 */ {I_PUNPCKHDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1439, 79},
    /*  820 */ {I_PUNPCKHWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1446, 79},
    /*  821 */ {I_PUNPCKLBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1453, 79},
    /*  822 */ {I_PUNPCKLDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1460, 79},
    /*  823 */ {I_PUNPCKLWD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1467, 79},
    /*  824 */ {I_PUSH, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7262, 0},
    /*  825 */ {I_PUSH, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7266, 17},
    /*  826 */ {I_PUSH, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7270, 7},
    /*  827 */ {I_PUSH, 1, {RM_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5942, 0},
    /*  828 */ {I_PUSH, 1, {RM_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5947, 17},
    /*  829 */ {I_PUSH, 1, {RM_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5952, 7},
    /*  830 */ {I_PUSH, 1, {REG_ES,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+549, 1},
    /*  831 */ {I_PUSH, 1, {REG_CS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7573, 1},
    /*  832 */ {I_PUSH, 1, {REG_SS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7576, 1},
    /*  833 */ {I_PUSH, 1, {REG_DS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7579, 1},
    /*  834 */ {I_PUSH, 1, {REG_FS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7274, 5},
    /*  835 */ {I_PUSH, 1, {REG_GS,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7278, 5},
    /*  836 */ {I_PUSH, 1, {IMMEDIATE|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5978, 30},
    /*  837 */ {I_PUSH, 1, {IMMEDIATE|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5962, 84},
    /*  838 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5972, 85},
    /*  839 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5972, 86},
    /*  840 */ {I_PUSH, 1, {IMMEDIATE|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5982, 87},
    /*  841 */ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+5982, 87},
    /*  842 */ {I_PUSHA, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7282, 16},
    /*  843 */ {I_PUSHAD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7286, 17},
    /*  844 */ {I_PUSHAW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7290, 16},
    /*  845 */ {I_PUSHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7294, 0},
    /*  846 */ {I_PUSHFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7298, 17},
    /*  847 */ {I_PUSHFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7298, 7},
    /*  848 */ {I_PUSHFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7302, 0},
    /*  849 */ {I_PXOR, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1474, 79},
    /*  850 */ {I_RCL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7306, 0},
    /*  851 */ {I_RCL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7310, 0},
    /*  852 */ {I_RCL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+5987, 30},
    /*  853 */ {I_RCL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+5992, 0},
    /*  854 */ {I_RCL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+5997, 0},
    /*  855 */ {I_RCL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3356, 30},
    /*  856 */ {I_RCL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6002, 5},
    /*  857 */ {I_RCL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6007, 5},
    /*  858 */ {I_RCL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3362, 5},
    /*  859 */ {I_RCL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6012, 7},
    /*  860 */ {I_RCL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6017, 7},
    /*  861 */ {I_RCL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3368, 7},
    /*  862 */ {I_RCR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7314, 0},
    /*  863 */ {I_RCR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7318, 0},
    /*  864 */ {I_RCR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6022, 30},
    /*  865 */ {I_RCR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6027, 0},
    /*  866 */ {I_RCR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6032, 0},
    /*  867 */ {I_RCR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3374, 30},
    /*  868 */ {I_RCR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6037, 5},
    /*  869 */ {I_RCR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6042, 5},
    /*  870 */ {I_RCR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3380, 5},
    /*  871 */ {I_RCR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6047, 7},
    /*  872 */ {I_RCR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6052, 7},
    /*  873 */ {I_RCR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3386, 7},
    /*  874 */ {I_RDMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7322, 88},
    /*  875 */ {I_RDPMC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7326, 81},
    /*  876 */ {I_RDTSC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7330, 25},
    /*  877 */ {I_RDTSCP, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6057, 89},
    /*  878 */ {I_RET, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7351, 19},
    /*  879 */ {I_RET, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6083, 90},
    /*  880 */ {I_RETF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7355, 0},
    /*  881 */ {I_RETF, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6088, 67},
    /*  882 */ {I_RETN, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7351, 19},
    /*  883 */ {I_RETN, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6083, 90},
    /*  884 */ {I_RETW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7334, 19},
    /*  885 */ {I_RETW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6083, 90},
    /*  886 */ {I_RETFW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7338, 0},
    /*  887 */ {I_RETFW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6062, 67},
    /*  888 */ {I_RETNW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7334, 19},
    /*  889 */ {I_RETNW, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6067, 90},
    /*  890 */ {I_RETD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7342, 20},
    /*  891 */ {I_RETD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6072, 91},
    /*  892 */ {I_RETFD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7346, 0},
    /*  893 */ {I_RETFD, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6077, 67},
    /*  894 */ {I_RETND, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7342, 20},
    /*  895 */ {I_RETND, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6072, 91},
    /*  896 */ {I_RETQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7350, 22},
    /*  897 */ {I_RETQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6082, 92},
    /*  898 */ {I_RETFQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7354, 7},
    /*  899 */ {I_RETFQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6087, 93},
    /*  900 */ {I_RETNQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7350, 22},
    /*  901 */ {I_RETNQ, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6082, 92},
    /*  902 */ {I_ROL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7358, 0},
    /*  903 */ {I_ROL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7362, 0},
    /*  904 */ {I_ROL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6092, 30},
    /*  905 */ {I_ROL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6097, 0},
    /*  906 */ {I_ROL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6102, 0},
    /*  907 */ {I_ROL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3392, 30},
    /*  908 */ {I_ROL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6107, 5},
    /*  909 */ {I_ROL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6112, 5},
    /*  910 */ {I_ROL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3398, 5},
    /*  911 */ {I_ROL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6117, 7},
    /*  912 */ {I_ROL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6122, 7},
    /*  913 */ {I_ROL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3404, 7},
    /*  914 */ {I_ROR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7366, 0},
    /*  915 */ {I_ROR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7370, 0},
    /*  916 */ {I_ROR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6127, 30},
    /*  917 */ {I_ROR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6132, 0},
    /*  918 */ {I_ROR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6137, 0},
    /*  919 */ {I_ROR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3410, 30},
    /*  920 */ {I_ROR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6142, 5},
    /*  921 */ {I_ROR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6147, 5},
    /*  922 */ {I_ROR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3416, 5},
    /*  923 */ {I_ROR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6152, 7},
    /*  924 */ {I_ROR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6157, 7},
    /*  925 */ {I_ROR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3422, 7},
    /*  926 */ {I_RSM, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7374, 94},
    /*  927 */ {I_SAHF, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+173, 0},
    /*  928 */ {I_SAR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7386, 0},
    /*  929 */ {I_SAR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7390, 0},
    /*  930 */ {I_SAR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6197, 30},
    /*  931 */ {I_SAR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6202, 0},
    /*  932 */ {I_SAR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6207, 0},
    /*  933 */ {I_SAR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3446, 30},
    /*  934 */ {I_SAR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6212, 5},
    /*  935 */ {I_SAR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6217, 5},
    /*  936 */ {I_SAR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3452, 5},
    /*  937 */ {I_SAR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6222, 7},
    /*  938 */ {I_SAR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6227, 7},
    /*  939 */ {I_SAR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3458, 7},
    /*  940 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6232, 3},
    /*  941 */ {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6233, 0},
    /*  942 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3464, 3},
    /*  943 */ {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3465, 0},
    /*  944 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3470, 4},
    /*  945 */ {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3471, 5},
    /*  946 */ {I_SBB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3476, 6},
    /*  947 */ {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3477, 7},
    /*  948 */ {I_SBB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7394, 8},
    /*  949 */ {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7394, 0},
    /*  950 */ {I_SBB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6237, 8},
    /*  951 */ {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6237, 0},
    /*  952 */ {I_SBB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6242, 9},
    /*  953 */ {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6242, 5},
    /*  954 */ {I_SBB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6247, 10},
    /*  955 */ {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6247, 7},
    /*  956 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1481, 11},
    /*  957 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1488, 12},
    /*  958 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1495, 13},
    /*  959 */ {I_SBB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7398, 8},
    /*  960 */ {I_SBB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6252, 8},
    /*  961 */ {I_SBB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6257, 9},
    /*  962 */ {I_SBB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6262, 10},
    /*  963 */ {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3482, 3},
    /*  964 */ {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3488, 3},
    /*  965 */ {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1502, 3},
    /*  966 */ {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1509, 4},
    /*  967 */ {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1516, 6},
    /*  968 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3482, 3},
    /*  969 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3488, 3},
    /*  970 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1502, 3},
    /*  971 */ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1509, 4},
    /*  972 */ {I_SCASB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7402, 0},
    /*  973 */ {I_SCASD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6267, 5},
    /*  974 */ {I_SCASQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6272, 7},
    /*  975 */ {I_SCASW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6277, 0},
    /*  976 */ {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3494, 62},
    /*  977 */ {I_SGDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6282, 95},
    /*  978 */ {I_SHL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7378, 0},
    /*  979 */ {I_SHL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7382, 0},
    /*  980 */ {I_SHL, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6162, 30},
    /*  981 */ {I_SHL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6167, 0},
    /*  982 */ {I_SHL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6172, 0},
    /*  983 */ {I_SHL, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3428, 30},
    /*  984 */ {I_SHL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6177, 5},
    /*  985 */ {I_SHL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6182, 5},
    /*  986 */ {I_SHL, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3434, 5},
    /*  987 */ {I_SHL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6187, 7},
    /*  988 */ {I_SHL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6192, 7},
    /*  989 */ {I_SHL, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3440, 7},
    /*  990 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1523, 96},
    /*  991 */ {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1523, 96},
    /*  992 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1530, 96},
    /*  993 */ {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1530, 96},
    /*  994 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1537, 97},
    /*  995 */ {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1537, 97},
    /*  996 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3500, 9},
    /*  997 */ {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3500, 5},
    /*  998 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3506, 9},
    /*  999 */ {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3506, 5},
    /* 1000 */ {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3512, 10},
    /* 1001 */ {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3512, 7},
    /* 1002 */ {I_SHR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7406, 0},
    /* 1003 */ {I_SHR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+7410, 0},
    /* 1004 */ {I_SHR, 2, {RM_GPR|BITS8,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6287, 30},
    /* 1005 */ {I_SHR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6292, 0},
    /* 1006 */ {I_SHR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6297, 0},
    /* 1007 */ {I_SHR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3518, 30},
    /* 1008 */ {I_SHR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6302, 5},
    /* 1009 */ {I_SHR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6307, 5},
    /* 1010 */ {I_SHR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3524, 5},
    /* 1011 */ {I_SHR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6312, 7},
    /* 1012 */ {I_SHR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, NO_DECORATOR, nasm_bytecodes+6317, 7},
    /* 1013 */ {I_SHR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3530, 7},
    /* 1014 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1544, 96},
    /* 1015 */ {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1544, 96},
    /* 1016 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1551, 96},
    /* 1017 */ {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1551, 96},
    /* 1018 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1558, 97},
    /* 1019 */ {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1558, 97},
    /* 1020 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3536, 9},
    /* 1021 */ {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3536, 5},
    /* 1022 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3542, 9},
    /* 1023 */ {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3542, 5},
    /* 1024 */ {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3548, 10},
    /* 1025 */ {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, NO_DECORATOR, nasm_bytecodes+3548, 7},
    /* 1026 */ {I_SIDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6322, 95},
    /* 1027 */ {I_SLDT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3573, 95},
    /* 1028 */ {I_SLDT, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3573, 95},
    /* 1029 */ {I_SLDT, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3554, 95},
    /* 1030 */ {I_SLDT, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3560, 5},
    /* 1031 */ {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3572, 7},
    /* 1032 */ {I_SMI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7537, 98},
    /* 1033 */ {I_SMSW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3591, 95},
    /* 1034 */ {I_SMSW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3591, 95},
    /* 1035 */ {I_SMSW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3578, 95},
    /* 1036 */ {I_SMSW, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3584, 5},
    /* 1037 */ {I_SMSW, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3590, 7},
    /* 1038 */ {I_STC, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6059, 0},
    /* 1039 */ {I_STD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7582, 0},
    /* 1040 */ {I_STI, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7585, 0},
    /* 1041 */ {I_STOSB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+277, 0},
    /* 1042 */ {I_STOSD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7414, 5},
    /* 1043 */ {I_STOSQ, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7418, 7},
    /* 1044 */ {I_STOSW, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7422, 0},
    /* 1045 */ {I_STR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3609, 54},
    /* 1046 */ {I_STR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3609, 54},
    /* 1047 */ {I_STR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3596, 54},
    /* 1048 */ {I_STR, 1, {REG_GPR|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3602, 55},
    /* 1049 */ {I_STR, 1, {REG_GPR|BITS64,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3608, 7},
    /* 1050 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6327, 3},
    /* 1051 */ {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6328, 0},
    /* 1052 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3614, 3},
    /* 1053 */ {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3615, 0},
    /* 1054 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3620, 4},
    /* 1055 */ {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3621, 5},
    /* 1056 */ {I_SUB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3626, 6},
    /* 1057 */ {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3627, 7},
    /* 1058 */ {I_SUB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7426, 8},
    /* 1059 */ {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7426, 0},
    /* 1060 */ {I_SUB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6332, 8},
    /* 1061 */ {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6332, 0},
    /* 1062 */ {I_SUB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6337, 9},
    /* 1063 */ {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6337, 5},
    /* 1064 */ {I_SUB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6342, 10},
    /* 1065 */ {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6342, 7},
    /* 1066 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1565, 11},
    /* 1067 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1572, 12},
    /* 1068 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1579, 13},
    /* 1069 */ {I_SUB, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7430, 8},
    /* 1070 */ {I_SUB, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6347, 8},
    /* 1071 */ {I_SUB, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6352, 9},
    /* 1072 */ {I_SUB, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6357, 10},
    /* 1073 */ {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3632, 3},
    /* 1074 */ {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3638, 3},
    /* 1075 */ {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1586, 3},
    /* 1076 */ {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1593, 4},
    /* 1077 */ {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1600, 6},
    /* 1078 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3632, 3},
    /* 1079 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3638, 3},
    /* 1080 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1586, 3},
    /* 1081 */ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1593, 4},
    /* 1082 */ {I_SYSENTER, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7434, 81},
    /* 1083 */ {I_SYSEXIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7438, 99},
    /* 1084 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7442, 8},
    /* 1085 */ {I_TEST, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7442, 0},
    /* 1086 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6362, 8},
    /* 1087 */ {I_TEST, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6362, 0},
    /* 1088 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6367, 9},
    /* 1089 */ {I_TEST, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6367, 5},
    /* 1090 */ {I_TEST, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6372, 10},
    /* 1091 */ {I_TEST, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6372, 7},
    /* 1092 */ {I_TEST, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7446, 8},
    /* 1093 */ {I_TEST, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6377, 8},
    /* 1094 */ {I_TEST, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6382, 9},
    /* 1095 */ {I_TEST, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6387, 10},
    /* 1096 */ {I_TEST, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7450, 8},
    /* 1097 */ {I_TEST, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6392, 8},
    /* 1098 */ {I_TEST, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6397, 9},
    /* 1099 */ {I_TEST, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6402, 10},
    /* 1100 */ {I_TEST, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6407, 8},
    /* 1101 */ {I_TEST, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3644, 8},
    /* 1102 */ {I_TEST, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3650, 9},
    /* 1103 */ {I_TEST, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3656, 10},
    /* 1104 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6407, 8},
    /* 1105 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3644, 8},
    /* 1106 */ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3650, 9},
    /* 1107 */ {I_UD0, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7454, 100},
    /* 1108 */ {I_UD0, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3662, 30},
    /* 1109 */ {I_UD0, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3668, 30},
    /* 1110 */ {I_UD0, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3674, 30},
    /* 1111 */ {I_UD1, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3680, 30},
    /* 1112 */ {I_UD1, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3686, 30},
    /* 1113 */ {I_UD1, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3692, 30},
    /* 1114 */ {I_UD2, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7462, 30},
    /* 1115 */ {I_VERR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6412, 54},
    /* 1116 */ {I_VERR, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6412, 54},
    /* 1117 */ {I_VERR, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6412, 54},
    /* 1118 */ {I_VERW, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6417, 54},
    /* 1119 */ {I_VERW, 1, {MEMORY|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6417, 54},
    /* 1120 */ {I_VERW, 1, {REG_GPR|BITS16,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6417, 54},
    /* 1121 */ {I_FWAIT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7036, 0},
    /* 1122 */ {I_WBINVD, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7466, 49},
    /* 1123 */ {I_WRMSR, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7470, 88},
    /* 1124 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3710, 102},
    /* 1125 */ {I_XADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3711, 18},
    /* 1126 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1635, 102},
    /* 1127 */ {I_XADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1636, 18},
    /* 1128 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1642, 102},
    /* 1129 */ {I_XADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1643, 18},
    /* 1130 */ {I_XADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1649, 6},
    /* 1131 */ {I_XADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1650, 7},
    /* 1132 */ {I_XCHG, 2, {REG_AX,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+7474, 0},
    /* 1133 */ {I_XCHG, 2, {REG_EAX,REG32NA,0,0,0}, NO_DECORATOR, nasm_bytecodes+7478, 5},
    /* 1134 */ {I_XCHG, 2, {REG_RAX,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+7482, 7},
    /* 1135 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_AX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7486, 0},
    /* 1136 */ {I_XCHG, 2, {REG32NA,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7490, 5},
    /* 1137 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_RAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7494, 7},
    /* 1138 */ {I_XCHG, 2, {REG_EAX,REG_EAX,0,0,0}, NO_DECORATOR, nasm_bytecodes+7498, 17},
    /* 1139 */ {I_XCHG, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6422, 3},
    /* 1140 */ {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6423, 0},
    /* 1141 */ {I_XCHG, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3728, 3},
    /* 1142 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3729, 0},
    /* 1143 */ {I_XCHG, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3734, 4},
    /* 1144 */ {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3735, 5},
    /* 1145 */ {I_XCHG, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+3740, 6},
    /* 1146 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3741, 7},
    /* 1147 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6427, 3},
    /* 1148 */ {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6428, 0},
    /* 1149 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3746, 3},
    /* 1150 */ {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3747, 0},
    /* 1151 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3752, 4},
    /* 1152 */ {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3753, 5},
    /* 1153 */ {I_XCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3758, 6},
    /* 1154 */ {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3759, 7},
    /* 1155 */ {I_XLATB, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7588, 0},
    /* 1156 */ {I_XLAT, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+7588, 0},
    /* 1157 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6432, 3},
    /* 1158 */ {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+6433, 0},
    /* 1159 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3764, 3},
    /* 1160 */ {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3765, 0},
    /* 1161 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3770, 4},
    /* 1162 */ {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3771, 5},
    /* 1163 */ {I_XOR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3776, 6},
    /* 1164 */ {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3777, 7},
    /* 1165 */ {I_XOR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+7502, 8},
    /* 1166 */ {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+7502, 0},
    /* 1167 */ {I_XOR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6437, 8},
    /* 1168 */ {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+6437, 0},
    /* 1169 */ {I_XOR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6442, 9},
    /* 1170 */ {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+6442, 5},
    /* 1171 */ {I_XOR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+6447, 10},
    /* 1172 */ {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+6447, 7},
    /* 1173 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1656, 11},
    /* 1174 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1663, 12},
    /* 1175 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+1670, 13},
    /* 1176 */ {I_XOR, 2, {REG_AL,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+7506, 8},
    /* 1177 */ {I_XOR, 2, {REG_AX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6452, 8},
    /* 1178 */ {I_XOR, 2, {REG_EAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6457, 9},
    /* 1179 */ {I_XOR, 2, {REG_RAX,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+6462, 10},
    /* 1180 */ {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3782, 3},
    /* 1181 */ {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+3788, 3},
    /* 1182 */ {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1677, 3},
    /* 1183 */ {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1684, 4},
    /* 1184 */ {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+1691, 6},
    /* 1185 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3782, 3},
    /* 1186 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, NO_DECORATOR, nasm_bytecodes+3788, 3},
    /* 1187 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1677, 3},
    /* 1188 */ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1684, 4},
    /* 1189 */ {I_CMOVcc, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1698, 105},
    /* 1190 */ {I_CMOVcc, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1698, 81},
    /* 1191 */ {I_CMOVcc, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1705, 105},
    /* 1192 */ {I_CMOVcc, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1705, 81},
    /* 1193 */ {I_CMOVcc, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1712, 10},
    /* 1194 */ {I_CMOVcc, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1712, 7},
    /* 1195 */ {I_Jcc, 1, {IMMEDIATE|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1719, 106},
    /* 1196 */ {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1726, 21},
    /* 1197 */ {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1733, 21},
    /* 1198 */ {I_Jcc, 1, {IMMEDIATE|BITS64|NEAR,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1740, 22},
    /* 1199 */ {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6468, 19},
    /* 1200 */ {I_SETcc, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3794, 48},
    /* 1201 */ {I_SETcc, 1, {REG_GPR|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3794, 5},
    /* 1202 */ {I_ADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3800, 107},
    /* 1203 */ {I_ADDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3806, 107},
    /* 1204 */ {I_ANDNPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3812, 107},
    /* 1205 */ {I_ANDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3818, 107},
    /* 1206 */ {I_CMPEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+296, 107},
    /* 1207 */ {I_CMPEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+304, 107},
    /* 1208 */ {I_CMPLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+312, 107},
    /* 1209 */ {I_CMPLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+320, 107},
    /* 1210 */ {I_CMPLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+328, 107},
    /* 1211 */ {I_CMPLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+336, 107},
    /* 1212 */ {I_CMPNEQPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+344, 107},
    /* 1213 */ {I_CMPNEQSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+352, 107},
    /* 1214 */ {I_CMPNLEPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+360, 107},
    /* 1215 */ {I_CMPNLESS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+368, 107},
    /* 1216 */ {I_CMPNLTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+376, 107},
    /* 1217 */ {I_CMPNLTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+384, 107},
    /* 1218 */ {I_CMPORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+392, 107},
    /* 1219 */ {I_CMPORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+400, 107},
    /* 1220 */ {I_CMPUNORDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+408, 107},
    /* 1221 */ {I_CMPUNORDSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+416, 107},
    /* 1222 */ {I_CMPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1754, 107},
    /* 1223 */ {I_CMPSS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1761, 107},
    /* 1224 */ {I_COMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3824, 107},
    /* 1225 */ {I_CVTPI2PS, 2, {XMM_L16,RM_MMX|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3830, 108},
    /* 1226 */ {I_CVTPS2PI, 2, {MMXREG,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3836, 108},
    /* 1227 */ {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1769, 109},
    /* 1228 */ {I_CVTSI2SS, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1768, 110},
    /* 1229 */ {I_CVTSS2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1776, 109},
    /* 1230 */ {I_CVTSS2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1776, 109},
    /* 1231 */ {I_CVTSS2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1775, 111},
    /* 1232 */ {I_CVTSS2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1775, 111},
    /* 1233 */ {I_CVTTPS2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3842, 112},
    /* 1234 */ {I_CVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1783, 109},
    /* 1235 */ {I_CVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1782, 111},
    /* 1236 */ {I_DIVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3848, 107},
    /* 1237 */ {I_DIVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3854, 107},
    /* 1238 */ {I_LDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3860, 107},
    /* 1239 */ {I_MAXPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3866, 107},
    /* 1240 */ {I_MAXSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3872, 107},
    /* 1241 */ {I_MINPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3878, 107},
    /* 1242 */ {I_MINSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3884, 107},
    /* 1243 */ {I_MOVAPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3890, 107},
    /* 1244 */ {I_MOVAPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3896, 107},
    /* 1245 */ {I_MOVHPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3902, 107},
    /* 1246 */ {I_MOVHPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3908, 107},
    /* 1247 */ {I_MOVLHPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3902, 107},
    /* 1248 */ {I_MOVLPS, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+3704, 107},
    /* 1249 */ {I_MOVLPS, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3914, 107},
    /* 1250 */ {I_MOVHLPS, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3704, 107},
    /* 1251 */ {I_MOVMSKPS, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3920, 107},
    /* 1252 */ {I_MOVMSKPS, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1789, 113},
    /* 1253 */ {I_MOVNTPS, 2, {MEMORY|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3926, 107},
    /* 1254 */ {I_MOVSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3932, 107},
    /* 1255 */ {I_MOVSS, 2, {RM_XMM_L16|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3938, 107},
    /* 1256 */ {I_MOVUPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3944, 107},
    /* 1257 */ {I_MOVUPS, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+3950, 107},
    /* 1258 */ {I_MULPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3956, 107},
    /* 1259 */ {I_MULSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3962, 107},
    /* 1260 */ {I_ORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3968, 107},
    /* 1261 */ {I_RCPPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3974, 107},
    /* 1262 */ {I_RCPSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3980, 107},
    /* 1263 */ {I_RSQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3986, 107},
    /* 1264 */ {I_RSQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+3992, 107},
    /* 1265 */ {I_SHUFPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1796, 107},
    /* 1266 */ {I_SQRTPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+3998, 107},
    /* 1267 */ {I_SQRTSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4004, 107},
    /* 1268 */ {I_STMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4010, 107},
    /* 1269 */ {I_SUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4016, 107},
    /* 1270 */ {I_SUBSS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4022, 107},
    /* 1271 */ {I_UCOMISS, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+4028, 107},
    /* 1272 */ {I_UNPCKHPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4034, 107},
    /* 1273 */ {I_UNPCKLPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4040, 107},
    /* 1274 */ {I_XORPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4046, 107},
    /* 1275 */ {I_FXRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1804, 114},
    /* 1276 */ {I_FXRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1803, 115},
    /* 1277 */ {I_FXSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1811, 114},
    /* 1278 */ {I_FXSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1810, 115},
    /* 1279 */ {I_XGETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6472, 116},
    /* 1280 */ {I_XSETBV, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6477, 117},
    /* 1281 */ {I_XSAVE, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1818, 116},
    /* 1282 */ {I_XSAVE64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1817, 118},
    /* 1283 */ {I_XSAVEC, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1825, 119},
    /* 1284 */ {I_XSAVEC64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1824, 120},
    /* 1285 */ {I_XSAVEOPT, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1832, 119},
    /* 1286 */ {I_XSAVEOPT64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1831, 120},
    /* 1287 */ {I_XSAVES, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1839, 119},
    /* 1288 */ {I_XSAVES64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1838, 120},
    /* 1289 */ {I_XRSTOR, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1846, 116},
    /* 1290 */ {I_XRSTOR64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1845, 118},
    /* 1291 */ {I_XRSTORS, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1853, 119},
    /* 1292 */ {I_XRSTORS64, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+1852, 120},
    /* 1293 */ {I_PREFETCHNTA, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6482, 121},
    /* 1294 */ {I_PREFETCHT0, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6487, 121},
    /* 1295 */ {I_PREFETCHT1, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6492, 121},
    /* 1296 */ {I_PREFETCHT2, 1, {MEMORY|BITS8,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+6497, 121},
    /* 1297 */ {I_SFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3494, 121},
    /* 1298 */ {I_MASKMOVQ, 2, {MMXREG,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4052, 122},
    /* 1299 */ {I_MOVNTQ, 2, {MEMORY,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4058, 123},
    /* 1300 */ {I_PAVGB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1859, 123},
    /* 1301 */ {I_PAVGW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1866, 123},
    /* 1302 */ {I_PEXTRW, 3, {REG_GPR|BITS32,MMXREG,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1873, 124},
    /* 1303 */ {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1880, 124},
    /* 1304 */ {I_PINSRW, 3, {MMXREG,RM_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1880, 124},
    /* 1305 */ {I_PINSRW, 3, {MMXREG,REG_GPR|BITS32,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1880, 124},
    /* 1306 */ {I_PMAXSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1887, 123},
    /* 1307 */ {I_PMAXUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1894, 123},
    /* 1308 */ {I_PMINSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1901, 123},
    /* 1309 */ {I_PMINUB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1908, 123},
    /* 1310 */ {I_PMOVMSKB, 2, {REG_GPR|BITS32,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4064, 122},
    /* 1311 */ {I_PMULHUW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1915, 123},
    /* 1312 */ {I_PSADBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1922, 123},
    /* 1313 */ {I_PSHUFW, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+424, 125},
    /* 1314 */ {I_PF2IW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+432, 82},
    /* 1315 */ {I_PFNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+440, 82},
    /* 1316 */ {I_PFPNACC, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+448, 82},
    /* 1317 */ {I_PI2FW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+456, 82},
    /* 1318 */ {I_PSWAPD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+464, 82},
    /* 1319 */ {I_MASKMOVDQU, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4070, 126},
    /* 1320 */ {I_CLFLUSH, 1, {MEMORY,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+4076, 126},
    /* 1321 */ {I_MOVNTDQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4082, 127},
    /* 1322 */ {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1930, 128},
    /* 1323 */ {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1929, 129},
    /* 1324 */ {I_MOVNTPD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4088, 127},
    /* 1325 */ {I_LFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3044, 126},
    /* 1326 */ {I_MFENCE, 0, {0,0,0,0,0}, NO_DECORATOR, nasm_bytecodes+3122, 126},
    /* 1327 */ {I_MOVD, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1936, 130},
    /* 1328 */ {I_MOVD, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+1943, 130},
    /* 1329 */ {I_MOVD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+1943, 126},
    /* 1330 */ {I_MOVD, 2, {RM_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1936, 126},
    /* 1331 */ {I_MOVDQA, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4094, 127},
    /* 1332 */ {I_MOVDQA, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4100, 127},
    /* 1333 */ {I_MOVDQU, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4106, 127},
    /* 1334 */ {I_MOVDQU, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4112, 127},
    /* 1335 */ {I_MOVDQ2Q, 2, {MMXREG,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4118, 126},
    /* 1336 */ {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4124, 126},
    /* 1337 */ {I_MOVQ, 2, {XMM_L16,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4130, 126},
    /* 1338 */ {I_MOVQ, 2, {MEMORY,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4130, 131},
    /* 1339 */ {I_MOVQ, 2, {XMM_L16,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+4124, 131},
    /* 1340 */ {I_MOVQ, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+1950, 132},
    /* 1341 */ {I_MOVQ, 2, {RM_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+1957, 132},
    /* 1342 */ {I_MOVQ2DQ, 2, {XMM_L16,MMXREG,0,0,0}, NO_DECORATOR, nasm_bytecodes+4136, 126},
    /* 1343 */ {I_PACKSSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4142, 127},
    /* 1344 */ {I_PACKSSDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4148, 127},
    /* 1345 */ {I_PACKUSWB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4154, 127},
    /* 1346 */ {I_PADDB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4160, 127},
    /* 1347 */ {I_PADDW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4166, 127},
    /* 1348 */ {I_PADDD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4172, 127},
    /* 1349 */ {I_PADDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+4178, 133},
    /* 1350 */ {I_PADDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4184, 127},
    /* 1351 */ {I_PADDSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4190, 127},
    /* 1352 */ {I_PADDSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4196, 127},
    /* 1353 */ {I_PADDUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4202, 127},
    /* 1354 */ {I_PADDUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4208, 127},
    /* 1355 */ {I_PAND, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4214, 127},
    /* 1356 */ {I_PANDN, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4220, 127},
    /* 1357 */ {I_PAVGB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4226, 127},
    /* 1358 */ {I_PAVGW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4232, 127},
    /* 1359 */ {I_PCMPEQB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4238, 127},
    /* 1360 */ {I_PCMPEQW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4244, 127},
    /* 1361 */ {I_PCMPEQD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4250, 127},
    /* 1362 */ {I_PCMPGTB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4256, 127},
    /* 1363 */ {I_PCMPGTW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4262, 127},
    /* 1364 */ {I_PCMPGTD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4268, 127},
    /* 1365 */ {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1964, 134},
    /* 1366 */ {I_PINSRW, 3, {XMM_L16,REG_GPR|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1971, 134},
    /* 1367 */ {I_PINSRW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1971, 134},
    /* 1368 */ {I_PINSRW, 3, {XMM_L16,MEMORY|BITS16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1971, 134},
    /* 1369 */ {I_PMADDWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4274, 127},
    /* 1370 */ {I_PMAXSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4280, 127},
    /* 1371 */ {I_PMAXUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4286, 127},
    /* 1372 */ {I_PMINSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4292, 127},
    /* 1373 */ {I_PMINUB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4298, 127},
    /* 1374 */ {I_PMOVMSKB, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4304, 126},
    /* 1375 */ {I_PMULHUW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4310, 127},
    /* 1376 */ {I_PMULHW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4316, 127},
    /* 1377 */ {I_PMULLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4322, 127},
    /* 1378 */ {I_PMULUDQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+1978, 127},
    /* 1379 */ {I_PMULUDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4328, 127},
    /* 1380 */ {I_POR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4334, 127},
    /* 1381 */ {I_PSADBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4340, 127},
    /* 1382 */ {I_PSHUFD, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1985, 134},
    /* 1383 */ {I_PSHUFD, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1985, 136},
    /* 1384 */ {I_PSHUFHW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1992, 134},
    /* 1385 */ {I_PSHUFHW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1992, 136},
    /* 1386 */ {I_PSHUFLW, 3, {XMM_L16,XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1999, 134},
    /* 1387 */ {I_PSHUFLW, 3, {XMM_L16,MEMORY,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+1999, 136},
    /* 1388 */ {I_PSLLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2006, 137},
    /* 1389 */ {I_PSLLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4346, 127},
    /* 1390 */ {I_PSLLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2013, 137},
    /* 1391 */ {I_PSLLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4352, 127},
    /* 1392 */ {I_PSLLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2020, 137},
    /* 1393 */ {I_PSLLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4358, 127},
    /* 1394 */ {I_PSLLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2027, 137},
    /* 1395 */ {I_PSRAW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4364, 127},
    /* 1396 */ {I_PSRAW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2034, 137},
    /* 1397 */ {I_PSRAD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4370, 127},
    /* 1398 */ {I_PSRAD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2041, 137},
    /* 1399 */ {I_PSRLDQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2048, 137},
    /* 1400 */ {I_PSRLW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4376, 127},
    /* 1401 */ {I_PSRLW, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2055, 137},
    /* 1402 */ {I_PSRLD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4382, 127},
    /* 1403 */ {I_PSRLD, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2062, 137},
    /* 1404 */ {I_PSRLQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4388, 127},
    /* 1405 */ {I_PSRLQ, 2, {XMM_L16,IMMEDIATE,0,0,0}, NO_DECORATOR, nasm_bytecodes+2069, 137},
    /* 1406 */ {I_PSUBB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4394, 127},
    /* 1407 */ {I_PSUBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4400, 127},
    /* 1408 */ {I_PSUBD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4406, 127},
    /* 1409 */ {I_PSUBQ, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2076, 127},
    /* 1410 */ {I_PSUBQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4412, 127},
    /* 1411 */ {I_PSUBSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4418, 127},
    /* 1412 */ {I_PSUBSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4424, 127},
    /* 1413 */ {I_PSUBUSB, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4430, 127},
    /* 1414 */ {I_PSUBUSW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4436, 127},
    /* 1415 */ {I_PUNPCKHBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4442, 127},
    /* 1416 */ {I_PUNPCKHWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4448, 127},
    /* 1417 */ {I_PUNPCKHDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4454, 127},
    /* 1418 */ {I_PUNPCKHQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4460, 127},
    /* 1419 */ {I_PUNPCKLBW, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4466, 127},
    /* 1420 */ {I_PUNPCKLWD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4472, 127},
    /* 1421 */ {I_PUNPCKLDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4478, 127},
    /* 1422 */ {I_PUNPCKLQDQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4484, 127},
    /* 1423 */ {I_PXOR, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4490, 127},
    /* 1424 */ {I_ADDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4496, 127},
    /* 1425 */ {I_ADDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4502, 131},
    /* 1426 */ {I_ANDNPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4508, 127},
    /* 1427 */ {I_ANDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4514, 127},
    /* 1428 */ {I_CMPEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+472, 127},
    /* 1429 */ {I_CMPEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+480, 131},
    /* 1430 */ {I_CMPLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+488, 127},
    /* 1431 */ {I_CMPLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+496, 131},
    /* 1432 */ {I_CMPLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+504, 127},
    /* 1433 */ {I_CMPLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+512, 131},
    /* 1434 */ {I_CMPNEQPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+520, 127},
    /* 1435 */ {I_CMPNEQSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+528, 131},
    /* 1436 */ {I_CMPNLEPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+536, 127},
    /* 1437 */ {I_CMPNLESD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+544, 131},
    /* 1438 */ {I_CMPNLTPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+552, 127},
    /* 1439 */ {I_CMPNLTSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+560, 131},
    /* 1440 */ {I_CMPORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+568, 127},
    /* 1441 */ {I_CMPORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+576, 131},
    /* 1442 */ {I_CMPUNORDPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+584, 127},
    /* 1443 */ {I_CMPUNORDSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+592, 131},
    /* 1444 */ {I_CMPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2083, 126},
    /* 1445 */ {I_CMPSD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2090, 126},
    /* 1446 */ {I_COMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4520, 126},
    /* 1447 */ {I_CVTDQ2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4526, 131},
    /* 1448 */ {I_CVTDQ2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4532, 127},
    /* 1449 */ {I_CVTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4538, 127},
    /* 1450 */ {I_CVTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4544, 127},
    /* 1451 */ {I_CVTPD2PS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4550, 127},
    /* 1452 */ {I_CVTPI2PD, 2, {XMM_L16,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+4556, 131},
    /* 1453 */ {I_CVTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4562, 127},
    /* 1454 */ {I_CVTPS2PD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4568, 131},
    /* 1455 */ {I_CVTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2097, 138},
    /* 1456 */ {I_CVTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2097, 138},
    /* 1457 */ {I_CVTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2104, 139},
    /* 1458 */ {I_CVTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2104, 139},
    /* 1459 */ {I_CVTSD2SS, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4574, 131},
    /* 1460 */ {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2111, 140},
    /* 1461 */ {I_CVTSI2SD, 2, {XMM_L16,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2118, 139},
    /* 1462 */ {I_CVTSS2SD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4580, 130},
    /* 1463 */ {I_CVTTPD2PI, 2, {MMXREG,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4586, 127},
    /* 1464 */ {I_CVTTPD2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4592, 127},
    /* 1465 */ {I_CVTTPS2DQ, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4598, 127},
    /* 1466 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2125, 138},
    /* 1467 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2125, 138},
    /* 1468 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2132, 139},
    /* 1469 */ {I_CVTTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, NO_DECORATOR, nasm_bytecodes+2132, 139},
    /* 1470 */ {I_DIVPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4604, 127},
    /* 1471 */ {I_DIVSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4610, 131},
    /* 1472 */ {I_MAXPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4616, 127},
    /* 1473 */ {I_MAXSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4622, 131},
    /* 1474 */ {I_MINPD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4628, 127},
    /* 1475 */ {I_MINSD, 2, {XMM_L16,RM_XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4634, 131},
    /* 1476 */ {I_MOVAPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4640, 126},
    /* 1477 */ {I_MOVAPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4646, 126},
    /* 1478 */ {I_MOVHPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4652, 126},
    /* 1479 */ {I_MOVHPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4658, 126},
    /* 1480 */ {I_MOVLPD, 2, {MEMORY|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4664, 126},
    /* 1481 */ {I_MOVLPD, 2, {XMM_L16,MEMORY|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4670, 126},
    /* 1482 */ {I_MOVMSKPD, 2, {REG_GPR|BITS32,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4676, 126},
    /* 1483 */ {I_MOVMSKPD, 2, {REG_GPR|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2139, 132},
    /* 1484 */ {I_MOVSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4682, 126},
    /* 1485 */ {I_MOVSD, 2, {RM_XMM_L16|BITS64,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4688, 126},
    /* 1486 */ {I_MOVUPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4694, 126},
    /* 1487 */ {I_MOVUPD, 2, {RM_XMM_L16|BITS128,XMM_L16,0,0,0}, NO_DECORATOR, nasm_bytecodes+4700, 126},
    /* 1488 */ {I_MULPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4706, 127},
    /* 1489 */ {I_MULSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4712, 131},
    /* 1490 */ {I_ORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4718, 127},
    /* 1491 */ {I_SHUFPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+2146, 126},
    /* 1492 */ {I_SQRTPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4724, 127},
    /* 1493 */ {I_SQRTSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4730, 126},
    /* 1494 */ {I_SUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4736, 127},
    /* 1495 */ {I_SUBSD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4742, 126},
    /* 1496 */ {I_UCOMISD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4748, 126},
    /* 1497 */ {I_UNPCKHPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4754, 126},
    /* 1498 */ {I_UNPCKLPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4760, 126},
    /* 1499 */ {I_XORPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4766, 126},
    /* 1500 */ {I_ADDSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4772, 141},
    /* 1501 */ {I_ADDSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4778, 141},
    /* 1502 */ {I_HADDPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4784, 141},
    /* 1503 */ {I_HADDPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4790, 141},
    /* 1504 */ {I_HSUBPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4796, 141},
    /* 1505 */ {I_HSUBPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4802, 141},
    /* 1506 */ {I_LDDQU, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4808, 141},
    /* 1507 */ {I_MOVDDUP, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+4814, 142},
    /* 1508 */ {I_MOVSHDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4820, 143},
    /* 1509 */ {I_MOVSLDUP, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+4826, 143},
    /* 1510 */ {I_PABSB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2153, 144},
    /* 1511 */ {I_PABSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2160, 145},
    /* 1512 */ {I_PABSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2167, 144},
    /* 1513 */ {I_PABSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2174, 145},
    /* 1514 */ {I_PABSD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2181, 144},
    /* 1515 */ {I_PABSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2188, 145},
    /* 1516 */ {I_PALIGNR, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+600, 144},
    /* 1517 */ {I_PALIGNR, 3, {XMM_L16,RM_XMM_L16,IMMEDIATE,0,0}, NO_DECORATOR, nasm_bytecodes+608, 145},
    /* 1518 */ {I_PHADDW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2195, 144},
    /* 1519 */ {I_PHADDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2202, 145},
    /* 1520 */ {I_PHADDD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2209, 144},
    /* 1521 */ {I_PHADDD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2216, 145},
    /* 1522 */ {I_PHADDSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2223, 144},
    /* 1523 */ {I_PHADDSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2230, 145},
    /* 1524 */ {I_PHSUBW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2237, 144},
    /* 1525 */ {I_PHSUBW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2244, 145},
    /* 1526 */ {I_PHSUBD, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2251, 144},
    /* 1527 */ {I_PHSUBD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2258, 145},
    /* 1528 */ {I_PHSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2265, 144},
    /* 1529 */ {I_PHSUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2272, 145},
    /* 1530 */ {I_PMADDUBSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2279, 144},
    /* 1531 */ {I_PMADDUBSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2286, 145},
    /* 1532 */ {I_PMULHRSW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2293, 144},
    /* 1533 */ {I_PMULHRSW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2300, 145},
    /* 1534 */ {I_PSHUFB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2307, 144},
    /* 1535 */ {I_PSHUFB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2314, 145},
    /* 1536 */ {I_PSIGNB, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2321, 144},
    /* 1537 */ {I_PSIGNB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2328, 145},
    /* 1538 */ {I_PSIGNW, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2335, 144},
    /* 1539 */ {I_PSIGNW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2342, 145},
    /* 1540 */ {I_PSIGND, 2, {MMXREG,RM_MMX,0,0,0}, NO_DECORATOR, nasm_bytecodes+2349, 144},
    /* 1541 */ {I_PSIGND, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2356, 145},
    /* 1542 */ {I_LZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2363, 146},
    /* 1543 */ {I_LZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2370, 146},
    /* 1544 */ {I_LZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2377, 62},
    /* 1545 */ {I_BLENDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+616, 147},
    /* 1546 */ {I_BLENDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+624, 147},
    /* 1547 */ {I_BLENDVPD, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2384, 147},
    /* 1548 */ {I_BLENDVPD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2384, 147},
    /* 1549 */ {I_BLENDVPS, 3, {XMM_L16,RM_XMM_L16|BITS128,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2391, 147},
    /* 1550 */ {I_BLENDVPS, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2391, 147},
    /* 1551 */ {I_DPPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+632, 147},
    /* 1552 */ {I_DPPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+640, 147},
    /* 1553 */ {I_EXTRACTPS, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+1, 147},
    /* 1554 */ {I_EXTRACTPS, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+0, 148},
    /* 1555 */ {I_INSERTPS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+648, 147},
    /* 1556 */ {I_MOVNTDQA, 2, {XMM_L16,MEMORY|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2398, 147},
    /* 1557 */ {I_MPSADBW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+656, 147},
    /* 1558 */ {I_PACKUSDW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2405, 147},
    /* 1559 */ {I_PBLENDVB, 3, {XMM_L16,RM_XMM_L16,XMM0,0,0}, NO_DECORATOR, nasm_bytecodes+2412, 147},
    /* 1560 */ {I_PBLENDVB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2412, 147},
    /* 1561 */ {I_PBLENDW, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+664, 147},
    /* 1562 */ {I_PCMPEQQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2419, 147},
    /* 1563 */ {I_PEXTRB, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10, 147},
    /* 1564 */ {I_PEXTRB, 3, {MEMORY|BITS8,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+10, 147},
    /* 1565 */ {I_PEXTRB, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+9, 148},
    /* 1566 */ {I_PEXTRD, 3, {RM_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+18, 147},
    /* 1567 */ {I_PEXTRQ, 3, {RM_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+27, 148},
    /* 1568 */ {I_PEXTRW, 3, {REG_GPR|BITS32,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+37, 147},
    /* 1569 */ {I_PEXTRW, 3, {MEMORY|BITS16,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+37, 147},
    /* 1570 */ {I_PEXTRW, 3, {REG_GPR|BITS64,XMM_L16,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+36, 148},
    /* 1571 */ {I_PHMINPOSUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2426, 147},
    /* 1572 */ {I_PINSRB, 3, {XMM_L16,MEMORY,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+46, 149},
    /* 1573 */ {I_PINSRB, 3, {XMM_L16,RM_GPR|BITS8,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+45, 149},
    /* 1574 */ {I_PINSRB, 3, {XMM_L16,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+46, 149},
    /* 1575 */ {I_PINSRD, 3, {XMM_L16,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+54, 149},
    /* 1576 */ {I_PINSRQ, 3, {XMM_L16,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+63, 150},
    /* 1577 */ {I_PMAXSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2433, 147},
    /* 1578 */ {I_PMAXSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2440, 147},
    /* 1579 */ {I_PMAXUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2447, 147},
    /* 1580 */ {I_PMAXUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2454, 147},
    /* 1581 */ {I_PMINSB, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2461, 147},
    /* 1582 */ {I_PMINSD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2468, 147},
    /* 1583 */ {I_PMINUD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2475, 147},
    /* 1584 */ {I_PMINUW, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2482, 147},
    /* 1585 */ {I_PMOVSXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2489, 151},
    /* 1586 */ {I_PMOVSXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2496, 152},
    /* 1587 */ {I_PMOVSXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2503, 153},
    /* 1588 */ {I_PMOVSXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2510, 151},
    /* 1589 */ {I_PMOVSXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2517, 152},
    /* 1590 */ {I_PMOVSXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2524, 151},
    /* 1591 */ {I_PMOVZXBW, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2531, 151},
    /* 1592 */ {I_PMOVZXBD, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2538, 152},
    /* 1593 */ {I_PMOVZXBQ, 2, {XMM_L16,RM_XMM_L16|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2545, 153},
    /* 1594 */ {I_PMOVZXWD, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2552, 151},
    /* 1595 */ {I_PMOVZXWQ, 2, {XMM_L16,RM_XMM_L16|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2559, 152},
    /* 1596 */ {I_PMOVZXDQ, 2, {XMM_L16,RM_XMM_L16|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2566, 151},
    /* 1597 */ {I_PMULDQ, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2573, 147},
    /* 1598 */ {I_PMULLD, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2580, 147},
    /* 1599 */ {I_PTEST, 2, {XMM_L16,RM_XMM_L16|BITS128,0,0,0}, NO_DECORATOR, nasm_bytecodes+2587, 147},
    /* 1600 */ {I_ROUNDPD, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+672, 147},
    /* 1601 */ {I_ROUNDPS, 3, {XMM_L16,RM_XMM_L16|BITS128,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+680, 147},
    /* 1602 */ {I_ROUNDSD, 3, {XMM_L16,RM_XMM_L16|BITS64,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+688, 147},
    /* 1603 */ {I_ROUNDSS, 3, {XMM_L16,RM_XMM_L16|BITS32,IMMEDIATE|BITS8,0,0}, NO_DECORATOR, nasm_bytecodes+696, 147},
    /* 1604 */ {I_POPCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2594, 154},
    /* 1605 */ {I_POPCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2601, 155},
    /* 1606 */ {I_POPCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2608, 156},
    /* 1607 */ {I_TZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, NO_DECORATOR, nasm_bytecodes+2615, 157},
    /* 1608 */ {I_TZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, NO_DECORATOR, nasm_bytecodes+2622, 157},
    /* 1609 */ {I_TZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, NO_DECORATOR, nasm_bytecodes+2629, 158},
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
    instrux + 830,
};

static const struct itemplate * const itable_07[] = {
    instrux + 780,
};

static const struct itemplate * const itable_08[] = {
    instrux + 692,
    instrux + 693,
};

static const struct itemplate * const itable_09[] = {
    instrux + 694,
    instrux + 695,
    instrux + 696,
    instrux + 697,
    instrux + 698,
    instrux + 699,
};

static const struct itemplate * const itable_0A[] = {
    instrux + 700,
    instrux + 701,
};

static const struct itemplate * const itable_0B[] = {
    instrux + 702,
    instrux + 703,
    instrux + 704,
    instrux + 705,
    instrux + 706,
    instrux + 707,
};

static const struct itemplate * const itable_0C[] = {
    instrux + 711,
};

static const struct itemplate * const itable_0D[] = {
    instrux + 712,
    instrux + 713,
    instrux + 714,
};

static const struct itemplate * const itable_0E[] = {
    instrux + 831,
};

static const struct itemplate * const itable_0F00[] = {
    instrux + 553,
    instrux + 554,
    instrux + 555,
    instrux + 596,
    instrux + 597,
    instrux + 598,
    instrux + 1027,
    instrux + 1028,
    instrux + 1029,
    instrux + 1030,
    instrux + 1031,
    instrux + 1045,
    instrux + 1046,
    instrux + 1047,
    instrux + 1048,
    instrux + 1049,
    instrux + 1115,
    instrux + 1116,
    instrux + 1117,
    instrux + 1118,
    instrux + 1119,
    instrux + 1120,
};

static const struct itemplate * const itable_0F01[] = {
    instrux + 495,
    instrux + 548,
    instrux + 552,
    instrux + 556,
    instrux + 557,
    instrux + 558,
    instrux + 600,
    instrux + 679,
    instrux + 877,
    instrux + 977,
    instrux + 1026,
    instrux + 1033,
    instrux + 1034,
    instrux + 1035,
    instrux + 1036,
    instrux + 1037,
    instrux + 1279,
    instrux + 1280,
};

static const struct itemplate * const itable_0F02[] = {
    instrux + 526,
    instrux + 527,
    instrux + 528,
    instrux + 529,
    instrux + 530,
    instrux + 531,
    instrux + 532,
    instrux + 533,
    instrux + 534,
    instrux + 535,
};

static const struct itemplate * const itable_0F03[] = {
    instrux + 583,
    instrux + 584,
    instrux + 585,
    instrux + 586,
    instrux + 587,
    instrux + 588,
    instrux + 589,
    instrux + 590,
    instrux + 591,
    instrux + 592,
};

static const struct itemplate * const itable_0F06[] = {
    instrux + 186,
};

static const struct itemplate * const itable_0F08[] = {
    instrux + 492,
};

static const struct itemplate * const itable_0F09[] = {
    instrux + 1122,
};

static const struct itemplate * const itable_0F0B[] = {
    instrux + 1114,
};

static const struct itemplate * const itable_0F0D[] = {
    instrux + 793,
    instrux + 794,
};

static const struct itemplate * const itable_0F0E[] = {
    instrux + 318,
};

static const struct itemplate * const itable_0F0F[] = {
    instrux + 746,
    instrux + 753,
    instrux + 754,
    instrux + 755,
    instrux + 756,
    instrux + 757,
    instrux + 758,
    instrux + 759,
    instrux + 760,
    instrux + 761,
    instrux + 762,
    instrux + 763,
    instrux + 764,
    instrux + 765,
    instrux + 766,
    instrux + 767,
    instrux + 768,
    instrux + 769,
    instrux + 771,
    instrux + 1314,
    instrux + 1315,
    instrux + 1316,
    instrux + 1317,
    instrux + 1318,
};

static const struct itemplate * const itable_0F10[] = {
    instrux + 1254,
    instrux + 1256,
    instrux + 1484,
    instrux + 1486,
};

static const struct itemplate * const itable_0F11[] = {
    instrux + 1255,
    instrux + 1257,
    instrux + 1485,
    instrux + 1487,
};

static const struct itemplate * const itable_0F12[] = {
    instrux + 1248,
    instrux + 1250,
    instrux + 1481,
    instrux + 1507,
    instrux + 1509,
};

static const struct itemplate * const itable_0F13[] = {
    instrux + 1249,
    instrux + 1480,
};

static const struct itemplate * const itable_0F14[] = {
    instrux + 1273,
    instrux + 1498,
};

static const struct itemplate * const itable_0F15[] = {
    instrux + 1272,
    instrux + 1497,
};

static const struct itemplate * const itable_0F16[] = {
    instrux + 1245,
    instrux + 1247,
    instrux + 1479,
    instrux + 1508,
};

static const struct itemplate * const itable_0F17[] = {
    instrux + 1246,
    instrux + 1478,
};

static const struct itemplate * const itable_0F18[] = {
    instrux + 1293,
    instrux + 1294,
    instrux + 1295,
    instrux + 1296,
};

static const struct itemplate * const itable_0F1F[] = {
    instrux + 685,
    instrux + 686,
    instrux + 687,
};

static const struct itemplate * const itable_0F20[] = {
    instrux + 617,
    instrux + 618,
};

static const struct itemplate * const itable_0F21[] = {
    instrux + 621,
    instrux + 622,
};

static const struct itemplate * const itable_0F22[] = {
    instrux + 619,
    instrux + 620,
};

static const struct itemplate * const itable_0F23[] = {
    instrux + 623,
    instrux + 624,
};

static const struct itemplate * const itable_0F28[] = {
    instrux + 1243,
    instrux + 1476,
};

static const struct itemplate * const itable_0F29[] = {
    instrux + 1244,
    instrux + 1477,
};

static const struct itemplate * const itable_0F2A[] = {
    instrux + 1225,
    instrux + 1227,
    instrux + 1228,
    instrux + 1452,
    instrux + 1460,
    instrux + 1461,
};

static const struct itemplate * const itable_0F2B[] = {
    instrux + 1253,
    instrux + 1324,
};

static const struct itemplate * const itable_0F2C[] = {
    instrux + 1233,
    instrux + 1234,
    instrux + 1235,
    instrux + 1463,
    instrux + 1466,
    instrux + 1467,
    instrux + 1468,
    instrux + 1469,
};

static const struct itemplate * const itable_0F2D[] = {
    instrux + 1226,
    instrux + 1229,
    instrux + 1230,
    instrux + 1231,
    instrux + 1232,
    instrux + 1450,
    instrux + 1455,
    instrux + 1456,
    instrux + 1457,
    instrux + 1458,
};

static const struct itemplate * const itable_0F2E[] = {
    instrux + 1271,
    instrux + 1496,
};

static const struct itemplate * const itable_0F2F[] = {
    instrux + 1224,
    instrux + 1446,
};

static const struct itemplate * const itable_0F30[] = {
    instrux + 1123,
};

static const struct itemplate * const itable_0F31[] = {
    instrux + 876,
};

static const struct itemplate * const itable_0F32[] = {
    instrux + 874,
};

static const struct itemplate * const itable_0F33[] = {
    instrux + 875,
};

static const struct itemplate * const itable_0F34[] = {
    instrux + 1082,
};

static const struct itemplate * const itable_0F35[] = {
    instrux + 1083,
};

static const struct itemplate * const itable_0F3800[] = {
    instrux + 1534,
    instrux + 1535,
};

static const struct itemplate * const itable_0F3801[] = {
    instrux + 1518,
    instrux + 1519,
};

static const struct itemplate * const itable_0F3802[] = {
    instrux + 1520,
    instrux + 1521,
};

static const struct itemplate * const itable_0F3803[] = {
    instrux + 1522,
    instrux + 1523,
};

static const struct itemplate * const itable_0F3804[] = {
    instrux + 1530,
    instrux + 1531,
};

static const struct itemplate * const itable_0F3805[] = {
    instrux + 1524,
    instrux + 1525,
};

static const struct itemplate * const itable_0F3806[] = {
    instrux + 1526,
    instrux + 1527,
};

static const struct itemplate * const itable_0F3807[] = {
    instrux + 1528,
    instrux + 1529,
};

static const struct itemplate * const itable_0F3808[] = {
    instrux + 1536,
    instrux + 1537,
};

static const struct itemplate * const itable_0F3809[] = {
    instrux + 1538,
    instrux + 1539,
};

static const struct itemplate * const itable_0F380A[] = {
    instrux + 1540,
    instrux + 1541,
};

static const struct itemplate * const itable_0F380B[] = {
    instrux + 1532,
    instrux + 1533,
};

static const struct itemplate * const itable_0F3810[] = {
    instrux + 1559,
    instrux + 1560,
};

static const struct itemplate * const itable_0F3814[] = {
    instrux + 1549,
    instrux + 1550,
};

static const struct itemplate * const itable_0F3815[] = {
    instrux + 1547,
    instrux + 1548,
};

static const struct itemplate * const itable_0F3817[] = {
    instrux + 1599,
};

static const struct itemplate * const itable_0F381C[] = {
    instrux + 1510,
    instrux + 1511,
};

static const struct itemplate * const itable_0F381D[] = {
    instrux + 1512,
    instrux + 1513,
};

static const struct itemplate * const itable_0F381E[] = {
    instrux + 1514,
    instrux + 1515,
};

static const struct itemplate * const itable_0F3820[] = {
    instrux + 1585,
};

static const struct itemplate * const itable_0F3821[] = {
    instrux + 1586,
};

static const struct itemplate * const itable_0F3822[] = {
    instrux + 1587,
};

static const struct itemplate * const itable_0F3823[] = {
    instrux + 1588,
};

static const struct itemplate * const itable_0F3824[] = {
    instrux + 1589,
};

static const struct itemplate * const itable_0F3825[] = {
    instrux + 1590,
};

static const struct itemplate * const itable_0F3828[] = {
    instrux + 1597,
};

static const struct itemplate * const itable_0F3829[] = {
    instrux + 1562,
};

static const struct itemplate * const itable_0F382A[] = {
    instrux + 1556,
};

static const struct itemplate * const itable_0F382B[] = {
    instrux + 1558,
};

static const struct itemplate * const itable_0F3830[] = {
    instrux + 1591,
};

static const struct itemplate * const itable_0F3831[] = {
    instrux + 1592,
};

static const struct itemplate * const itable_0F3832[] = {
    instrux + 1593,
};

static const struct itemplate * const itable_0F3833[] = {
    instrux + 1594,
};

static const struct itemplate * const itable_0F3834[] = {
    instrux + 1595,
};

static const struct itemplate * const itable_0F3835[] = {
    instrux + 1596,
};

static const struct itemplate * const itable_0F3838[] = {
    instrux + 1581,
};

static const struct itemplate * const itable_0F3839[] = {
    instrux + 1582,
};

static const struct itemplate * const itable_0F383A[] = {
    instrux + 1584,
};

static const struct itemplate * const itable_0F383B[] = {
    instrux + 1583,
};

static const struct itemplate * const itable_0F383C[] = {
    instrux + 1577,
};

static const struct itemplate * const itable_0F383D[] = {
    instrux + 1578,
};

static const struct itemplate * const itable_0F383E[] = {
    instrux + 1580,
};

static const struct itemplate * const itable_0F383F[] = {
    instrux + 1579,
};

static const struct itemplate * const itable_0F3840[] = {
    instrux + 1598,
};

static const struct itemplate * const itable_0F3841[] = {
    instrux + 1571,
};

static const struct itemplate * const itable_0F3882[] = {
    instrux + 493,
    instrux + 494,
};

static const struct itemplate * const itable_0F3A08[] = {
    instrux + 1601,
};

static const struct itemplate * const itable_0F3A09[] = {
    instrux + 1600,
};

static const struct itemplate * const itable_0F3A0A[] = {
    instrux + 1603,
};

static const struct itemplate * const itable_0F3A0B[] = {
    instrux + 1602,
};

static const struct itemplate * const itable_0F3A0C[] = {
    instrux + 1546,
};

static const struct itemplate * const itable_0F3A0D[] = {
    instrux + 1545,
};

static const struct itemplate * const itable_0F3A0E[] = {
    instrux + 1561,
};

static const struct itemplate * const itable_0F3A0F[] = {
    instrux + 1516,
    instrux + 1517,
};

static const struct itemplate * const itable_0F3A14[] = {
    instrux + 1563,
    instrux + 1564,
    instrux + 1565,
};

static const struct itemplate * const itable_0F3A15[] = {
    instrux + 1568,
    instrux + 1569,
    instrux + 1570,
};

static const struct itemplate * const itable_0F3A16[] = {
    instrux + 1566,
    instrux + 1567,
};

static const struct itemplate * const itable_0F3A17[] = {
    instrux + 1553,
    instrux + 1554,
};

static const struct itemplate * const itable_0F3A20[] = {
    instrux + 1572,
    instrux + 1573,
    instrux + 1574,
};

static const struct itemplate * const itable_0F3A21[] = {
    instrux + 1555,
};

static const struct itemplate * const itable_0F3A22[] = {
    instrux + 1575,
    instrux + 1576,
};

static const struct itemplate * const itable_0F3A40[] = {
    instrux + 1552,
};

static const struct itemplate * const itable_0F3A41[] = {
    instrux + 1551,
};

static const struct itemplate * const itable_0F3A42[] = {
    instrux + 1557,
};

static const struct itemplate * const itable_0F40[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F41[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F42[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F43[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F44[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F45[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F46[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F47[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F48[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F49[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F4A[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F4B[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F4C[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F4D[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F4E[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F4F[] = {
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
};

static const struct itemplate * const itable_0F50[] = {
    instrux + 1251,
    instrux + 1252,
    instrux + 1482,
    instrux + 1483,
};

static const struct itemplate * const itable_0F51[] = {
    instrux + 1266,
    instrux + 1267,
    instrux + 1492,
    instrux + 1493,
};

static const struct itemplate * const itable_0F52[] = {
    instrux + 1263,
    instrux + 1264,
};

static const struct itemplate * const itable_0F53[] = {
    instrux + 1261,
    instrux + 1262,
};

static const struct itemplate * const itable_0F54[] = {
    instrux + 1205,
    instrux + 1427,
};

static const struct itemplate * const itable_0F55[] = {
    instrux + 1204,
    instrux + 1426,
};

static const struct itemplate * const itable_0F56[] = {
    instrux + 1260,
    instrux + 1490,
};

static const struct itemplate * const itable_0F57[] = {
    instrux + 1274,
    instrux + 1499,
};

static const struct itemplate * const itable_0F58[] = {
    instrux + 1202,
    instrux + 1203,
    instrux + 1424,
    instrux + 1425,
};

static const struct itemplate * const itable_0F59[] = {
    instrux + 1258,
    instrux + 1259,
    instrux + 1488,
    instrux + 1489,
};

static const struct itemplate * const itable_0F5A[] = {
    instrux + 1451,
    instrux + 1454,
    instrux + 1459,
    instrux + 1462,
};

static const struct itemplate * const itable_0F5B[] = {
    instrux + 1448,
    instrux + 1453,
    instrux + 1465,
};

static const struct itemplate * const itable_0F5C[] = {
    instrux + 1269,
    instrux + 1270,
    instrux + 1494,
    instrux + 1495,
};

static const struct itemplate * const itable_0F5D[] = {
    instrux + 1241,
    instrux + 1242,
    instrux + 1474,
    instrux + 1475,
};

static const struct itemplate * const itable_0F5E[] = {
    instrux + 1236,
    instrux + 1237,
    instrux + 1470,
    instrux + 1471,
};

static const struct itemplate * const itable_0F5F[] = {
    instrux + 1239,
    instrux + 1240,
    instrux + 1472,
    instrux + 1473,
};

static const struct itemplate * const itable_0F60[] = {
    instrux + 821,
    instrux + 1419,
};

static const struct itemplate * const itable_0F61[] = {
    instrux + 823,
    instrux + 1420,
};

static const struct itemplate * const itable_0F62[] = {
    instrux + 822,
    instrux + 1421,
};

static const struct itemplate * const itable_0F63[] = {
    instrux + 734,
    instrux + 1343,
};

static const struct itemplate * const itable_0F64[] = {
    instrux + 750,
    instrux + 1362,
};

static const struct itemplate * const itable_0F65[] = {
    instrux + 752,
    instrux + 1363,
};

static const struct itemplate * const itable_0F66[] = {
    instrux + 751,
    instrux + 1364,
};

static const struct itemplate * const itable_0F67[] = {
    instrux + 735,
    instrux + 1345,
};

static const struct itemplate * const itable_0F68[] = {
    instrux + 818,
    instrux + 1415,
};

static const struct itemplate * const itable_0F69[] = {
    instrux + 820,
    instrux + 1416,
};

static const struct itemplate * const itable_0F6A[] = {
    instrux + 819,
    instrux + 1417,
};

static const struct itemplate * const itable_0F6B[] = {
    instrux + 733,
    instrux + 1344,
};

static const struct itemplate * const itable_0F6C[] = {
    instrux + 1422,
};

static const struct itemplate * const itable_0F6D[] = {
    instrux + 1418,
};

static const struct itemplate * const itable_0F6E[] = {
    instrux + 653,
    instrux + 657,
    instrux + 1328,
    instrux + 1329,
    instrux + 1340,
};

static const struct itemplate * const itable_0F6F[] = {
    instrux + 655,
    instrux + 1331,
    instrux + 1333,
};

static const struct itemplate * const itable_0F70[] = {
    instrux + 1313,
    instrux + 1382,
    instrux + 1383,
    instrux + 1384,
    instrux + 1385,
    instrux + 1386,
    instrux + 1387,
};

static const struct itemplate * const itable_0F71[] = {
    instrux + 800,
    instrux + 804,
    instrux + 810,
    instrux + 1390,
    instrux + 1396,
    instrux + 1401,
};

static const struct itemplate * const itable_0F72[] = {
    instrux + 796,
    instrux + 802,
    instrux + 806,
    instrux + 1392,
    instrux + 1398,
    instrux + 1403,
};

static const struct itemplate * const itable_0F73[] = {
    instrux + 798,
    instrux + 808,
    instrux + 1388,
    instrux + 1394,
    instrux + 1399,
    instrux + 1405,
};

static const struct itemplate * const itable_0F74[] = {
    instrux + 747,
    instrux + 1359,
};

static const struct itemplate * const itable_0F75[] = {
    instrux + 749,
    instrux + 1360,
};

static const struct itemplate * const itable_0F76[] = {
    instrux + 748,
    instrux + 1361,
};

static const struct itemplate * const itable_0F77[] = {
    instrux + 250,
};

static const struct itemplate * const itable_0F7C[] = {
    instrux + 1502,
    instrux + 1503,
};

static const struct itemplate * const itable_0F7D[] = {
    instrux + 1504,
    instrux + 1505,
};

static const struct itemplate * const itable_0F7E[] = {
    instrux + 654,
    instrux + 658,
    instrux + 1327,
    instrux + 1330,
    instrux + 1336,
    instrux + 1339,
    instrux + 1341,
};

static const struct itemplate * const itable_0F7F[] = {
    instrux + 656,
    instrux + 1332,
    instrux + 1334,
};

static const struct itemplate * const itable_0F80[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F81[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F82[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F83[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F84[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F85[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F86[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F87[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F88[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F89[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F8A[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F8B[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F8C[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F8D[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F8E[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F8F[] = {
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
};

static const struct itemplate * const itable_0F90[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F91[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F92[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F93[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F94[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F95[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F96[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F97[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F98[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F99[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F9A[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F9B[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F9C[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F9D[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F9E[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0F9F[] = {
    instrux + 1200,
    instrux + 1201,
};

static const struct itemplate * const itable_0FA0[] = {
    instrux + 834,
};

static const struct itemplate * const itable_0FA1[] = {
    instrux + 783,
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
    instrux + 990,
    instrux + 991,
    instrux + 992,
    instrux + 993,
    instrux + 994,
    instrux + 995,
};

static const struct itemplate * const itable_0FA5[] = {
    instrux + 996,
    instrux + 997,
    instrux + 998,
    instrux + 999,
    instrux + 1000,
    instrux + 1001,
};

static const struct itemplate * const itable_0FA8[] = {
    instrux + 835,
};

static const struct itemplate * const itable_0FA9[] = {
    instrux + 784,
};

static const struct itemplate * const itable_0FAA[] = {
    instrux + 926,
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
    instrux + 1014,
    instrux + 1015,
    instrux + 1016,
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
};

static const struct itemplate * const itable_0FAD[] = {
    instrux + 1020,
    instrux + 1021,
    instrux + 1022,
    instrux + 1023,
    instrux + 1024,
    instrux + 1025,
};

static const struct itemplate * const itable_0FAE[] = {
    instrux + 544,
    instrux + 599,
    instrux + 976,
    instrux + 1238,
    instrux + 1268,
    instrux + 1275,
    instrux + 1276,
    instrux + 1277,
    instrux + 1278,
    instrux + 1281,
    instrux + 1282,
    instrux + 1285,
    instrux + 1286,
    instrux + 1289,
    instrux + 1290,
    instrux + 1297,
    instrux + 1320,
    instrux + 1325,
    instrux + 1326,
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
    instrux + 593,
    instrux + 594,
    instrux + 595,
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
    instrux + 545,
    instrux + 546,
    instrux + 547,
};

static const struct itemplate * const itable_0FB5[] = {
    instrux + 549,
    instrux + 550,
    instrux + 551,
};

static const struct itemplate * const itable_0FB6[] = {
    instrux + 669,
    instrux + 670,
    instrux + 671,
    instrux + 673,
};

static const struct itemplate * const itable_0FB7[] = {
    instrux + 672,
    instrux + 674,
};

static const struct itemplate * const itable_0FB8[] = {
    instrux + 522,
    instrux + 523,
    instrux + 524,
    instrux + 1604,
    instrux + 1605,
    instrux + 1606,
};

static const struct itemplate * const itable_0FB9[] = {
    instrux + 1111,
    instrux + 1112,
    instrux + 1113,
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
    instrux + 1607,
    instrux + 1608,
    instrux + 1609,
};

static const struct itemplate * const itable_0FBD[] = {
    instrux + 118,
    instrux + 119,
    instrux + 120,
    instrux + 121,
    instrux + 122,
    instrux + 123,
    instrux + 1542,
    instrux + 1543,
    instrux + 1544,
};

static const struct itemplate * const itable_0FBE[] = {
    instrux + 663,
    instrux + 664,
    instrux + 665,
    instrux + 667,
};

static const struct itemplate * const itable_0FBF[] = {
    instrux + 666,
    instrux + 668,
};

static const struct itemplate * const itable_0FC0[] = {
    instrux + 1124,
    instrux + 1125,
};

static const struct itemplate * const itable_0FC1[] = {
    instrux + 1126,
    instrux + 1127,
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
};

static const struct itemplate * const itable_0FC2[] = {
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
    instrux + 1213,
    instrux + 1214,
    instrux + 1215,
    instrux + 1216,
    instrux + 1217,
    instrux + 1218,
    instrux + 1219,
    instrux + 1220,
    instrux + 1221,
    instrux + 1222,
    instrux + 1223,
    instrux + 1428,
    instrux + 1429,
    instrux + 1430,
    instrux + 1431,
    instrux + 1432,
    instrux + 1433,
    instrux + 1434,
    instrux + 1435,
    instrux + 1436,
    instrux + 1437,
    instrux + 1438,
    instrux + 1439,
    instrux + 1440,
    instrux + 1441,
    instrux + 1442,
    instrux + 1443,
    instrux + 1444,
    instrux + 1445,
};

static const struct itemplate * const itable_0FC3[] = {
    instrux + 1322,
    instrux + 1323,
};

static const struct itemplate * const itable_0FC4[] = {
    instrux + 1303,
    instrux + 1304,
    instrux + 1305,
    instrux + 1366,
    instrux + 1367,
    instrux + 1368,
};

static const struct itemplate * const itable_0FC5[] = {
    instrux + 1302,
    instrux + 1365,
};

static const struct itemplate * const itable_0FC6[] = {
    instrux + 1265,
    instrux + 1491,
};

static const struct itemplate * const itable_0FC7[] = {
    instrux + 232,
    instrux + 233,
    instrux + 1283,
    instrux + 1284,
    instrux + 1287,
    instrux + 1288,
    instrux + 1291,
    instrux + 1292,
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
    instrux + 1500,
    instrux + 1501,
};

static const struct itemplate * const itable_0FD1[] = {
    instrux + 809,
    instrux + 1400,
};

static const struct itemplate * const itable_0FD2[] = {
    instrux + 805,
    instrux + 1402,
};

static const struct itemplate * const itable_0FD3[] = {
    instrux + 807,
    instrux + 1404,
};

static const struct itemplate * const itable_0FD4[] = {
    instrux + 1349,
    instrux + 1350,
};

static const struct itemplate * const itable_0FD5[] = {
    instrux + 773,
    instrux + 1377,
};

static const struct itemplate * const itable_0FD6[] = {
    instrux + 1335,
    instrux + 1337,
    instrux + 1338,
    instrux + 1342,
};

static const struct itemplate * const itable_0FD7[] = {
    instrux + 1310,
    instrux + 1374,
};

static const struct itemplate * const itable_0FD8[] = {
    instrux + 815,
    instrux + 1413,
};

static const struct itemplate * const itable_0FD9[] = {
    instrux + 816,
    instrux + 1414,
};

static const struct itemplate * const itable_0FDA[] = {
    instrux + 1309,
    instrux + 1373,
};

static const struct itemplate * const itable_0FDB[] = {
    instrux + 743,
    instrux + 1355,
};

static const struct itemplate * const itable_0FDC[] = {
    instrux + 740,
    instrux + 1353,
};

static const struct itemplate * const itable_0FDD[] = {
    instrux + 741,
    instrux + 1354,
};

static const struct itemplate * const itable_0FDE[] = {
    instrux + 1307,
    instrux + 1371,
};

static const struct itemplate * const itable_0FDF[] = {
    instrux + 744,
    instrux + 1356,
};

static const struct itemplate * const itable_0FE0[] = {
    instrux + 1300,
    instrux + 1357,
};

static const struct itemplate * const itable_0FE1[] = {
    instrux + 803,
    instrux + 1395,
};

static const struct itemplate * const itable_0FE2[] = {
    instrux + 801,
    instrux + 1397,
};

static const struct itemplate * const itable_0FE3[] = {
    instrux + 1301,
    instrux + 1358,
};

static const struct itemplate * const itable_0FE4[] = {
    instrux + 1311,
    instrux + 1375,
};

static const struct itemplate * const itable_0FE5[] = {
    instrux + 772,
    instrux + 1376,
};

static const struct itemplate * const itable_0FE6[] = {
    instrux + 1447,
    instrux + 1449,
    instrux + 1464,
};

static const struct itemplate * const itable_0FE7[] = {
    instrux + 1299,
    instrux + 1321,
};

static const struct itemplate * const itable_0FE8[] = {
    instrux + 813,
    instrux + 1411,
};

static const struct itemplate * const itable_0FE9[] = {
    instrux + 814,
    instrux + 1412,
};

static const struct itemplate * const itable_0FEA[] = {
    instrux + 1308,
    instrux + 1372,
};

static const struct itemplate * const itable_0FEB[] = {
    instrux + 792,
    instrux + 1380,
};

static const struct itemplate * const itable_0FEC[] = {
    instrux + 738,
    instrux + 1351,
};

static const struct itemplate * const itable_0FED[] = {
    instrux + 739,
    instrux + 1352,
};

static const struct itemplate * const itable_0FEE[] = {
    instrux + 1306,
    instrux + 1370,
};

static const struct itemplate * const itable_0FEF[] = {
    instrux + 849,
    instrux + 1423,
};

static const struct itemplate * const itable_0FF0[] = {
    instrux + 1506,
};

static const struct itemplate * const itable_0FF1[] = {
    instrux + 799,
    instrux + 1389,
};

static const struct itemplate * const itable_0FF2[] = {
    instrux + 795,
    instrux + 1391,
};

static const struct itemplate * const itable_0FF3[] = {
    instrux + 797,
    instrux + 1393,
};

static const struct itemplate * const itable_0FF4[] = {
    instrux + 1378,
    instrux + 1379,
};

static const struct itemplate * const itable_0FF5[] = {
    instrux + 770,
    instrux + 1369,
};

static const struct itemplate * const itable_0FF6[] = {
    instrux + 1312,
    instrux + 1381,
};

static const struct itemplate * const itable_0FF7[] = {
    instrux + 1298,
    instrux + 1319,
};

static const struct itemplate * const itable_0FF8[] = {
    instrux + 811,
    instrux + 1406,
};

static const struct itemplate * const itable_0FF9[] = {
    instrux + 817,
    instrux + 1407,
};

static const struct itemplate * const itable_0FFA[] = {
    instrux + 812,
    instrux + 1408,
};

static const struct itemplate * const itable_0FFB[] = {
    instrux + 1409,
    instrux + 1410,
};

static const struct itemplate * const itable_0FFC[] = {
    instrux + 736,
    instrux + 1346,
};

static const struct itemplate * const itable_0FFD[] = {
    instrux + 742,
    instrux + 1347,
};

static const struct itemplate * const itable_0FFE[] = {
    instrux + 737,
    instrux + 1348,
};

static const struct itemplate * const itable_0FFF[] = {
    instrux + 1107,
    instrux + 1108,
    instrux + 1109,
    instrux + 1110,
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
    instrux + 832,
};

static const struct itemplate * const itable_17[] = {
    instrux + 781,
};

static const struct itemplate * const itable_18[] = {
    instrux + 940,
    instrux + 941,
};

static const struct itemplate * const itable_19[] = {
    instrux + 942,
    instrux + 943,
    instrux + 944,
    instrux + 945,
    instrux + 946,
    instrux + 947,
};

static const struct itemplate * const itable_1A[] = {
    instrux + 948,
    instrux + 949,
};

static const struct itemplate * const itable_1B[] = {
    instrux + 950,
    instrux + 951,
    instrux + 952,
    instrux + 953,
    instrux + 954,
    instrux + 955,
};

static const struct itemplate * const itable_1C[] = {
    instrux + 959,
};

static const struct itemplate * const itable_1D[] = {
    instrux + 960,
    instrux + 961,
    instrux + 962,
};

static const struct itemplate * const itable_1E[] = {
    instrux + 833,
};

static const struct itemplate * const itable_1F[] = {
    instrux + 782,
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
    instrux + 1050,
    instrux + 1051,
};

static const struct itemplate * const itable_29[] = {
    instrux + 1052,
    instrux + 1053,
    instrux + 1054,
    instrux + 1055,
    instrux + 1056,
    instrux + 1057,
};

static const struct itemplate * const itable_2A[] = {
    instrux + 1058,
    instrux + 1059,
};

static const struct itemplate * const itable_2B[] = {
    instrux + 1060,
    instrux + 1061,
    instrux + 1062,
    instrux + 1063,
    instrux + 1064,
    instrux + 1065,
};

static const struct itemplate * const itable_2C[] = {
    instrux + 1069,
};

static const struct itemplate * const itable_2D[] = {
    instrux + 1070,
    instrux + 1071,
    instrux + 1072,
};

static const struct itemplate * const itable_2F[] = {
    instrux + 239,
};

static const struct itemplate * const itable_30[] = {
    instrux + 1157,
    instrux + 1158,
};

static const struct itemplate * const itable_31[] = {
    instrux + 1159,
    instrux + 1160,
    instrux + 1161,
    instrux + 1162,
    instrux + 1163,
    instrux + 1164,
};

static const struct itemplate * const itable_32[] = {
    instrux + 1165,
    instrux + 1166,
};

static const struct itemplate * const itable_33[] = {
    instrux + 1167,
    instrux + 1168,
    instrux + 1169,
    instrux + 1170,
    instrux + 1171,
    instrux + 1172,
};

static const struct itemplate * const itable_34[] = {
    instrux + 1176,
};

static const struct itemplate * const itable_35[] = {
    instrux + 1177,
    instrux + 1178,
    instrux + 1179,
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
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_51[] = {
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_52[] = {
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_53[] = {
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_54[] = {
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_55[] = {
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_56[] = {
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_57[] = {
    instrux + 824,
    instrux + 825,
    instrux + 826,
};

static const struct itemplate * const itable_58[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_59[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_5A[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_5B[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_5C[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_5D[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_5E[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_5F[] = {
    instrux + 774,
    instrux + 775,
    instrux + 776,
};

static const struct itemplate * const itable_60[] = {
    instrux + 842,
    instrux + 843,
    instrux + 844,
};

static const struct itemplate * const itable_61[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
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
    instrux + 837,
    instrux + 838,
    instrux + 839,
    instrux + 840,
    instrux + 841,
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
    instrux + 836,
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
    instrux + 730,
};

static const struct itemplate * const itable_6F[] = {
    instrux + 731,
    instrux + 732,
};

static const struct itemplate * const itable_70[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_71[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_72[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_73[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_74[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_75[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_76[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_77[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_78[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_79[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_7A[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_7B[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_7C[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_7D[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_7E[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_7F[] = {
    instrux + 1199,
};

static const struct itemplate * const itable_80[] = {
    instrux + 37,
    instrux + 67,
    instrux + 72,
    instrux + 99,
    instrux + 104,
    instrux + 211,
    instrux + 216,
    instrux + 715,
    instrux + 720,
    instrux + 963,
    instrux + 968,
    instrux + 1073,
    instrux + 1078,
    instrux + 1180,
    instrux + 1185,
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
    instrux + 717,
    instrux + 718,
    instrux + 719,
    instrux + 722,
    instrux + 723,
    instrux + 965,
    instrux + 966,
    instrux + 967,
    instrux + 970,
    instrux + 971,
    instrux + 1075,
    instrux + 1076,
    instrux + 1077,
    instrux + 1080,
    instrux + 1081,
    instrux + 1182,
    instrux + 1183,
    instrux + 1184,
    instrux + 1187,
    instrux + 1188,
};

static const struct itemplate * const itable_82[] = {
    instrux + 38,
    instrux + 68,
    instrux + 73,
    instrux + 100,
    instrux + 105,
    instrux + 212,
    instrux + 217,
    instrux + 716,
    instrux + 721,
    instrux + 964,
    instrux + 969,
    instrux + 1074,
    instrux + 1079,
    instrux + 1181,
    instrux + 1186,
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
    instrux + 708,
    instrux + 709,
    instrux + 710,
    instrux + 956,
    instrux + 957,
    instrux + 958,
    instrux + 1066,
    instrux + 1067,
    instrux + 1068,
    instrux + 1173,
    instrux + 1174,
    instrux + 1175,
};

static const struct itemplate * const itable_84[] = {
    instrux + 1084,
    instrux + 1085,
    instrux + 1092,
};

static const struct itemplate * const itable_85[] = {
    instrux + 1086,
    instrux + 1087,
    instrux + 1088,
    instrux + 1089,
    instrux + 1090,
    instrux + 1091,
    instrux + 1093,
    instrux + 1094,
    instrux + 1095,
};

static const struct itemplate * const itable_86[] = {
    instrux + 1139,
    instrux + 1140,
    instrux + 1147,
    instrux + 1148,
};

static const struct itemplate * const itable_87[] = {
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
    instrux + 1152,
    instrux + 1153,
    instrux + 1154,
};

static const struct itemplate * const itable_88[] = {
    instrux + 625,
    instrux + 626,
};

static const struct itemplate * const itable_89[] = {
    instrux + 627,
    instrux + 628,
    instrux + 629,
    instrux + 630,
    instrux + 631,
    instrux + 632,
};

static const struct itemplate * const itable_8A[] = {
    instrux + 633,
    instrux + 634,
};

static const struct itemplate * const itable_8B[] = {
    instrux + 635,
    instrux + 636,
    instrux + 637,
    instrux + 638,
    instrux + 639,
    instrux + 640,
};

static const struct itemplate * const itable_8C[] = {
    instrux + 601,
    instrux + 602,
    instrux + 603,
    instrux + 604,
};

static const struct itemplate * const itable_8D[] = {
    instrux + 538,
    instrux + 539,
    instrux + 540,
};

static const struct itemplate * const itable_8E[] = {
    instrux + 605,
    instrux + 606,
    instrux + 607,
    instrux + 608,
};

static const struct itemplate * const itable_8F[] = {
    instrux + 777,
    instrux + 778,
    instrux + 779,
};

static const struct itemplate * const itable_90[] = {
    instrux + 684,
    instrux + 745,
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
    instrux + 1138,
};

static const struct itemplate * const itable_91[] = {
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
};

static const struct itemplate * const itable_92[] = {
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
};

static const struct itemplate * const itable_93[] = {
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
};

static const struct itemplate * const itable_94[] = {
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
};

static const struct itemplate * const itable_95[] = {
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
};

static const struct itemplate * const itable_96[] = {
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
};

static const struct itemplate * const itable_97[] = {
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
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
    instrux + 845,
    instrux + 846,
    instrux + 847,
    instrux + 848,
};

static const struct itemplate * const itable_9D[] = {
    instrux + 788,
    instrux + 789,
    instrux + 790,
    instrux + 791,
};

static const struct itemplate * const itable_9E[] = {
    instrux + 927,
};

static const struct itemplate * const itable_9F[] = {
    instrux + 525,
};

static const struct itemplate * const itable_A0[] = {
    instrux + 609,
};

static const struct itemplate * const itable_A1[] = {
    instrux + 610,
    instrux + 611,
    instrux + 612,
};

static const struct itemplate * const itable_A2[] = {
    instrux + 613,
};

static const struct itemplate * const itable_A3[] = {
    instrux + 614,
    instrux + 615,
    instrux + 616,
};

static const struct itemplate * const itable_A4[] = {
    instrux + 659,
};

static const struct itemplate * const itable_A5[] = {
    instrux + 660,
    instrux + 661,
    instrux + 662,
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
    instrux + 1096,
};

static const struct itemplate * const itable_A9[] = {
    instrux + 1097,
    instrux + 1098,
    instrux + 1099,
};

static const struct itemplate * const itable_AA[] = {
    instrux + 1041,
};

static const struct itemplate * const itable_AB[] = {
    instrux + 1042,
    instrux + 1043,
    instrux + 1044,
};

static const struct itemplate * const itable_AC[] = {
    instrux + 559,
};

static const struct itemplate * const itable_AD[] = {
    instrux + 560,
    instrux + 561,
    instrux + 562,
};

static const struct itemplate * const itable_AE[] = {
    instrux + 972,
};

static const struct itemplate * const itable_AF[] = {
    instrux + 973,
    instrux + 974,
    instrux + 975,
};

static const struct itemplate * const itable_B0[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B1[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B2[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B3[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B4[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B5[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B6[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B7[] = {
    instrux + 641,
};

static const struct itemplate * const itable_B8[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_B9[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_BA[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_BB[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_BC[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_BD[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_BE[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_BF[] = {
    instrux + 642,
    instrux + 643,
    instrux + 644,
};

static const struct itemplate * const itable_C0[] = {
    instrux + 852,
    instrux + 864,
    instrux + 904,
    instrux + 916,
    instrux + 930,
    instrux + 980,
    instrux + 1004,
};

static const struct itemplate * const itable_C1[] = {
    instrux + 855,
    instrux + 858,
    instrux + 861,
    instrux + 867,
    instrux + 870,
    instrux + 873,
    instrux + 907,
    instrux + 910,
    instrux + 913,
    instrux + 919,
    instrux + 922,
    instrux + 925,
    instrux + 933,
    instrux + 936,
    instrux + 939,
    instrux + 983,
    instrux + 986,
    instrux + 989,
    instrux + 1007,
    instrux + 1010,
    instrux + 1013,
};

static const struct itemplate * const itable_C2[] = {
    instrux + 879,
    instrux + 883,
    instrux + 885,
    instrux + 889,
    instrux + 891,
    instrux + 895,
    instrux + 897,
    instrux + 901,
};

static const struct itemplate * const itable_C3[] = {
    instrux + 878,
    instrux + 882,
    instrux + 884,
    instrux + 888,
    instrux + 890,
    instrux + 894,
    instrux + 896,
    instrux + 900,
};

static const struct itemplate * const itable_C4[] = {
    instrux + 542,
    instrux + 543,
};

static const struct itemplate * const itable_C5[] = {
    instrux + 536,
    instrux + 537,
};

static const struct itemplate * const itable_C6[] = {
    instrux + 645,
    instrux + 650,
};

static const struct itemplate * const itable_C7[] = {
    instrux + 646,
    instrux + 647,
    instrux + 648,
    instrux + 649,
    instrux + 651,
    instrux + 652,
};

static const struct itemplate * const itable_C8[] = {
    instrux + 251,
};

static const struct itemplate * const itable_C9[] = {
    instrux + 541,
};

static const struct itemplate * const itable_CA[] = {
    instrux + 881,
    instrux + 887,
    instrux + 893,
    instrux + 899,
};

static const struct itemplate * const itable_CB[] = {
    instrux + 880,
    instrux + 886,
    instrux + 892,
    instrux + 898,
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
    instrux + 496,
    instrux + 497,
    instrux + 498,
    instrux + 499,
};

static const struct itemplate * const itable_D0[] = {
    instrux + 850,
    instrux + 862,
    instrux + 902,
    instrux + 914,
    instrux + 928,
    instrux + 978,
    instrux + 1002,
};

static const struct itemplate * const itable_D1[] = {
    instrux + 853,
    instrux + 856,
    instrux + 859,
    instrux + 865,
    instrux + 868,
    instrux + 871,
    instrux + 905,
    instrux + 908,
    instrux + 911,
    instrux + 917,
    instrux + 920,
    instrux + 923,
    instrux + 931,
    instrux + 934,
    instrux + 937,
    instrux + 981,
    instrux + 984,
    instrux + 987,
    instrux + 1005,
    instrux + 1008,
    instrux + 1011,
};

static const struct itemplate * const itable_D2[] = {
    instrux + 851,
    instrux + 863,
    instrux + 903,
    instrux + 915,
    instrux + 929,
    instrux + 979,
    instrux + 1003,
};

static const struct itemplate * const itable_D3[] = {
    instrux + 854,
    instrux + 857,
    instrux + 860,
    instrux + 866,
    instrux + 869,
    instrux + 872,
    instrux + 906,
    instrux + 909,
    instrux + 912,
    instrux + 918,
    instrux + 921,
    instrux + 924,
    instrux + 932,
    instrux + 935,
    instrux + 938,
    instrux + 982,
    instrux + 985,
    instrux + 988,
    instrux + 1006,
    instrux + 1009,
    instrux + 1012,
};

static const struct itemplate * const itable_D4[] = {
    instrux + 11,
    instrux + 12,
};

static const struct itemplate * const itable_D5[] = {
    instrux + 9,
    instrux + 10,
};

static const struct itemplate * const itable_D7[] = {
    instrux + 1155,
    instrux + 1156,
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
    instrux + 571,
    instrux + 572,
    instrux + 573,
    instrux + 574,
    instrux + 575,
    instrux + 576,
    instrux + 577,
    instrux + 578,
};

static const struct itemplate * const itable_E1[] = {
    instrux + 567,
    instrux + 568,
    instrux + 569,
    instrux + 570,
    instrux + 579,
    instrux + 580,
    instrux + 581,
    instrux + 582,
};

static const struct itemplate * const itable_E2[] = {
    instrux + 563,
    instrux + 564,
    instrux + 565,
    instrux + 566,
};

static const struct itemplate * const itable_E3[] = {
    instrux + 500,
    instrux + 501,
    instrux + 502,
};

static const struct itemplate * const itable_E4[] = {
    instrux + 473,
};

static const struct itemplate * const itable_E5[] = {
    instrux + 474,
    instrux + 475,
};

static const struct itemplate * const itable_E6[] = {
    instrux + 724,
};

static const struct itemplate * const itable_E7[] = {
    instrux + 725,
    instrux + 726,
};

static const struct itemplate * const itable_E8[] = {
    instrux + 162,
    instrux + 163,
    instrux + 164,
    instrux + 165,
};

static const struct itemplate * const itable_E9[] = {
    instrux + 504,
    instrux + 505,
    instrux + 506,
    instrux + 507,
};

static const struct itemplate * const itable_EA[] = {
    instrux + 508,
    instrux + 509,
    instrux + 510,
    instrux + 511,
    instrux + 512,
};

static const struct itemplate * const itable_EB[] = {
    instrux + 503,
};

static const struct itemplate * const itable_EC[] = {
    instrux + 476,
};

static const struct itemplate * const itable_ED[] = {
    instrux + 477,
    instrux + 478,
};

static const struct itemplate * const itable_EE[] = {
    instrux + 727,
};

static const struct itemplate * const itable_EF[] = {
    instrux + 728,
    instrux + 729,
};

static const struct itemplate * const itable_F1[] = {
    instrux + 489,
    instrux + 1032,
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
    instrux + 675,
    instrux + 680,
    instrux + 688,
    instrux + 1100,
    instrux + 1104,
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
    instrux + 676,
    instrux + 677,
    instrux + 678,
    instrux + 681,
    instrux + 682,
    instrux + 683,
    instrux + 689,
    instrux + 690,
    instrux + 691,
    instrux + 1101,
    instrux + 1102,
    instrux + 1103,
    instrux + 1105,
    instrux + 1106,
};

static const struct itemplate * const itable_F8[] = {
    instrux + 183,
};

static const struct itemplate * const itable_F9[] = {
    instrux + 1038,
};

static const struct itemplate * const itable_FA[] = {
    instrux + 185,
};

static const struct itemplate * const itable_FB[] = {
    instrux + 1040,
};

static const struct itemplate * const itable_FC[] = {
    instrux + 184,
};

static const struct itemplate * const itable_FD[] = {
    instrux + 1039,
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
    instrux + 513,
    instrux + 514,
    instrux + 515,
    instrux + 516,
    instrux + 517,
    instrux + 518,
    instrux + 519,
    instrux + 520,
    instrux + 521,
    instrux + 827,
    instrux + 828,
    instrux + 829,
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
    /* 0x00 */ { itable_0F00, 22 },
    /* 0x01 */ { itable_0F01, 18 },
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
    /* 0x2b */ { itable_0F2B, 2 },
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
    /* 0x78 */ { NULL, 0 },
    /* 0x79 */ { NULL, 0 },
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
    /* 0xb8 */ { itable_0FB8, 6 },
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
    /* 0xd6 */ { NULL, 0 },
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
