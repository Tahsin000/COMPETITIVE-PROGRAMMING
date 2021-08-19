#include<stdio.h>
int main()
{
    int ed,eh,em,es,sd,sh,sm,ss,temp,temp1,temp3,d,h,m,s;
    char a[4],b[2],c[2];
    scanf("%s%d%d %s%d %s%d %s%d%d %s%d %s%d",&a,&ed,&eh,&b,&em,&b,&es,&a,&sd,&sh,&b,&sm,&b,&ss);

    temp=ed*86400+(eh*3600);
    temp+=(em*60+es);

    temp1=sd*86400+(sh*3600);
    temp1+=(sm*60+ss);

    temp3=temp1-temp;

    d=temp3/ 86400;
    temp3%=86400;
    h=temp3/3600;
    temp3%=3600;
    m=temp3/60;
    temp3%=60;
    s=temp3;

    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);

    return 0;
}
