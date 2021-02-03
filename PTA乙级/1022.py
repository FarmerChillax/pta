# -*- coding: utf-8 -*-
'''
    :file: 1022.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/02/03 14:29:05
'''

a, b, d = map(int, input().split())

def f(num, conversion_num):
    a = "0123456789abcdefghijklmnopqrstuvwxyz"
    res = ''
    if num == 0:
        return 0
    while num >0:
        res = a[num% conversion_num]+res
        num = num // conversion_num
    return res

print(f(a + b, d))