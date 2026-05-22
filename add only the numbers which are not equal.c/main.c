#include <stdio.h>
int main()
{
    int a,b,c=0,i=0,j;
    scanf("%d %d",&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    int ar[a];
    while(i<a)
    {
        scanf("%d",&ar[i]);
        j=ar[i];
        i++;
        if(j!=b)
        {
            c=c+j;
        }
    }
    printf("%d",c);
    return 0;
}