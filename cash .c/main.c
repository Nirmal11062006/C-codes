#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
    scanf("%d",&a);
    b=a%500;
    c=a/500;
    d=b%200;
    e=b/200;
    f=d%100;
    g=d/100;
    h=f%50;
    i=f/50;
    j=h%20;
    k=h/20;
    l=j%10;
    m=j/10;
    n=l%5;
    o=l/5;
    p=n%2;
    q=n/2;
    r=p%1;
    s=p/1;
    printf("500=%d\n",c);
    printf("200=%d\n",e);
    printf("100=%d\n",g);
    printf("50=%d\n",i);
    printf("20=%d\n",k);
    printf("10=%d\n",m);
    printf("5=%d\n",o);
    printf("2=%d\n",q);
    printf("1=%d\n",s);
    int total=c+e+g+i+k+m+o+q+s;
    printf("total=%d\n",total);
        
        
    
}
