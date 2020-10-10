student_num = int(input())
if student_num == 0:
    print("average = 0.0")
    print("count = 0")
    exit(0)
student_ach = map(int, input().split(" "))
average = 0
count = 0
for key in student_ach:
    average += key
    if(key >= 60):
        count += 1
    
print("average = %.1f" % (average / student_num))
print("count = %d" % count)