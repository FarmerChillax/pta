input_num = int(input())

matrix_list = []
for key in range(input_num):
    matrix_list.append(input().split())

max_point = []
res = []
for i in range(input_num):
    temp_max = [int(matrix_list[i][0]),0,0]
    target = True
    for j in range(input_num):
        if int(matrix_list[i][j]) > temp_max[0]:
            temp_max = [int(matrix_list[i][j]), i, j]

    for z in range(input_num):
        if int(matrix_list[z][temp_max[2]]) < temp_max[0]:
            target = False
            break

    if target:
        res.append(temp_max)
        
print(len(res))
