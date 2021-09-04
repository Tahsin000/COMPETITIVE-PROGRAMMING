#include<stdio.h>
long long int i=1;
long long int fun(int a)
{
    if (a==0) return 1;
    i*=a;
    fun(a-1);
    return i;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",fun(n));
    return 0;
    ///2432902008176640000
}