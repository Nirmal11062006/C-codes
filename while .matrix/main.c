#include <stdio.h>
int main()
{
    int a,b,i=0,j=0;
    scanf("%d%d",&a,&b);
    int ar[a][b];
    i=0;
    j=0;
    while(i<a)
    {
        j=0;
        while(j<b)
        {
            scanf("%d",&ar[i][j]);
            j++;
        }
        i=i+1;
    }
    i=0;
    j=0;
    while(i<a)
    {
        j=0;
        while(j<b)
        {
            printf("%d ",ar[i][j]);
            j++;
        }
        i=i+1;
        printf("\n");
        
    }
    return 0;
}