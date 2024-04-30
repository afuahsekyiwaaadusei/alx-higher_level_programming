#!/usr/bin/python3

def multiple_returns(sentence):
    '''Returns a tuple with the length of a string and its first character.

    If the sentence is empty, the first character should be equal to None
    '''
    if len(sentence) > 0:
        return (len(sentence), sentence[0])
    else:
        return(len(sentence), None)
