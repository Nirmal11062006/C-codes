#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<=0)
	{
		printf("Invalid input");
	}
	else if(a<=5)
	{
		printf("Fine Amount=%d",a*2);
	}
	else if(a<=10)
	{
		printf("Fine Amount=%d",a*5);
	}
	else if(a<=30)
	{
		printf("Fine Amount=%d",a*10);
	}
	else if(a>30)
	{
		printf("Membership Cancelled");
	}
	return 0;
}
