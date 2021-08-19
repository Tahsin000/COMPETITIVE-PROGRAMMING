#include<stdio.h>
#include<string.h>
int main()
{
    char x[30],y[30],z[30];
    char a[]="vertebrado",a1[]="invertebrado";
    char b[30]="ave",b1[30]="mamifero",b2[30]="inseto",b3[30]="anelideo";
    char c[30]="carnivoro",c1[30]="onivoro",c2[30]="herbivoro",c3[30]="hematofago";

    scanf("%s%s%s",&x,&y,&z);

    if (0==strcmp(x,a) && 0==strcmp(y,b) && 0==strcmp(z,c)){
        printf("aguia\n");
    }

    if (0==strcmp(x,a) && 0==strcmp(y,b) && 0==strcmp(z,c1)){
        printf("pomba\n");
    }

    if (0==strcmp(x,a) && 0==strcmp(y,b1) && 0==strcmp(z,c1)){
        printf("homem\n");
    }

    if (0==strcmp(x,a) && 0==strcmp(y,b1) && 0==strcmp(z,c2)){
        printf("vaca\n");
    }

    if (0==strcmp(x,a1) && 0==strcmp(y,b2) && 0==strcmp(z,c3)){
        printf("pulga\n");
    }

    if (0==strcmp(x,a1) && 0==strcmp(y,b2) && 0==strcmp(z,c2)){
        printf("lagarta\n");
    }

    if (0==strcmp(x,a1) && 0==strcmp(y,b3) && 0==strcmp(z,c3)){
        printf("sanguessuga\n");
    }

    if (0==strcmp(x,a1) && 0==strcmp(y,b3) && 0==strcmp(z,c1)){
        printf("minhoca\n");
    }

    return 0;
}
