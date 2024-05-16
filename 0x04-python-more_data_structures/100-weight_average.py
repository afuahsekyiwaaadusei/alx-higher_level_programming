#!/usr/bin/python3
def weight_average(my_list=[]):
    '''Returns the weighted average of all integers tuple (<score>, <weight>).

    Returns 0 if the list is empty'''
    if len(my_list) < 1:
        return 0
    top = 0
    bottom = 0
    for x in my_list:
        top = top + (x[0] * x[1])
    for i in my_list:
        bottom = bottom + i[1]
    return top/bottom
