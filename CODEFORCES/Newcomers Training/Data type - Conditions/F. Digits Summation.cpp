///So the answer is: (3 + 2 = 5)
#include<stdio.h>
int main()
{
    long long int x,y;
    scanf("%lld%lld",&x,&y);
    printf("%lld\n",(x%10)+(y%10));

    return 0;
}