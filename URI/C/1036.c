#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,R1,R2,pro1;
    scanf("%lf%lf%lf",&a,&b,&c);

    pro1 = (pow(b,2)-(4*a*c));

    if ( a!=0 &&pro1>0){

    // positive
    R1 = ( -b+ sqrt(pro1) ) /(2.0*a);
    R2 = ( -b- sqrt(pro1) ) /(2.0*a);

    printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);

    }else {
        printf("Impossivel calcular\n");
    }
    return 0;

}
