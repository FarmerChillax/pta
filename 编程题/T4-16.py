a,b,c=input().split()
a,b,c=eval(a),eval(b),eval(c)
if(a+b<=c or a+c<=b or b+c<=a):
    print('no')
else:
    print('yes')