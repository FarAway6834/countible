#pragma once
#ifndef _COUNTIBLE_INT_H
# define _COUNTIBLE_INT_H

#include "countible_inth.h"

inline SL getSLv(cpython_size_t x) {
    return {x < 0, x};
}

inline void pyintneg(register pyint* x) {
    IDX = -IDX;
}

inline void pyintcpp(py_int_core x, cpython_size_t L) {
    PASS;
}
inline void pyintcdd(py_int_core x, cpython_size_t L) {
    PASS;
}

inline void pyintpp(py_int* x) {
    PYINTOP(PYINTCDD, PYINTCPP);
}
inline void pyintdd(py_int* x) {
    PYINTOP(PYINTCPP, PYINTCDD);
}

POS(countible_int, 
    if (is_double_signed) {pyintpp(THISES);};
    return self;
)

NEG(countible_int, 
    pyintneg(THISES);
    if (is_double_signed) {pyintdd(THISES);};
    return self;
)

MODULE_METHODS

#endif