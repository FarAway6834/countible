#pragma once
#ifndef _PYDEPNDS_H
# define _PYDEPENDS_H

#include "pydepndsh.h"

inline bool IS_NULL(object obj) {
    return obj == NULL;
}


inline frame GET_CALLER(frame callee) {
    return callee->f_back;
}


inline int GET_PC(frame fr) {
    return fr->f_lasti;
}

#endif