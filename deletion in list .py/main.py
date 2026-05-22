a=int(input())
l=[]
while(a>0):
    b=int(input())
    l.append(b)
    a=a-1
print(l)
b=int(input('enter value='))
c=l.count(b)
for i in range(c):
    l.remove(b)
print(l)