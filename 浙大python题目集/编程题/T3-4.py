target = input()
string = input()
res = string.find(target)
if res == -1:
    print("Not Found")
else:
    res = string[::-1].find(target)
    print("index = " + str(len(string) - res -1))