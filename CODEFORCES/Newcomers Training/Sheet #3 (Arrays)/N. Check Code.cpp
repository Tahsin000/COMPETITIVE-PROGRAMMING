#include<stdio.h>
int main()
{
    int n1,n2,f,i;
    char str[10010];
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%s",str);

    if (str[n1]=='-'){
            f=0;
        for (i=n1+1; str[i]; i++){
            if (str[i]=='-'){
            f=1;
            break;
            }
        }
//    /// test case
//        printf("%d\n",i);
        if (f==1)
            printf("No\n");
        else
            printf("Yes\n");
    }
    else
        printf("No\n");
}