#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    scanf("%s",a);
    int c=0;
    int y=strlen(a);
    for(int i=y;i>=0;i--)
    {
        if(a[i]=='1')
        {
            printf("%d",y-i);
            c=1;
            break;
            }
    }
    if(c==0)
    {
        printf("-1");
    }

    return 0;
}
