/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int b,i,c;
	float a=0;
	int count=0;
	scanf("%d",&b);
	int ar[b];
	for(i=1; i<=b; i++)
	{
		scanf("%d",&ar[b]);
		c=ar[b];
		if(c%2==0)
		{
			count=count+1;
			a=a+ar[b];
		}
		else {
		}
	}

	printf(" output=%f",a/count);
	return 0;
}
