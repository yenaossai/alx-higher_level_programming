#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    tmp = my_dictionary.copy()
    for k, v in tmp.items():
        if value == v:
            my_dictionary.pop(k)
    return my_dictionary
