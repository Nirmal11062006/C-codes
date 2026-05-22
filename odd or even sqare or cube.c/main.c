#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c=1;
	scanf("%d",&a);
	while(c<=a)
	{
		
		if(c%2==0)
		{
			b=pow(c,3);

		}
		else if(c%2!=0)
		{
			b=pow(c,2);
		}
		printf("%d\n",b);
		c++;
	}
	return 0;
}