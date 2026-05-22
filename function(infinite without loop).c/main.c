
#include <stdio.h>
void name(int a)
{

    if(a>0)
    {
    printf("nirmal\n");
    a--;
    name(a);
    }
    
    

    
}
int main()
{
    int a;
    scanf("%d",&a);
    name(a);
}
        
    

