#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n!=1999)
    {
        printf("Wrong\n");
        scanf("%d",&n);
    }
        printf("Correct\n");
    return 0;
}