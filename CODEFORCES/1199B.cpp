#include<stdio.h>
#include<math.h>
int main()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    printf("%.13lf\n", (pow((double)b,2) - pow ((double)a,2))/(2 * a));

    return 0;
}
