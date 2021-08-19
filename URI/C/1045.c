#include<stdio.h>
int main()
{
    double a,b,c,A,B,C,temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    A = a*a;
    B = b*b;
    C = c*c;
    if(a<b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    if(a<c)
    {
        temp=c;
        c=a;
        a=temp;
    }
    if(b<c)
    {
        temp=c;
        c=b;
        b=temp;
    }

    //printf("%lf%lf%lf",a,b,c);

    // A ≥ B + C, write the message: NAO FORMA TRIANGULO
    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    //if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
    else if (a*a == b*b + c*c)
    {
        printf("TRIANGULO RETANGULO\n");
    }

    //printf("%d%d%d",a,b,c);
    // A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
    else if (a*a > b*b + c*c)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    //if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
    else if (a*a < b*b + c*c)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    // the same size, write the message: TRIANGULO EQUILATERO

    if (a==b && b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    //e is different, write the message: TRIANGULO ISOSCELES
    else if (a==b || b==c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
return 0;
}
