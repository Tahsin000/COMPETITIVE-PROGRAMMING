#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int i,a,tmp=0,arr[100010];
    scanf("%lld",&a);

    for (i=0; i<a; i++){
        scanf("%lld",&arr[i]);
    }
    for (i=0; i<a; i++){
        if (arr[i]<=10)
            printf("A[%lld] = %lld\n",i,arr[i]);
    }
    return 0;
}