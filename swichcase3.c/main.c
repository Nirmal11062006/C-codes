#include <stdio.h>

int main()
{
    int a=5;
    printf("enter the no:",a);
   
    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:printf("odd");
        break;
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:printf("even");
        break;
        default :printf("invalid");
        break;
    }

    return 0;
}