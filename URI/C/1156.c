#include<stdio.h>
int main()
{
    int a=1,b,c=1,i,count1=3,count=2;
    double sum=1;
    for (i=1; i<=c; c++) {
        sum+=(float)count1/count;
        count1+=2;
        count+=count;

        if (count1==39)
            break;
    }
    printf("%.2lf\n",sum);

    return 0;
}
