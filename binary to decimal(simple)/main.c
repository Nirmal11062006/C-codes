#include <stdio.h>

int main()
{
    int a,b,c=0,d,e=1;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        d=b*e;
        c=c+d;
        e=e*2;
        a=a/10;
    }
    printf("%d",c);

    return 0;
}
