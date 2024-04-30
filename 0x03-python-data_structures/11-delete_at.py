#!/usr/bin/python3

def delete_at(my_list=[], idx=0):
    '''Deletes the item at a specific position in a list.

    If idx is negative or out of range, nothing change (returns the same list).
    '''
    new_list = my_list
    if idx < 0 or idx > (len(new_list) - 1):
        return new_list
    else:
        del new_list[idx]
        return new_list
