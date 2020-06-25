import math
def judge_num(x):
    for i in range(2,int(math.sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True

temp_str = int(input())
for key in range(2, temp_str//2 + 1):
    target = temp_str - key
    if judge_num(key) and judge_num(target):
        print("%d = %d + %d" % (temp_str, key, target))
        break