import math
N = int(input())
for key in range(int(math.pow(10, N-1)), int(math.pow(10, N))):
    temp, res = key, 0
    while temp > 0:
        res += math.pow(temp % 10, N)
        temp = temp // 10
    if res == key:
        print(key)
