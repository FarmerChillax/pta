# -*- coding: utf-8 -*-
'''
    :file: 1023.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/02/03 15:02:41
'''

in_list = list(map(int, input().split()))
res = ""

for index, value in enumerate(in_list[1:], 1):
    if value != 0:
        res += str(index)
        in_list[index] -= 1
        break

for index, value in enumerate(in_list):
    res += str(index) * value

print(res)

