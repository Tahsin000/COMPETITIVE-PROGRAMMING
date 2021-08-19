///358502890 585325539
///358502890 365329221

#include<stdio.h>
int main()
{
    long long int l1,r1,l2,r2;
    scanf("%lld%lld%lld%lld",&l1,&r1,&l2,&r2);
    if (l2<=l1)
    {
        if (l1<=r2 && r2<=r1)
            printf("%lld %lld\n",l1,r2);
        else if (l1<=r2 && r1<=r2)
            printf ("%lld %lld\n",l1,r1);
        else
            printf("-1\n");
    }
    else if (l1<=l2)
    {
        if (l2<=r1 && r1<=r2)
            printf("%lld %lld\n",l2,r1);
        else if (l2<=r1 && r2<=r1)
            printf ("%lld %lld\n",l2,r2);
        else
            printf("-1\n");
    }

    return 0;
}