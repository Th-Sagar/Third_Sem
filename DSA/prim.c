#include<stdio.h>
#include<stdlib.h>
int prims(int n, int cost[100][100])
{
    int i,j,v,u,mincost=0,visited[10],ne=1;
    for(i=0;i<=n;i++)
    {
        visited[i]=0;

    }
    printf("\n The edges cosidered for MST are \n ");
    visited[1]=1;
    while(ne<n)
    {
        for(i=1;min=9909;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    if(visited[i]==0)
                    continue;
                }
                else
                {
                    min=cost[i][j];
                    u=i;
                    v=j;
                }
            }
        }
        if(visited[u]==0 || visited[v]==0)
        {
            printf("%d Edges(%d,%d) = %d", ne++,u,v,min);
            mincost=mincost+min;
            visited[v]=1;
        }
        cost[u][v]=cost[v][u]=999;
        printf("\n Cost of Mst is %d ",mincost);
        
    }
}
int main()
{
    int i,j,n,cost[10][10];
    printf("Read the no. of nodes:");
    scanf("%d",&n);
    printf("\n Read cost matrix \n :");
    for (i=1;i<n;i++)
    {
        for (j=1;j<n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            {
                cost[i][j]=9999;
            }
            prims(n,cost[i][j]);
            
        }
        
    }
    
}