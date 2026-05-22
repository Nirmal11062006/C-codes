a=int(input())
b=[]
d=[]
while(a>0):
    c=int(input())
    if(c%2==1):
        b.append(c)
    else:
        d.append(c)
    a=a-1
e=set(b)
f=set(d)
b=list(e)
d=list(f)
print(b)
print(d)
    