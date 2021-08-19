#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    if (a % 2 == 0)
    {
        if (b <= (a/2))
            printf("%lld\n", (b*2)-1);
        else
        {
            b = b - (a/2);
            printf("%lld\n", b * 2);
        }
    }
    else
    {
        if (b <= (a/2)+1)
            printf("%lld\n", (b*2)-1);
        else
        {
            b  = b - ((a/2)+1);
            printf("%lld\n", b * 2);
        }
    }

    return 0;
}