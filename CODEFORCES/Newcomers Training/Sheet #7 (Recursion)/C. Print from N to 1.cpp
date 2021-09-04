#include<stdio.h>
void fun(int a)
{
    if (a==0) return;
    printf("%d",a);
    if (a!=1) printf(" ");
    fun(a-1);
}
int main()
{
    int n;

    scanf("%d",&n);
    fun(n);
    printf("\n");
    return 0;
}