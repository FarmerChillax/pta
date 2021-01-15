n = int(input())
str_list = []

for i in range(n):
    str_list.append(input())

for value in str_list:
    if "P" in value and "A" in value and "T" in value:
        print("YES")
        continue


def check(s:str):
    for ch in s:
        if not (ch == "P" or ch == "A" or ch == "T"):
            return False