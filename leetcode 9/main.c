#include <stdbool.h>
#include<stdio.h>
bool isPalindrome(int x) {
    int a[10];
    int b=x;
    int i=0;
    while(b>0)
    {
        a[i]=b%10;
        i++;
        b=b/10;
    }
    if(x<0)
    {
        return 1;
    }
    if(x==0)
    {
        return 0;
    }
    int c=i/2;
    for(int j=0;j<c;j++)
    {
        
        if(a[j]!=a[i-1])
        {
            return 1;
        }
        --i;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int c=isPalindrome(a);
    if(c==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
}