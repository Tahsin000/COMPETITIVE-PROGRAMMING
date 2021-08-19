///. Print floor, ceil and round of
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("floor %d / %d = %.0f\n",x,y,floor(x/(double)y));
    printf("ceil %d / %d = %.0f\n",x,y,ceil((double)x/y));
    printf("round %d / %d = %.0f\n",x,y,round((double)x/y));

    return 0;
}