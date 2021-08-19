#include<stdio.h>

double displayReturn(double arr[],int n);

int main()
{
    double arr[100010];
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%lf",&arr[i]);
    printf("%.7lf\n",displayReturn(arr,n));

    return 0;
}

double displayReturn(double arr[],int n)
{
    double sum = 0;
    for (int i=0; i<n; i++)
        sum+=arr[i];
    double index;
    return index = sum/n;
}