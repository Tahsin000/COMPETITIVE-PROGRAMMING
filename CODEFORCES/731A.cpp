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
ll fun (char a, char b)
{
    ll rem = abs(a - b);
    if (rem > 13) rem = 26 - rem;
    return rem ;
}
void solve()
{
    string str;
    cin >> str;
    ll tmp =0;
    char c = 'a';
    for (int i=0; i<str.size(); i++)
    {
        tmp += fun(c, str[i]);
        c = str[i];
    }
    cout << tmp << endl;
}

int main()
{
    solve();
    return 0;
}