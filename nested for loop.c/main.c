#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(b=0;b<=a;b++)
    {
        
        for(c=1;c<=a;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    
    return 0;
}