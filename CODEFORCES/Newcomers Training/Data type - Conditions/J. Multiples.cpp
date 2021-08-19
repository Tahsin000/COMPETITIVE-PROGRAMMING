#include<stdio.h>
int main()
{
    int x,y,tmp;
    scanf("%d%d",&x,&y);
    if (x<y){
        tmp = x;
        x = y;
        y = tmp;
    }
    printf((x%y==0)?"Multiples\n":"No Multiples\n");

    return 0;
}