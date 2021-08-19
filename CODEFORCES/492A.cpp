
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
    ll n, i =0, cont =0, sum =0;
    cin >> n;
    while(1)
    {
        i++;
        fr(j, 1, i+1)
        {
            sum += j;
        }
        cont ++;
        if (sum > n)
            break;
    }
    cout << cont -1 << endl;
}

int main()
{
    solve();
    return 0;
}