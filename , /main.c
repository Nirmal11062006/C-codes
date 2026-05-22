#include <stdio.h>
#include<string.h>
int main()
{
    char a[50];
    scanf("%s",a);
    int y=strlen(a);
    for(int i=0;i<y;i++)
    {
        printf("%c",a[i]);
        if((y-i)%4==0)
        {
            printf(",");
        }
    }
    

    return 0;
}
