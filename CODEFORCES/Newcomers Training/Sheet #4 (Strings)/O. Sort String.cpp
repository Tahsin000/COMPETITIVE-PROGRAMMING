#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,i,j,freq[27]= {0};
    scanf("%d",&n);
    char str;

    for (i=0; i<n; i++){
        scanf(" %c", &str);
        freq[str - 'a'] ++;
    }

    for (i=0; i<27; i++){
        for (j=1; j<=freq[i]; j++){
            printf("%c", i + 'a');

        }
    }

    printf("\n");
    return 0;
}