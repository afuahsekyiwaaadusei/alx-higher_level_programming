#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    '''Adds two tuples.

    Returns a tuple with 2 integers.
    '''
    x, y, a, b = 0, 0, 0, 0
    if len(tuple_a) == 0:
        pass
    elif len(tuple_a) < 2:
        x, = tuple_a
    else:
        x = tuple_a[0]
        y = tuple_a[1]

    if len(tuple_b) == 0:
        pass
    elif len(tuple_b) < 2:
        a, = tuple_b
    else:
        a = tuple_b[0]
        b = tuple_b[1]

    return (x + a, y + b)
