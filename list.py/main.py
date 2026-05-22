a=[1,0,45,67,89,1000,30]
print(a)
print(type(a))# datatype of a
print(sum(a))#sum of a
print(min(a))#min of a
print(max(a))# max of a
print(len(a))# size of a
a.append(56)#adds a value 56 at end
a.insert(0,5000)# here 1 is the index and 500 is the value
print(a)
k=a.count(30)# counts how much times 30 has repeated
print(k)
v=sorted(a)# accending order
print(v)
j=v[::-1]# decending order
print(j)
k=a.index(1000)
print(k)
print(a[-1])# prints last value in list
a.remove(30)# deletes a
print(a)