#include<stdio.h>
int main()
{
    int a,b=2,c=1;
    scanf("%d",&a);
    printf("%d",c);
    while(b<=a)
    {
        printf(",%d",b*b);
        b++;
    }
}