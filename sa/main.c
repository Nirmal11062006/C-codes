
#include<stdio.h>
#include<string.h>
int main()
{
	char ar[10],br[10],c[10];
	int i,j=0,k=0,d,y;
	scanf("%c",&ar[10]);
	y=strlen(ar);
	for(i=0; i<y; i++)
	{
		d=("%d",ar[i]);
		if(d>=97&&d<=122)
		{
			br[j]=d;
			j++;
		}
		else if(d>=65&&d<=90)
		{
			c[k]=d;
			k++;
		}
		else
		{

		}
	}
	for(i=0; i<j; i++)
	{
		printf("%c\n",br[i]);
	}
	for(i=0; i<k; i++)
	{
		printf("%c\n",c[i]);
	}
	return 0;
}