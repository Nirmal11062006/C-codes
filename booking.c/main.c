
#include <stdio.h>

int main()
{
	int a,b,c;
	float d;
	{
		scanf(" %d%d",&a,&b);
		printf("the no of rooms needed=%d\n",a);
		printf("the month (in numbers)=%d\n",b);
	}

	if(b>12)
	{

		printf("the input is invalid\n");
	}
	else if(b==2||b==3||b==5||b==6||b==7||b==8||b==9||b==10)
	{
		c=a*1000;
		printf("the price=%d\n",c);

	}
	else if(b==1||b==4||b==11||b==12)
	{
		d=(a*30*1000/100);
		c=(a*1000+d);
		printf("the price is=%d\n",c);
	}
	else
		printf("error change the input ");
	return 0;
}