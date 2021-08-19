#include<stdio.h>
int main()
{
    int x,y;
    char c;

    scanf("%d %c%d",&x,&c,&y);

    if (c=='>' && x-y>y-y || c=='<' && x-x<y-x || c=='=' && x-y==y-x)
        printf("Right\n");
    else
        printf("Wrong\n");
}