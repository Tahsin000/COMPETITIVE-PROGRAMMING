#include<stdio.h>

void display (int a, int b);

int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    display(a,b);
    return 0;
}

void display (int a, int b)
{
    long long int sum = -1;
    for (int i=0; i<=b; i+=2)
    {
        sum += pow (a,i);
    }
    printf("%lld\n",sum);

    return 0;
}