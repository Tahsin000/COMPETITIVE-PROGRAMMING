#include<stdio.h>
int main()
{
    int n, i;
    long long int arr[10010], count = 0 ;
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%lld", &arr[i]);
        count += arr[i];
    }
    printf("%lld\n", count);

    ///5000000015
    ///5000000015

    return 0;
}
