#include<stdio.h>
int main()
{
    int arr[1000],i,j,n,tmp=0,pos;

    scanf("%d",&n);

    for (i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    tmp = 1e9;
    for (i=0; i<n; i++) {
        if (tmp>arr[i]) {
            tmp = arr[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n",tmp,pos);

    return 0;
}
