input_num = int(input())

for i in range(1, input_num+1):
    for j in range(1, i+1):
        print("{:d}*{:d}={:<4d}".format(j, i, i*j),end='')
    print()