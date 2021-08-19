#include<bits/stdc++.h>
using namespace std;
int main()

{
    string str;
    getline(cin, str);
    int start = 0;
    for(int i=0; i<str.size(); i++)
    {
        if (str[i] == ' ')
        {
            for (int j=i-1; j>=start; j--)
            {
                cout << str[j];
            }
            cout << " ";
            start = i+1;
        }
    }

    for (int i=str.size()-1; str[i] != ' '; i--)
    {
        cout << str[i];
    }
    cout << endl;

    return 0;
}