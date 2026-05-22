#include <stdio.h>
int main() {
	int ar[10];
	int i,a= 0;
	for(i=0; i<10; i++)
	{
		scanf("%d", &ar[i]);
		if(ar[i] < 0||ar[i]>=10)
		{
			a= 1;
		}
	}
	if(ar[0] == 0)
	{
		printf("The mobile number is invalid because the first number is 0\n");
	}
	 else if(a==1)
	{
		printf("The mobile number is invalid because the number is negative\n");
	}
	else if (ar[0]!=0)
	{
		printf("the mobile number is valid");
	}
	return 0;
}
