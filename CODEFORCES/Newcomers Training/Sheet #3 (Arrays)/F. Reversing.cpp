#include<stdio.h>
int main()
{
    long long int n,arr[1000100],i,j,tmp,pos;

    scanf("%lld",&n);

    for (i=0; i<n; i++)
        scanf("%lld",&arr[i]);

    for (i=n-1; i>=0; i--)
        printf("%lld ",arr[i]);
    printf("\n");

    return 0;
}