n=int(input())
s={i for i in range(1,n+1)}

for i in range(10**(n-1),10**n):
    a=set(int(j) for j in str(i))
    if a<=s and len(a)==n:
        print(i)