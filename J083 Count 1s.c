#include<stdio.h>
#include<math.h>

int main ()
{
    long long int num, ans = 0;
    int i;
    scanf ("%lld", &num);
    for (i = 0 ; i <= 58 ; i++)
    {
        ans += (num / ((long long int) (pow (2, i + 1)))) * ((long long int) (pow (2, i)));
        if (num % ((long long int) pow(2, i + 1)) >= ((long long int) pow(2, i)))
            ans += (num % ((long long int) (pow(2, i)))) + 1;
    }
    printf ("%lld\n", ans);
    return 0;
}
