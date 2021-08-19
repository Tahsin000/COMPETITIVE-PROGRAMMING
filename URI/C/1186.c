#include<stdio.h>
int main()
{
    double n,sum=0,arr[15][15];
    int i,j;
    char ch;
    scanf("%c",&ch);
    for (i=0; i<12; i++)
        for (j=0; j<12; j++)
            scanf("%lf",&arr[i][j]);


    for (i=0; i<12; i++)
    {
        for (j=12-i; j<12; j++)
            sum+=arr[i][j];
    }
    printf("%.1lf\n",(ch=='M')?(sum/66.0) : sum);

    return 0;
}
