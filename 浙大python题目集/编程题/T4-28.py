input_list = input().split()

for key in range(int(len(input_list) / 3)):
    print("{:4d}{:4d}{:4d}".format(int(input_list[key]), int(input_list[key + 3]), int(input_list[key + 6])))
