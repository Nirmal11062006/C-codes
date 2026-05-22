#include <stdio.h>
int main()
{
	int b,c,d,e;
	char a[50];
	scanf("%s%d%d",&a,&b,&c);
	printf("Passenger Name=%s\n",a);
	printf("Age=%d\n",b);
	printf("Travel Distance=%d\n",c);
	d=c*3;
	if(b<0&&c<0)
	{
		printf("error");
	}
	else if(b<5)
	{
		printf("Ticket is free for child under the age of 5");
		d==0;
	}
	else if(b>60)
	{
		printf("(50%) off for elderly\n");
		e=d/2;
		printf("Final Price=%d",e);
	}
	else
	{

		printf("Price=%d",d);
	}

	return 0;
}