#include<stdio.h>
int main()
{
    char str[1000010];
    int i,sum=0,a;

    scanf("%d ",&a);

    for (i=0; i<a; i++)
        scanf("%c",&str[i]);
    str[i] = '\0';

    for (i=0; i<a; i++)
        sum+= str[i] - '0';

    printf("%d\n",sum);

    return 0;
}