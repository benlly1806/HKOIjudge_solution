#include<stdio.h>

int main ()
{
    int i, n, money, times = 0, spend;
    scanf ("%d%d", &money, &n);
    while (n-- > 0)
    {
        scanf ("%d", &spend);
        money -= spend;
        if (money <= 0 && ++times)
        	money += 250;
    }
    printf ("$%d\n", 250 * times);
    return 0;
}
