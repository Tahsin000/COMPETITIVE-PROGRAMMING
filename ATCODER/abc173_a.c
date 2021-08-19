#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 1000)
        n = 1000 - n;

    else if (n <= 2000)
        n = 2000 - n;

    else if (n <= 3000)
        n = 3000 - n;

    else if (n <= 4000)
        n = 4000 - n;

    else if (n <= 5000)
        n = 5000 - n;

    else if (n <= 6000)
        n = 6000 - n;

    else if (n <= 7000)
        n = 7000 - n;

    else if (n <= 8000)
        n = 8000 - n;

    else if (n <= 9000)
        n = 9000 - n;

    else if (n <= 10000)
        n = 10000 - n;

    printf("%d\n", n);

    return 0;
}
