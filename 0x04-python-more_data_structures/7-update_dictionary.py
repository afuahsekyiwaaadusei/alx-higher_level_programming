#!/usr/bin/python3

def update_dictionary(a_dictionary, key, value):
    '''Replaces or adds key/value in a dictionary.

    Key argument will be always a string.
    Value argument will be any type.
    If a key exists in the dictionary, the value will be replaced.
    If a key doesn’t exist in the dictionary, it will be created.'''
    new_dict = a_dictionary
    new_dict[key] = value
    return new_dict
