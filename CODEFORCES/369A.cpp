#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , b, p;
    cin >> n >> b >> p;
    int a[n+10], i, useB=0, useP=0;
    for (i=0; i<n; i++){
        cin >> a[i];
    }

    for (i=0; i<n; i++)
    {
        if (a[i] == 1)
        {
            useB++;  /// 2
        }
        else
        {
            if ((p - useP) <= 0)
                useB++;
            else
                useP++; /// 1
        }
    }

    b -= useB;
    p -= useP;
    if (b > p)
    {
        if (p <= 0)
            cout << abs(p) << endl;
        else
            cout << "0" << endl;
    }
    else
    {
        if (b <= 0)
            cout << abs(b) << endl;
        else
            cout << "0" << endl;

    }

    return 0;
}
