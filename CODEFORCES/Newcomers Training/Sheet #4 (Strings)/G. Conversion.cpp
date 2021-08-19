#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000010];
    int a,i=0,len=0;

    gets(s1);

    for (i=0; s1[i]; i++)
    {
        if (s1[i]>='a' && s1[i]<='z')
            printf("%c",toupper(s1[i]));
        else if (s1[i]>='A' && s1[i]<='Z')
            printf("%c",tolower(s1[i]));
        else if (s1[i]==',')
            printf(" ");
    }
    printf("\n");
    return 0;
}