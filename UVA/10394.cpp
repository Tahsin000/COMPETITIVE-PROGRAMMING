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

ll arr[mx]= {0}, prime[mx];

ll gcd(ll a, ll b)
{
    if (b==0) return a;
    return gcd(b, a%b);
}

void fun()
{
    arr[0] = arr[1] = 1;
    
    for (ll i=2; i*i <= mx; i++)
    {
        if (arr[i] == 0)
        {
            for (ll j=i*i; j<=mx; j+=i)
                arr[j] = 1;
        }
    }

    ll k=1;
    fr(i,0, mx-1)
    {
        if (arr[i] == 0 && arr[i+2] == 0)
        {
            prime[k] = i;
            k++;
        }
    }
}
void solve()
{
    ll n;
    while(cin >> n)
    {
        cout <<"("<< prime[n] << ", " << prime[n] + 2 << ")"<<endl; 
    }
}


int main()
{
    fun();
    solve();
    return 0;
}