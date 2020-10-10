temp_str = list(map(int, input().split(',')))
input_num = int(input())
res = []
for index, value in enumerate(temp_str):
    target = input_num - value
    if target in temp_str:
        res.append(str(index))

if len(res) > 0:
    print(" ".join(res))
else:
    print("no answer")