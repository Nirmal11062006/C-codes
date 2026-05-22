#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<a;i++)
    {
        for(int j=1+i;j<a;j++)
        {
            if(ar[i]+ar[j]==b)
            {
                printf("%d %d\n",ar[i],ar[j]);
                return 0;
            }
        }
    }
    return 0;
}