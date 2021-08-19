#include<stdio.h>
int main()
{
    int a,b,x,tmp,rem,i,n,count=0;
    scanf("%d",&x);
    for (i=1; i<=x; i++) {
        scanf("%d",&n);
        count=0;
        for (b=2; b<n; b++) {
            if (n%b==0)
                count++;
        }
        if (count==0)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);
    }
    return 0;
}
