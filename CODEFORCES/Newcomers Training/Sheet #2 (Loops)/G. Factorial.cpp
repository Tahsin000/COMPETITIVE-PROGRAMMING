#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);

    long long int tmp=1;

    while(n--) {
        scanf("%d",&a);
        for (i=1; i<=a; i++)
            tmp*=i;

        printf("%lld\n",tmp);
        tmp=1;
    }
    return 0;
}