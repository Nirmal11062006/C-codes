#include <stdio.h>
int main()
{
	int a;
	char b;
	scanf("%d %c",&a,&b);
	printf("age=%d\n",a);
	printf("nationality=%c\n",b);
	if(a>=18)
	{
		printf("your age meets the requirements\n");
		
		switch(b)
		{
		case'i':
			printf("you are elligible to vote\n");
			break;
		default:
			printf(" but you are not eligible to vote due to different nationality\n");
			break;
		}

	}
	else
	{
		printf("you are not elligible to vote");
	}
	return 0;
}
