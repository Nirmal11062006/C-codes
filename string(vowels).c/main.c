#include <stdio.h>
#include<string.h>
int main()
{
    char sr[10];
    int y,i=0,j=0;
    scanf("%s",sr);
    y=strlen(sr);
    for(i=0;i<y;i++)
    {
        if(sr[i]=='a'||sr[i]=='e'||sr[i]=='i'||sr[i]=='o'||sr[i]=='u')
        {
            j=j+1;
        }
    }
    printf("%d",j);
    return 0;
}
