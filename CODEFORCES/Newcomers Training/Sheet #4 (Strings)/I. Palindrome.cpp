#include<stdio.h>
#include<string.h>
char s1[10001000],s2[10001000];
int main()
{
    int freq[26]= {0},i,pos;
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    if (strcmp(s1,s2)==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}