#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    scanf("%s %s",a,b);
    int x=strlen(a)-1;
    int y=strlen(b)-1;
    int i=0;
    int diff=0;
    while(x>=0||y>=0||diff==1)
    {
        int sub=0;
        if(x>=0)
        {
            sub+=a[x]-'0';
        }
        if(y>=0)
        {
            sub-=b[y]-'0';
        }
        sub-=diff;
        diff=0;
        if(sub==-1||sub==-2)
        {
            sub=1;
            diff=1;
        }
        c[i++]=sub+'0';
        x--;
        y--;
        }
        for(int j=i-1;j>=0;j--)
        {
            printf("%c",c[j]);
        }
    return 0;
}
