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
    char a[100], b[100], c[100];
    scanf("%s %s", a, b);

    int carry = 0;
    int x = strlen(a);
    int y = strlen(b);
    int i = 0;

    while (x > 0 || y > 0 || carry==1)
    {
        x--;
        y--;

        int sum = carry;

        if (x >= 0)
            sum += a[x] - '0';
        if (y >= 0)
            sum += b[y] - '0';

        carry = 0;
        if (sum == 2)
        {
            sum = 0;
            carry = 1;
        }
        else if (sum == 3)
        {
            sum = 1;
            carry = 1;
        }

        c[i++] = sum + '0';
    }

    c[i] = '\0';
   int d=strlen(c);
   for(int k=d-1;k>=0;k--)
   {
       printf("%c",c[k]);
   }


    return 0;
}
