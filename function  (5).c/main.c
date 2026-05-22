#include <stdio.h>
int add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}
int main()
{
    int x;
    x=add();
    printf("%d",x);
    return 0;
}