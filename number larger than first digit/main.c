/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[50];
    scanf("%s",a);
    int j=0,i,c=0;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]>a[j])
        {
            c++;
        }
    }
    printf("%d",c);
    

    return 0;
}