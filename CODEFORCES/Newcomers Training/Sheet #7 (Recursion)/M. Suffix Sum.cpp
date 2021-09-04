// N  element  er array last theke  k te element print kore chai
 
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define fr(i, a, b)     for (ll i=a; i<b; i++)
#define rfr(i, a, b)    for (ll i=a; i>=b; i--)
#define db(x)           cout << #x << " : " << x << endl;
#define all(n)          n.begin(), n.end()
#define uper(n)         transform(n.begin(), n.end(), n.begin(), ::toupper);
#define lower(n)        transform(n.begin(), n.end(), n.begin(), ::tolower);
#define pb              push_back
#define sz(n)           n.size()

ll arr[1000002];

ll fun (ll i){
    if (i == -1) return 0;
    fun(i - 1);
    cin >> arr[i];
}

ll SumOfArray(ll n, ll baki){
    if(baki == 0) return 0;
    return arr[n] + SumOfArray(n - 1, baki - 1);
}
/* Start Your CODE*/
void solve()
{
    ll n;cin >> n;
    ll t;cin >> t;

    fr(i, 0, n) cin >> arr[i];

    // fun(n-1);
    cout << SumOfArray(n-1, t) << endl;

    // cout << fun(n) << endl; 
}
/* Start Your MAIN*/
int main()
{
    
    solve();
    return 0;

}