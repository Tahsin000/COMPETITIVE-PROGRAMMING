#include<stdio.h>
int main()
{
    double a,b,c,d,e;

    scanf("%lf",&a); // a = 2500

    b = a - 2000; // 5000 - 2000 = 3000

    c = b - 1000; // 3000 - 1000 = 2000

    d = c - 1500; // 2000 - 1500 = 500

    if ( a>=0 && a<=2000 )
    {
        printf("Isento\n");
    }
    if ( b>0 && b<=1000 )
    {
        b = b * 0.08;
        printf("R$ %.2lf\n",b);
    }
    if ( c>=0 && c<=1500 )
    {
        c = c * 0.18;
        printf("R$ %.2lf\n",80 + c);
    }
    if ( d>0 )
    {
        d = d * 0.28;
        printf("R$ %.2lf\n",80 + 270 + d );
    }

    return 0;
}
