#include<stdio.h>
int main()
{
    int i,n,y,tmp;
    double x,rem;

    while(1) {
tahsin:
abrar1:
        tmp=0,n=0,rem=0;
        scanf("%lf",&x);
        if (x>=0 && x<=10) {
            ++tmp;
            rem+=x;
            while (1) {
                scanf("%d",&y);
                if (y>=0 && y<=10) {
                    rem+=y;
                    goto abrar2;
                } else
                    printf("nota invalida\n");
            }
        }
tahsin1:
        if(x>10 || x<0) {
            printf("nota invalida\n");
        }
        if (tmp==2) {
abrar2:
            printf("media = %.2lf\n",rem/2.0);
            while (1) {
abrar:
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&n);
                if (n==1)
                    goto tahsin;
                if (n!=1 && n!=2)
                    goto abrar;
                if (n==2)
                    goto towaha;
            }
        }

    }
towaha:
    return 0;

}
