#include <stdio.h>

int main()
{
    int a,b,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&b);
    int br[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&br[i]);
    }
    for(i=0;i<a;i++)
    {
        printf("%d\n",ar[i]+br[i]);
    }


    return 0;
}