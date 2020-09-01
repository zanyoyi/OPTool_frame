/*
 * ndisasm.h   header file for ndisasm.c
 */

#ifndef NASM_NDISASM_H
#define NASM_NDISASM_H

typedef struct {
    unsigned char OP;
    unsigned char OPExt;         /*[7] indicated valid,[2:0] = ModRm.REG;*/
    unsigned short strDisasm[128];
}OPENTRY;

typedef enum {
    E_AD16,
    E_AD32,
    E_AD64,
    E_AD_ALL
}E_ADM;

int ndisasm(unsigned char* data, OPENTRY* pOpEntry, E_ADM segsize, unsigned int* flags);
#endif /* NASM_NDISASM_H */