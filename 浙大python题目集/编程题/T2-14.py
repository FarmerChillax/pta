a, b = map(int, input().split())
target,my_sum = 1,0
for i in range(a, b+1):
    switch = "\n" if target % 5 == 0 else ""
    print("{:>5d}".format(i),end = switch)
    target += 1
    my_sum += i
if target % 5 != 1:
    print("")
print("Sum = %d" % my_sum)