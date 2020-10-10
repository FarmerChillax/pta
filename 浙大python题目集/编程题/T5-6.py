input_num = int(input())
temp_list = list(map(int, input().split()))
temp_list.sort()
res_dict = {}
for key in temp_list:
    if key not in res_dict:
        res_dict[key] = 1
    else:
        res_dict[key] += 1

for key in res_dict:
    print("{:d}:{:d}".format(key, res_dict[key]))