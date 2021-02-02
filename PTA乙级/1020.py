# -*- coding: utf-8 -*-
'''
    :file: 1020.py
    :author: -Farmer
    :url: https://blog.farmer233.top
    :date: 2021/02/02 21:04:16
'''

n, all = map(int, input().split())
nums = list(map(float, input().split()))
sales = list(map(float, input().split()))

prices = [float("%.2lf" % float(sales[index] / nums[index])) for index in range(n)]

res = 0
for i in range(n):
    max_index = prices.index(max(prices))
    if all == 0:
        break
    if all >= nums[max_index]:
        res += prices[max_index] * nums[max_index]
        all -= nums[max_index]
        prices[max_index] = -99
    else:
        res += prices[max_index] * all
        break

print("%.2f" % res)




# n, space = list(map(int, input().split()))
# size = list(map(float, input().split()))
# price = list(map(float, input().split()))
# rate = {i: price[i]/size[i] for i in range(n)}
# order = sorted(rate, key=lambda i:rate[i], reverse=True)
# money = 0
# for i in order: 
#     if space >= size[i]:
#         money += price[i]
#         space -= size[i]
#     else:
#         money += space * rate[i]
#         break
# print('%.2f' % money)