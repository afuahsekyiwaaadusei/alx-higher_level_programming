#!/usr/bin/python3
import calculator_1 as calc
from sys import argv, __stderr__

if __name__ == "__main__":
    if len(argv) == 4:
        op = ["+", "-", "*", "/"]
        a = int(argv[1])
        b = int(argv[3])
        result = 0
        if argv[2] == op[0]:
            result = calc.add(a, b)
        elif argv[2] == op[1]:
            result = calc.sub(a, b)
        elif argv[2] == op[2]:
            result = calc.mul(a, b)
        elif argv[2] == op[3]:
            result = calc.div(a, b)
        else:
            print("Unknown operator. Available operators: +, -, * and /")
            exit(1)
    else:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    print("{} {} {} = {}".format(argv[1], argv[2], argv[3], result))
