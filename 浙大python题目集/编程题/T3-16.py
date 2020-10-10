temp_str = input()
temp_list = []
for key in temp_str:
    if key not in temp_list:
        temp_list.append(key)

temp_list.sort()
temp_list = "".join(temp_list)
print(temp_list)