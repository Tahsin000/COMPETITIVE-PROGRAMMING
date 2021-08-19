#include<stdio.h>
int main()
{
    double arr[1000],var;
    int i;

    scanf("%lf",&var);
    for (i=0; i<100; i++){
        arr[i] = var;
        var/=2.0;
    }

    for (i=0; i<100; i++)
        printf("N[%d] = %.4lf\n",i,arr[i]);

    return 0;
}
