#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100010],s2[100010],s3[100010],rem;
    int i,tmp=0,len1,len2;
    gets(s1);
    gets(s2);

    len1=strlen(s1);
    len2=strlen(s2);
    printf("%d %d\n",len1,len2);

    strcpy(s3,s1);
    strcat(s3,s2);
    printf("%s\n",s3);

    rem=s1[0];
    s1[0]=s2[0];
    s2[0]=rem;

    printf("%s %s\n",s1,s2);
    return 0;
}