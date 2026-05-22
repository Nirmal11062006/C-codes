/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&ar[i]);

	}
	int k=ar[0];
	int count=1;
	for(int i=0; i<n; i++)
	{
		if(ar[i]==k) {
			count++;

		}
		else {
			count--;
			if(count==0)
			{
				k=ar[i];
				count=1;
			}
		}
	}
	count=0;
	for(int i=0; i<n; i++)
	{
		if(ar[i]==k)
		{
			count++;
		}
	}
	if(count>n/2)
	{
		printf("%d",k);
	}









	return 0;
}
