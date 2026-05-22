#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>100||a<0)
	{
		printf("Invalid Input");
	}
	if(a<10&&a>=0)
	{
		printf("Alert low water level in tank\n");
	}
	if(a<30&&a>=0)
	{
		printf("Low");
	}
	if(a>30&&a<70)
	{
		printf("Medium");
	}
	if(a>70&&a<=100)
	{
		printf("High");
	}
	return 0;
}
