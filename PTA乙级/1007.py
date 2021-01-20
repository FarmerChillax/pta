# 解法一
def is_prime(number, primes) -> bool:
    new_num = int(number ** 0.5) # 优化数据范围
    for prime in primes: #只尝试素数作为被除数
        if prime > new_num:
            break
        if number % prime == 0:
            return False
    return True

n = int(input())
pre_prime = 2 #前一个素数
cnt = 0 # 计数器
primes = [2] #素数数组
for number in range(2, n+1):
    if is_prime(number, primes=primes):
        primes.append(number)
        if number - pre_prime == 2:
            cnt += 1
        pre_prime = number

print(cnt)




# 解法二
# def prime_List(N):
#     a = [0] * (N + 1)  # 初始化认为所有均为素数
#     a[0] = a[1] = 1
#     for i in range(2, N // 2 + 1):  # 查找所有素数的倍数
#         for j in range(2, N // i + 1):
#             a[i * j] = 1

#     res = [2]
#     for i in range(3, N+1, 2):  # 只寻找奇数
#         if a[i] == 0:
#             res.append(i)
#     return res


# N = int(input())
# A = prime_List(N)
# sum = 0
# for i in range(len(A)-1):
#     if A[i+1]-A[i] == 2:
#         sum += 1
# print(sum)
