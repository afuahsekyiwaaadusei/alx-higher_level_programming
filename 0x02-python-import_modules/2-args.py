#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    length = len(argv)
    if length == 1:
        print(length - 1, "arguments.")
    elif length == 2:
        print(length - 1, "argument:")
        print("1:", argv[length - 1])
    else:
        print(length - 1, "arguments:")
        for i in range(length):
            if i == 0:
                continue
            print("{}: {}".format(i, argv))
