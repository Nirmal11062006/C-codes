#include <stdio.h>

int main()
{
    int a,b=0,c;
    scanf("%d",&a);
    for(c=1;c<=a;c++)
    {
        if(c%2==0)
        {
            printf("%d\n",c); 
        }
        else 
        {
        printf("%d\n",b);
        b=b+5;
        }
    }

    return 0;
}
