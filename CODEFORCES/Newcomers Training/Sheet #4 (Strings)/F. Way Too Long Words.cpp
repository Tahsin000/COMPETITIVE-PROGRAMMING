#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000010];
    int a,i=0,len=0;

    scanf("%d",&a);

    for (i=0; i<=a; i++) {
        gets(s1);
        len=strlen(s1);
        if (len>0 && len<=10)
            printf("%s\n",s1);
        else if (len>=11)
            printf("%c%d%c\n",s1[0],len-2,s1[len-1]);
    }
    return 0;
}