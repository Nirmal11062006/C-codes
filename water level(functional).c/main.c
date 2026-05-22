#include <stdio.h>
#include<unistd.h>
int on(int a,int b)
{
	int c;
	if(a>20&&b<95&&b>30)
	{
		a--;
		b++;
		printf("%d:%d\n",a,b);
		sleep(0.8);
		c=on(a,b);
	}else
	{
	    printf("motor gets off\n");
	}
	
}
int main()
{
	int a,b,c;
	while(1)
	{
		scanf("%d%d",&a,&b);
		printf("water level in (lower tank)=%d\n",a);
		printf("water level in (upper tank)=%d\n",b);
		if(a>100||b>100)
		{
			printf("invalid input\n");
			break;
		}
		if(a>20&&b<95&&b>30)
		{
			c=on(a,b);

		}
		if(a<=20||b>=95||b<=30)
		{
			printf("motor gets off\n");
		}
	}

	return 0;
}
