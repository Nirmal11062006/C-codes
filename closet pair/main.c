
#include <stdio.h>

int main()
{
    int a,sum,c=0,d=0,csum=0;
    scanf("%d %d",&a,&sum);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i+i;j<a;j++)
        {
            if(sum==ar[i]+ar[j])
            {
                printf("exact match\n%d %d",ar[i],ar[j]);
                return 0;
            }
            if(ar[i]+ar[j]<sum&&ar[i]+ar[j]>csum)
            {
                csum=ar[i]+ar[j];
                c=ar[i];
                d=ar[j];
            }
        }
    }
    
    printf("current closest pair %d %d",c,d);

    return 0;
}