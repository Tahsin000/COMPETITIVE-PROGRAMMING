#include<stdio.h>
int main()
{
    int a,b,c,d=0,sum=0,ave,ave1,x=0,y;

    for (b=1; b<=100; ++b) {
        scanf("%d",&c); //12,13
        ++x;
        for (; d<=c ; d++) {
            if(d>0) {
                ave1=c;
                y=x;
            }
        }
    }
    //ave<c ?
    printf("%d\n%d\n",ave1,y);

    return 0;
}
