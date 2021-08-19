#include<stdio.h>
int main()
{
    int a,b,c=7,d=5,e,f;
    for (b=1 ; b<=9 ; b+=2)
    {

        for (a=c; a>=d; a--)
        {
            printf("I=%d J=%d\n",b,a);
        }
        if (c<=15)
        {
            c+=2;
        }
        if (d>=5)
        {
            d+=2;
        }
    }
    return 0;
}
