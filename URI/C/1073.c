#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;

    scanf("%d",&b);
    a = 1;
    while ( a<=b )
        {
            if (a%2==0){
        c = 2;
        d = pow (a,c);
        printf("%d^%d = %d\n",a,c,d);

    }
    a++;
    }
    return 0;
}
