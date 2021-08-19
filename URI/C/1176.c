#include<stdio.h>
int main()
{
    long long int arr[100];
    int n,i,j,tmp,pos;

    arr[0] = 0;
    arr[1] = 1;
    for (i=2; i<=60; i++)
        arr[i] = arr[i-1] + arr[i-2];

    scanf("%d",&n);
    while(n--){
        scanf("%d",&pos);
        printf("Fib(%d) = %lld\n",pos,arr[pos]);
    }

    return 0;
}
