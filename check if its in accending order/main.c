#include <stdio.h>
#include<string.h>
int main()
{
	char a[50];
	scanf("%s",a);
	int y=strlen(a);
	if(y==1)
	{
		printf("yes");
		return 0;
	}
	for(int i=0; i<y; i++)
	{
		for(int j=i+0; j<y; j++)
		{
			if(a[i]>a[j])
			{
				printf("NO");
				return 0;
			}
		}
	}
	printf("yes");
	return 0;
}
