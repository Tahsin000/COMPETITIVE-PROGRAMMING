#include<stdio.h>
int main()
{

    int a,b,c,sum,sub=0,rem;

    scanf("%d%d",&a,&b);

    if (b>=a){
        rem=a;
        a=b;
        b=rem;

    for(c=b+1;c<a;c++){
        if (c%2!=0){
            sub+=c;
        }
    }
    printf("%d\n",sub);
    }
    else if (a>=b){

        for(c=b+1;c<a;c++){
        if (c%2!=0){
            sub+=c;
        }
    }
    printf("%d\n",sub);
    }
    
    return 0;

}
