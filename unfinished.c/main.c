#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        b=0;
        for(int j=1;j<a;j++)
        {
        
            if(i/i*j==0)
            {
                b=b+1;
                if(b>=2)
                {
                printf("%d ",i);
                
                }
            }
        
        }
    }
    
}