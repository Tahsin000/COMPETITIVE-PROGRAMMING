#include<stdio.h>
int main()
{
    int x,y,z,tmp,rem,row,col;

    scanf("%d",&x);

    for(row=1;row<=x;row++){
        rem=row;
        for(col=1;col<=3;col++){
            printf("%d",rem);
            rem*=row;
            if (col<3)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
