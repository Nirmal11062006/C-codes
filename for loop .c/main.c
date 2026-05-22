/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b=2,c=101,i;
    scanf("%d",&a);
    printf("%d ",c);
    for(i=1;i<a;i++)
    {
        c=c+b;
        printf("%d ",c);
        b=b+2;
    }
    

    return 0;
}
