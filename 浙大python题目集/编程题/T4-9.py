user_choice = map(int, input().split(" "))

def menu():
    print("[1] apple")
    print("[2] pear")
    print("[3] orange")
    print("[4] grape")
    print("[0] exit")

flag = 0
menu()
for key in user_choice:
    flag += 1
    if(flag % 6 == 0):
        break
    elif(key == 1):
        print("price = 3.00")
    elif(key == 2):
        print("price = 2.50")
    elif(key == 3):
        print("price = 4.10")
    elif(key == 4):
        print("price = 10.20")
    elif(key == 0):
        exit(0)
    else:
        print("price = 0.00")