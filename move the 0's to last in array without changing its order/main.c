/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a,b=0;
	scanf("%d",&a);
	int aa[a];
	for(int i=0; i<a; i++)
	{
		scanf("%d",&aa[i]);
	}
	for(int i=0; i<a; i++)
	{
		if(aa[i]!=0)
		{
			printf("%d ",aa[i]);
		}
		else
		{
			b++;
		}
	}
	for(int i=0; i<b; i++)
	{
		printf("0 ");
	}

	return 0;
}
