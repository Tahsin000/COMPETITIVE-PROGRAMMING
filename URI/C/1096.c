#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    for (b=1 ;b<=9 ;b+=2){

        for (a=7;a>=5;a--)
            printf("I=%d J=%d\n",b,a);
    }
    return 0;
}
