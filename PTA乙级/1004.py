max_value = ["name", "number", 0]
min_value = ["name", "number", 101]

n = int(input())

for i in range(n):
    tmp_in = input().split()
    if int(tmp_in[2]) > int(max_value[-1]):
        max_value = tmp_in
    if int(tmp_in[2]) < int(min_value[-1]):
        min_value = tmp_in

print(max_value[0], max_value[1])
print(min_value[0], min_value[1])
# print("%s %s" % (max_value[0], max_value[1]))
# print("%s %s" % (min_value[0], min_value[1]))




# max_res, min_res = ["name", "number", 0], ["name", "number", 101]
# n = int(input())

# for i in range(n):
#     str = input().split()
#     if int(str[2]) > int(max_res[-1]):
#         max_res = str
#     if int(str[2]) < int(min_res[-1]):
#         min_res = str
# print(max_res[0], max_res[1])
# print(min_res[0], min_res[1])
