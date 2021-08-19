#include<stdio.h>
int main()
{
    long long int n,arr_01[1000100],i,j,f,tmp;

    scanf("%lld",&n);

    for (i=0; i<n; i++)
        scanf("%lld",&arr_01[i]);

    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            if (arr_01[i]>arr_01[j]) {
                tmp = arr_01[j];
                arr_01[j] = arr_01[i];
                arr_01[i] = tmp;
            }
        }
    }
    for (i=0; i<n; i++)
        printf("%lld ",arr_01[i]);
        printf("\n");

    return 0;
}