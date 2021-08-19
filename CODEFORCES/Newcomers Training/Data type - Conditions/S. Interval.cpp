#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if (a>=0 && a<=25.0000)
        printf("Interval [0,25]\n");
    else if (a>=25.00001 && a<=50.0000000)
        printf("Interval (25,50]\n");
    else if (a>=50.00001 && a<=75.0000000)
        printf("Interval (50,75]\n");
    else if (a>=75.00001 && a<=100.0000000)
        printf("Interval (75,100]\n");
    else
        printf("Out of Intervals\n");

    return 0;
}