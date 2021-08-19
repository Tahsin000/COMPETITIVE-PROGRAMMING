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
    ll t, arr[100];
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> arr[i];
    }
    ll chest = 0;
    ll biceps = 0;
    ll back = 0;
    for (int i=0; i<t; i+=3)
    {
        chest+=arr[i];
    }

    for (int i=1; i<t; i+=3)
    {
        biceps+=arr[i];
    }

    for (int i=2; i<t; i+=3)
    {
        back+=arr[i];
    }

    if (chest > biceps)
    {
        if (back >= chest) cout << "back\n";
        else cout << "chest\n";
    }
    else 
    {
        if (biceps >= back) cout << "biceps\n";
        else cout << "back\n";
    }
}

int main()
{
    solve();
    return 0;
}