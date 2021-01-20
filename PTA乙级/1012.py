nums = list(map(int, input().split()))[1:]
A1, A2, A3, A4, A5 = [], [], [], [], []

for num in nums:
    if num % 5 == 0 and num % 2 == 0:
        A1.append(num)
    if num % 5 == 1:
        A2.append(num)
    if num % 5 == 2:
        A3.append(num)
    if num % 5 == 3:
        A4.append(num)
    if num % 5 == 4:
        A5.append(num)
# A1
A1 = sum(A1) if A1 and sum(A1) != 0 else "N"

# A2
if A2:
    A2_sum, signal = 0, 1
    for value in A2:
        A2_sum += value * signal
        signal *= -1
    A2 = str(A2_sum)
else:
    A2 = "N"

# A3
A3 = str(len(A3)) if A3 else "N"

# A4
A4_res = "%.1f" % (sum(A4) / len(A4)) if A4 and sum(A4) != 0 else "N"

# A5
A5 = max(A5) if A5 else "N"

res = "%s %s %s %s %s" % (A1, A2, A3, A4_res, A5)
print(res)