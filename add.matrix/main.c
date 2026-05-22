
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
	int ar[a][b],br[a][b],cr[a][b];
	int i=0,j=0;
	printf("first matrix\n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("second matrix\n");
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			scanf("%d",&br[i][j]);
		}
	}
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
		    cr[i][j]=ar[i][j]+br[i][j];
			printf("%d ",cr[i][j]);
		}
		printf("\n");
	}



	return 0;
}
