clset = lambda scope, name, *super, **dict : scope().__setitem__(name, type(name, super, dict))