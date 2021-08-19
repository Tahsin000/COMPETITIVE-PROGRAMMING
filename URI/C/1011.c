#include<stdio.h>
int main()
{
    double pi,R,area;
    scanf("%lf",&R);
    pi = 3.14159;
    area = 4/3.0*pi*(R*R*R);
    printf("VOLUME = %.3lf\n",area);
    return 0;

}
