#include<stdio.h>
int main()
{
    int a=1,b,c,n,rem,q=0,r=-1;
    double i,temp=0;
    for (n=1;n<=a;a++){
        scanf("%lf",&i);
        if (i>=0 && i<=10){
            q++;
            temp+=i;
        if (q==2){
            goto tahsin;
        }
        }
        else
            r++;
        }
    tahsin:
    for (b=0;b<=r;b++){
        printf("nota invalida\n");

    }

    if (q==2){
        printf("media = %.2lf\n",temp/2);
    }





    return 0;

}
