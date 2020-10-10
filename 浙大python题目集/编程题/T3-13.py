temp = input()
for key in temp:
    if "A" <= key <= "Z":
        print(chr(ord("A") + ord("Z") - ord(key)), end="")
    else:
        print(key, end="")