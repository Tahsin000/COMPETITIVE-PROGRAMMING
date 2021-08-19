#include<stdio.h>
int main()
{
    float n;
    int a;
    scanf("%f",&n);
    a = n;
    if (n-a==0)
        printf("int %d\n",a);
    else
        printf("float %d %.3f\n",a,n-a);
        

    return 0;
}