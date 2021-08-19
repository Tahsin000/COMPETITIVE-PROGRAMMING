#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    int temp;

    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);

    if (a>0) {
        temp = 1;
    }
    if (b>0) {
        temp =temp + 1;
    }
    if (c>0) {
        temp =temp + 1;
    }
    if (d>0) {
        temp =temp + 1;
    }
    if (e>0) {
        temp=temp + 1;
    }
    if (f>0) {
        temp=temp + 1;
    }
    printf("%d valores positivos\n",temp);

    return 0;
}
