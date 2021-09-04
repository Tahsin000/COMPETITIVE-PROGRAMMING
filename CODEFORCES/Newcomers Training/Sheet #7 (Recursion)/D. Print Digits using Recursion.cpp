#include<stdio.h>
int i=0;
void fun(int a)
{
    int j;
    char str[100];
    if (a==i) return ;
    scanf("%s",str);
    for (j=0; str[j]; j++){
        printf("%c",str[j]);
        if (str[j+1]) printf(" ");
    }
    printf("\n");
    fun(a-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}