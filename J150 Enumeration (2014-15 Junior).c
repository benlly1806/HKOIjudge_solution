#include<stdio.h>

int main()
{
    int input,i,j,c=1;
    scanf("%d",&input);
    for(i=0;i<input;i++)
        for(j=1;j<=input;j++)
            printf("%d%c",j==1?c:(c+=4),j==input?'\n':' ');
    return 0;
}
