#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str01[100];
    char str02[100];
    char str03[100];
    scanf("%s",str);
    scanf("%s",str01);
    scanf("%s",str02);
    scanf("%s",str03);

    if ( strcmp (str01, str03) == 0 )
        printf("ARE Brothers\n");
    else
        printf("NOT\n");

    return 0;
}