#include <stdio.h>
int main()
{
    int a=1234;
    int sum=0;
    while(a>0)
    {
        int b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("%d",sum);
}