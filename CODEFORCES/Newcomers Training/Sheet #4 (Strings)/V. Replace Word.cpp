#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[101010];
    int n;
    cin >> str;
    for (int i=0; str[i]; i++)
    {
//        GYPT
        if (str[i] == 'G' && str[i+1]== 'Y' && str[i+2] == 'P' && str[i+3]=='T')
        {
            cout << " ";
            i+=3;
        }
//        EGYPT
        if (str[i] == 'E' && str[i+1]== 'G' && str[i+2] == 'Y' && str[i+3]=='P' && str[i+4]=='T')
        {
            cout << " ";
            i+=4;
        }
        else
            cout << str[i];
    }
    cout << endl;
    return 0;
}