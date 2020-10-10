# input_list_1 = input().split()
# input_list_2 = input().split()

# temp_list = []

# for key in input_list_1:
#     if key not in input_list_2 and key not in temp_list:
#         temp_list.append(key)

# for key in input_list_2:
#     if key not in input_list_1 and key not in temp_list:
#         temp_list.append(key)
    
# for key in temp_list:
#     print("{:s} ".format(key), end='')

a = input().split()
c = list(set(a[1:]))
c.sort(key=a.index)#保证集合去除重复性元素之后，顺序不变
b = input().split()
e = list(set(b[1:]))
e.sort(key=b.index)
d = c+e
f=[]
for i in d:
    if d.count(i)<=1:
        f.append(i)

for i in f:
    if i != f[-1]:
        print("{:s} ".format(i),end="")
    else:
        print("{:s}".format(i),end="")