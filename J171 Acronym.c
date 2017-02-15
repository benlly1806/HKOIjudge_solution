#include<stdio.h>
#include<string.h>

int main()
{
    char acr [101];
    int x;
    scanf("%s\n%d\n", acr, &x);
    int acrlen = strlen(acr), glen, c = 0;
    int i, j;
    for( i= 0; i < acrlen; i++ )
        acr [i] += 32;
    char guess [5001];
    for( i = 0; i < x; i++, c = 0 )
    {
        gets(guess);
        glen = strlen(guess);
        for( j = 0; j < glen; j++ )
        {
            if( guess [j] >= 'A' && guess [j] <= 'Z' )
                guess[j] += 32;
            if(( !j || guess [j-1] == ' ' ) && guess [j] == acr [c] )
            {
            	c++;
               	guess [j] -= 32;
            }
        }
        printf( "%s\n", c == acrlen ? guess : "No :(" );
    }
    return 0;
}
