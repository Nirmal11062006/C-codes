#include <stdio.h>
int main()
{
    int i,j,fact=1;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        fact=fact*i;
       
    }
    printf("factorial=%d",fact);
    return 0;
}
