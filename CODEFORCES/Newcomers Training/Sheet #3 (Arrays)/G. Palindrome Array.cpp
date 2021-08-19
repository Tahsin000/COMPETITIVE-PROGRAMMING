#include<stdio.h>
int main()
{
    long long int n,arr_01[1000100],arr_02[1000100],i,j,f,pos;

    scanf("%lld",&n);

    for (i=0; i<n; i++)
        scanf("%lld",&arr_01[i]);

    for (i=0,j=n-1; j>=0; j--,i++)
        arr_02[i]=arr_01[j];

    for (i=0; i<n; i++) {
        if (arr_01[i]==arr_02[i]) {
            f=1;
            continue;
        } else {
            f=-1;
            break;
        }
    }

    if(f==1)
        printf("YES\n");
    else if (f==-1)
        printf("NO\n");

    return 0;
}