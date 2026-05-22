#include <stdio.h>
#include<string.h>

int main()
{
    int i,c;
    char a[10];
    
    scanf("%s",a);
    int b=strlen(a);
    char ar[b];
    for(i=0;i<b;i++)
    {
        //printf("%d",a[i]);
        ar[i]=a[i]+32;
        printf("%c",ar[i]);
    }
    return 0;
}