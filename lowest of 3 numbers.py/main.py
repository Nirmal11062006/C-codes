
a=int(input())
b=int(input())
c=int(input())
if(a<b and a<c):
    print('a is lowest')
elif(b<a and b<c):
    print('b is lowest')
else:
    print('c is lowest')
k=[a,b,c]
m=min(a,b,c)
n=max(a,b,c)
s=sum(k)
l=len(k)
print('avg',s/l,m,n,s,l)