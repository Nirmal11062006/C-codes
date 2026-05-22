#include <stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&j);
    for(i=1;i<j;i--)
    {
       k=i%2;
       if(k==0)
       printf("the even number =%d\n",i);
    }
    return 0;
}