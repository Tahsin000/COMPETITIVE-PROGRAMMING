#include<stdio.h>
int main()
{
    int a,i,pos,last,first,rem;
    long long int fib[10900];
    scanf("%d",&a);


    fib[0] = 0;
    fib[1] = 1;

    for (i=2; i<a; i++)
        fib[i] = fib[i-2] + fib[i-1] ;

    printf("%lld\n",fib[a-1]);

    return 0;
    

}