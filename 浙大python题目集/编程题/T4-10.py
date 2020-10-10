def gcd(n,m):
    if n % m == 0:
        return m
    else:
        return gcd(m, n % m)
        
n, m = input().split()
n = int(n)
m = int(m)
gcd_num = gcd(n, m)
print(gcd_num, int(n * m // gcd_num))