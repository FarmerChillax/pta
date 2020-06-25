temp_num = int(input())
res_list = []
for key in range(temp_num):
    temp_str = list(input().split())
    temp_str.append(int(temp_str[2]) + int(temp_str[3]) + int(temp_str[4]))
    res_list.append(temp_str)

max_list = []
max_num = 0
for key in res_list:
    if key[-1] > max_num:
        max_list = key
        max_num = key[-1]
print("%s %s %s" % (max_list[1], max_list[0], str(max_list[-1])))