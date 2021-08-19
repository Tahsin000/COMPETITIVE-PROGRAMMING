#include<stdio.h>
int main()
{
    long long int l,k,i,j,arr[120][120];
    scanf("%lld%lld",&l,&k);

    for (i=0; i<l; i++)
        for (j=0; j<k; j++)
            scanf("%lld",&arr[i][j]);

    for (i=0; i<l; i++) {
        for (j=k-1; j>=0; j--) {
            printf("%lld ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}