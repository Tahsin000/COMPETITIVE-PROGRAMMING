#include<stdio.h>
int main()
{
    long long int a,arr[100000],i,tmp=0;

    scanf("%lld",&a);

    for (i=0; i<a; i++)
        scanf("%lld",&arr[i]);

    for (i=0; i<a; i++)
    {
        if (arr[i]>0)
            arr[i] = 1;
        else if (arr[i]<0)
            arr[i]=2;
    }

    for (i=0; i<a; i++)
    {
        printf("%lld",arr[i]);
        printf(" ");
    }
    printf("\n");
    return 0;
}