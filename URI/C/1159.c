#include<stdio.h>
int main()
{
    int a,b,c,i,n,tmp,rem,q,sum;

    while (1) {
        scanf("%d",&a);
        sum=0;
        tmp=a;
        for (q=1; q<=5; q++) {
            if (a>0 && a%2!=0 || a<0 && a%2!=0)
                a+=1;
            if (a%2==0)
                a=a;
            sum+=a;
            a+=2;
            if (tmp==0)
                goto tahsin;
        }

        printf("%d\n",sum);
    }
tahsin:

    return 0;
}
