#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10010];
    char b[10010];
    int i, j;
    scanf("%s", a);
    scanf("%s", b);
    for (i=0; a[i]; i++){
        if (a[i] == '0' && b[i] == '0')
            cout << "0";
        if (a[i] == '1' && b[i] == '1')
            cout << "0";
        if (a[i] == '0' && b[i] == '1')
            cout << "1";
        if (a[i] == '1' && b[i] == '0')
            cout << "1";

    }
    cout << endl;

    ///
    return 0;
}
