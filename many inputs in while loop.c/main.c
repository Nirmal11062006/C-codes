#include <stdio.h>

int main()
{
	int a,b=0,c=0;
	while(a>0)
	{
		scanf("%d",&a);
		if(a<=-1)
		{
		    
		}
		else if(a%2==0)
		{
			b=b+a;
		}
		else if(a%2!=0)
		{
			c=c+a;
		}

	}
	printf("%d,",c);
	printf("%d",b);
	return 0;
}
