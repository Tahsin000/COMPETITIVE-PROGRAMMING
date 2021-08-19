#include<stdio.h>
int main()
{
    int n,tmp;
    scanf("%d",&n);

    while (n!=0)
    {
        tmp = n%10;
        n/=10;
    }
    if (tmp%2==0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    return 0;
}