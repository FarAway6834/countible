from .cffi_importer import *

__mods__ = "countible_int"

cif = makeclsf(__mods__)

FFI(__mods__, """
{cif("__pos__")}
{cif("__neg__")}
""")