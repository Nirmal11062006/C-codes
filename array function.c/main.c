	print(&ar[0],a);//initial address


#include <stdio.h>
void print(int *ptr,int a)
{
	for(int b=0; b<a; b++)
		printf("%d  ",*(ptr+b));
}

int main()
{
	int a,i;
	scanf("%d",&a);
	int ar[a];
	for(i=0; i<a; i++)

		scanf("%d",&ar[i]);
	print(&ar[0],a);//initial address


	return 0;
}
