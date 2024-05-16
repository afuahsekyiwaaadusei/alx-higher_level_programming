#!/usr/bin/python3

def best_score(a_dictionary):
    '''Returns a key with the biggest integer value.

    If no score found, return None.'''
    if a_dictionary == None or  a_dictionary == {}:
        return None
    big_int = 0
    big_int_key = ''
    for k, v in a_dictionary.items():
        if v > big_int:
            big_int = v
            big_int_key = k
    return big_int_key
