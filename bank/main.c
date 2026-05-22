/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    switch(b)
    {
        case 1:
        scanf("%d",&c);
        printf("%d",a+c);
        break;
        case 2:
        scanf("%d",&c);
        if(a-c>0)
        {
            printf("%d",a-c);
        }
        else
        {
            printf("insufficient balance");
        }
        break;
        default:
        printf("invalid input");
        break;
    }

    return 0;
}
