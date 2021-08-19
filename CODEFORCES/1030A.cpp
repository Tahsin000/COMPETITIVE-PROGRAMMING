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
    cin >> n;
    
    ll tmp = 0;
    for (int i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        if (a == 1)
            tmp = 1;
    }
    if (tmp == 1) cout << "HARD\n";
    else cout << "EASY\n";
}

int main()
{
    solve();
    return 0;
}