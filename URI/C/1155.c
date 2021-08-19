#include<stdio.h>
int main()
{
    int a=1,b,c,i;
    double sum=0;
        for (i=1;i<=100;i++){
                sum+=(double)1/i;
            if (i==100)
                break;
        }
            printf("%.2lf\n",sum);

    return 0;
}
