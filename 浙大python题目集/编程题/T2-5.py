sum = 0
x = 5
flag = 1
for i in range(1, x+1):
    sum = sum + (i / (i*2-1)) * flag
    flag *= -1
print("sum = %.3f" % (sum))
