#include <stdio.h>
//sub program
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}//main program
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=add(a,b);
    printf("%d",x);
    return 0;
}
