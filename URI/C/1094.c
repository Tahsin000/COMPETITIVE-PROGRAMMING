#include<stdio.h>
int main()
{
    double x,y,z;
    int a,b,q,sum=0,c_sum=0,r_sum=0,s_sum=0;
    char c,r,s;
    scanf("%d",&a);

    for (b=1 ; b<=a ; b++){
        scanf("%d %c",&q,&c);
    sum+=q;
    if (c=='C'){
        c_sum+=q;
    }
    if (c=='R'){
        r_sum+=q;
    }
    if (c=='S'){
        s_sum+=q;
    }
    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",c_sum);
    printf("Total de ratos: %d\n",r_sum);
    printf("Total de sapos: %d\n",s_sum);
    x=((double)c_sum/sum)*100;
    y=((double)r_sum/sum)*100;
    z=((double)s_sum/sum)*100;

    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);

    return 0;
}
