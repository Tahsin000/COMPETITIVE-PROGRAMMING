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
    freopen("inputf.in", "r+", stdin); freopen("outputf.in", "w+", stdout);
    #endif
}

#define m 45
// BIG MOD CALCULATION : https://www.wolframalpha.com/

void solve(){
    ll n; cin >> n;
    ll sum = (n * (n + 1)) / 2;
    if(sum % 2 == 0){
        cout << "YES\n";
        ll mid = sum / 2;

        vector<ll>a, b;
        for(ll i=n; i>=1; i--){
            if (i <= mid){
                a.pb(i);
                mid -= i;
            }
            else b.pb(i);
        }
        cout << a.size() << endl;
        for(auto x:a) cout << x << " ";
        cout << endl << b.size() << endl;
        for(auto x:b) cout << x << " ";
        cout << endl;

    }
    else cout << "NO\n";
//    cout << sum << endl;
//    cout << n << endl;
}
int main()
{
    INPUT();
    solve();
    return 0;
}

