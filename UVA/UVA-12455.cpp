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
#define sz(n)           n.size()
ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
void INPUT(){
    faster ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}

vector<ll>v;
bool All_Sub_Set_Check(ll c){
    ll n = sz(v);
    for(ll i=1; i<=(1<<n); i++){
        ll sum =0;
        for(ll j=0; j<n; j++){
            if (i & (1 << j)) sum += v[j];
        }
        if (sum == c) return true;
    }
    return false;
}
void UVA_12455(){
    ll t; cin >> t;
    while (t--)
    {
        ll c, n; cin >> c >> n;
        v.resize(n, 0);
        for(auto &x : v) cin >> x;
        if (All_Sub_Set_Check(c)) py;
        else pn;
        // cout << sz(v) << endl;
    }
    
}
int main()
{
    INPUT();
    UVA_12455();

    return 0;
}
