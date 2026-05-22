#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    int y=strlen(a);
    int c=0;
    for(int i=y-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j++)
        if(a[i]<a[j])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("not passible");
}