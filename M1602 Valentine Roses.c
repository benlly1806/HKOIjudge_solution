#include<stdio.h>

int main ()
{
    int fin [25] = {1, 1, 1, 1, 1,
                    1, 2, 2, 2, 1,
                    1, 2, 3, 2, 1,
                    1, 2, 2, 2, 1,
                    1, 1, 1, 1, 1};
    int i, input [25], count = 0;
    for (i = 0 ; i < 26 ; i++)
    {
        scanf ("%d", &input [i]);
        if (input [i] != fin [i])
            count++;
    }
    printf ("%d\n", count / 2);
    return 0;
}
