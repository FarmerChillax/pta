n = int(input())
set_num = 0
max_len = 0
max_index = 0
temp_list = []
while set_num != n:
    temp_str = input()
    if len(temp_str) > max_len:
        max_len = len(temp_str)
        max_index = set_num
    temp_list.append(temp_str)
    set_num += 1
print("The longest is: " + temp_list[max_index])