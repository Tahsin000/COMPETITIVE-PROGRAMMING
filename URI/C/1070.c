#include<stdio.h>
int main()
{
    int a,n,rem,temp;
      // a = 10
    scanf("%d",&n);
    a=n;
     while ( a<=(n + 12) ){ // 10 plus 12 s 22 , 11 ,13, 15, 17, 19, 21
            if (a%2!=0)
        printf("%d\n",a);
        a++;
        }
    return 0;
}

