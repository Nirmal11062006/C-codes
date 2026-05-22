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
    if(a==0||a==2||a==4||a==6||a==8||a==10)
    {
        printf("the number is even");
        
    }
    else if(a==1||a==3||a==5||a==7||a==9)
    {
        printf("the number is odd");
       
    }
    else
    printf("invalid input");
    

    return 0;
}
