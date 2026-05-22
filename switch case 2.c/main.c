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
   char d;
   printf("\n enter the operator '+' , '-' , '*' \n");
   scanf("%c",&d);
   
   printf("enter 3 numbers\n");
   scanf("%d %d %d ",&a,&b,&c);
  
   switch(d)
   {
       case '+':printf("%d",a+b+c);
       break;
       case '-':printf("%d",a-b-c);
       break;
       case '*':printf("%d",a*b*c);
       break;
       default:printf("invalid input");
       break;
   }
   
}
