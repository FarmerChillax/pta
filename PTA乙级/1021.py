# -*- coding: utf-8 -*-
'''
    :file: 1021.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/02/03 14:17:28
'''

n = input()
res = {}
for item in n:
    if item in res:
        res[item] += 1
    else:
        res[item] = 1

for i in sorted (res) : 
    print("%s:%d"%(i, res[i]))