#include <stdio.h>
int main()
{
    int a,b,c;
st: scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    scanf("%d",&c);
    if(c==0)
    {
        return 0;
    }
    else
    {
        goto st;
    }
}
