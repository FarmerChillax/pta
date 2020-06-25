from functools import reduce

input_num = input().split()

res_list = []
for key in range(int(input_num[0])):
    res_list.append(reduce(lambda x, y: x+y, map(int, input().split())))

print(*res_list, sep="\n")
