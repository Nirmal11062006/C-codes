#include <stdio.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if(x>0&&y>0)
    {
        printf("its in 1st quadrant\n");
    }
    else if(x<0&&y>0)
    {
        printf("its in 2nd quadrant\n");
    }
     else if(x==0&&y==0)
    {
        printf("its in origin\n");
    }
    else if(x<0&&y<0)
    {
        printf("its in 3rd quadrant\n");
    }
    else if(x>0&&y<0)
    {
    printf("its in 4th quadrant\n");
    }
    else if(y==0&&x>0)
    {
        printf("its in positive X axis");
    }
    else if(y==0&&x<0)
    {
        printf("its in negative X axis");
    }
    else if(x==0&&y>0)
    {
        printf("its in positive Y axis");
    }
    else if(x==0&&y<0)
    {
        printf("its in negative Y axis");
    }
    else
    {
    printf("invalid input");
    }
    
    return 0;
    
    
}