a=int(input())
n=0;
for i in range(a):
    n=0
    for j in range(1,i):
        if(i%j==0):
            n=n+1
    if(n==1):
        print(i)