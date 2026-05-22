#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	int b=1;
	for(int i=0; b<=a; i++)
	{
		for(int s=1; s<a-i; s++)
			printf(" ");
		for(int j=0; j<i+1&&b<=a; j++)
		{
			printf("%d ",b++);
		}
		printf("\n");
	}

	return 0;
}
