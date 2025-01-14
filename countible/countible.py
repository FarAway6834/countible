from .clsgens import clset
from CcountibleT import load_countible_int
from countible_int import *

clset("int", int,
        __pos__ = _countible_int__pos__,
        __neg__ = _countible_int__neg__
    )