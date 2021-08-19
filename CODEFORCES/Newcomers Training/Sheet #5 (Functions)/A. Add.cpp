#include<stdio.h>
int fun(int x,int y)
{
    return x+y;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d\n",fun(x,y));
    return 0;
}