#include <stdio.h>

int main()
{
    int vertices=4;
    int graph[4][4]={0};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    int edge=3;;
    int src,dst;
    for(int i=0;i<edge;i++)
    {
        scanf("%d %d",&src,&dst);
        graph[src][dst]=1;
        //graph[dst][src]=1;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}