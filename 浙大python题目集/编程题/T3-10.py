string = input()
temp_list = ['A', 'E', 'I', 'O', 'U']
res = 0
for key in string:
    if key not in temp_list and key.isupper():
        res += 1
print(res)