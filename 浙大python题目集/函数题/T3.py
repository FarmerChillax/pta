

def CountDigit(number, digit):
    temp_str = str(number)
    res = 0
    while temp_str != "":
        if temp_str[-1] == str(digit):
            res += 1
        temp_str = temp_str[:-1]

    return res

number = -21252
digit = 2
count = CountDigit(number, digit)
print("Number of digit 2 in "+str(number)+":", count)
# print(number // 10 + 1)