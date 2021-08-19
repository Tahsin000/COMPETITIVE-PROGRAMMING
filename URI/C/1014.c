#include<stdio.h>
int main()
{
    double x,y,result;

    scanf("%lf%lf",&x,&y);

    result= x/y;

    printf("%.3lf km/l\n",result);

    return 0;
}
