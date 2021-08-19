#include<stdio.h>
int main()
{
    int n=3,a,b,i,sum=0,tmp;

    while(1)
    {
        scanf("%d%d",&a,&b);

        if (a>b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a>0 && b>0)
        {
            for (i=a; i<=b; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("sum =%d\n",sum);
            sum = 0;
        }
        if (a<=0 || b<=0)
            break;
    }

    return 0;
}