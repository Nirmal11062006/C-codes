#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#include<pthread.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int csum=0,msum=100000;
    for(int i=0;i<a;i++)
    {
        int k=i;
        if(k+2<a)
            csum=ar[k++]+ar[k++]+ar[k++];
        if(msum>csum)
            msum=csum;
    }
    printf("%d",msum);
    return 0;
}//csum=sum-a[i]+a[i+3]