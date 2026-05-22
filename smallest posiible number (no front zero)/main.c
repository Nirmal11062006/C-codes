
#include <stdio.h>
#include<string.h>

int main()
{
    char a[50];
    scanf("%s",a);
    int i,j,y=strlen(a);
    for(i=0;i<y;i++)
    {
        for(j=i+1;j<y;j++)
        {
            if(a[i]>a[j])
            {
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }}//00012->10002where first zero is replaced with first non zero
    if(a[0]=='0')
    {
        for(i=0;i<y;i++)
        {
            if(a[i]!='0')
            {
                char temp=a[i];
                a[i]=a[0];
                a[0]=temp;
                break;
            }
        }
    
    }
    printf("%s",a);

    return 0;
}
