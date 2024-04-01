#!/usr/bin/python3

def remove_char_at(str, n):
    '''A function that creates a copy of the string.

    Removing the character at the position n.
    '''

    new_str = ''
    for i in range(len(str)):
        if i == (n):
            continue
        new_str += str[i]
    return new_str
