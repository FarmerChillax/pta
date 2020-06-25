
def fn(a, n):
    sum = 0
    tmep = 0
    while n != 0:
        sum = sum * 10 + a
        tmep = tmep + sum
        print(tmep)
        n = n - 1
    
    return sum


s = fn(0, 3)
# print(s)