#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,Distance,p1,p2;

    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

    p1= x2-x1;

    p2= y2-y1;

    Distance= sqrt((p1*p1)+(p2*p2));

    printf("%.4lf\n",Distance);

    return 0;
}
