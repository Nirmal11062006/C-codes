#include <stdio.h>
int main()
{
	int j=0,h=0,g=0,i=0,k=0;
	int ar[100];
	int e;
	char d;
while(1)
	    {
		printf("bala=a\nbharat=b\nNirmal=c\nto stop=f\n");
		printf("vote=\n");
		scanf(" %c",&d);
		scanf(" %d",&ar[i]);
		i++;

		if(d=='f')
		{
			printf("bala=%d\nbharat=%d\nnirmal=%d\n",j,h,g);
			for(k=0; k<i-1; k++)
			{
				printf("%d  ",ar[k]);
			}
			
			return 0;
		}
		
		else if(d=='a'||d=='A')
		{
			printf("voting complete\n");
			j=j+1;
		}
		else if(d=='b'||d=='B')
		{
			printf("voting complete\n");
			h=h+1;
		}
		else if(d=='c'||d=='C')
		{
			printf("voting complete\n");
			g=g+1;
			
		}
		else if(d!='a' && d!='b' && d!='c' && d!='f')
		{
			printf("NOTA\n");
		}
		else
		{
			
		}
	
}
	return 0;
}