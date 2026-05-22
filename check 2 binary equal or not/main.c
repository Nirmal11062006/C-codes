/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int 
    i=0,j=0;
    scanf(" %s",a);
     scanf(" %s",b);
    
    while(a[i]=='0')
    {
        i++;
    }
    while(b[j]=='0')
    {
        j++;
    }
    int y=strlen(a);
    for(int k=i;k<y;k++)
    {
        if(a[k]!=b[j])
        {
            printf("not equal");
            return 0;
            
        }
        j++;
    }
    printf("equal");

    return 0;
}
