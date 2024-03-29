#!/usr/bin/python3

for i in range(1, 100):
    if int(str(i)[::-1]) < i:
        continue
    elif int(str(i)[::-1]) == i:
        if i < 11:
            print('{:02d}'.format(i), end=", ")
        else:
            continue
    else:
        if i == 89:
            print('{:02d}'.format(i))
            break
        print('{:02d}'.format(i), end=", ")
