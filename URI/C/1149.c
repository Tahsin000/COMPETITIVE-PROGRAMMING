#include<stdio.h>
int main()
{
    int a,n,tmp,i;

    scanf("%d",&a);
    scanf("%d",&n);

    while(n<=0){
        scanf("%d",&n);
    }
    tmp=0;
    for (i=0; i<n; i++){
        tmp=i+a+tmp;
    }
    printf("%d\n",tmp);

    return 0;
}
