#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    '''A function that computes the square value of all integers of a matrix.

    Matrix is a 2 dimensional array.
    Returns a new matrix same size as matrix.'''
    my_matrix = [[x**2 for x in value] for value in matrix]
    return my_matrix
