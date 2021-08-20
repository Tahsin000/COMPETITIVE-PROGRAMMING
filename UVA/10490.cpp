/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/

//In the name of ALLAH, Most Gracious, Most Merciful

// Hotash Hoya jabe na !!

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
    ll n;
    while(cin >> n && n)
    {
        ll tmp = 0, rem = sqrt(n);
        fr(i, 2, rem+1)
            if (n % i == 0) tmp ++;
        ll ans = (pow(2, n-1) * (pow(2,n)-1));
        if (n == 2 || n == 3 || n == 5 || n == 7 || n == 13 || n == 17 || n == 19 || n == 31) 
            cout << "Perfect: " << ans << "!" << endl;
        else
        {
            if (tmp == 0) cout << "Given number is prime. But, NO perfect number is available.\n";
            else cout << "Given number is NOT prime! NO perfect number is available.\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}