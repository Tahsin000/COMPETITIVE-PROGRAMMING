#include<stdio.h>
int main()
{
    int arr[10000],i,pos,k;
    scanf("%d",&pos);
    k=0;
    for (i=0; i<1000; i++){
        if (k<pos)
            arr[i] = k;
        else
            k = 0;
    k++;
    }
    for (i=0; i<1000; i++)
        printf("N[%d] = %d\n",i,arr[i]);

    return 0;
}
