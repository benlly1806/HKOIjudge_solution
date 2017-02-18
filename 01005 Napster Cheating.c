#include<stdio.h>
#include<string.h>

int main ()
{
	char name [1000],tmp;
	int i, j, len;
	gets (name);
	len = strlen (name);
	for (j = 0 ; j < len ; j++)
		for (i = 0 ; i < len - 5 - j ; i++)
		{
			tmp = name [i];
			name [i] = name [i + 1];
			name [i + 1] = tmp;
		}
	printf ("%s\n", name);
	return 0;
}
