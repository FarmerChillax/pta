n=int(input())
count=0
for i in range(n//5,0,-1):
    for j in range(n//2,0,-1):
        k=n-5*i-2*j
        if k<1:
            continue
        print("fen5:%d, fen2:%d, fen1:%d, total:%d"%(i,j,k,i+j+k))
        count=count+1
print("count = %d"%count)
