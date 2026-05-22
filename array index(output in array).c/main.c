#include <stdio.h>
int main()
{
	int a,b,i,j,k,l,m,c;
	printf("index=");
	scanf("%d",&a);
	int ar[a],arrr[c];
	printf("first input\n");
	for(i=0; i<a; i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("index=");
	scanf("%d",&b);
	int arr[b];
	printf("second input\n");
	for(j=0; j<b; j++)
	{
		scanf("%d",&arr[j]);
	}
	if(a!=b)
	{
		i=0;
		printf("\nerror %d",i);
		return 0;
	}
	m=0;
	l=0;
	printf("output");
	for(k=0; k<a; k++)
	{
		arrr[k]=ar[m]+arr[l];
		m++;
		l++;
		printf("%d  ",arrr[k]);
	}
	return 0;
}