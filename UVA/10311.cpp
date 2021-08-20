#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000010
#define fr(i, a, b) for (ll i=a; i<b; i++)
#define rfr(i, a, b) for (ll i=a; i>=b; i--)
bool bt[mx];
void sieve()
    {
//        memset(bt, true, sizeof(bt));
//        bt[0]=bt[1]=false;
//        for(int i=4;i<mx;i+=2)bt[i]=false;
//        for(int i=3;i*i<=mx;i+=2){
//            if(bt[i]){
//                for(int j=i*i;j<mx;j+=(2*i))bt[j]=false;
//            }
//        }

/////////////////////////////////////////////////////////////

    fr(i, 2, mx+5) bt[i] = 1;
    bt[0] = bt[1] = 0;
    for (ll i=2; i*i <= mx; i++)
    {
        if (bt[i] == 1)
        {
            for (ll j=i*i; j<=mx; j+=i)
                bt[j] = 0;
        }
    }

    }
int main()
{
    sieve();
    int n;
    while(cin >> n)
    {
        ll f = 0;
        cout << n << " ";
        if (n%2 == 1)
        {
            if (bt[n - 2])
                cout << "is the sum of 2 and " << n - 2 << "." << endl;
            else cout << "is not the sum of two primes!" << endl;
        }
        else
        {
            f = 0;
            rfr(i, n/2-1, 0)
            {
                if(bt[i] && bt[n - i])
                {
                    cout << "is the sum of " << i << " and " << n - i << "." << endl;
                    f = 1;
                    break;
                }
            }
            if (!f) cout << "is not the sum of two primes!" << endl;
        }
    }
}
