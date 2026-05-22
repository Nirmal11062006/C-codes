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
    int ar[a];
    {
        for(int i=0;i<a;i++)
        {
            scanf("%d",&ar[i]);
            }
        for(int i=a-1;i>=0;i--)
        {
            printf("%d",ar[i]);
        }
    }

    return 0;
}
