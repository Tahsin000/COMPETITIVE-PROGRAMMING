#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define fr(i, a, b)     for (ll i=a; i<b; i++)
#define rfr(i, a, b)    for (ll i=a; i>=b; i--)
#define db(x)           cout << #x << " : " << x << endl;
#define HHJN            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pera            freopen("inputf.in","r", stdin);freopen("outputf.in","w", stdout)
#define test            ll t; cin >> t; while(t--){solve();};
#define yes             cout << "YES\n"
#define no              cout << "NO\n"
#define all(n)          n.begin(), n.end()
#define uper(n)         transform(n.begin(), n.end(), n.begin(), ::toupper);
#define lower(n)        transform(n.begin(), n.end(), n.begin(), ::tolower);
#define vl(n)           std::vector<ll> v(n)
#define pb              push_back
#define sz(n)           n.size()
#define ff              first
#define ss              second

/* Start Your MAIN*/
int main()
{
    ll n;
    cin >> n;
    while(n--){
        ll va , k;
        cin >> va >> k;
        std::vector<ll> v(va);
        for(ll i=0; i<va; i++) cin >> v[i];
        for(ll i =0; i<va-k+1; i++){
            ll mx = INT_MIN;
            for(ll j=i; j<i+k; j++){
                mx = max(mx , v[j]);
            }
            cout << mx << " ";
        }
        cout << endl;

        // for(ll i=0; i<k; i++) cout << v[i] << " ";
        // cout << endl;
    }
    return 0;

}