#include<stdio.h>

int main()
{
    int i,yr,day=0;
    char ans[7][11]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&yr);
    for(i=2000;i<yr;i++,day++,day%=7)
    	if(!(i%400)||(!(i%4)&&(i%100)))
            day++;
    printf("%s\n",ans[day]);
    return 0;
}
