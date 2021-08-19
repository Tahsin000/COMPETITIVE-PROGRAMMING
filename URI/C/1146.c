#include<stdio.h>

int main()
{
    int row,col,tmp,rem,x,i;

    while(1) {
        scanf("%d",&x);
        if (x!=0) {
            for(i=1; i<=x; i++) {
                printf("%d",i);
                if (i<x)
                    printf(" ");
            }
            printf("\n");
        } else if (x==0)
            goto tahsin;
    }
tahsin:
    return 0;
}
