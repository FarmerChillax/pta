x = float(input())
if(x > 50):
    print("cost = %.2f" % ((0.53 * 50) + (0.53 + 0.05) * (x - 50) ))
elif(x >=0 and x <= 50):
    print("cost = %.2f" % (0.53 * x))
else:
    print("Invalid Value!")
    