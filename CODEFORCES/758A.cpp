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
    ll  n, tmp = 0 , sum =0;
    cin >> n;
    std::vector<int> v;
    for (int i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    tmp = v[n-1];

    for (int i=0; i<v.size(); i++)
    {
        sum += abs(tmp - v[i]);
    }

    cout << sum << endl;
}

int main()
{
    solve();
    return 0;
}