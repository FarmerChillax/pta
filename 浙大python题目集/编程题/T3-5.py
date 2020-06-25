temp_string = input()
temp = ['0','1','2','3','4','5','6', '7', '8', '9']
temp_char = ''
for key in temp_string:
    if key in temp:
        temp_char += key
print(int(temp_char))