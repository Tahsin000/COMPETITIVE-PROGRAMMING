#include<stdio.h>
int main()
{
    int i,n,rem=0,count=0;
    double x,avg;
    while (1) {
        scanf("%lf",&x);
        if (x>=0) {
            count++;
            rem+=x;
        }
        if (x<0)
            break;
    }
    avg=(double)rem/count;
    printf("%.2lf\n",avg);

    return 0;
}
