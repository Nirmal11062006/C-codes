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
    char ar[10];
    int br[10],cr[10];
    int i=0,d,j=0,k=0;
    scanf("%s",ar);
int y=strlen(ar);
    for(i=0;i<y;i++)
    {
        d=("%d",ar[i]);
        if(d>=97&&d<=122)
        {
           br[j]=d;
           j++;
        }
        else if(d>=65&&d<=90)
        {
           cr[k]=d;
           k++;
        }
        else
        {
            
        }
    }
    printf("lower\n");
    for(i=0;i<j;i++)
    {
        printf("%c\n",br[i]);
    }
    printf("caps\n");
    for(i=0;i<k;i++)
    {
        printf("%c\n",cr[i]);
    }
    
}


