/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c=0,i=0,y=0;
    scanf("%d%d",&a,&b);
    for(i=0;c<a;i++)
    {
        c=c+b;
    }
    c=c-b;
    y=a-c;
    if(y==b)
    {
        y=0;
    }
    if(y!=b&&y!=0)
    {
        i=i-1;
    }
    printf("%d  %d",y,i);

    return 0;
}
