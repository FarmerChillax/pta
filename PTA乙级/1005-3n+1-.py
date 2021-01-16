# This is a shit code
n = int(input())
nums = list(map(int, input().split()))

tmp_list = []
res = []
def get_list(n:int):
    while n != 1:
        n = n / 2 if n % 2 == 0 else  (3 * n + 1) / 2
        if n not in tmp_list:
            tmp_list.append(n)

for num in nums:
    get_list(num)

for num in nums:
    if num not in tmp_list:
        res.append(num)

res.sort(reverse=True)
for i in res:
    if i == res[-1]:
        print(i)
    else:
        print("%d " % i, end="")