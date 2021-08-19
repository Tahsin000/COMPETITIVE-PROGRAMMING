#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, tmp =0;
    cin >> a >> b;
    if (a == b)
        cout << ++tmp << endl;
    else
    {

        while (1)
        {
            a *= 3;
            b *= 2;
            tmp ++;
            if (a > b)
                break;

        }
        cout << tmp << endl;
    }

    return 0;
}