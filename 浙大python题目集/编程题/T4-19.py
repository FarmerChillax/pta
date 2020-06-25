input_num = int(input())

matrix_list = []

for key in range(input_num):
    input_list = list(input().split())
    matrix_list.append(input_list)

res = 0

for i in range(input_num):

    if(i == input_num - 1):
        break

    for j in range(input_num):
        if(j != input_num - 1 - i and j != input_num - 1):
            res += int(matrix_list[i][j])

print(res)
