#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&b);
    a=2;
    while (a<=10000)
    {
        printf("%d\n",a);
        a+= b;
    }
    return 0;

}
