# a, n = input().split()
a = 2
n = 3
sum = 0
temp = 0
for i in range(0, n):
    temp = temp * 10 + a
    sum = temp + sum
print("s = %d" % (sum))