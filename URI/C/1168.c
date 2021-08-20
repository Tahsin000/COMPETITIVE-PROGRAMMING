#include<stdio.h>
int main()
{
    char str[10010];
    int n;
    long long i, count = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", str);
        for (i=0; str[i]; i++)
        {
            if (str[i] == '0')
                count += 6;
            if (str[i] == '1')
                count += 2;
            if (str[i] == '2' || str[i] == '3' || str[i] == '5')
                count += 5;
            if (str[i] == '4')
                count += 4;
            if (str[i] == '6' || str[i] == '9')
                count += 6;
            if (str[i] == '7')
                count += 3;
            if (str[i] == '8')
                count += 7;
        }
        printf("%lld leds\n", count);
        count = 0;
    }
    return 0;
}