def factorial(x):
    s = 1
    for key in range(1, x):
        s = s * key
    return s
temp_str = int(input())
sum = 0
for key in range(1, temp_str + 2):
    sum += (1 / factorial(key))

print("%.8f" % sum)