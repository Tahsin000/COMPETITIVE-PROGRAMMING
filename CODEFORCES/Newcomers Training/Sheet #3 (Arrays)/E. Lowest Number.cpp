#include<stdio.h>
int main()
{
    long long int arr[99999],min=100001,i,pos,n;

    scanf("%d",&n);

    for (i=1; i<=n; i++)
        scanf("%lld",&arr[i]);

    for (i=1; i<=n; i++)
    {

        if (min>arr[i])
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("%lld %lld\n",min,pos);

    return 0;
}