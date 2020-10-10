temp_input = int(input())

def fibonacci(N):
    m, n = 0, 1
    for key in range(0, N):
        m, n = n, n + m
    return m
if temp_input < 1:
    print("Invalid.")
else:
    for key in range(1, temp_input+1):
        print("{:11d}".format(fibonacci(key)), end="")
        if(key % 5 == 0):
            print("")