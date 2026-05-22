
#include <stdio.h>

int main()
{
    char a[100];
    //scanf("%s",a); 
    fgets(a, sizeof(a), stdin); //to include space too in an string
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='t'&&a[i+1]=='h'&&a[i+2]=='e'&&a[i+3]==' ')
        {
            i=i+3;
        }
        else
        {
            printf("%c",a[i]);
        }
    }

    return 0;
}
//char *token=strok(name, "\n");
//while(token!=NULL)
