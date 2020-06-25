input_dict = {
    'letter': 0,
    'blank': 0,
    'digit': 0,
    'other': 0
}

temp_len = 0

while True:
    temp_list = input()
    temp_len += len(temp_list)
    
    for key in temp_list:
        if key.isalpha():
            input_dict['letter'] += 1
        elif key.isdigit():
            input_dict['digit'] += 1
        elif key == " ":
            input_dict['blank'] += 1
        else:
            input_dict['other'] += 1

    if(temp_len + input_dict['blank'] >= 10):
        break
    input_dict['blank'] += 1

print("letter = %(letter)d, blank = %(blank)d, digit = %(digit)d, other = %(other)d" % input_dict)