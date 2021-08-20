#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], f=0;
    int count = 0, i;

    while ( 1 )
    {
        gets(str);
        if (strcmp (str,"caw caw") != 0)
        {
            if (str[0] == '*')
                count += 4;
            if (str[1] == '*')
                count += 2;
            if (str[2] == '*')
                count += 1;
        }
        else {
            printf("%d\n", count);
            f += 1;
            count =0;
            if (f == 3)
                break;
        }

    }

    return 0;
}
