#include<stdio.h>
int add(int a,int b)
{
    int g;
    g=a+b;
    return g;
}
int sub(int a,int b)
{
    int h;
    h=a-b;
    return h;
}
int multi(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int flodiv(int a,int b)
{
    int j;
    j=a%b;
    return j;
}
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    c=add(a,b);
    d=sub(a,b);
    e=multi(a,b);
    f=flodiv(a,b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    return 0;
}