in_list = [input() for i in range(4)]

week_dict = {"A": "MON", "B": "TUE", "C": "WED", "D": "THU",
             "E": "FRI", "F": "SAT", "G": "SUN"}

is_head = True
for index, value in enumerate(in_list[0]):
    if value == in_list[1][index]:
        if is_head and "A" <= value <= "G":
            print(week_dict.get(value), end=" ")
            is_head = False
        elif not is_head:
            if 'A' <= value <= 'N':
                print(ord(value) - ord('A') + 10, end=":")
                break
            elif '0' <= value <= '9':
                print("{:02}".format(ord(value) - ord('0')), end=":")
                break


for index, value in enumerate(in_list[2]):
    if value == in_list[3][index] and ("a"<= value <= 'z' or "A" <= value <= 'Z'):
        print("{:02}".format(index))
        break
