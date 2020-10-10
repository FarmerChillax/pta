temp_sum = int(input())
temp_str = list(map(int, input().split(" ")))
print(str(max(temp_str)) + " " + str(temp_str.index(max(temp_str))))