#!/usr/bin/python3

def roman_to_int(roman_string):
    '''Converts a Roman numeral to an integer.

    def roman_to_int(roman_string) must return an integer.
    If the roman_string is not a string or None, return 0'''
    numeral = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    add = 0
    prev = 0
    if isinstance(roman_string, str) is False  or roman_string is None:
        return 0
    for i in roman_string:
        if prev < numeral[i]:
            add = add + (numeral[i] - prev) - prev
        else:
            add = add + numeral[i]
        prev = numeral[i]
    return add
