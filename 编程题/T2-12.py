import math
a, b, c = map(int, input().split())
if  (a + b > c and a + c > b and b + c > a):
    s = ((a + b + c) / 2)
    print("area = %.2f; perimeter = %.2f" % (math.sqrt(s * (s - a) * (s - b) * (s - c)), (a + b + c)))
else:
    print("These sides do not correspond to a valid triangle")
