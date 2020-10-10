temp_str = input()
target = input()
res = 0
for key in temp_str:
    if key == target:
        res += 1
print(res)