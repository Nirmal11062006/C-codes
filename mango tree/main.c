/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a1,a2,b;
    scanf("%d %d %d",&a1,&a2,&b);
    if(b<=a1||b%a1==0||b%a1==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}
