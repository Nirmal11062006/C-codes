/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ar[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
        
        if(ar[0]==0)
        {
            printf("The mobile number is invalid because the first number is 0");
        }
        if(ar[i]<0)
        {
            printf("The mobile number is invalid because the number is negative");
        }
        else
        {
            
        }
    }

    return 0;
}