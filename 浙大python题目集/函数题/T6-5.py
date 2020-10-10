def funcos(eps, x):
    res = 0
    n = 0
    temp = 1
    while (x ** n / factorial(n)) >= eps:
        n += 2
    num = 0
    for key in range(0, n, 2):
        num += 1
        if key % 4 == 0:
            res += x ** key / factorial(key)
        else:
            res -= x ** key / factorial(key)
    return res

def factorial(x):
    res = 1
    for key in range(2, int(x)+1):
        res *= key
    return res

eps=float(0.0001)
x=float(-3.1)
value=funcos(eps,x)
print("cos({0}) = {1:.4f}".format(x,value))