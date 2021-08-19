#include<stdio.h>
int main()
{
    int a[20],b,c,tmp,rem,i,n;

    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
        if (a[i]<=0)
            printf("X[%d] = 1\n",i);
        else
            printf("X[%d] = %d\n",i,a[i]);
    }

    return 0;
}
