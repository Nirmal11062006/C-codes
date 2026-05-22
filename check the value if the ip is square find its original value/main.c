
#include <stdio.h>

int main()
{
    int a,i=1,b;
    scanf("%d",&a);
    while(1)
    {
        b=i*i;
        i++;
        if(b==a)
        {
            printf("PN");
            break;
        }
        if(b>a)
        {
            printf("NPN");
            break;
    }
    }
    

    return 0;
}