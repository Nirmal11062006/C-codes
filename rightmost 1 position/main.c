/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int main()
{
    char a[100];
    scanf("%s",a);
    int y=strlen(a);
    int count =-1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1')
        {
            count=i;
            
        }
    }
    printf("%d",count+1);
    
    

    return 0;
}