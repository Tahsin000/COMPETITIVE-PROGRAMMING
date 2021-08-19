/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/

//In the name of ALLAH, Most Gracious, Most Merciful

// Hotash Hoya jabe na !!

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i, a, b) for (ll i=a; i<b; i++)

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
        ll a, b, r, l, u, d;
        r = l = u = d= 0;
        cin >> a >> b;
        string str;
        cin >> str;
        fr(i, 0, str.size())
        {
            r += str[i] == 'R';
            l += str[i] == 'L';
            u += str[i] == 'U';
            d += str[i] == 'D';
        }
        if (a > 0 && r >= a) a = 0;
        if (a < 0 && l >= -a) a = 0;
        if (b > 0 && u >= b) b = 0;
        if (b < 0 && d >= -b) b = 0;
        cout << ((!a && !b) ? "YES\n" : "NO\n");
    }
}

int main()
{
    solve();
    return 0;
}