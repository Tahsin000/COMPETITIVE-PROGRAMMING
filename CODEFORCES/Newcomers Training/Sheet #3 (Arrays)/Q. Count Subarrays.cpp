#include<stdio.h>
int main()
{
    int j,i,n,arr1[10010],arr[10010],f;

    scanf("%d",&n);

    for (i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for (i=0; i<n; i++)
        scanf("%d",&arr1[i]);

    f=0;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (arr[i]==arr1[j]) {
                f++;
                arr1[j] = 0;
                break;
            }
        }
    }
    if (f==n)
        printf("yes\n");
    else
        printf("no\n");

    return 0;

}