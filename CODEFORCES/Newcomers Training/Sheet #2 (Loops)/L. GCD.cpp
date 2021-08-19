#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    int tmp,rem;
    if (a<b){
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b!=0){
        rem = a%b;
        a = b;
        b = rem;
    }

    printf("%d\n",a);

    return 0;
}