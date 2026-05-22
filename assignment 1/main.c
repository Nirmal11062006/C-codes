#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	g=a+b+c+d+e+f;
	h=g*100/600;
	if(a>100||b>100||c>100||d>100||e>100||f>100||a<0||b<0||c<0||d<0||e<0||f<0)
	{
		printf("INVALID INPUT");
		goto st;
	}
	printf("TOTAL=%d\n",g);
	printf("AVERAGE=%d\n",h);
	if(a>100||b>100||c>100||d>100||e>100||f>100||a<0||b<0||c<0||d<0||e<0||f<0)
	{
		printf("INVALID INPUT");
	}
	else if(h>90)
	{
		printf("EXCELLENT");
	}
	else if(h>75&&h<=90)
	{
		printf("VERY GOOD");
	}
	else if(h>50&&h<=75)
	{
		printf("AVERAGE");
	}
	else
	{
		printf("NEEDS IMPROVEMENT");
	}
st:
	return 0;
}
