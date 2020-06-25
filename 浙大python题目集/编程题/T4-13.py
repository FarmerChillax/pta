target = float(input())
temp = 1
num = 1
temp_sum = 0
res_sum = 1

while not (res_sum - temp_sum < target):
    temp_sum, res_sum = res_sum, res_sum + (1.0 / num)
    temp += 1
    num *= temp

print("%.6f" % res_sum)
