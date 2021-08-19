#include<stdio.h>
int main()
{
    // frist value is not float number // second is float number
    int pro1_code,pro2_code,pro1_num,pro2_num;
    float pro1_price,pro2_price,pro1_paid,pro2_paid,total_pade;

    scanf("%d%d%f",&pro1_code,&pro1_num,&pro1_price);
    scanf("%d%d%f",&pro2_code,&pro2_num,&pro2_price);

    pro1_paid = pro1_num*pro1_price;
    pro2_paid = pro2_num*pro2_price;
    total_pade = pro1_paid + pro2_paid;

    printf("VALOR A PAGAR: R$ %.2f\n",total_pade);

    return 0;

}
