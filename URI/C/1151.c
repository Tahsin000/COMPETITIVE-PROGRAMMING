#include<stdio.h>
int main()
{

    int a,b,i=0,tmp,rem=0,x=0,y=1;
    scanf("%d",&a);
    while (i<a){
        if (i<=1){
            printf("%d",i);
        }
        else{
            tmp=x+y;
            x=y;
            y=tmp;
            printf("%d",tmp);
        }
        if (i<a-1)
            printf(" ");
        i++;
    }
    printf("\n");

    return 0;
}
