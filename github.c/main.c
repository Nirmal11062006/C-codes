/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c=0,d=0;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        c=c+ar[i];
    }
    scanf("%d",&b);
    int br[b];
    for(int i=0;i<b;i++)
    {
        scanf("%d",&br[i]);
         d=d+ar[i];
    }
    if(a==b&&c==d)
    {
            printf("same");
    }
    else
    {
        printf("not same");
    }
}