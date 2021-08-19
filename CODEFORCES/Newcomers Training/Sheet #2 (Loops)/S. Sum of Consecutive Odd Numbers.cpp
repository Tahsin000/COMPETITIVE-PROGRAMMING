#include<stdio.h>
int main()
{
    int n,a,b,tmp,sum=0,i;

    scanf("%d",&n);

    while(n--)
    {

        scanf("%d%d",&a,&b);

        if (a>b)
        {
            tmp=a;
            a=b;
            b=tmp;
        }
        if (a%2!=0)
            a=a+1;

        for (i=a; i<b; i++)
        {
            if (i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}