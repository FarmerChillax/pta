num1,num2 = map(int,input().split())
ls = [i for i in range(num1,num2+1) if i %3 ==0 and i %5 ==0 and i %7 ==0]
print(len(set(ls)))