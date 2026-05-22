
#include <stdio.h>

int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    int **ptr1;
    **ptr1=*ptr;
    printf("%d",**ptr1);

    return 0;
}
