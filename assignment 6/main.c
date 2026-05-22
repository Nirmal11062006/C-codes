#include <stdio.h>
#include <unistd.h>
int main()
{
	while(1)
	{
		printf("red\n");
		sleep(10);
		printf("yellow\n");
		sleep(3);
		printf("green\n");
		sleep(7);
	}
	return 0;
}