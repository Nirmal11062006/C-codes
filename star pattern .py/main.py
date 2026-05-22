a=input()
for i in range(1,7,1):
    for j in range(1,i):
        print(a,end=' ')
    print('')

t=a+' '
for i in range(1,6):
        print(i*t)  #here its string into int 