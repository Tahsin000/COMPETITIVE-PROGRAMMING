#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    (n == 1) ? printf("9 8\n") : printf("%lld %lld\n", (n*8), (n*7));

    return 0;
}
