/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],result[100];
    scanf("%s %s",a,b);
    int c=strlen(a)-1;
    int d=strlen(b)-1;
    int k=0,carry=0;
    while(c>=0||d>=0)
    {
        int bit1=(c>=0)?a[c--]-'0':0;
        int bit2=(d>=0)?b[d--]-'0':0;
        int sum=bit1+bit2+carry;
        result[k++]=(sum%2)+'0';
        carry=sum/2;
    }
    int y=strlen(result);
    
    for(int i=y;i>=0;i--)
    {
        printf("%c",result[i]);
        
    }
   // printf("%s",result);

    return 0;
}
