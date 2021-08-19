#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    long long i;
    char str[10010];
    scanf("%d", &n);
    while(n--){
        scanf("%s", str);
        strrev(str);
        for (i=0; str[i]!='\0'; i++){
            printf("%c ", str[i]);
        }
    printf("\n");
    }
    return 0;
}