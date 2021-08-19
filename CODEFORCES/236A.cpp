#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char str[110], str_01[110];

    gets(str);
    n = strlen(str);
    strcpy(str_01, str);

    for (int i=0; str[i]; i++)
    {
        for (int j=i+1; str[j]; j++)
        {
            if (str[i] == str[j])
            {
                n--;
                break;
            }
        }
    }

    if (n % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
 