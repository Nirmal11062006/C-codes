#include <stdio.h>//to find prime numbers
int main()
{
	int a,j=0,i=0,k=0,count=0;
	scanf("%d",&a);
	for(i=1; i<=a; i++)
	{
		for(j=1; j<=a; j++)
		{
			if(a%j==0)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
				int ear[count];
				for(i=1; i<=count; i++)
				{

					ear[k]=i;
					k++;

				}
				for(i=1; i<k; i++)
				{
					printf("%d",ear[i]);
				}
	return 0;
}
