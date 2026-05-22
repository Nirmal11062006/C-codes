a=[97,300,20,1,6,600]
b=len(a)
d=[]
for i in range(b):
    c=min(a)
    a.remove(c)
    d.append(c)
print(d)  