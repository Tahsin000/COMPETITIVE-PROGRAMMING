#include<stdio.h>
int main()
{
    int tmp=0,rem=0,x,y,z,count=0,count1=0,count2=0;
    while (1){
        abrar:
    scanf("%d%d",&x,&y);
    rem++;
    if (x>y){
        count++;
        goto tahsin;
    }
    if(x<y){
        count1++;
        goto tahsin;
    }
    if (x==y){
        count2++;
        goto tahsin;
    }
    while (1){
        tahsin :
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&z);
        if (z==1) goto abrar;
        if (z==2) goto abrar1;
        if (z!=1 || z!=2) goto tahsin;
    }
}
    abrar1:
    printf("%d grenais\n",rem);
    printf("Inter:%d\n",count);
    printf("Gremio:%d\n",count1);
    printf("Empates:%d\n",count2);
    if (count>count1)
        printf("Inter venceu mais\n");
    else if (count<count1)
        printf("Gremio venceu mais\n");
    else if (count==count1)
        printf("Nao houve vencedor\n");
    return 0;
}
