#include<stdio.h>
int main()

{
    int n,i,tmp, j=0;
    int arr[10010], arrNew[10010] = {};
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<n; i++)
    {
        if (arr[i] != 0)
        {
            arrNew[j++] = arr[i];
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%d ", arrNew[i]);
    }
    return 0;
}