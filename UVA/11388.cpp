/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 20000001
#define fr(i, a, b) for (ll i=a; i<b; i++)
#define rfr(i, a, b) for (ll i=a; i>=b; i--)

// ll arr[mx]= {0}, prime[mx];

ll gcd(ll a, ll b)
{
    if (b==0) return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
     ll n;
     cin >> n;
     
     while(n--)
     {
        ll a, b;
        cin >> a >> b;
        if (b % a != 0) cout << -1 << endl;
        else cout << a << " " << b << endl;
     }
}

void test()
{

}

int main()
{
    // fun();
    solve();
    // test();

    getchar();
    return 0;
}
