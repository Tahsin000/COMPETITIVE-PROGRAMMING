#include<stdio.h>
int main()
{
    long long int arr[100010], count [100010] = {}, n, i, a;
        scanf("%lld%lld", &n, &a);
        for (i=1; i<=n; i++)
        {
            scanf("%lld", &arr[i]);
            if (arr[i] <= a)
                count[arr[i]] ++ ;
        }

        for (i=1; i<=a; i++)
        {
            printf("%lld\n", count[i]);
        }

    return 0;
}