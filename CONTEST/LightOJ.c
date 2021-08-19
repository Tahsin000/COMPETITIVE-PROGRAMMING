#include<stdio.h>
int main()
{
    long long int a,b;
    int i=1,n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lld%lld", &a, &b);
        printf("Case %d: %lld\n", i,(a*b)/2);
        i++;
    }

    return 0;
}
