input_num = int(input())
count = 65
for i in range(input_num):
    for j in range(input_num - i):
        print("{:c} ".format(count), end='')
        count += 1
    print()