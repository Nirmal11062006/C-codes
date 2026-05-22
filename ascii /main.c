#include <stdio.h>

int main()
{
    int a,i=0,j=97;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("%c ",j);
        j++;
    }

    return 0;
}
