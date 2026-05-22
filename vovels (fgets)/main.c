#include <stdio.h>
int main()
{
    char a[100];

    fgets(a,100,stdin);
    int sum=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a')
        {
            sum=sum+1;
        }
        if(a[i]=='e')
        {
        sum=sum+5;
        }
        if(a[i]=='i')
        {
        sum=sum+9;
        }
        if(a[i]=='o')
        {
        sum=sum+15;
        }
        if(a[i]=='u')
        {
        sum=sum+21;
        }
    }
    printf("%d",sum);

    return 0;
}
