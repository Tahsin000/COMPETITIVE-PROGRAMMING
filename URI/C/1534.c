#include<stdio.h>
int main()
{
    int n,i, j;
    int arr[110][110];

    while(scanf("%d",&n) != EOF ){

    for ( i=0; i<n; i++){
        for ( j=0; j<n; j++){
                arr[i][j] = 3;
            if (i == j)
                arr[i][j] = 1;
            if (j == n-i-1)
                arr[i][j] = 2;
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
                printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    }

    return 0;
}
