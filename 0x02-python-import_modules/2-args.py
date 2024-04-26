#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    length = len(argv)
    num = length - 1
    if length == 1:
        print("{} arguments.".format(num))
    elif length == 2:
        print("{} argument:".format(num))
        print("{}: {}".format(num, argv[num]))
    else:
        print("{} arguments:".format(num))
        for i in range(length):
            if i == 0:
                continue
            print("{}: {}".format(i, argv[i]))
