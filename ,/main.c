/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{
    char a[100];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.'||a[i]>='0'&&a[i]<='9')
        {
            printf("%c",a[i]);
        }
        else
        {
           
        }
    }

    return 0;
}
