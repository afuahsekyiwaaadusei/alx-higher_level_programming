#!/usr/bin/python3

def simple_delete(a_dictionary, key=""):
    '''Deletes a key in a dictionary.

    Key argument will be always a string.
    If a key doesn’t exist, the dictionary won’t change'''
    new_dict = a_dictionary
    if key in new_dict:
        del new_dict[key]
    return new_dict
