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
    string str;
    cin >> str;
    transform(str.begin(), str.begin()+1, str.begin(), :: toupper);
    cout << str;
}

int main()
{
    solve();
    return 0;
}