/*
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/ 
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

ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
string to_String(ll n) {string s;while(n){s.pb(n%10+'0');n/=10;}reverse(all(s));return s; }
ll to_int(string s) {ll n = 0, i =0, j = 1;fr(i, 0, s.size()){n += (s[s.size()-(i+1)] - '0') * j; j*=10;}return n; }

ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
ll binarySearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);return binarySearch(arr, mid+1, r, x);}return -1 ;}
ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}
ll egcd(ll a, ll b, ll &x, ll &y){if(b==0){x=1;y=0;return a;}ll x1,y1;ll d=egcd(b,a%b,x1,y1);x=y1;y=x1-(a/b)*y1;return d;}
ll fact(ll n){if(n==1)return 1;else return (n * fact(n-1));}

/* Start Your FUN*/
ll fun(ll n)
{
    
}
/* Start Your CODE*/
void solve()
{
    ll rw, rh;
    cin >> rw >> rh;
    std::vector<ll> v, ve;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll stw, sth;
    cin >> stw >> sth;

    ll ftw = x2 - x1;
    ll fth = y2 - y1;

    ll ansh = INT_MAX;
    ll answ = INT_MAX;
    if (ftw + stw <= rw || fth + sth <= rh){
        if (fth + sth <= rh){
            ansh = min(sth - y1, sth - (rh - y2));
            if (ansh < 0) ansh = 0; 
        }
        if (ftw + stw <= rw){
            answ = min(stw - x1, stw - (rw - x2));
            if (answ < 0) answ = 0; 
        }
        cout << min(ansh, answ) << endl;
    }
    else cout << -1 << endl;
    // cout << "x = " << ftw + stw << " y = " << fth + sth << endl;

}
/* Start Your MAIN*/
int main()
{
    /// pera;
    HHJN;
    
    test
    /*
    solve();
    fun();
    */
    return 0;

}
void sieve (vector<ll>&v)
{   v.assign(MX, 0);
    v[0] = v[1] = 1;
    for (int i=4; i<=MX; i+=2) v[i] = 1;
    for (int i=3; i*i<=MX; i+=2){
        if (v[i] == 0){
            for (int j=i*i; j<=MX; j+= i*2)
                v[j] = 1;
        }
    }
}


/*
    ╔╗╔╦╗╔╗╔╦═╦╗
    ║╚╝║╚╝║║║║║║
    ║╔╗║╔╗╠╣║║║║
    ╚╝╚╩╝╚╩═╩╩═╝
*/


