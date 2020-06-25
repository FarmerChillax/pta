temp_list = input().split()
temp = map(int, temp_list)
sum = sum(temp) / len(temp_list)
for key in temp_list:
    if(int(key) > sum):
        print(key + " ", end = "")