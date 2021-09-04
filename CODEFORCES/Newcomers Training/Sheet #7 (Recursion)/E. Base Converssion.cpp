#include<bits/stdc++.h>
using namespace std;
#define ll long long

// ll count=1;
string tmp="";

ll fun(ll n)
{
    ll rem;
    if (n==0) return 0;
    rem = n%2;
    tmp += rem + '0';
    // count*=10;
    fun(n/2);
}
int main()
{
    ll a,n,i;
    scanf("%lld",&a);
    while (a--)
    {
        scanf("%lld",&n);
        fun(n);

        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
        // tmp=0;
        tmp.clear();
        // count=1;
    }

    return 0;
}