#include<stdio.h>
#include<string.h>

int main()
{
    char s1[2010],s2[2010];

    gets(s1);
    gets(s2);

    printf("%d %d\n",strlen(s1),strlen(s2));
    strcat(s1," ");
    strcat(s1,s2);
    printf("%s\n",s1);

    return 0;
}