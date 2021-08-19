#include<stdio.h>
int main()
{
    int a,b,c;
    double result;

    scanf("%d%d",&a,&b);

    c=a*b;

    result=c/12.0;

    printf("%.3lf\n",result);

    return 0;
}
