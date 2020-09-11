#include "stdafx.h"
#include <assert.h>
#include <windows.h>
#include <Tchar.h>
#include "libOP.h"

#define ASSERT(x) assert(x)


extern "C" int ndisasm(unsigned char* data, OPENTRY * pOpEntry, E_ADM eADM, unsigned int* flags);

// find 8 throughput
static BOOL GrpMatch(WCHAR* strModRM, BYTE GrpIdx)
{
    BYTE BitMap[8] = { 0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01 };
    for (int i = 2; i < 5; i++)
    {
        if (strModRM[i] == _T('x') ||
            (strModRM[i] == _T('1') && ((GrpIdx << 3) & BitMap[i])) ||
            (strModRM[i] == _T('0') && ((GrpIdx << 3) & BitMap[i]) == 0))
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

static BOOL OpcodeGroupCheck(E_XB_OP eOPTab, BYTE buffer)
{
    if (eOPTab == E_AD16)
    {
        // AND with 0x80
        return (OP1BMap[buffer].OPExt >> 7);
    }
    else if (eOPTab == E_AD32)
    {
        // AND with 0x80
        return (OP2BMap[buffer].OPExt >> 7);;
    }
    return FALSE;
}

static DWORD lPrefixes(E_XB_OP eOPTab, BYTE OpIdx, BYTE GrpIdx, OP_ENTRY** pGrp)
{
    if (eOPTab == E_AD16)
    {
        switch (OpIdx)
        {
        case 0x40:
            *pGrp = OP_40;
            return 2;
        case 0x41:
            *pGrp = OP_41;
            return 2;
        case 0x42:
            *pGrp = OP_42;
            return 2;
        case 0x43:
            *pGrp = OP_43;
            return 2;
        case 0x44:
            *pGrp = OP_44;
            return 2;
        case 0x45:
            *pGrp = OP_45;
            return 2;
        case 0x46:
            *pGrp = OP_46;
            return 2;
        case 0x47:
            *pGrp = OP_47;
            return 2;
        case 0x48:
            *pGrp = OP_48;
            return 2;
        case 0x49:
            *pGrp = OP_49;
            return 2;
        case 0x4A:
            *pGrp = OP_4A;
            return 2;
        case 0x4B:
            *pGrp = OP_4B;
            return 2;
        case 0x4C:
            *pGrp = OP_4C;
            return 2;
        case 0x4D:
            *pGrp = OP_4D;
            return 2;
        case 0x4E:
            *pGrp = OP_4E;
            return 2;
        case 0x4F:
            *pGrp = OP_4F;
            return 2;
        case 0x62:
            *pGrp = OP_62;
            return 2;
        case 0x63:
            *pGrp = OP_63;
            return 2;
        case 0x90:
            *pGrp = OP_90;
            return 3;
        case 0xC4:
            *pGrp = OP_C4;
            return 2;
        case 0xC5:
            *pGrp = OP_C5;
            return 2;
        case 0xF2:
            *pGrp = OP_F2;
            return 2;
        case 0xF3:
            *pGrp = OP_F3;
            return 2;
        default:
            break;
        }
    }
    else if (eOPTab == E_AD32)
    {
        switch (OpIdx)
        {
        case 0x09:
            *pGrp = OP_0F09;
            return 2;
        case 0x10:
            *pGrp = OP_0F10;
            return 4;
        case 0x11:
            *pGrp = OP_0F11;
            return 4;
        case 0x12:
            *pGrp = OP_0F12;
            return 4;
        case 0x13:
            *pGrp = OP_0F13;
            return 2;
        case 0x14:
            *pGrp = OP_0F14;
            return 2;
        case 0x15:
            *pGrp = OP_0F15;
            return 2;
        case 0x16:
            *pGrp = OP_0F16;
            return 4;
        case 0x17:
            *pGrp = OP_0F17;
            return 2;
        case 0x1A:
            *pGrp = OP_0F1A;
            return 4;
        case 0x1B:
            *pGrp = OP_0F1B;
            return 4;
        case 0x28:
            *pGrp = OP_0F28;
            return 2;
        case 0x29:
            *pGrp = OP_0F29;
            return 2;
        case 0x2A:
            *pGrp = OP_0F2A;
            return 4;
        case 0x2B:
            *pGrp = OP_0F2B;
            return 2;
        case 0x2C:
            *pGrp = OP_0F2C;
            return 4;
        case 0x2D:
            *pGrp = OP_0F2D;
            return 4;
        case 0x2E:
            *pGrp = OP_0F2E;
            return 2;
        case 0x2F:
            *pGrp = OP_0F2F;
            return 2;
        case 0x41:
            *pGrp = OP_0F41;
            return 3;
        case 0x42:
            *pGrp = OP_0F42;
            return 3;
        case 0x44:
            *pGrp = OP_0F44;
            return 3;
        case 0x45:
            *pGrp = OP_0F45;
            return 3;
        case 0x46:
            *pGrp = OP_0F46;
            return 3;
        case 0x47:
            *pGrp = OP_0F47;
            return 3;
        case 0x4A:
            *pGrp = OP_0F4A;
            return 3;
        case 0x4B:
            *pGrp = OP_0F4B;
            return 3;
        case 0x50:
            *pGrp = OP_0F50;
            return 2;
        case 0x51:
            *pGrp = OP_0F51;
            return 4;
        case 0x52:
            *pGrp = OP_0F52;
            return 2;
        case 0x53:
            *pGrp = OP_0F53;
            return 2;
        case 0x54:
            *pGrp = OP_0F54;
            return 2;
        case 0x55:
            *pGrp = OP_0F55;
            return 2;
        case 0x56:
            *pGrp = OP_0F56;
            return 2;
        case 0x57:
            *pGrp = OP_0F57;
            return 2;
        case 0x58:
            *pGrp = OP_0F58;
            return 4;
        case 0x59:
            *pGrp = OP_0F59;
            return 4;
        case 0x5A:
            *pGrp = OP_0F5A;
            return 4;
        case 0x5B:
            *pGrp = OP_0F5B;
            return 4;
        case 0x5C:
            *pGrp = OP_0F5C;
            return 4;
        case 0x5D:
            *pGrp = OP_0F5D;
            return 4;
        case 0x5E:
            *pGrp = OP_0F5E;
            return 4;
        case 0x5F:
            *pGrp = OP_0F5F;
            return 4;
        case 0x60:
            *pGrp = OP_0F60;
            return 2;
        case 0x61:
            *pGrp = OP_0F61;
            return 61;
        case 0x62:
            *pGrp = OP_0F62;
            return 2;
        case 0x63:
            *pGrp = OP_0F63;
            return 2;
        case 0x64:
            *pGrp = OP_0F64;
            return 2;
        case 0x65:
            *pGrp = OP_0F65;
            return 2;
        case 0x66:
            *pGrp = OP_0F66;
            return 2;
        case 0x67:
            *pGrp = OP_0F67;
            return 2;
        case 0x68:
            *pGrp = OP_0F68;
            return 2;
        case 0x69:
            *pGrp = OP_0F69;
            return 2;
        case 0x6A:
            *pGrp = OP_0F6A;
            return 2;
        case 0x6B:
            *pGrp = OP_0F6B;
            return 2;
        case 0x6E:
            *pGrp = OP_0F6E;
            return 2;
        case 0x6F:
            *pGrp = OP_0F6F;
            return 2;
        case 0x70:
            *pGrp = OP_0F70;
            return 2;
        case 0x74:
            *pGrp = OP_0F74;
            return 2;
        case 0x75:
            *pGrp = OP_0F75;
            return 2;
        case 0x76:
            *pGrp = OP_0F76;
            return 2;
        case 0x77:
            *pGrp = OP_0F77;
            return 2;
        case 0x78:
            *pGrp = OP_0F78;
            return 2;
        case 0x79:
            *pGrp = OP_0F79;
            return 2;
        case 0x7A:
            *pGrp = OP_0F7A;
            return 2;
        case 0x7B:
            *pGrp = OP_0F7B;
            return 2;
        case 0x7C:
            *pGrp = OP_0F7C;
            return 2;
        case 0x7D:
            *pGrp = OP_0F7D;
            return 2;
        case 0x7E:
            *pGrp = OP_0F7E;
            return 2;
        case 0x7F:
            *pGrp = OP_0F7F;
            return 2;
        case 0x90:
            *pGrp = OP_0F90;
            return 2;
        case 0x91:
            *pGrp = OP_0F91;
            return 2;
        case 0x92:
            *pGrp = OP_0F92;
            return 2;
        case 0x93:
            *pGrp = OP_0F93;
            return 2;
        case 0x98:
            *pGrp = OP_0F98;
            return 2;
        case 0x99:
            *pGrp = OP_0F99;
            return 2;
        case 0xB8:
            *pGrp = OP_0FB8;
            return 2;
        case 0xBC:
            *pGrp = OP_0FBC;
            return 2;
        case 0xBD:
            *pGrp = OP_0FBD;
            return 2;
        case 0xC2:
            *pGrp = OP_0FC2;
            return 2;
        case 0xC4:
            *pGrp = OP_0FC4;
            return 2;
        case 0xC5:
            *pGrp = OP_0FC5;
            return 2;
        case 0xC6:
            *pGrp = OP_0FC6;
            return 2;
        case 0xD0:
            *pGrp = OP_0FD0;
            return 2;
        case 0xD1:
            *pGrp = OP_0FD1;
            return 2;
        case 0xD2:
            *pGrp = OP_0FD2;
            return 2;
        case 0xD3:
            *pGrp = OP_0FD3;
            return 2;
        case 0xD4:
            *pGrp = OP_0FD4;
            return 2;
        case 0xD5:
            *pGrp = OP_0FD5;
            return 2;
        case 0xD6:
            *pGrp = OP_0FD6;
            return 2;
        case 0xD7:
            *pGrp = OP_0FD7;
            return 2;
        case 0xD8:
            *pGrp = OP_0FD8;
            return 2;
        case 0xD9:
            *pGrp = OP_0FD9;
            return 2;
        case 0xDA:
            *pGrp = OP_0FDA;
            return 2;
        case 0xDB:
            *pGrp = OP_0FDB;
            return 2;
        case 0xDC:
            *pGrp = OP_0FDC;
            return 2;
        case 0xDD:
            *pGrp = OP_0FDD;
            return 2;
        case 0xDE:
            *pGrp = OP_0FDE;
            return 2;
        case 0xDF:
            *pGrp = OP_0FDF;
            return 2;
        case 0xE0:
            *pGrp = OP_0FE0;
            return 2;
        case 0xE1:
            *pGrp = OP_0FE1;
            return 2;
        case 0xE2:
            *pGrp = OP_0FE2;
            return 2;
        case 0xE3:
            *pGrp = OP_0FE3;
            return 2;
        case 0xE4:
            *pGrp = OP_0FE4;
            return 2;
        case 0xE5:
            *pGrp = OP_0FE5;
            return 2;
        case 0xE6:
            *pGrp = OP_0FE6;
            return 2;
        case 0xE7:
            *pGrp = OP_0FE7;
            return 2;
        case 0xE8:
            *pGrp = OP_0FE8;
            return 2;
        case 0xE9:
            *pGrp = OP_0FE9;
            return 2;
        case 0xEA:
            *pGrp = OP_0FEA;
            return 2;
        case 0xEB:
            *pGrp = OP_0FEB;
            return 2;
        case 0xEC:
            *pGrp = OP_0FEC;
            return 2;
        case 0xED:
            *pGrp = OP_0FED;
            return 2;
        case 0xEE:
            *pGrp = OP_0FEE;
            return 2;
        case 0xEF:
            *pGrp = OP_0FEF;
            return 2;
        case 0xF1:
            *pGrp = OP_0FF1;
            return 2;
        case 0xF2:
            *pGrp = OP_0FF2;
            return 2;
        case 0xF3:
            *pGrp = OP_0FF3;
            return 2;
        case 0xF4:
            *pGrp = OP_0FF4;
            return 2;
        case 0xF5:
            *pGrp = OP_0FF5;
            return 2;
        case 0xF6:
            *pGrp = OP_0FF6;
            return 2;
        case 0xF7:
            *pGrp = OP_0FF7;
            return 2;
        case 0xF8:
            *pGrp = OP_0FF8;
            return 2;
        case 0xF9:
            *pGrp = OP_0FF9;
            return 2;
        case 0xFA:
            *pGrp = OP_0FFA;
            return 2;
        case 0xFB:
            *pGrp = OP_0FFB;
            return 2;
        case 0xFC:
            *pGrp = OP_0FFC;
            return 2;
        case 0xFD:
            *pGrp = OP_0FFD;
            return 2;
        case 0xFE:
            *pGrp = OP_0FFE;
            return 2;
        default:
            break;
        }
    }
    return 0;
}

static DWORD EnumPrefixes(OP_ENTRY* ptr_PrefixGroup, DWORD length, OPENTRY* pOpEntry, DWORD nOpEntryMax)
{
    DWORD lFound = 0;
    /*int8_t*/BYTE OpIdx = pOpEntry->OP;
    /*int8_t*/BYTE GrpIdx = pOpEntry->OPExt;

    for (int PrefixIdx = 0; (PrefixIdx < length) && (lFound < nOpEntryMax); PrefixIdx++)
    {
        pOpEntry->ReqPrefix = ptr_PrefixGroup[PrefixIdx].PF;
        pOpEntry->OP = OpIdx;
        pOpEntry->OPExt = GrpIdx;
        swprintf(pOpEntry->strDisasm, 128, _T("%hs"), ptr_PrefixGroup[PrefixIdx].strFmt);
        pOpEntry++;
        lFound++;
    }
    return lFound;
}

// sprintf array
static DWORD EnumGrp(E_XB_OP eOPTab, OP_ENTRY* pGrp, WCHAR* strModRMMatch, OPENTRY* pOpEntry, DWORD nOpEntryMax)
{
    // pointer to the prefix group
    OP_ENTRY* ptr_PrefixGroup;
    // pointer to pointer to the prefix group
    OP_ENTRY** ptr_ptr_PrefixGroup = &ptr_PrefixGroup;
    // counter of found entries
    DWORD lFound = 0;
    // temp store of OpIdx
    /*int8_t*/BYTE OpIdx = pOpEntry->OP;

    for (int GrpIdx = 0; (GrpIdx < 8) && (lFound < nOpEntryMax); GrpIdx++)
    {
        if (GrpMatch(strModRMMatch, GrpIdx))
        {
            if (pGrp[GrpIdx].strFmt)
            {
                pOpEntry->OP = OpIdx;
                pOpEntry->OPExt = GrpIdx | 0x80; //set [bit 7] for valid
                // get prefix group address and prefix group size
                if (DWORD lPrefixEntry = lPrefixes(eOPTab, OpIdx, GrpIdx, ptr_ptr_PrefixGroup))
                {
                    DWORD lGrpFound = 0;
                    lGrpFound = EnumPrefixes(ptr_PrefixGroup, lPrefixEntry, pOpEntry, nOpEntryMax - lFound);
                    pOpEntry += lGrpFound;
                    lFound += lGrpFound;
                }
                else
                {
                    pOpEntry->ReqPrefix = pGrp[GrpIdx].PF;
                    swprintf(pOpEntry->strDisasm, 128, _T("%hs"), pGrp[GrpIdx].strFmt);
                    pOpEntry++;
                    lFound++;
                }
            }
        }
    }
    return lFound;
}

LIB_OP_API DWORD xEnumOPCode(E_XB_OP eOPTab, E_ADM eADM, WCHAR* strOPMatch, OPENTRY* pOpEntry, DWORD nOpEntryMax, DWORD nOption)
{
    DWORD lFound = 0;
    OP_ENTRY* pGrp;
    OP_ENTRY* ptr_PrefixGroup;

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
                // check op-code mismatch
                if (
                    (eOPTab == E_1B_OP && OpIdx == 0x0F) ||
                    (eOPTab == E_2B_OP && OpIdx == 0x38) ||
                    (eOPTab == E_2B_OP && OpIdx == 0x3A)
                    )
                {
                    nOPExtIdx = 0;
                }
                else
                {
                    nOPExtIdx = 256;
                }
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
                // Only one REX prefix is allowed per instruction.If used,
                // the REX prefix byte must immediately precede the opcode
                // byte or the escape opcode byte(0FH).
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
                case 0x66F2:
                    prefixes = 0x00000204;
                    // cannot exchange with each other
                    buffer[1] = 0x66;
                    buffer[2] = 0xF2;
                    ptr2_buffer = buffer + 3 - 2;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0x00;
                    break;
                case 0x48F2:
                    prefixes = 0x00001004;
                    // cannot exchange with each other
                    buffer[1] = 0xF2;
                    buffer[2] = 0x48;
                    ptr2_buffer = buffer + 3 - 2;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0x00;
                    break;
                case 0x48F3:
                    prefixes = 0x00001002;
                    // cannot exchange with each other
                    buffer[1] = 0xF3;
                    buffer[2] = 0x48;
                    ptr2_buffer = buffer + 3 - 2;
                    // dynamic linked list pointer is not ready
                    next_PrefixIdx = 0x00;
                    break;
                case 0x48F266:  // CRC32 need this prefix
                case 0x4866F2:
                    prefixes = 0x00001204;
                    // cannot exchange with each other
                    buffer[0] = 0x66;
                    buffer[1] = 0xF2;
                    buffer[2] = 0x48;
                    ptr2_buffer = buffer + 3 - 3;
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
                // exists prefix but different mnemonic, or it is prefix-exclusive mnemonic
                else if (OPMatch(strOPMatch + 8, OP_2))
                {
                    // preserve reg/op information
                    options = 0x40000000 | (options & 0x0C000000);
                    lendis = ndisasm(ptr2_buffer, pOpEntry, eADM, &options);
                }
                // no match
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
                else if (options & 0x08000000)
                {
                    pOpEntry->ReqPrefix = prefixes;
                    pOpEntry->OP = OpIdx;
                    // group indicator | mod indicator | 11B indicator | group number
                    pOpEntry->OPExt = 0x80 | 0x20 | ((OP_2 >= 0xC0) << 3) | ((OP_2 >> 3) & 0x07);
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
                        //lFound2 = lFound;   // update found entries
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
            // never pass null pointer into function
            //pGrp = OP1BMap;
            //int a = lPrefixes(eOPTab, OpIdx, 0, pGrp);
            //int b = pGrp->OP;
            //int c = 0;
            //a = lPrefixes(eOPTab, OpIdx, 0, pGrp);
            //c = pGrp->OP;

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
                        pGrp = Grp11A_C6h;
                        break;
                    case 0xc7://Grp11B 
                        pGrp = Grp11B_C7h;
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
                        // pOpEntry->OPExt = 0x80;
                        lGrpFound = EnumGrp(eOPTab, pGrp, &strOPMatch[8], pOpEntry, nOpEntryMax - lFound);
                        pOpEntry += lGrpFound;
                        lFound += lGrpFound;
                    }
                    else if (OP1BMap[OpIdx].strFmt)
                    {
                        // pointer to pointer to the prefix group
                        OP_ENTRY ** ptr_ptr_PrefixGroup = &ptr_PrefixGroup;
                        pOpEntry->OP = OpIdx;
                        pOpEntry->OPExt = 0;
                        // get prefix group address and prefix group size
                        if (DWORD lPrefixEntry = lPrefixes(eOPTab,OpIdx,8, ptr_ptr_PrefixGroup))
                        {
                            DWORD lGrpFound = 0;
                            lGrpFound = EnumPrefixes(ptr_PrefixGroup, lPrefixEntry, pOpEntry, nOpEntryMax - lFound);
                            pOpEntry += lGrpFound;
                            lFound += lGrpFound;
                        }
                        else
                        {
                            pOpEntry->ReqPrefix = OP1BMap[OpIdx].PF;
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
                    case 0x1C: //Grp20
                        pGrp = Grp20_1Ch;
                        break;
                    case 0x1E: //Grp21
                        pGrp = Grp21_1Eh;
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
                        lGrpFound = EnumGrp(eOPTab, pGrp, &strOPMatch[8], pOpEntry, nOpEntryMax - lFound);
                        pOpEntry += lGrpFound;
                        lFound += lGrpFound;
                    }
                    else if (OP2BMap[OpIdx].strFmt)
                    {
                        // pointer to pointer to the prefix group
                        OP_ENTRY** ptr_ptr_PrefixGroup = &ptr_PrefixGroup;
                        pOpEntry->OP = OpIdx;
                        pOpEntry->OPExt = 0;
                        // get prefix group address and prefix group size
                        if (DWORD lPrefixEntry = lPrefixes(eOPTab, OpIdx, 8, ptr_ptr_PrefixGroup))
                        {
                            DWORD lGrpFound = 0;
                            lGrpFound = EnumPrefixes(ptr_PrefixGroup, lPrefixEntry, pOpEntry, nOpEntryMax - lFound);
                            pOpEntry += lGrpFound;
                            lFound += lGrpFound;
                        }
                        else
                        {
                            pOpEntry->ReqPrefix = OP1BMap[OpIdx].PF;
                            swprintf(pOpEntry->strDisasm, 128, _T("%hs"), OP2BMap[OpIdx].strFmt);
                            pOpEntry++;
                            lFound++;
                        }
                    }
                }
            }
        }
    }

/* EXIT: */
    return lFound;
}
