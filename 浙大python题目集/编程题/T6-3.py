def shuttle(lst):
    t=[]
    for i in lst:
        if type(i)==list or type(i)==tuple:
            for j in shuttle(i):
                t.append(j)
        elif type(i)==type(1):
            t.append(i)
    return t
lst=eval(input())
print(sum(shuttle(lst)))
