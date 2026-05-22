/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    scanf("%s",a);
    int y=strlen(a);
    for(int i=0;i<y;i++)
    {
        for(int j=i+1;j<y;j++)
        {
            if(a[i]<a[j])
            {
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<y;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}
