#include<stdio.h>
int main()
{
    int n;
    long long int a, b;
    scanf ("%d", &n);
    while (n--){
    scanf ("%lld%lld", &a, &b);
    if (a%b == 0)
        printf("0\n");
    else
        printf("%lld\n", (b-(a%b)));

    }

    return 0;
}
