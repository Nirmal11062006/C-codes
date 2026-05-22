#include <stdio.h>
int main()
{
	int a,i,b,c;
	scanf("%d",&a);
	int ar[a];
	for(i=0; i<a; i++)
	{
		scanf("%d",&ar[i]);
	}
	scanf("%d%d",&b,&c);
	if(b>=a)
	{
	    printf("index error ");
	    return 0;
	}
	for(i=0; i<a; i++) //b[i]=c
	{
		if(i==b)
		{
			printf("%d ",c);
		}
		else
		{
			printf("%d ",ar[i]);
		}
	}
	return 0;
}
