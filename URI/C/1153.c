#include<stdio.h>
int main()
{
    int i,n,rem=0,x,count=1;

    scanf("%d",&x);
    for (i=1;i<=x;i++){
        count*=i;
    }
    printf("%d\n",count);
    return 0;
}
