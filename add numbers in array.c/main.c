#include <stdio.h>
// add numbers in array
int main()
{
    int a,i;
    int c=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[a]);
        c=c+ar[a];
        
    }
printf("%d",c);
    return 0;
}