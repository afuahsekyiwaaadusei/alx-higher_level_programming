#!/usr/bin/python3

def uniq_add(my_list=[]):
    '''Adds all unique integers in a list (only once for each integer).'''
    uniq_list = list(set(my_list))
    result = 0
    for x in uniq_list:
        result = result + x
    return result
