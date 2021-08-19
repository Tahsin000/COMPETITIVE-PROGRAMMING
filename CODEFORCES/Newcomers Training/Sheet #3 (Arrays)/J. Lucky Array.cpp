#include<stdio.h>
int main()
{
    int i,n,tmp,pos =0 ;
    long long int arr[10010];

    tmp = 1e6;
    scanf("%d",&n);
    for (i=0; i<n; i++){
        scanf("%lld",&arr[i]);
        if (tmp >= arr[i])
            tmp = arr[i];
    }
    for (i=0; i<n; i++){
        if (tmp == arr[i])
            pos ++;
    }

    if (pos%2!=0)
        printf("Lucky\n");
    else
        printf("Unlucky\n");

    return 0;
}