#include<stdio.h>
long long int sum=0;
int fun(long long int arr[],int n)
{
    if (n==-1) return arr[n];
    fun(arr,n-1);
    sum+=arr[n];
}
int main()
{
    int n,i;
    long long int arr[10010];
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    fun(arr,n);
    printf("%lld\n",sum);

    return 0;
}