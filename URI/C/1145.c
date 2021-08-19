#include<stdio.h>
int main()
{
    int n,i,x,j,tmp,count;
    scanf("%d",&n);
    scanf("%d",&x);
    count = 0;
    for(i=0; i<x; i=tmp) {
        for (j=1; j<=n; j++) {
            tmp=i+j;
            if (j==1)
                printf("%d",tmp);
            else
                printf(" %d",tmp);
            if (tmp==x) {
                count++;
                break;
            }
        }
        printf("\n");
        if (count==1)
            break;
    }
    return 0;
}
