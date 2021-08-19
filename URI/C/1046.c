#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d%d",&a,&b);

    if (a>=b)
    {
        c = a - b;
        printf("O JOGO DUROU %d HORA(S)\n",24-c);

    }
    else if( b>a ){

        printf("O JOGO DUROU %d HORA(S)\n",b-a);
}
    return 0;
}
