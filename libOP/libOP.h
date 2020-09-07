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
	E_AD_ALL
}E_ADM;

typedef enum{
    E_OPR_16,
    E_OPR_32,
	E_OPR_64,
	E_OPR_ALL
}E_OPR_SZ;

typedef enum{
    E_1B_OP,
    E_2B_OP,
    E_3B_OP
}E_XB_OP;

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