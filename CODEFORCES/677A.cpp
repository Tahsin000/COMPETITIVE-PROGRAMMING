#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, tmp =0;
    cin >> n >> m;

    for (int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        if (p > m)
            tmp += 2;
        else
            tmp ++;
    }
    cout << tmp << endl;

    return 0;
}