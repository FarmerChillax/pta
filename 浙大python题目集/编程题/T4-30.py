import math

temp_input = input().split()

target = False
for x in range(int(temp_input[0]), int(temp_input[1]) + 1):
    res = [1]
    for key in range(2, int(math.sqrt(x) + 1)):
        if x % key == 0:
            res.append(key)
            res.append(x//key)
    if sum(res) == x:
        target = True
        res.sort()
        print("{:d} = {}".format(x, ' + '.join("%s" % id for id in res)))

if not target:
    print("None")