#include<stdio.h>

int main()
{
    int input, i, j, c;
    scanf ("%d", &input);
    for (i = input ; i > 0 ; i--)
        for (j = 1 ; j <= input ; j++)
            printf ("%d%c", j == 1 ? (i == input ? c = input * input * ( input + 1 ) / 2 : ( c-= i + 1 ) ) : (c -= i ) , j == input ? '\n' : ' ');
    return 0;
}
