temp_str = input()
num = 0
for key in temp_str:
    num += int(key)
print(str(len(temp_str)) + " " + str(num))