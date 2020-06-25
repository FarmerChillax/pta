matrix_num = int(input())


def input_matrix():
    matrix_list = []
    input_num = int(input())
    for key in range(input_num):
        matrix_list.append(list(input().split()))

    target = True
    for i in range(input_num):
        for j in range(input_num):
            if not int(matrix_list[i][j]) == 0 and j < i:
                target = False
    return target


res_list = []
for key in range(matrix_num):
    res = input_matrix()
    res_list.append(res)

for key in range(matrix_num):
    if res_list[key]:
        print("YES")
    else:
        print("NO")
