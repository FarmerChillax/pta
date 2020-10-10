temp_str = eval(input())

def analysis(weigh, target_list):
    res = 0
    for key in target_list:
        if type(key) == list:
            temp = analysis(weigh + 1,key)
            res += temp
        else:
            res += weigh
    return res

print(analysis(1, temp_str))