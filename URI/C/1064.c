#include<stdio.h>
int main()
{

    double a,b,c,d,e,f,temp1;
    int temp;

    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);

    if  (a>0)
    {

        temp = 1;
        temp1 = a;

    }
     if (b>0)
     {

        temp = temp + 1;
        temp1= temp1 + b;

     }
     if  (c>0){

        temp = temp + 1;
        temp1 =temp1 + c;

     }
     if (d>0){
        temp =temp + 1;
        temp1 =temp1 + d;
    }
     if (e>0){
        temp =temp + 1;
        temp1 =temp1 + e;
        }
     if  (f>0)
     {

        temp =temp + 1;
        temp1 =temp1 + f;

     }
        printf("%d valores positivos\n",temp);
        printf("%.1lf\n",temp1/temp);

    return 0;
}
