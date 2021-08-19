#include<stdio.h>

void display(int,char );

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char ch;
        int k;
        scanf("%d %c",&k,&ch);

        display(k,ch);
    }
    return 0;
}

void display(int n,char ch)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%c",ch);
        if (i<n-1)
            printf(" ");
    }
    printf("\n");

}