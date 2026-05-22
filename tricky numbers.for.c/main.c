
#include <stdio.h>

int main()
{
    int a,b=0,c=1,d,i;
    scanf("%d",&a);
    if(a==1)
    {
        printf("%d",b);
    }
    else
    {
    printf("%d\n%d\n",b,c);
    a=a-2;
    for(i=0;i<a;i++)
    {
        d=b+c;
        printf("%d\n",d);
        b=c;
        c=d;
    }
}
    return 0;
}
