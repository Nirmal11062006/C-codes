n=int(input())
sum=0
while(n>0):
    b=n%10
    n=n//10
    if(b!=2 and b!=4 and b!=6 and b!=8):
        sum=sum+b
print(sum)       