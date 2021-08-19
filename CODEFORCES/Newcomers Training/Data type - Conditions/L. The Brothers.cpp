#include<stdio.h>
int main()
{
    int n,i,max,min;

    scanf("%d",&n);
    max=min=n;
    for (i=1; i<3; i++){
        scanf("%d",&n);

        min = (min>n)? n:min;
        max = (max<n)? n:max;
    }
    printf("%d %d\n",min,max);
    return 0;
}