#include<stdio.h>
int main()
{
    long long int arr[1000000],n,search,f,i, pos;

    scanf("%lld",&n);

    for (i=0; i<n; i++)
        scanf("%lld",&arr[i]);

    scanf("%lld",&search);

    f=0;
    for (i=0; i<n; i++) {
        if (arr[i] == search)
        {
            pos = i;
            f=1;
            break;
        }
    }
    if (f==1)
        printf("%d\n", pos);
    else
        printf("-1\n");


    return 0;
}