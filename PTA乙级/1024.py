# -*- coding: utf-8 -*-
'''
    :file: 1024.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/02/06 01:08:09
'''

s = input()

number, index = s.split("E")

index = int(index)

if number[0] == '+':
    res = ""
else:
    res = "-"

if index < 0:
    res += "0." + "0"*(abs(index)-1)+number[1:2]+number[3:]

elif index == 0:
    res += number[1:]

elif 0 < index < len(number[3:]):
    res += number[1] + number[3:index + 3] + "." + number[index + 3:]
    
elif index == len(number[3:]):
    res += number[1] + number[3:]

elif index > len(number[3:]):
    res += number[1] + number[3:] + "0"*(index - len(number[3:]))

print(res)
# res = number * (10 ** index)


# print(res)
# print(type(res))


# symbol = s[0]

# integer, e_index = s[1:].split("E")
# e_index_symbol, e_index = e_index[0], e_index[1:]

# print(symbol, integer)
# # print(s)

# print(e_index_symbol, e_index)12000000000
