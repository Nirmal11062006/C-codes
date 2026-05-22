#include <stdio.h>

int main()
{
    int a,b=1;
    scanf("%d",&a);
    while(b<=a)
    {
        printf("%dX%d=%d\n",a,b,a*b);
        b++;
    }
    

    return 0;
}
