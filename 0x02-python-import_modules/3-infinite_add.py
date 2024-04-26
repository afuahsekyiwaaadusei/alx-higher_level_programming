#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    length = len(argv)
    result = 0
    if length >= 2:
        for i in range(length):
            if i == 0:
                continue
            result += int(argv[i])
    print(result)
