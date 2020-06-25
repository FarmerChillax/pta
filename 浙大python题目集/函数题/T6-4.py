
def fib(N):
    m, n = 1, 1
    for key in range(0, N):
        m, n = n, n + m
    return m

def PrintFN(m,n):
    temp_list = []
    for key in range(1, n):
        if m <= fib(key) <= n:
            temp_list.append(fib(key))
    return temp_list


print(fib(6))
print(len(PrintFN(20, 100)))