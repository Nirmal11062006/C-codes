
#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    int y=strlen(a);
    int z=(4-(y%4))%4;
    for(int i=0;i<z;i++)
    {
        b[i]='0';
    }
    for(int i=0;i<y;i++)
    {
        b[i+z]=a[i];
    }
    int x=strlen(b);

    for(int i=0;i<x;i+=4)
    {
        int sum=0;
        sum=sum+(b[i+0]-'0')*8;
        sum=sum+(b[i+1]-'0')*4;
        sum=sum+(b[i+2]-'0')*2;
        sum=sum+(b[i+3]-'0')*1;
        if(sum<9)
        printf("%d",sum);
        else
        printf("%c",sum-10+'A');
        
        
    }

    return 0;
}
