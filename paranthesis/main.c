#include<stdlib.h>
#include <stdio.h>
int main()
{
    char a[50];
    scanf("%s",a);
    
    char o[50];
    int t=-1;
    for(int i=0;a[i]!='\0';i++)
    {
       if(a[i]=='{'||a[i]=='('||a[i]=='[')
       {
        t++;
        o[t]=a[i];
       }
    if(a[i]=='}'||a[i]==')'||a[i]==']')
    {
        if(t==-1)
        {
            printf("empty");
        }
        
        else
        {
            if(o[t]=='{'&&a[i]=='}'||o[t]=='['&&a[i]==']'||o[t]=='('&&a[i]==')')
            {
                t--;
            }
            else
            {
            printf("invalid");
            return 0;
            }
        }
    }

    }
    printf("true");

    return 0;
}