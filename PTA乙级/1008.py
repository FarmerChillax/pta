"""
思路：将最后一个元素弹出来，然后插到数组头.
"""

nums, interval = map(int, input().split())
in_list = list(map(int, input().split()))

# print(nums, interval)

for i in range(interval):
    in_list.insert(0, in_list.pop())

# print(in_list)
for value in in_list:
    if value == in_list[-1]:
        print(value)
    else:
        print(str(value) + " ", end="")