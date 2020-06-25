temp_i, temp_j = map(int, input().split())

matrix = []
for key in range(temp_i):
    temp = input().split()
    matrix.append(temp)

flag = True
for i in range(1, temp_i - 1):
    for j in range(1, temp_j - 1):
        if int(matrix[i][j]) > int(matrix[i][j + 1]) and int(matrix[i][j]) > int(matrix[i][j - 1]) and int(matrix[i][j]) > int(matrix[i + 1][j]) and int(matrix[i][j]) > int(matrix[i - 1][j]):
            flag = False
            print("{:d} {:d} {:d}".format(int(matrix[i][j]), i + 1, j + 1))

if flag:
    print('None {:d} {:d}'.format(temp_i, temp_j))