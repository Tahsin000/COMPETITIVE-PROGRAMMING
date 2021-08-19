#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    long long int arr[10010],rem;
    for (i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    rem = arr[0];
    for (i=1; i<n; i++) {
        if (arr[i]>rem) {
            rem = arr[i];
        }
    }
    printf("%d\n",rem);

    return 0;
}