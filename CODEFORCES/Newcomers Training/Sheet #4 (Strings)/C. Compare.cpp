#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000010],s2[1000010];
    int i,tmp=0;
    gets(s1);
    gets(s2);

    if (strcmp(s1,s2)==0) {
        printf("%s\n",s1);
    }
    if (strcmp(s1,s2)>0) {
        printf("%s\n",s2);
    }
    if (strcmp(s1,s2)<0) {
        printf("%s\n",s1);
    }
    return 0;
}