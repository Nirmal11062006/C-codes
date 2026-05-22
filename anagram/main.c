#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int y=strlen(a);
    int x=strlen(b);
    if(y!=x)
    {
        printf("not anagram");
        return 0;
    }
    for(int i=0;i<y;i++)
    {
        int c=0;
        for(int j=0;j<y;j++)
        {
            if(a[i]==b[j])
            {
                c=1;
                b[j]='0';
                break;
            }
        }
        if(c==0)
        {
            printf("not anagram");
            return 0;
        }
    }
    printf("anagram");
    return 0;
}