
#include <stdio.h>

int main()
{
    int s;
    scanf("%d",&s);
    int a[s];
    int csum=0;
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    int maxsum=a[0];
    for (int i=0;i<s;i++)
    {
        csum=csum+a[i];
        if(csum>maxsum)
        {
            maxsum=csum;
        }
        if(csum<0)
        {
            csum=0;
        }
    }
    printf("%d",maxsum);

    return 0;
}
