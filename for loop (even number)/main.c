
#include <stdio.h>

int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=0; i<=a; a=a-2)
	{

		if(a==0)
		{
			printf("even");
			break;
		}
		else if(a==1)
		{
			printf("odd");
			break;
		}

	}

	return 0;
}
