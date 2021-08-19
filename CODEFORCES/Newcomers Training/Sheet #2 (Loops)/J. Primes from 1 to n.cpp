#include<stdio.h>
int main()
{
    int n,f=0,i,j;
    scanf("%d",&n);

    for (i=2; i<=n; i++)
    {
        for (j=2; j<i; j++)
        {
            if (i%j==0)
                f=1;
        }
        if (f==0)
            printf("%d ",i);
        else
            f=0;
    }
    printf("\n");

    return 0;
}