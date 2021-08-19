#include<stdio.h>
int main()
{
    int a,b,c;
    char ch,cha;
    ///A + B = C, A - B = C and A * B = C
    scanf("%d %c%d %c%d",&a,&ch,&b,&cha,&c);

    if (ch=='+' && a+b==c || ch=='-' && a-b==c || ch=='*' && a*b==c)
        printf("Yes\n");
    else{
        if (ch=='+')
            printf("%d\n",a+b);
        else if (ch=='-')
            printf("%d\n",a-b);
        else if (ch=='*')
            printf("%d\n",a*b);
    }

    return 0;
}