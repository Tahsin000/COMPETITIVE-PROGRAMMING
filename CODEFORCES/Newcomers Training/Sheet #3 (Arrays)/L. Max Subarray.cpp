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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        std::vector<ll> v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        // for (int i=0; i<n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        for (int i=0; i<n; i++)
        {
            for (int j=i; j<n; j++)
            {
                ll tmp = INT_MIN;
                for (int k=i; k<=j; k++)
                {
                    tmp = max(tmp, v[k]);
                }
                cout << tmp << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}