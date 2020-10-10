input_str = input()
temp = ""
signal = True
symbol = ""
for key in input_str:
    if key == "-" and signal:
        symbol = "-"
    if "0" <= key <= "9" or "A" <= key <= "F" or "a" <= key <= "f":
        temp += key
        signal = False
    if key == "#":
        break

if temp != '':
    print('{0}{1}'.format(symbol, int(temp, 16)))
else:
    print(0)