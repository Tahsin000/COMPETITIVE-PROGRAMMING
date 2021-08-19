#include<stdio.h>
int main()
{
    int a,b,c,d,sum;

    scanf("%d",&a);
    for (b=1; b<=a; b++) {
        scanf("%d%d",&c,&d);
        sum=0;
        if (c>d) {
            if (d%2!=0) {
                d+=1;
                for (d; d<c; d++) {
                    if (d%2!=0) {
                        sum+=d;
                    }
                }
                //printf("%d\n",sum);
            } else if (d%2==0) {
                for (d; d<c; d++) {
                    if (d%2!=0) {
                        sum+=d;
                    }
                }
            }
            printf("%d\n",sum);
        } else if (c<d) {
            if (c%2!=0) {
                c+=1;
                for (c; c<d; c++) {
                    if (c%2!=0) {
                        sum+=c;
                    }
                }
                //printf("%d\n",sum);
            } else if (c%2==0) {
                for (c; c<d; c++) {
                    if (c%2!=0) {
                        sum+=c;
                    }
                }
            }
            printf("%d\n",sum);
            }
            else if (c==d) {
                    sum=c-d+sum;
            printf("%d\n",sum);
                }
        }

return 0;
}

