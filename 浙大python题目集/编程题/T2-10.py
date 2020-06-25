lower, upper = map(int, input().split())
print("Invalid.") if lower > upper else print("fahr celsius")
while lower <= upper:
    print('{0}{1:6.1f}'.format(lower,(5*(lower-32)/9)))
    lower += 2


