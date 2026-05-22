
#include <stdio.h>

int main()
{
	int a,b=0,c=0;
	scanf("%d",&a);
	int ar[a];
	while(b<a)
	{
		scanf("%d",&ar[b]);

		b++;
	}
	while(c<a)
	{
		printf("address=%d  value=%d\n",&ar[c],ar[c]);
		c++;

	}

	return 0;
}
