#include<stdio.h>
int main()
{
    int n,f=0,i;
    scanf("%d",&n);

    for (i=2; i<n; i++) {
        if (n%i==0) {
            f=1;
            break;
        }
    }
    if (f==1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}