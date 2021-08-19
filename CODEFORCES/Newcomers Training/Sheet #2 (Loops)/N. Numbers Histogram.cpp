#include<stdio.h>
int main()
{
    int n,arr[10010],i,j;
    char cha;

    scanf("%c",&cha);
    scanf("%d",&n);

    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for (i=0; i<n; i++){
    for (j=0; j<arr[i]; j++){
        printf("%c",cha);
    }
        printf("\n");
    }

    return 0;
}