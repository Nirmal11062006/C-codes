
#include <stdio.h>
#include<string.h>
int main()
{
    char a[50];
    scanf("%s",a);
    int b=strlen(a);
    int c=b/2;
    int d=b-1;
    int l=0;
    for(int i=0;i<c;i++)
    {
        if(a[i]==a[d])
        {
            l=l+1;
        }
        d--;
    }
    d=b-1;
    for(int i=d;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    printf("\n");
if(l==c)
{
    printf("its palendrone");
}
else
{
    printf("not palendrone");
}
    return 0;
}
