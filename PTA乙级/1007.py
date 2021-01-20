def prime_List(N):
    a = [0] * (N + 1)  # 初始化认为所有均为素数
    a[0] = a[1] = 1
    for i in range(2, N // 2 + 1):  # 查找所有素数的倍数
        for j in range(2, N // i + 1):
            a[i * j] = 1

    res = [2]
    for i in range(3, N+1, 2):  # 只寻找奇数
        if a[i] == 0:
            res.append(i)
    return res


N = int(input())
A = prime_List(N)
sum = 0
for i in range(len(A)-1):
    if A[i+1]-A[i] == 2:
        sum += 1
print(sum)
