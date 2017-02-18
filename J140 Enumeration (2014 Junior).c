#include<stdio.h>

int main ()
{
	int input, i, j, count = 1;
	scanf ("%d", &input);
	for (i = 1 ; i <= input ; i++)
		for (j = 1 ; j <= input ; j++)
			printf ("%d%c", j == 1 ? count = i * i : (count += i), j == input ? '\n' : ' ');
	return 0;
}
