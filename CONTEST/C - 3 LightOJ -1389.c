
#include<stdio.h>
int main()

{
    int n, a, c, count = 0, j, i, p;
    char ch[1010];
    scanf("%d", &n);

    for (i=0; i<n; i++){
            scanf("%d", &a);
            scanf("%s", ch);

            count = 0;
        for (j=0; j<a; j++){
            if (ch[j] == '#')
                continue;
            if (ch[j] == '.')
                count++;
            j += 2;
        }
        printf("Case %d: %d\n", i+1, count);
    }
    return 0;
}
