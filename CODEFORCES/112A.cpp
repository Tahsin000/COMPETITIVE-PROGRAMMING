#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str01, str02;
    cin >> str01 >> str02;

    transform(str01.begin(), str01.end(), str01.begin(), ::toupper);
    transform(str02.begin(), str02.end(), str02.begin(), ::toupper);

    if (str01.compare(str02) == 0)
        cout << "0" << endl;

    else if ( str01.compare(str02) < 0 )
        cout << "-1" << endl;

    else if ( str02.compare(str01) < 0 )
        cout << "1" << endl;

    return 0;
}