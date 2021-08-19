#include<stdio.h>
int main()
{
    long long int sum,mul,neg,x,y;

    scanf("%lld%lld",&x,&y);
    sum = x + y;
    mul = x * y;
    neg = x - y;

    printf("%lld + %lld = %lld\n",x,y,sum);
    printf("%lld * %lld = %lld\n",x,y,mul);
    printf("%lld - %lld = %lld\n",x,y,neg);

    return 0;
}