#pragma once
#ifndef _COUNTIBLE_INTH_H
# define _COUNTIBLE_INTH_H

#include "countible.h"

#define CORE(x) PYOBJITEM(x, digit)
#define BASE(x) PYOBJITEM(x, base)
#define SIZE(x) PYOBJITEM(x, size)
#define SIBA(x) SIZE(BASE(x))
#define PYINTCPP(x) pyintcpp(CORE(x))
#define PYINTCDD(x) pyintcdd(CORE(x))
#define GET_SL(x) getSLv(SIBA(x))
#define LOAD_SL register SL sl = GET_SL
#define PYINTOP(M1, M2) LOAD_SL(x); if (sl.S) {M1(x, -sl.L)} else {M2(x, sl.L)}
#define IDX *SIBA(x)
#define THISES (py_int*) self

typedef struct {
    bool S;
    cpython_size_t L;
} SL;

inline void pyintneg(register py_int*);
inline SL getSLv(cpython_size_t);
inline void pyintcpp(py_int_core, cpython_size_t);
inline void pyintcdd(py_int_core, cpython_size_t);
inline void pyintpp(py_int*);
inline void pyintdd(py_int*);

#endif