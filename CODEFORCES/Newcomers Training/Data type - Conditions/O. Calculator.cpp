#include<stdio.h>
int main()
{
    int x,y;
    char c;
    scanf("%d%c%d",&x,&c,&y);
    if (c=='+')
        printf("%d\n",x+y);
    if (c=='-')
        printf("%d\n",x-y);
    if (c=='*')
        printf("%d\n",x*y);
    if (c=='/')
        printf
        ("%d\n",x/y);
    return 0;
}