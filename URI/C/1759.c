#include<stdio.h>
int main()
{
    int x,a,b,tmp,rem,i;
    scanf("%d",&x);
    for (i=1; i<=x; i++) {
        printf("Ho");
        if (i<x && i>=1)
            printf(" ");
        if (i==x)
            printf("!\n");
    }

    return 0;
}
