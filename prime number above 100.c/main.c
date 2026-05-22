
#include <stdio.h>

int main()
{
	int a,i,b=100,j=0;
	scanf("%d",&a);
	int ar[a];
	for(i=2; i>0; i++)
	{
	
			if(b%i!=0) 
			{
				ar[j]=b;
				b=b+1;
				j++;
			}
			if(j>=a)
			{
				goto st;
		}

		else
			b=b+1;
		
	}
st:
	for(i=0; i<a; i++)
		printf("%d ",ar[i]);

	return 0;
}//prime number above 100
