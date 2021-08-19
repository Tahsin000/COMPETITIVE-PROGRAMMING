#include<stdio.h>
int main()
{
    int a,b=1,c;
    double x,y,z,ave,sum=0;

    scanf("%d",&a);

    for (; b<=a ; b++) {
        scanf("%lf%lf%lf",&x,&y,&z);

        sum=(x*2)+(y*3)+(z*5);
        ave=sum/10.0;
        printf("%.1lf\n",ave);
        sum=0;
    }


    return 0;
}
