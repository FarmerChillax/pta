nums = list(map(int, input().split()))

res = []
for i in range(0, len(nums), 2):
    if nums[i] * nums[i+1] != 0:
        res.append(str(nums[i] * nums[i+1]))
        res.append(str(nums[i+1] - 1))

if len(res) == 0:
    print("0 0")
else:
    print(' '.join(res).strip())