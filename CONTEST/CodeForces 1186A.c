#include<stdio.h>
int main()
{
    int a,p,n;
    scanf("%d%d%d", &a, &p, &n);

    if (a > p || a > n)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
