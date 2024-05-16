#!/usr/bin/python3

def roman_to_int(roman_string):
    '''Converts a Roman numeral to an integer.

    def roman_to_int(roman_string) must return an integer.
    If the roman_string is not a string or None, return 0'''
    numerals = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    add = 0
    prev = 0
    if type(roman_string) != str or roman_string == None:
        return 0
    for i in roman_string:
        if prev < numerals[i]:
            add = add + (numerals[i] - prev) - prev
        else:
            add = add + numerals[i]
        prev = numerals[i]
    
    return add
