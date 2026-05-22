    for(int i=1;i<=6;i++)

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("x  y  i\n");
    for(int i=1;i<=6;i++)
    {
        for(float j=5.5;j<=12.5;j+=0.5)
        {
            float k=2+(j+0.5*i);
            printf("%d  %0.2f  %0.2f \n",i,j,k);
        }
    }

    return 0;
}
