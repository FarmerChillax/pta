temp_nnum = int(input())
def fibonacci(N):
    m, n = 0, 1
    for key in range(0, N):
        m, n = n, n + m
        if m > N:
            return m

print(fibonacci(temp_nnum))