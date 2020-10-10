tmep_str = list(input())
target_a, target_b = input().split()
str_len = len(tmep_str)
for index, value in enumerate(reversed(tmep_str)):
    if( value == target_a or value == target_b):
        print("%d %s" % (str_len - index -1, value))