#include <stdio.h>
int main()
{
	int a,b=0;
st:
	scanf("%d",&a);
	if(a>0)
	{
		b=b+a;
		goto st;
	}
	printf("%d",b);
	return 0;
}