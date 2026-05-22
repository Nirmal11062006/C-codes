#include <stdio.h>

int main()
{
	int a,even=0,odd=0,i,j=0,k=0;
	scanf("%d",&a);
	int ar[a];
	    for(i=0; i<a; i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0; i<a; i++)
{
	if(ar[i]%2==0)
			even=even+1;
		else
			odd=odd+1;
	}

	int ear[even],oar[odd];
	printf("even%d\nodd%d\n",even,odd);
	j=0,k=0;
	  for(i=0; i<a; i++)
{
	if(ar[i]%2==0)
		{
			ear[j]=ar[i];
			j++;
		}
		else
		{
			oar[k]=ar[i];
			k++;
		}
	}
	for(i=0; i<even; i++) {
	printf("%d  ",ear[i]);
	}
	printf("\n");
	for(i=0; i<odd; i++)
	printf("%d  ",oar[i]);
	return 0;
}
