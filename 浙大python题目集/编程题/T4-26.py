input_num = int(input())

res = 0
for i in range(1, int((input_num + 1) / 2)+1):
    temp = 1
    for j in range(1, 2*i):
        temp *= j
    res += temp

print("n=%d,s=%d" % (input_num, res))
