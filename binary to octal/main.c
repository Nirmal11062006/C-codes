#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s",a);
    int y=strlen(a);
    int z=(3-(y%3))%3;
    for(int i=0;i<z;i++)
    {
        b[i]='0';
    }
    for(int i=0;i<y;i++)
    {
        b[i+z]=a[i];
    }
    int sum=0;
    int x=strlen(b);
    for(int i=0;i<x;i+=3)
    {
        sum=sum+(b[i+0]-'0')*1;
        sum=sum+(b[i+1]-'0')*2;
        sum=sum+(b[i+2]-'0')*4;
        printf("%d",sum);
    }

    return 0;
}
