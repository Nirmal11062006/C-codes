/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int csum=0,msum=0;
    for(int i=0;i<a;i++)
    {
        int k=i;
        if(k+2<a)
            csum=ar[k++]+ar[k++]+ar[k++];
        if(csum>msum)
            msum=csum;
    }
    printf("%d",msum);

    return 0;
}