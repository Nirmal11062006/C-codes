
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&b);
    for(a=1;a<=10;a++)
    {
        
        printf("%d*",b);
        printf("%d",a);
        printf("=%d\n",b*a);
        
        //printf("%d X %d =%d\n",a,b,a*b); 
        // alternate way
    }

    return 0;
}

