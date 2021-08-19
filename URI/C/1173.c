#include<stdio.h>
int main()
{
    int arr[100],n,i,tmp;
    scanf("%d",&n);
    tmp = n;
    for (i=0; i<10; i++){
        if (i==0)
            arr[i] = n;
        else
            arr[i] = tmp;
        tmp*=2;
    }
    for (i=0; i<10; i++)
        printf("N[%d] = %d\n",i,arr[i]);

    return 0;
}
