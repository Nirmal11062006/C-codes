#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a*a;
    if(a%2==0)
    {
        printf("%d",b+a);
    }
    else
    printf("%d",b-a);
}