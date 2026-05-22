#include <stdio.h>
#include<string.h>
int main()
{
    int b,c,i,j=25;//j=25 because zindex is 25
    char a[20];
    char d;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        c=a[i]-'a';//type casting
       // printf("%d ",c);
        if(c<=j)
        {
            d=c+'a';//reverse type casting
            j=c;
        }
    }
    for(i=0;i<b;i++)
    {
    printf("%c",d);
    }
}