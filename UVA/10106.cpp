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
    string stra, strb;
    ll cr[300], l1, l2, l, dr[300];
    while(cin >> stra >> strb)
    {
        ll er[600] = {0};
        l1 = stra.size();
        l2 = strb.size();
        for (ll i=l1; i>=0; i--)
        {
            cr[l1-i-1] = stra[i] - '0';
        }

        for (ll i=l2; i>=0; i--)
        {
            dr[l2-i-1] = strb[i] - '0';
        }


        for (ll i=0; i<l1; i++)
        {
            for (ll j=0; j<l2; j++)
            {
                er[i+j] += cr[i] * dr[j];
                er[i+j+1] += er[i+j] /10;
                er[i+j] %= 10;
            }
        }
        ll rem = l1 + l2 ;
        while(er[rem] == 0 && rem > 0)
            rem --;
        for (ll i=rem ; i>=0; i--)
        {
            cout << er[i];
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}