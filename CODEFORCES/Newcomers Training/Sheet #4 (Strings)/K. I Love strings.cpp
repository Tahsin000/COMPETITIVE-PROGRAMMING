#include<stdio.h>
#include<string.h>
char s1[10010],s2[500];
int main()
{
    int a,j,i,lens1,lens2,mainlen;

    scanf("%d",&a);

    for (j=0; j<a; j++) {
        scanf("%s",s1);
        scanf("%s",s2);

        lens1=strlen(s1);
        lens2=strlen(s2);

        if (lens1<lens2)
            mainlen=lens1;
        else
            mainlen=lens2;
        for (i=0; i<mainlen; i++) {
            printf("%c%c",s1[i],s2[i]);
        }
        if (lens1<lens2)
            for (i=mainlen; i<lens2; i++)
                printf("%c",s2[i]);
        else
            for (i=mainlen; i<lens1; i++)
                printf("%c",s1[i]);
        printf("\n");
    }
    return 0;
}