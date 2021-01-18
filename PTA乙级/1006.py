n = int(input())

res = ""
cnt = 1
while n != 0:
    tmp = n % 10
    if cnt == 1:
        for i in range(1, tmp+1):
            res =  res + str(i)
    elif cnt == 2:
        for i in range(1, tmp+1):
            res = "S" + res
    else:
        for i in range(1, tmp+1):
            res = "B" + res

    cnt += 1
    n = n // 10

print(res)