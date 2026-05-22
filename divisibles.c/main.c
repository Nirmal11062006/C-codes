/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i, a;
   scanf("%d",&a);
   for(i=2;i<a;i++)
   {
       if(a%i==0)
       {
           printf("the divisibles of %d are = %d\n",a,i);
       }
       
       
   }
   
    return 0;
}
