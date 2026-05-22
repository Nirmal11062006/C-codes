#include <stdio.h>

int main()
{
    int a,i=0,j=0,c=0,b=1;
    scanf("%d",&a);
    if(a==1)
    {
        printf("%d",c);
    }
    else
    {
    printf("%d\n%d\n",c,b);
    a=a-2;
    while(i<a)
    {
        j=c+b;
        printf("%d\n",j);
        c=b;
        b=j;
        i++;
    }
    }
    

    return 0;
}