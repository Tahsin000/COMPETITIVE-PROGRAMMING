#include<stdio.h>
int main()
{
    int n,i,e,o,p,ne;
    e=o=p=ne=0;
    scanf("%d",&n);
    int arr[10010];
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i=0; i<n; i++)
    {
        if (arr[i]%2==0)
            e++;
        if (arr[i]%2!=0)
            o++;
        if (arr[i]>0)
            p++;
        if (arr[i]<0)
            ne++;
    }

    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",ne);

    return 0;
}