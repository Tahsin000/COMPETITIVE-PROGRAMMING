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
    while (cin >> a >> b)
    {
        // printf("%10lld%10lld    %s\n\n", a, b, gcd(a, b) == 1 ? "Good Choice" : "Bad Choice");
        if (gcd(a, b) == 1)
        {
            printf("%10lld%10lld    Good Choice\n\n", a, b);
            // cout << "          " << a << "          " << b <<"    Good Choice\n";
        }
        else 
        {
            printf("%10lld%10lld    Bad Choice\n\n", a, b);
            // cout << "          " << a << "          " << b <<"    Bad Choice\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}