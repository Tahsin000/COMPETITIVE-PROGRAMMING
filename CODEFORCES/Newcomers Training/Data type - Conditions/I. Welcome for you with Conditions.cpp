///if A is greater than or equal to B. Otherwise print "No
#include<stdio.h>
int main()
{
    long long int x,y;
    scanf("%lld%lld",&x,&y);
    if (x>=y)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}