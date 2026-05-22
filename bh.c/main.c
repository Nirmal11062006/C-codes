
#include <stdio.h>

int main()
{
    int a;
    scanf("input = %d\n",&a);
    if(a<0)
    {
        printf("%dthe given number is positive");
    }
    else if(a>0)
    {
        printf("%dthe given value is negative");
        
    }
    else
    {
        printf("%dthe number is zero which is either positive or negative");
        
    }

    return 0;
}