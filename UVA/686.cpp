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
ll arr[1000100]= {0}, prime[200500];
void fun(ll n)
{
    for (int i=2; i*i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j=i*i; j<=n; j+=i)
                arr[j] = 1;
        }
    }

    ll k=0;
    fr(i,2, (n+1))
    {
        if (arr[i] == 0)
        {
            prime[k] = i;
            k++;
        }
    }

}
void solve()
{
    ll n;
    while(cin >> n && n != 0)
    {
        ll cont = 0, tmp = n;
        fr(i, 0, ((tmp/2)+1))
        {
            ll f = 0;
            fr(j, 0, (i+1))
            {
                ll ans = prime[i] + prime[j];
                if (ans == n)
                {
                    cont ++;
                }
            }
        }
        cout << cont << endl;
    }

}


int main()
{
    fun(1000100);
    solve();
    return 0;
}