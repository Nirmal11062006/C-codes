
#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s",a);
    for(int i=1;a[i]!='\0';i++)
    {
        if(a[i-1]>=a[i])
        {
            printf("no");
            return 0;
            
        }
    }
    printf("yes");

    return 0;
}
