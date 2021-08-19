#include<stdio.h>
int main()
{
    int a,b,c,d;

    for (a=1; a<=b; b++) {
        scanf("%d%d",&c,&d);

        if (c==0 || d==0) {
            goto tahsin;
        } else if (c>0 && d>0) {
            printf("primeiro\n");
        } else if (c>0 && d<0) {
            printf("quarto\n");
        } else if (c<0 && d<0) {
            printf("terceiro\n");
        } else if (c<0 && d>0) {
            printf("segundo\n");
        }
    }
    tahsin:

    return 0;
}
