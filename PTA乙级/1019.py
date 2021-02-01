# -*- coding: utf-8 -*-
'''
    :file: 1019.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/02/01 15:35:44
'''

s = input()

s = "%04d" % int(s)

if s[0] == s[1] == s[2] == s[3]:
    print("%04d - %04d = %04d" % (int(s), int(s), 0))
    exit()


def print_nums(s):
    num2 = "".join(sorted(s))
    num1 = num2[::-1]
    s = "%04d" % (int(num1) - int(num2))
    print("%s - %s = %s" % (num1, num2, s))

    if s == "6174":
        return 
    else:
        print_nums(s)

print_nums(s)
