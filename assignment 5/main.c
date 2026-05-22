#include <stdio.h>
int main()
{
	int a,balance,c;
	char e;
	scanf("%d",&balance);
	printf("current balance=%d\n",balance);
st:
	printf("For deposit press a\nFor withdrawal press b\nFor balance enquiry press c\nTo exit menu press d\n");
	scanf("\n%c",&e);
	if(e=='a'||e=='A')
	{
		printf("deposit amount=");
		scanf("%d",&a);
		if(a<0)
		{
			printf("invalid inut\n");
			goto st;
		}
		else
		{
			balance=balance+a;
			printf("current balance=%d\n",balance);
			goto st;
		}
	}
	else if(e=='b'||e=='B')
	{
		printf("withdrawal amount=");
		scanf("%d",&c);
		if(c>balance||c<0)
		{
			printf("invalid balance try again\n");
			goto st;
		}
		else
		{
			balance=balance-c;
			printf("remaining balance=%d\n",balance);
			goto st;
		}

	}
	else if(e=='c'||e=='C')
	{
		printf("current balance=%d\n",balance);
		goto st;
	}
	else if(e=='d'||e=='D')
	{
		return 0;

	}
	else
	{
		printf("invalid input");
		goto st;
	}




	return 0;
}
