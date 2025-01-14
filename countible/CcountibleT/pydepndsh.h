#pragma once
#ifndef _PYDPNDSH_H
# define _PYDPNDSH_H

#include "depends.h"

#define MY_RUNTIME_ERR(txt) PyErr_SetString(PyExc_RuntimeError, txt)
#define MY_ASSERT(p, txt) if (p) {MY_RUNTIME_ERR(txt); return NULL;}
#define CHECK_NULL(x, txt) MY_ASSERT(IS_NULL((object) x), txt)
#define GET_CURRENT_FRAME PyEval_GetFrame
#define GET_CURRENT_FRAME_SAFTY GET_CURRENT_FRAME(); CHECK_NULL
#define GET_CALLER_SAFTY(frames, errmsg) GET_CALLER(frames); CHECK_NULL(errmsg)
#define GET_CALLER_SMARTLY(varname, when_faild_to_get_current, when_faild_to_get_caller) frame __frame_of_this__ = GET_CURRENT_FRAME_SAFTY(when_faild_to_get_current); frame varname = GET_CALLER_SAFTY(when_faild_to_get_caller)
#define GET_CALLED_INDEX_SMARTLY(varname, when_faild_to_get_current, when_faild_to_get_caller) GET_CALLER_SMARTLY(__caller__, when_faild_to_get_current, when_faild_to_get_caller); int varname = GET_PC(__caller__)
#define PYOBJITEM(O, N) O.ob_##N
#define MODULE_METHODS(...) static struct PyMethodDef methods [] = {__VA_ARGS__};

typedef PyObject* object;
typedef PyFrameObject* frame;
typedef PyLongObject* py_int;
typedef digit* py_int_core;
typedef Py_ssize_t cpython_size_t;

inline bool IS_NULL(object);
inline frame GET_CALLER(frame);
inline int GET_PC(frame);

#endif