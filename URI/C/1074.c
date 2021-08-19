#include<stdio.h>
int main()
{
    int n,i,temp,rem;

    scanf("%d",&i);

    for (n=1; n<=i; n++) {
        scanf("%d",&temp);
        if (temp%2!=0) {
            if (temp>0)
                printf("ODD POSITIVE\n");
            else
                printf("ODD NEGATIVE\n");
        } else if (temp%2==0) {
            if (temp>0)
                printf("EVEN POSITIVE\n");
            else if (temp==0)
                printf("NULL\n");
            else if (temp<0)
                printf("EVEN NEGATIVE\n");
        }
    }
    return 0;
}
