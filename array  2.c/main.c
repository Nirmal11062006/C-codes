
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    int ar[a];
    for(b=0;b<a;b++)
    scanf("%d",&ar[b]);
    for(b=0;b<a;b++)
    printf("index%d value%d\n",b,ar[b]);

    return 0;
}
