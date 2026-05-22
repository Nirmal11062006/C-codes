/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[50];
    scanf("%s",a);
    int o=0,e=0;//(sum of oddbit-sum of evenbit )%3==0;
    int y=strlen(a);
    for(int i=0;i<y;i++)
    {
        if(i%2==0)
        {
            if(a[i]=='1')
            {
                o++;
            }
        }
        else
        {
            if(a[i]=='1')
            {
                e++;
            }
        }
    }
    if(abs(o-e)%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

    return 0;
}
