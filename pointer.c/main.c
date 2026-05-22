#include <stdio.h>
int swap(int*i)
{
    *i=50;
    return *i;
}

int main()
{
int i=15;
int* ptr=&i;
printf("%d  ",*ptr);
swap(ptr);
printf("%d",*ptr);

    return 0;
}