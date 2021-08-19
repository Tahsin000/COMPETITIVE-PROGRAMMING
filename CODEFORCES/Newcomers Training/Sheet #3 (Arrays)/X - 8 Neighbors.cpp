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
    // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X

    long long int k,l,i,j,count_i,count_j,rem_i,rem_j, f = 0;
    char str[110][110];
    scanf("%lld%lld",&k,&l);


      for (i=0; i<k; i++)
        for (j=0; j<l; j++)
            scanf(" %c",&str[i][j]);
 
    scanf("%lld%lld",&rem_i,&rem_j);
    i = rem_i-1, j = rem_j-1;
    // db(i)
    // db(j)
    // i--;j--;
    if ((i < k && j-1 < l && i >= 0 && j-1 >= 0) && str[i][j-1] != 'x') {
        cout << "no\n";
        return;
    }
    if ((i < k && j+1 < l && i >= 0 && j+1 >= 0) && str[i][j+1] != 'x') {
        cout << "no\n";
        return;
    }
    if ((i-1 < k && j < l && i-1 >= 0 && j >= 0) && str[i-1][j] != 'x') {
        cout << "no\n";
        return;
    }
    if ((i+1 < k && j < l && i+1 >= 0 && j >= 0) && str[i+1][j] != 'x') {
        cout << "no\n";
        return;
    }
    if ((i+1 < k && j-1 < l && i+1 >= 0 && j-1 >= 0) && str[i+1][j-1] != 'x') {
        cout << "no\n";
        return;
    }
    if ((i+1 < k && j+1 < l && i-1 >= 0 && j+1 >= 0) && str[i+1][j+1] != 'x') {
        cout << "no\n";
        return;
    }
    if ((i-1 < k && j-1 < l && i-1 >= 0 && j-1 >= 0) && str[i-1][j-1] != 'x') {
        cout << "no\n";
        return;
    }
    if ((i-1 < k && j+1 < l && i-1 >= 0 && j+1 >= 0) && str[i-1][j+1] != 'x') {
        cout << "no\n";
        return;
    }
    cout << "yes\n";

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