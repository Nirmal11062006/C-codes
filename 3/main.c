#include <stdio.h>
int main()
{
    int a,b=0,j=0;
    scanf("%d",&a);
    int ar[a],br[a],cr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(ar[i]==0)
        {
            cr[b]=ar[i];
            b++;
        }
        else
        {
            br[j]=ar[i];
            j++;
        }
        
    }
    for(int i=0;i<b;i++)
    {
        printf("%d",cr[i]);
        
    }
    for(int i=0;i<j;i++)
    {
        printf("%d",br[i]);
    }
    
    

    return 0;
}