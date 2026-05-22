#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,tot,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,tot1;
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	tot=a+b+c+d+e+f+g;
	if(a>24||b>24||c>24||d>24||e>24||f>24||g>24||a<0||b<0||c<0||d<0||e<0||f<0||g<0)
	{
		printf("invalid input");
	}
	if(a<=8&&b<=8&&c<=8&&d<=8&&e<=8&&f<=8&&g<=8)
	{
		printf("%d+%d+%d+%d+%d+%d+%d\nTotal salary=%d",a,b,c,d,e,f,g,tot*100);
	}
	if(a>8||b>8||c>8||d>8||e>8||f>8||g>8)
	{
		if(a>8)
		{
			a1=a-8;
			a=8;
		}
		if(b>8)
		{
			a2=b-8;
			b=8;
		}
		if(c>8)
		{
			a3=c-8;
			c=8;
		}
		if(d>8)
		{
			a4=d-8;
			d=8;
		}
		if(e>8)
		{
			a5=e-8;
			e=8;
		}
		if(f>8)
		{
			a6=f-8;
			f=8;
		}
		if(g>8)
		{
			a7=g-8;
			g=8;
		}
		tot1=a1+a2+a3+a4+a5+a6+a7;
		tot=a+b+c+d+e+f+g;
		tot=tot*100;
		tot1=tot1*200;
		printf("%d+%d+%d+%d+%d+%d+%d\nTotal Amount=%d",a,b,c,d,e,f,g,tot+tot1);
	}

	return 0;
}
