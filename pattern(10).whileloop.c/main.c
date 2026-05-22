#include <stdio.h>
int main()
{
    int a,b=0,c=1;
    scanf("%d",&a);
    while(b<=a)
    {
        printf("%d\n",c);
        c=c*10;
        b++;
    }
   
    return 0;
}
