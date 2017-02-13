#include<stdio.h>

int main()
{
	int input,i,j,c=1;
	scanf("%d",&input);
	for(i=1;i<=input;i++)
		for(j=1;j<=input;j++)
			printf("%d%c",j==1?c=i*i:(c+=i),j==input?'\n':' ');
	return 0;
}
