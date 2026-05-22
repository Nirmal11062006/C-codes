#include<stdio.h>
int main()
{
	int a,max=0,b=0,c=0;
	scanf("%d",&a);
	while(1)
	{
		c++;
		int ar[c];
		scanf("%d",&ar[c]);
		b=ar[c];

		if(b>max)
		{
			max=ar[c];
		}
		else if(b<=0)
		{
			if(a>max)
			{
				max=a;
			}
			printf("output=%d",max);
			break;
		}

		else
		{

		}
	}

}