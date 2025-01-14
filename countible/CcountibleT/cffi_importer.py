from cffi import FFI as __FFI__

class FFI(__FFI__):
    def __init__(self, header : str, prototypes_src : str):
        super.__init__()
        self.set_source(f'{header}_h', f'#include "{header}.h"')
        self.cdef(prototypes_src)
        self.compile(verbose=True)

pyf = "static PyObject* {}(PyObject*, PyObject*);".format
clsf = pyf("_{{}}").format
makeclsf = lambda x : clsf("{}{{}}").format(x).format