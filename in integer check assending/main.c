#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int max=10;
    while(n>0)
    {
    int digit=n%10;
    if(digit>max)
    {
        printf("no");
        return 0;
    }
    max=digit;
    n=n/10;
}
printf("yes");
    return 0;
}
