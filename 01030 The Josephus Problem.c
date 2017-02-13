#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int next[x+1],now=1;
    int i,j;
    for(i=1;i<x;i++)
        next[i]=i+1;
    next[i]=1;
    while(x-->1)
    {
        printf("%d ",next[now]);
        next[now]=next[next[now]];
        now=next[now];
    }
    printf("\n%d\n",now);
    return 0;
}
