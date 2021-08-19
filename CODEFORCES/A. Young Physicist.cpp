#include<stdio.h>
int main()
{
    int n, sumA = 0, sumB = 0 , sumC = 0, i;
    scanf("%d", &n);
    for (i=0; i<n; i++){
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        sumA += a;
        sumB += b;
        sumC += c;
    }
    if (sumA == 0 && sumB == 0 && sumC == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
