/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b<0||b>12)
    {
        printf("invalid input");
    }
    if(b==3||b==4)
    {
        printf("%d",a-((10*a)/100));
    }
    if(b==6||b==7)
    {
        printf("%d",a-((75*a)/100));
    }
    if(b==10||b==11)
    {
        printf("%d",a-((30*a)/100));
    }
    if(b==12)
    {
        printf("%d",a-((35*a)/100));
    }
    else
    {
        printf("%d",a)
    }
    

    return 0;
}
