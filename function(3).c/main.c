
#include <stdio.h>
int add(int a,int b)
{
    a=500,b=550;
    int c=a+b;
    printf("%d \n%d\n",a,b);
    printf("%d\n",c);
}

int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    printf("%d \n%d\n",a,b);
    x=add(a,b);
     printf("%d",a+b);
    return 0;
}