#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum=0,sum1=0;

    scanf("%d",&b);

    for (a=1; a<=b; a++) {
        scanf("%d",&c);
        if (c>=10 && c<=20) {
            sum++;
        }
    }
        printf("%d in\n%d out\n",sum,b-sum);

    return 0;
}
