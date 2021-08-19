/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mx 100000010
#define fr(i, a, b) for (ll i=a; i<b; i++)
#define rfr(i, a, b) for (ll i=a; i>=b; i--)

ll gcd(ll a, ll b)
{
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve()
{
    int n, v[120][120];
    cin >> n;
    int cont[120] = {0};
    fr(i, 1, n+1)
    {
        fr(j, 1, n+1)
        {
            cin >> v[i][j];
            if (v[i][j] == 1 || v[i][j] == 3) cont[i]++;
        }
    }
    int rem = 0;
    fr(i, 1, n+1)
        if (!cont[i]) rem++;

    cout << rem <<endl;
    fr(i, 1, n+1)
        if (!cont[i]) cout << i << " ";
}

int main()
{
    solve();
    return 0;
}