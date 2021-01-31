# -*- coding: utf-8 -*-
'''
    :file: 1016.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/01/31 18:29:29
'''
in_list = input().split()
pa_list, pb_list = in_list[:2], in_list[2:]

pa = pa_list[-1] * pa_list[0].count(pa_list[-1])
pb = pb_list[-1] * pb_list[0].count(pb_list[-1])

pa = int(pa) if pa else 0
pb = int(pb) if pb else 0

print(pa + pb)
