#include <stdio.h>
int main()
{
    int i,j,b=0;
    scanf("%d",&j);
    for(i=1;i<=j;i=i+2)
    {
        b=b+i;
    }
    printf("output=%d",b);
    

    return 0;
}
