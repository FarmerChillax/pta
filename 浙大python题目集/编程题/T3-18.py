temp_str = input()
res = ""
for key in temp_str:
    if key.isalpha() and key.lower() not in [temp.lower() for temp in res] and key != " ":
        res += key

if len(res) < 10:
    print("not found")
else:
    print(res[:10])