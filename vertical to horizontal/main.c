
#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<a;i++)
    printf("%d  ",ar[i]);

    return 0;
}
