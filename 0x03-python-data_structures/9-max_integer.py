#!/usr/bin/python3

def max_integer(my_list=[]):
    '''Finds the biggest integer of a list

    If the list is empty, return None.
    '''
    length = len(my_list)
    if length == 0:
        return None
    else:
        temp = my_list[0]
        for i in range(1, length):
            if my_list[i] > temp:
                temp = my_list[i]
        return temp
