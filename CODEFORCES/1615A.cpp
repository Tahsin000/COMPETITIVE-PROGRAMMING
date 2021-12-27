#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define db(x)           cout << #x << " : " << x << endl;
#define faster          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pera            freopen("inputf.in","r", stdin);freopen("outputf.in","w", stdout)
#define test            ll t; cin >> t; while(t--){solve();};
void solve()
{
    ll n;
    cin >> n;
    std::vector<ll> v(n);
    ll sum = 0;
    for(ll i=0; i<n; i++){
         cin >> v[i];
         sum += v[i];
    }
    if (sum % n == 0) cout << "0\n";
    else cout << 1 << endl;
}
int main()
{
    faster
    test
    /*
    solve();
    fun();
    */
    cerr << "Time takeen : " << (float)clock()/CLOCKS_PER_SEC << " secs\n";time_t ttime = time(0); char* dt = ctime(&ttime);cerr << dt << endl;
    return 0;
}