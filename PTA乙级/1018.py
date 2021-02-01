# -*- coding: utf-8 -*-
'''
    :file: 1018.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/01/31 19:34:07
'''
import sys

A_dict = {"win": 0, "draw": 0, "lose": 0,
          "C_number": 0, "J_number": 0, "B_number": 0}
B_dict = {"win": 0, "draw": 0, "lose": 0,
          "C_number": 0, "J_number": 0, "B_number": 0}

def get_max(ch_dict: dict):
    a_max = max(ch_dict['C_number'], ch_dict['J_number'])
    a_max = max(a_max, ch_dict['B_number'])

    if a_max == ch_dict['B_number']:
        return "B"
    elif a_max == ch_dict['C_number']:
        return 'C'
    elif a_max == ch_dict['J_number']:
        return 'J'


n = int(input())
for _ in range(n):
    s = sys.stdin.readline()

    if s[0] == s[-2]:
        A_dict['draw'] += 1
        B_dict['draw'] += 1

    if s[0] == 'C':  # 锤子
        if s[-2] == "J":  # 剪刀
            A_dict['win'] += 1
            B_dict['lose'] += 1
            A_dict['C_number'] += 1

        if s[-2] == 'B':  # 布
            A_dict["lose"] += 1
            B_dict['win'] += 1
            B_dict['B_number'] += 1

    if s[0] == 'J':
        if s[-2] == 'C':
            A_dict['lose'] += 1
            B_dict['win'] += 1
            B_dict['C_number'] += 1

        if s[-2] == 'B':
            A_dict['win'] += 1
            B_dict['lose'] += 1
            A_dict['J_number'] += 1

    if s[0] == 'B':
        if s[-2] == 'C':
            A_dict['win'] += 1
            B_dict['lose'] += 1
            A_dict['B_number'] += 1

        if s[-2] == 'J':
            A_dict['lose'] += 1
            B_dict['win'] += 1
            B_dict['J_number'] += 1


print(A_dict['win'], A_dict['draw'], A_dict['lose'])
print(B_dict['win'], B_dict['draw'], B_dict['lose'])
print("%s %s" % (get_max(A_dict), get_max(B_dict)))