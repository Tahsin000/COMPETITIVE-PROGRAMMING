#include<stdio.h>
int main()
{
    int L,k,i,n,a;
    while(scanf("%d", &n) != EOF)
    {
        k = 0;
        for (i=0; i<n; i++){
        scanf("%d", &a);
            (k <= a) ? (k = a) : (k = k);
        }
        if (k < 10 )
            L = 1;
        else if ( k <20 )
            L = 2;
        else
            L = 3;
        printf ("%d\n", L);
    }
    return 0;
}