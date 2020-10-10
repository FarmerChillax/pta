temp_input_1,temp_input_2 = map(int,input().split())
if temp_input_1 <= 1:
    temp_input_1 = 2
res = 0
res_sum = 0
for key in range(temp_input_1, temp_input_2 + 1):
    target = True
    for key_2 in range(2, int(key**0.5) + 1):
        if key % key_2 == 0:
            target = False
            break
    if target == True:
        res_sum += key
        res += 1 

print("%d %d" % (res, res_sum))
