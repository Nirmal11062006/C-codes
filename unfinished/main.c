
#include <stdio.h>
#include<string.h>

int main()
{
	char a[100],ch[10];
	scanf("%s",a);
	char f[100];
	int y=strlen(a);
	int c=y,b=0,e=4,g=8,x,w=0,add=0;
	while(y>0)
	{
		y=y-4;
		b++;
	}
	printf("%d",b);
	int d=b*4-c;
	printf("%d\n",d);
	for(int i=0; i<d; i++)
	{
		f[i]='0';
		x=d;
	}
	for(int i=0; i<c; i++)
	{
		f[i+x]=a[i];
	}
	printf("%s",f);
	for(int i=0; i<b; i++)
	{
		for(int j=0; j<e; j+4)
		{
			ch[j]=(f[j]-'0')*g;
			g=g/2;
			ch[j+1]=(f[j+1]-'0')*g;
			g=g/2;
			ch[j+2]=(f[j+2]-'0')*g;
			g=g/2;
			ch[j+3]=(f[j+3]-'0')*g;
			g=g/2;



		}
		
	}
	printf("%s",ch);


	return 0;
}