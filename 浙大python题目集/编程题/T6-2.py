n=int(input())
girl=[]
boy=[]
for i in range(0,n):
    sex,name=input().split()
    if sex=='0':
        girl.append([name,i])
    else:
        boy.append([name,i])
boy.reverse()
lst=list(zip(girl,boy))
for i in range(0,len(lst)):
    lst[i]=sorted(lst[i],key=lambda s:s[1])
lst=sorted(lst,key=lambda s:s[0][1])
for people in lst:
    print("{:} {:}".format(people[0][0],people[1][0]))
