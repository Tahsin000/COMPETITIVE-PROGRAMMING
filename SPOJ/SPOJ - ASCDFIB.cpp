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
#define py             cout << "YES\n"
#define pn              cout << "NO\n"
#define all(n)          n.begin(), n.end()
#define uper(n)         transform(n.begin(), n.end(), n.begin(), ::toupper);
#define lower(n)        transform(n.begin(), n.end(), n.begin(), ::tolower);
#define vl(n)           std::vector<ll> v(n)
#define pb              push_back
#define sz(n)           (int)n.size()
#define ff              first
#define ss              second
#define en              "\n"

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

ll fib[10000000];
int f[10000000];
int output[10000000];
int cnt[10000000];

void precalcu(ll n){
    fib[1] = 0;
    fib[2] = 1;
    for(ll i=3; i<=n; i++){
        fib[i] = (fib[i-1] + fib[i-2]) % 100000;
    }
}

void CountingSort(int *arr,int n)
{
    int mn = *min_element(arr,arr+n);
    int mx = *max_element(arr,arr+n);

    memset(cnt,0,sizeof cnt);

    for(int i=0; i<n; i++)
    {
        cnt[arr[i]-mn]++;
    }
    for(int i=1; i<(mx-mn+2); i++)
    {
        cnt[i]+=cnt[i-1];
    }
    for(int i=n-1; i>=0; i--)
    {
        output[cnt[arr[i]-mn]-1] = arr[i];
        cnt[arr[i]-mn]--;
    }
    for(int i=0; i<n; i++)
        arr[i] = output[i];
}

/* Start Your CODE*/
void solve()
{
    precalcu(1100010);
    ll n; cin >> n;

    for(ll i=1; i<=n; i++){
        ll a, b; cin >>a>>b;
        int cnt=0;
        for(ll j=a; j<=(a+b); j++){
            f[cnt] = fib[j];
            cnt++;
        }
        CountingSort(f , cnt);
        // sort(f , f+cnt);
        int l = min(cnt , 100);
        cout << "Case " << i << ": ";
        for(ll j=0; j<l; j++) cout << f[j] << " ";
        cout << en;
    }
    // for(ll i=1; i<=100; i++) cout << fib[i] << endl;
}
/* Start Your MAIN*/
int main()
{
    /// pera;
    HHJN;
    
    solve();
    /*
    test
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

