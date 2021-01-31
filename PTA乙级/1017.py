# -*- coding: utf-8 -*-
'''
    :file: 1017.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/01/31 18:49:26
'''
in_list = list(map(int, input().split()))

r = in_list[0] % in_list[-1]
q = in_list[0] // in_list[-1]
print(q, r)