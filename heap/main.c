#include <stdio.h> 
#include<stdlib.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int *ptr1;
    int *ptr2;
    ptr1=(int *)malloc(a*sizeof(int));//
    for(i=0;i<a;i++)
    {
        scanf("%d",ptr1+i);
    }
    ptr2=(int*)realloc(ptr1,2*a*sizeof(int));
    for(i=0;i<a;i++)
    {
        printf("%d ",*(ptr2+i));
    }
    free(ptr1);
    return 0;
}