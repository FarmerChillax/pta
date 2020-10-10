temp_str = input()
temp = ""
for key in temp_str:
    if key != "#":
        if key.isupper():
            temp += key.lower()
        else:
            temp += key.upper()

print(temp)