
#include <stdio.h>

int main()
{
    for(int i=2;i<300;i++)
    {
        int f=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}