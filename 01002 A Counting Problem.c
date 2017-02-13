#include<stdio.h>
#include<string.h>

int main ()
{
    char sch[1001],fnd[201],fst;
    int i,j,fdl,x,tmp=0,cnt=0,t=0;
    gets(sch);
    gets(fnd);
    fdl=strlen(fnd);
    x=strlen(sch)-fdl+1;
    for(i=0;i<x;i++,t=0)
    {
        if(sch[i]==fnd[0])
            for(j=i;j<i+fdl;j++)
                if(sch[j]==fnd[t++]);
        if(t==fdl&&cnt++);
    }
    printf("%d\n",cnt);
    return 0;
}
