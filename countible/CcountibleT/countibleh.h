#pragma once
#ifndef _COUNTIBLEH_H
# define _COUNTIBLEH_H

#include "pydepnds.h"

#define T2L(T) B2L(sizeof(T))
#define TARR_FIELD(varname, T, L) static T varname[L]
//-->
#define INTARR_FIELD(varname, L) TARR_FIELD(varname, int, L)
//-->
#define FRAME_CACHE(varname) INTARR_FIELD(varname, FrameIL)

#define DETECT_DOUBLE_UPARY_NPSGTIVE(varname) FRAME_CACHE(__FRAME_CACHE__) = {0,}; GET_CALLED_INDEX_SMARTLY(__PY_PC__, "SystemError : Cannot get RuntimeStackFrame of the function.", "TypeError : the function wasn't callee"); register bool varname = __PY_PC__ - __FRAME__CACHE__[__caller__] == 1; __FRAME__CACHE__[__caller__] = varname?0:__PY_PC__
#define IS_DOUBLE_SIGNED DETECT_DOUBLE_UPARY_NPSGTIVE(is_double_signed)

#define SIGNEDF(FN, SRC) static object FN (object self, object args) { \
        IS_DOUBLE_SIGNED; \
        SRC \
    }

#define POS(CLS, SRC) SIGNEDF(_##CLS##__pos__, SRC)
#define NEG(CLS, SRC) SIGNEDF(_##CLS##__neg__, SRC)

inline autolike B2L(autolike);

const autolike FrameIL = T2L(frame);

#endif