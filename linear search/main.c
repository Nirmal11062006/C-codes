#include <stdio.h>
int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(int i=0;i<6;i++)
    {
        if(b==a[i])
        {
            printf("found!");
            return 0;
        }
    }
    printf("not Found!");
    return 0;
}