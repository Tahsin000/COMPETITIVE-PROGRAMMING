#include<stdio.h>
void fun(int n)
{
    int i;
    for(i=1; i<=n; i++){
        printf("%d",i);
        if (i<n)
            printf(" ");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}