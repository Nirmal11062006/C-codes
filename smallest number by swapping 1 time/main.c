#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    for(int i=1;a[i]!='\0';i++)
    {
        if(a[i-1]>a[i])
        {
            //int temp=a[i-1];
            //a[i-1]=a[i];
            //a[i]=temp;
            printf("yes");
            return 0;
        }
    }
    printf("no");

    return 0;
}
