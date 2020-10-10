input_str_1 = eval(input())
input_str_2 = eval(input())
res_dict = {}
for key in input_str_1:
    if key in input_str_2:
        res_dict[key] = input_str_1[key] + input_str_2[key]
    else:
        res_dict[key] = input_str_1[key]

for key in input_str_2:
    if key not in input_str_1:
        res_dict[key] = input_str_2[key]

s1=[i for i in res_dict.keys() if type(i)==type(1)]
s2=[i for i in res_dict.keys() if type(i)==type('a')]
s1.sort()
s2.sort()
c=0
n=len(res_dict)
print("{",end="")
for i in s1+s2:
    c+=1
    if type(i)==type(1):
        print("{}:{}".format(i,res_dict[i]),end='')
    else:
        print('"{}":{}'.format(i,res_dict[i]),end='')
    if c!=n:
        print(',',end='')
print("}")

