
#include <stdio.h>//binary to decimal
#include <math.h>

int main()
{
    int a,c,d=0,e=0;
    scanf("%d",&a);
    while(a>0)
    {
        c=a%10;
        a=a/10;
       
        if(c!=0&&c!=1)
        {
            printf("not a binary number");
            return 0;
            break;
        }
        if(c==1)
        {
            e=e+pow(2,d);
            d++;
        }
        if(c==0)
        {
            d++;
        }
        
    }
    printf("%d",e);
    
    return 0;
}