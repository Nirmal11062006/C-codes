
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum;
    sum=a;
    for(int i=1;i<b;i++)
    {
        sum=sum+a;
    }
    printf("%d",sum);
    

    return 0;
}