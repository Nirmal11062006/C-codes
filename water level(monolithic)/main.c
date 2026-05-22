#include <stdio.h>
int main()
{
    int a,b;
    while(1)
    {
    scanf("%d%d",&a,&b);
    printf("water level in (lower tank)=%d\n",a);
    printf("water level in (upper tank)=%d\n",b);
    if(a>100||b>100)
    {
        printf("error input");
        break;
    }
    if(a>20&&b<95&&b>30)
    {
        printf("motor gets started\n");
        while(a>20&&b<95&&b>30)
        {
            a--;
            b++;
            printf("%d:%d\n",a,b);
            
        }
    }
    if(a<=20||b>=95||b<=30)
    {
        printf("motor gets off\n");
    }
    
}
return 0;
}
