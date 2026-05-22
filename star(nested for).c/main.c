#include <stdio.h>

int main()
{
    int i,j,c;
    scanf("%d",&c);
    char a='*';
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    

    return 0;
}
