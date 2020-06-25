string = list(map(int, input().split(' ')))
temp_dict = {}
max_index = 0
max_value = 0
del string[0]
for key in string:
    if key in temp_dict:
        temp_dict[key] += 1
    else:
        temp_dict[key] = 1

for key in temp_dict:
    if temp_dict[key] > max_index:
        max_index = temp_dict[key]
        max_value = key

print(str(max_value) + " " + str(max_index))