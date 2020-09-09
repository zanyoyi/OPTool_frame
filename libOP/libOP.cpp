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
        return OP1BMap[buffer].OPExt;
    }
    else if (eOPTab == E_AD32)
    {
        return OP2BMap[buffer].OPExt;
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
                pOpEntry->ReqPrefix = 0;
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
                    pOpEntry->OPExt = 0x80 | 0x40 | ((OP_2 >= 0xC0) << 3) | ((OP_2 >> 3) & 0x07);
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
                            pOpEntry->ReqPrefix = 0;
                            pOpEntry->OP = OpIdx;
                            pOpEntry->OPExt = 0;
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
                        lGrpFound = EnumGrp(pGrp, &strOPMatch[8], pOpEntry, nOpEntryMax - lFound);
                        pOpEntry += lGrpFound;
                        lFound += lGrpFound;
                    }
                    else
                    {
                        if (OP2BMap[OpIdx].strFmt)
                        {
                            pOpEntry->ReqPrefix = 0;
                            pOpEntry->OP = OpIdx;
                            pOpEntry->OPExt = 0;
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
