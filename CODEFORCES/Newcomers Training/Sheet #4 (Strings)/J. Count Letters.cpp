#include<stdio.h>
#include<string.h>
char s1[10001000];
int main()
{
    int freq[26]={0},i,pos;
    gets(s1);
    for (i=0; s1[i]; i++)
    {
        pos = s1[i]-'a';
        freq[pos]++;
    }
    for (i=0; i<26; i++)
    {
        if (freq[i]>0)
            printf("%c : %d\n",'a'+i,freq[i]);
    }
    return 0;
}