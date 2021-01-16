
import re

re_3 = '([A]*)P(A*)T([A]*)'

n = int(input())
str_list = []


for i in range(n):
    str_list.append(input())

for value in str_list:
    flag3 = re.match(re_3, value)
    # print(flag3)
    if flag3 and len(value) >= 3 and len(flag3.group(1)) * len(flag3.group(2)) == len(flag3.group(3)):
        print("YES")
    else:
        print("NO")




# test_str = "AAAPATATTAAA"

# def check_PAT_char(s:str):
#     for ch in s:
#         if not (ch == "P" or ch == "A" or ch == "T"):
#             return False
#     return True

# print(check_PAT_char(test_str))

# re_1 = '[PAT]*'
# flag = re.match(re_1, test_str)

# if flag.end() == len(test_str):
#     print("Match.")
# else:
#     print("Not match.")

# test_str_2 = "AAPATAA"
# re_2 = '([A]*)PAT([A]*)'
# flag2 = re.match(re_2, test_str_2)
# if flag2.group(1) == flag2.group(2):
#     print("Match")
# else:
#     print("Not Match")


# test_str_3 = "AAAPATATTAAA"
# re_3 = '([A]*)P(A*)T([A]*)'
# flag3 = re.match(re_3, test_str_3)
# print(flag3.groups())
# if len(flag3.group(1)) * len(flag3.group(2)) == len(flag3.group(3)):
#     print("Match")