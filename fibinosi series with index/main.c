//5-->3,7-->8,8-->13,9-->21
#include <stdio.h>

int main()
{
    int a,b=0,c=1,d,i=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        d=b+c;
        c=b;
        b=d;

    }
printf("%d",d);
    return 0;
}