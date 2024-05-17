#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    '''Deletes keys with a specific value in a dictionary.

    If the value doesn’t exist, the dictionary won’t change.
    All keys having the searched value have to be deleted.'''
    del_key = []
    for k, v in a_dictionary.items():
        if v == value:
            del_key.append(k)
    for i in del_key:
        del a_dictionary[i]
    return a_dictionary
