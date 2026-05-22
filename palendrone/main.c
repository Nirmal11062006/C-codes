
#include <stdio.h>

int main()
{
    int a,i=0,j,k,l=0;
    scanf("%d",&a);
    char ar[a];
    j=a/2;
    k=a-1;
    for(i=0;i<a;i++)
    {
    scanf(" %c",&ar[i]);
}
for(i=0;i<j;i++)
{

    if(ar[i]==ar[k])
    {
        l=l+1;
    }
    k--;

}
k=a-1;
for(i=k;i>=0;i--)
{
    printf("%c",ar[i]);
}
printf("\n");
if(j==l)
{
    printf("its palendrone");
}
if(j!=l)
{
    printf("not palendronre");
}


    return 0;
}