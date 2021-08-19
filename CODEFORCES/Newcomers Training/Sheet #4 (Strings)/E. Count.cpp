#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000010];
    int i,tmp,count=0;
    gets(s1);

    for (i=0; s1[i]; i++) {
        tmp = s1[i]-'0';
        count+=tmp;
    }
    printf("%d\n",count);
    return 0;
}