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
    ll f = 0;
    for (int i=0; i<str.size(); i++)
    {
         if(str[i]>=33&&str[i]<=126)
         {
            if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            {
                f = 1;
                break;
            }
         }
    }
    if (f == 1) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    solve();
    return 0;
}