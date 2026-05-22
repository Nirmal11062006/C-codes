#include <stdio.h>
int main()
{
    int a,i=0,count=0,c;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&c);
    for(i=0;i<a;i++)
    {
        if(ar[i]==c)
            count++;
    }
    if(count>0)
    {
        printf("%d-->YES",c);
    }
    if(count==0)
    {
        printf("%d-->NO",c);
    }
    return 0;
}