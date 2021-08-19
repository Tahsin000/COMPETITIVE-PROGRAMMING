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
    ll n, A=0, D=0;
    string str;
    cin >> n >> str;

    for (int i=0; i<str.size(); i++)
    {
        (str[i] == 'A') ? A++ : D++;
    }
    if (A > D) cout << "Anton\n";
    else if (A < D) cout << "Danik\n";
    else cout << "Friendship\n" ;
}

int main()
{
    solve();
    return 0;
}