x, style = input().split()
x = int(x)
target = 0
sum = 1
for i in range(2,x):
    if((sum*2 - 1) <= x):
        sum += (2 * i - 1)
    else:
        sum -= (2 * (i-1) - 1)
        target = (2 * (i-2) - 1)
        break

temp = 0
x = target
i = x
while i != 1:
    print(" " * temp + style * i + " " * temp)
    temp += 1
    i -= 2

print(" " * temp + style + " " * temp)
while i != x:
    i += 2
    temp -= 1
    print(" " * temp + style * i + " " * temp)
