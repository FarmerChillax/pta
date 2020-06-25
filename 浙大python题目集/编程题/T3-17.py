s1 = input().strip()
s2 = input().strip()
s1 = s1.replace(s2.upper(), '').replace(s2.lower(), '')
print("result: {}".format(s1))