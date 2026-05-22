#include <stdio.h>
int main()
{
	int min=100000000,max=0,i,d,j=0,k;
	int ar[24];
	for(i=0; i<24; i++)
	{
		scanf("%d",&ar[i]);
		d=ar[i];
		if(d<0)
		{
			printf("error");
			return 0;
		}
		if(d>max)
		{
			max=d;
		}
		if(d<min)
		{
			min=d;
		}
		j=j+d;
		k=j/24;
	}
	printf("maximum temperature recorded=%d\n",max);
	printf("minimum temperature recorded=%d\n",min);
	printf("avg temperature=%d\n",k);
	if(k<15)
	{
		printf("temperature is cold today");
	}
	else if(k>45)
	{
		printf("temperature is hot today");
	}
	else
	{
		printf("temperature is Normal today");
	}

	return 0;
}