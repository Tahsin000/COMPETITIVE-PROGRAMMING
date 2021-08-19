#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&b);
    a=1;
    while (a<=10)
    {
        printf("%d x %d = %d\n",a,b,(a*b));
        a++;
    }
    return 0;

}
