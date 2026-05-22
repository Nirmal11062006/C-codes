#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    c=a*a;
    d=b-1;
    e=c-a;
    if(b>c||b==0)
    {
        printf("invalid input");
    }
     else if(b<=a||d%a==0||b%a==0||b>=e)
    {
        printf("mango");
    }
    else
    printf("coconut");
    return 0;
}
