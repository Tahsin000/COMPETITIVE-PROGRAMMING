#include<stdio.h>

int fun(int arr[],int n);
void display(int arr[],int n);
void arrayCopy (int sourch[],int distination[],int n);

int main()
{
    int arr[100010];
    int n,t;
    scanf("%d%d",&n,&t);
    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    while(t--)
    {
        fun(arr,n);
    }
    display(arr,n);
    return 0;
}

void arrayCopy (int sourch[],int distination[],int n)
{
    for (int i=0; i<n; i++)
        distination[i] = sourch[i];
}

void display(int arr[],int n)
{
    for (int i=0; i<n; i++)
        printf("%d ",arr[i]);
}

int fun(int arr[],int n)
{
    int copy[100010];
    arrayCopy(arr,copy,n);
    for (int i=0,j=1; i<n; j++,i++)
        copy[j] = arr[i];
    copy[0] = arr[n-1];
    arrayCopy(copy,arr,n);

    return copy;
}