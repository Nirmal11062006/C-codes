#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int freq[10]={0};
    for(int i=0;i<a;i++)
    {
        freq[ar[i]]++;
    }
    int max=0;
    int k;
    for(int i=0;i<a;i++)
    {
        if(max<freq[i])
        {
            max=freq[i];
            k=i;
        }
    }
    if(max>a/2)
    {
        printf("%d",k);}

    return 0;
}
