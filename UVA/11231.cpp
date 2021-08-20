//In the name of ALLAH, Most Gracious, Most Merciful

// Hotash Hoya jabe na !!

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i, n) for (ll i=0; i<n; i++)

ll gcd(ll a, ll b)
{
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve()
{
    ll n, m, c;
    while(cin >> n >> m >> c)
    {
        if (n + m + c == 0) break;
        if (c == 0)
        {
            ll ans = ((n-7) *(m-7))/2;
            cout << ans << endl;
        }
        else 
        {
            ll ans = ((n-7) *(m-7)+1)/2;
            cout << ans << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}