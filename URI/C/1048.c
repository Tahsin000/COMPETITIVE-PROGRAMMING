#include<stdio.h>
int main()
{
    double a,b,c,d,e;

    scanf("%lf",&a);
//0 - 400.00

    if (a>=0 && a<=400) {
        printf("Novo salario: %.2lf\n",(a*0.15)+a);
        printf("Reajuste ganho: %.2lf\n",(a*0.15));
        printf("Em percentual: 15 %%\n");

    }
//400.01 - 800.00

    else if (a>=400.01 && a<=800) {
        printf("Novo salario: %.2lf\n",(a*0.12)+a);
        printf("Reajuste ganho: %.2lf\n",(a*0.12));
        printf("Em percentual: 12 %%\n");

    }
//800.01 - 1200.00

    else if (a>=800.01 && a<=1200) {
        printf("Novo salario: %.2lf\n",(a*0.10)+a);
        printf("Reajuste ganho: %.2lf\n",(a*0.10));
        printf("Em percentual: 10 %%\n");

    }
//1200.01 - 2000.00

    else if (a>=1200.01 && a<=2000) {
        printf("Novo salario: %.2lf\n",(a*0.07)+a);
        printf("Reajuste ganho: %.2lf\n",(a*0.07));
        printf("Em percentual: 7 %%\n");

    }
//Above 2000.00

    else if (a>=2000.01) {
        printf("Novo salario: %.2lf\n",(a*0.04)+a);
        printf("Reajuste ganho: %.2lf\n",(a*0.04));
        printf("Em percentual: 4 %%\n");

    }


    return 0;
}
