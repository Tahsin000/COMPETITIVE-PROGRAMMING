#include<stdio.h>
int main()
{
    int n,a,tmp=0,rem=0,i=1;
    scanf("%d",&n);
    a = n;
    while(n!=0){
        rem = n%10;
        tmp = tmp*10+rem;
        n/=10;
    }
    printf("%d\n%s\n",tmp,(a==tmp)? "YES":"NO");
    return 0;
}