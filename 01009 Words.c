#include<stdio.h>

int main ()
{
    char input;
    while(input!=-1)
    {
        input=getchar();
        if((input>='A'&&input<='Z')||
		   (input>='a'&&input<='z')||
		   (input==' ')||(input=='\n'))
            printf("%c",input);
    }
    return 0;
}
