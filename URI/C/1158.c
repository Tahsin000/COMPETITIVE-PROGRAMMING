#include<stdio.h>
int main()
{
    int a,b,c,i,n,tmp,rem,q,sum;

    scanf("%d",&n);

    for (i=1; i<=n; i++) {
        scanf("%d%d",&a,&b);
        sum=0;
        for (q=1; q<=b; q++) {
            if (a%2==0)
                a+=1;
            sum+=a;
            a+=2;
        }
        printf("%d\n",sum);
    }



    return 0;
}
