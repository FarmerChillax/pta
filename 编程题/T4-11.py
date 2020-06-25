n = int(input())
temp_num_list = []
for key in range(n):
    temp_num_list.append(int(input()))
    
def judge_num(x):
    for i in range(2,x):
        if x % i == 0:
            return False
    return True

for key in temp_num_list:
    if judge_num(key):
        print("Yes")
    else:
        print("No")