#include<stdio.h>

int max (int arr[],int);
int min (int arr[],int);

int main()
{
    int n,i,arr[100010];
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("%d %d\n",min(arr,n),max(arr,n));
}

int max (int arr[],int n)
{
    int i;
    int max = arr[0];
    for (i=1; i<n; i++){
        if (max<arr[i])
            max = arr[i];
    }
    return max;
}

int min (int arr[],int n)
{
    int i;
    int min = arr[0];
    for (i=1; i<n; i++){
        if (min>arr[i])
            min = arr[i];
    }
    return min;
}