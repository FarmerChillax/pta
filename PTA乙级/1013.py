m, n = map(int, input().split())

# def is_prime(num):
#     for i in range(2, int(num**0.5 + 1)):
#         if num % i == 0:
#             return False
#     return True
def is_prime(number, primes) -> bool:
    new_num = int(number ** 0.5) # 优化数据范围
    for prime in primes: #只尝试素数作为被除数
        if prime > new_num:
            break
        if number % prime == 0:
            return False
    return True

i, cnt = 3, 0
primes = [2]
while cnt != n - 1:
    if is_prime(i, primes=primes):
        primes.append(i)
        cnt += 1
    i += 1

cnt = 1
for i in range(m, n + 1):
    if cnt % 10 == 0:
        print(primes[i - 1])
    elif i == n:
        print(primes[i - 1])
    else:
        print(primes[i - 1], end=" ")
    cnt += 1