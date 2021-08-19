#include<stdio.h>
int main()
{
    char n;
    double sa,so,tota;
    scanf("%s%lf%lf",&n,&sa,&so);
    tota=sa+(so*15)/100;
    printf("TOTAL = R$ %.2lf\n",tota);
    return 0;
}
