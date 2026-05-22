#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int *ptr;
    ptr=(int *)malloc(a*sizeof(int));
    for(i=0;i<a;i++)
    scanf("%d",&ptr[i]);
    for(i=0;i<a;i++)
    printf("%d  ",ptr[i]);
    
    free(ptr);
    return 0;
}
