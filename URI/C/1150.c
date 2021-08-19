#include<stdio.h>
int main()
{
    int x,z,tmp,i,count;
    scanf("%d",&x);
    scanf("%d",&z);
    while(z<=x) {
        scanf("%d",&z);
    }
    tmp=0;
    count=0;
    for (x; x<z; x++) {
        count++;
        tmp+=x;
        if (tmp>z)
            break;
    }
    printf("%d\n",count);
    return 0;
}
