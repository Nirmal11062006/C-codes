#include <stdio.h>
#include<string.h>
int main()
{
    char a[50];
    scanf("%s",a);
    int y=strlen(a);
    int n=y-1;
    for(int i=0;i<y/2;i++)
    {
        if(a[i]!=a[n])
        {
            printf("no");
            return 0;
        }
        n--;
    }
    printf("yes");
    return 0;
}
