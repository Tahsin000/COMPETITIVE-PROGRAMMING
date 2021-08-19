#include<stdio.h>

void swap (int ,int );

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}

void swap (int a,int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d %d\n",a,b);
}