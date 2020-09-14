/*
 * This file is generated from .\asm\directiv.dat
 * by perfhash.pl; do not edit.
 */

#ifndef DIRECTIV_H
#define DIRECTIV_H 1

#include "perfhash.h"

enum directive {
    D_none,
    D_unknown,
    D_corrupt,
    D_ABSOLUTE,
    D_BITS,
    D_COMMON,
    D_CPU,
    D_DEBUG,
    D_DEFAULT,
    D_EXTERN,
    D_FLOAT,
    D_GLOBAL,
    D_STATIC,
    D_LIST,
    D_SECTION,
    D_SEGMENT,
    D_WARNING,
    D_SECTALIGN,
    D_PRAGMA,
    D_REQUIRED,
    D_EXPORT,
    D_GROUP,
    D_IMPORT,
    D_LIBRARY,
    D_MAP,
    D_MODULE,
    D_ORG,
    D_OSABI,
    D_SAFESEH,
    D_UPPERCASE,
    D_PREFIX,
    D_SUFFIX,
    D_GPREFIX,
    D_GSUFFIX,
    D_LPREFIX,
    D_LSUFFIX,
    D_LIMIT,
    D_OPTIONS,
    D_SUBSECTIONS_VIA_SYMBOLS,
    D_NO_DEAD_STRIP,
    D_MAXDUMP,
    D_NODEPEND,
    D_NOSECLABELS
};

#endif /* DIRECTIV_H */
