#include<stdio.h>
int main()
{
    int a,b,c,d;
    double z;

    scanf("%d",&a);

    for (b=1; b<=a; b++) {
        scanf("%d%d",&c,&d);
        if (d==0 && c>0 || d==0 && c<0 ) {
            printf("divisao impossivel\n");
        } else {
            z=((double)c/d);
            printf("%.1lf\n",z);
        }
    }
    return 0;
}
