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
    ll a, b;
    cin >> a >> b;
    while(b--)
    {
        if (a % 10 == 0) a /= 10;
        else a--;
    }
    cout << a << endl;
}

int main()
{
    solve();
    return 0;
}