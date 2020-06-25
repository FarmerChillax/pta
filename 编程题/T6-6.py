temp_str = eval(input())
temp_int = int(input())
def analysis(weigh, target_list, target_weigh):
    res = 0
    for key in target_list:
        if type(key) == list:
            temp = analysis(weigh + 1, key, target_weigh)
            res += temp
        elif weigh == target_weigh:
            res += 1
    return res

print(analysis(1, temp_str, temp_int))