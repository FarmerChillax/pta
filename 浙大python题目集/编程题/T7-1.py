import sys
s=sys.stdin.read()
s=s[:s.find("#")]

t=set([i if i.isalnum()==False and i!='_' else " " for i in s ])
for i in t:
    s=s.replace(i," ")

word=s.lower().split()
dic={}
for i in word:
    i=i[:15]
    dic[i]=dic.get(i,0)+1

result=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
print(len(result))
for i in range(0,int(0.1*len(result))):
    print(str(result[i][1])+":"+result[i][0])
