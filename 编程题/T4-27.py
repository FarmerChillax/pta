input_list = input().split()

max_num = 0
this_sum = 0
for key in range(len(input_list)):
    if int(input_list[key]) > max_num:
        max_num = int(input_list[key])
    print("{:4d}".format(int(input_list[key])), end ='')
    this_sum += int(input_list[key])
    if (key + 1) % 3 == 0:
        print("{:4d}{:4d}".format(max_num, this_sum), end = "")
        max_num = 0
        this_sum = 0
        print()