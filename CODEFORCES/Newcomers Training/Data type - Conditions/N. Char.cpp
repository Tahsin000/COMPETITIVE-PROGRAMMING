#include<stdio.h>
int main()
{
    char n,jus;
    scanf("%c",&n);
    jus = n;
    printf("%c\n",(jus==tolower(n))?toupper(n):tolower(jus));
    return 0;
}