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
    while(a>=0)
    {
        if(a==0)
        {
            printf("even");
        }
        else if(a==1)
        {
            printf("odd");
            
        }
        a=a-2;
    }

    return 0;
}
