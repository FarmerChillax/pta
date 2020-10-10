temp_num = int(input())
mol = 2 # 分子
den = 1 # 分母
sum = 0.0
for key in range(temp_num):
    sum += mol / den
    temp = den # 前一项的分母
    den = mol
    mol = temp + mol
print("%.2f" % sum)