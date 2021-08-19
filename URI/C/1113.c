#include<stdio.h>
int main()
{
    int a,b,c,d;

    for (a=1; a<=b; b++) {
        scanf("%d%d",&c,&d);
        if (c==d) {
            goto tahsin;
        } else if (c>d) {
            printf("Decrescente\n");
        } else if (c<d) {
            printf("Crescente\n");
        }
    }
tahsin:

    return 0;
}
