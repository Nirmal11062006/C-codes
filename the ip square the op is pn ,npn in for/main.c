#include <stdio.h>
int main()
{
    int a,b,i=1,c=0;
    scanf("%d",&a);
    for(b=1;b<=a;i++)
    {
        b=i*i;
        if(b==a)
        {
            c=1;
        }
    }
if(c==1)
printf("PN");
else
printf("NPN");
    return 0;
}
