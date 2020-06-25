random_num = int(input())
temp = list(range(random_num))
target = 1
while len(temp) > 1:
    for key in temp[:]:
        if target == 3:
            temp.remove(key)
            target = 0 
        target += 1

print(temp[0] + 1)
