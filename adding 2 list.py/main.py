l1=[20,70,60]# we can add 2 list directly we have to add it and create a new list to store it
l2=[30,70,10]
b=len(l1)
l3=[]
for i in range(b):
    c=l1[i]+l2[i]
    l3.append(c)
print(l3)
print(l1+l2)# here its not adding numbers its merging 2 lists