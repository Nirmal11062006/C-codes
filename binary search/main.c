/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int aa[a];
	for(int i=0; i<a; i++)
	{
		scanf("%d",&aa[i]);
	}
	int low=0,high=a-1;

	while(low<=high) {
		int mid = (low+high) / 2;

		if (aa[mid] == b)
		{
			printf("true");
			return 0;
		}
		else if (b < aa[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	printf("false");

	return 0;
}
