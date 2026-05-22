
#include <stdio.h>

int main()
{
	int a,b,c=1;
	scanf("%d",&a);
	while(c<=a)
	{
	if(c==1)
		{
		b=0;
		printf("%d\n",b);
		c++;
		}
		else if(c%2==0)
		{
			b=c;
			printf("%d\n",b);
			c++;
		}
		else if(c%2!=0)
		{
			b=(c-2)*5;
			printf("%d\n",b);
			c++;
		}
		


		
	}
	}
