#include<stdio.h>
int main()
{
    int arr[100],i,j,tmp;

    for (i=0; i<20; i++){
        scanf("%d",&arr[i]);
    }

    for (i=0,j=19; j>=0; i++,j--){
        printf("N[%d] = %d\n",i,arr[j]);
    }

    return 0;
}
