temp_str = input()
res = ""
for key in temp_str:
    if key.isalpha() and key.isupper() and key not in res:
        res += key
if res is "":
    print("Not Found")
else:
    print(res)