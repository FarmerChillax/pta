team_set = set(range(1,11))
temp = set(map(int, input().split(',')))
res_set = team_set.copy()

for key in team_set:
    if key in temp or key <= 5:
        res_set.remove(key)
len_num = len(res_set)
for key in range(len_num):
    if key != len_num -1:
        print("%d " % res_set.pop(), end='')
    else:
        print("%d" % res_set.pop())