#include<stdio.h>

int main ()
{
    int input, i, j, c;
    scanf ("%d" , &input);
    for (i = 0 ; i < input ; i++)
	for (j = 0 ; j <= i ; j++)
	printf ("%d%c", j == 0 ? (c = i * i + 1) : (c -= i), j == i ? '\n' : ' ');
    return 0;
}
