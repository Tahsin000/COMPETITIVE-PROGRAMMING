#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define db(x)           cout << #x << " : " << x << endl;
#define faster          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define py              cout << "YES\n"
#define pn              cout << "NO\n"
#define all(n)          n.begin(), n.end()
#define pb              push_back
#define ff              first
#define ss              second

#define sz(n)           n.size()
ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
void INPUT(){
    faster ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("inputf.in", "r+", stdin); freopen("outputf.in", "w+", stdout);
    #endif
}

void solve(){
    ll n ; cin >> n;
    map<ll , ll>mp;
    for(ll i=0; i<n-1; i++){
        ll u, v; cin >> u >> v;
        mp[u]++;
        mp[v]++;
    }
    for(auto x : mp){
        if (x.ss == (n - 1)){
            cout << "Yes\n";
            return ;
        }
    }
    cout << "No\n";
}

int main()
{
    INPUT();
    solve();
    return 0;
}
