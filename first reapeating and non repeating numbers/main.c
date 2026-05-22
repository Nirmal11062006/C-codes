#include <stdio.h>

int main()
{
    int a,d=0;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    //repeating
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(ar[i]==ar[j])
            {
                printf(" op=%d",ar[i]);
                d=1;
                break;
            }
        }
        if(d==1)
        {
            break;
        }
    }
    if(d==0)
    {
        printf("no reapeating numbers");
    }
    //non reapiting
    int c=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=a;j++)
        {
            if(ar[i]==ar[j])
            {
                c++;
            }}
            if(c==1)
            {
                printf("op=%d",ar[i]);
                return 0;
            }
        
       
        c=0;
    }
    printf("\nall are reapeated numbers");

    return 0;
}
