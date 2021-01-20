n = int(input())
tmp = []
for i in range(1, n+1):
    A, B, C = map(int, input().split())
    tmp.append([A, B, C])

for i in range(1, len(tmp)+1):
    A, B, C = tmp[i - 1]
    if A + B > C:
        print("Case #%d: true" % i)
    else:
        print("Case #%d: false" % i)