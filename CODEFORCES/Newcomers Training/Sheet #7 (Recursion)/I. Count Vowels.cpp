#include<stdio.h>
#include<string.h>
int count=0;
void fun(char str[])
{
    int i;
    for (i=0; str[i]; i++){
        if (str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I'
            || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
            count++;
    }
    printf("%d\n",count);
}

int main()
{
    char str[220];
    gets(str);

    fun(str);

    return 0;
}