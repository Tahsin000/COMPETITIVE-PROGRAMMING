#include<stdio.h>
int main()
{
    int a=1,b,c,d,sum;

    for (a=1; a>0; a++) {
        scanf("%d%d",&a,&b);
        sum=0;
        if (a>0 && b>0) {
            if (a>b) {
                for (; b<=a; b++) {
                    printf("%d ",b);
                    sum+=b;
                }
                printf("Sum=%d\n",sum);
            }

            else if (b>a) {
                for (a; a<=b; a++) {
                    printf("%d ",a);
                    sum+=a;
                }
                printf("Sum=%d\n",sum);
            }

            else if (a==b) {
                sum=a;
                printf("%d Sum=%d\n",a,sum);
            }
        }
        if (a<=0 || b<=0) {
            goto tahsin;
        }
    }
tahsin:
    return 0;
}
