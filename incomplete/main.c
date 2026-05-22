/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    a=a-2;
    int c=a%2;
    int b=c+a/2;
    char d='A';
    for(int i=0;i<b;i++)
    {
        printf("%c ",d++);
        
    }
    for(int i=b;i>=0;i--)
    {
        printf("%c ",d--);
    }

    return 0;
}
