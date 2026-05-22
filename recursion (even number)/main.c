/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void recursion(int a)
{
    if(a>1)
    {
        a=a-2;
        recursion(a);
    }
    else if(a==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    recursion(a);

    return 0;
}
