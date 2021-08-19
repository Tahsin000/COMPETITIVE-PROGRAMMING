#include<stdio.h>

void getArray (int arr[],int n);
void display (long long int arr_03[], int arr01[], int n);
void displayArray(int arr[],int n);
void arrayCopy (int sourch [], int distination[],int n);

int main()
{
    int n;
    int arr_01[100010];
    int arr_02[100010];
    long long int arr_03[100010];
    scanf("%d",&n);
    getArray(arr_01,n);
    getArray(arr_02,n);
    displayArray(arr_02,n);
    displayArray(arr_01,n);

    return 0;
}
void displayArray(int arr[],int n)
{
    for (int i=0l; i<n; i++)
        printf("%d ",arr[i]);
}

void getArray (int arr[],int n)
{
    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    return 0;
}
 