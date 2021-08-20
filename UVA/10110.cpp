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
    ll n;
    while(cin >> n && n != 0)
    {
        ll ans = (ll)sqrt(n);
        cout << (ans * ans == n ?  "yes\n" : "no\n" );
    }
}

int main()
{
    solve();
    return 0;
}