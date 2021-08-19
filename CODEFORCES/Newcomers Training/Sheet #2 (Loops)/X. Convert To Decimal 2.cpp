#include<stdio.h>
#include<math.h>

int main()
{
    long long i, n, tmp, count=0, rem=0, a;
    scanf("%lld", &a);
    while (a--)
    {
        scanf("%lld", &n);
        i=0;
        while ( n != 0 )
        {
            if (n % 2 == 1)
                count ++;
            n = n/2;
        }
        for (i=0; i<count; i++)
        {
            tmp = pow (2, i);
            rem += tmp;
        }
        printf("%lld\n", rem);
        rem = count =0;
    }

    return 0;
}