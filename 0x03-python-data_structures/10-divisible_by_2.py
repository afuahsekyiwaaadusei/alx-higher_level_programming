#!/usr/bin/python3

def divisible_by_2(my_list=[]):
    '''Finds all multiples of 2 in a list.

    Return a new list with True or False
    Depending on whether the integer at
    the same position in the original list is a multiple of 2.
    '''
    new_list = my_list[:]
    for i in range(len(new_list)):
        if new_list[i] % 2 == 0:
            new_list[i] = True
        else:
            new_list[i] = False
    return new_list
