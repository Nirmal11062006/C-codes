#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("output=%d",a);
    }
    else if(b>a&&b>c)
    {
        printf("output=%d",b);
    }
    else
    {
        printf("output=%d",c);
    }
    return 0;
}
