#include<stdio.h>

int main()
{
    int a,fact=1;
    scanf("%d",&a);
st:if(a>0)
{
    fact=fact*a;
    a--;
    goto st;
}
printf("factorial=%d",fact);    
return 0;   
    
}
