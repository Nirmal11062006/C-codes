/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,i,n,j;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i;j<a;j++)
        {
            if(ar[i]<ar[j])
            {
                int temp;
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d",ar[i]);
    }
    printf("\n");
    scanf("%d",&n);
    int c=1;
    int found=0;
    for(i=1;i<a;i++)
    {
        if(ar[i]!=ar[i-1])
        {
            c++;
            if(c==n)
            {
                printf("%d",ar[i]);
                return 0;
            }
        }
    }
    if(n==1)
    {
        printf("%d",ar[0]);
    }
    else
    {
    printf("not found");
    }

    return 0;
}