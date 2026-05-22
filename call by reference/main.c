#include <stdio.h>
void add(int *a,int *b)
{
    *a=30;
    *b=30;
}
int main()
{
    int a=2,b=3;
    add(&a,&b);
    printf("%d",a+b);
    return 0;
}
// its call by reference 
//here here the value is changed in the address 