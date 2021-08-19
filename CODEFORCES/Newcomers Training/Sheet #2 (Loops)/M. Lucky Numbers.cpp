/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/



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
    ll n, m, stp =1, lk =0, nx =0;
    cin >> n >> m ;
    fr(i, n, (m+1))
    {
        ll a =i, b=i;
        while(a > 0)
        {
            nx = a % 10;
            a /= 10;
            if (nx == 4 || nx == 7)
            {
                lk = 1;
                if (a == 0) 
                {
                    stp = 0;
                    cout << b << ' ';
                }
            }
            else 
            {
                lk = 0;
                break;
            }
        }
    }
    if (lk == 0 && stp == 1) cout << -1;
}

int main()
{
    solve();
    return 0;
}