//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000007
#define db(x)           cout << #x << " : " << x << endl;
#define faster          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pera            freopen("inputf.in","r", stdin);freopen("outputf.in","w", stdout)
#define test            ll t; cin >> t; while(t--){solve();};
#define py              cout << "YES\n"
#define pn              cout << "NO\n"
#define all(n)          n.begin(), n.end()
#define uper(n)         transform(n.begin(), n.end(), n.begin(), ::toupper);
#define lower(n)        transform(n.begin(), n.end(), n.begin(), ::tolower);
#define pb              push_back
#define sz(n)           n.size()
#define ff              first
#define ss              second
#define en              "\n"
ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
string to_String(int n){stringstream ss;string s;ss<<n;ss>>s;cout<<s<<endl;}
ll to_int(string s){ll n;stringstream ss(s); ss>>n;cout << n << endl;}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
ll binarySearch(ll arr[], ll l, ll r, ll x) {if (r >= l){ll mid = l+(r-l) / 2;if (arr[mid] == x) return mid;if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);return binarySearch(arr, mid+1, r, x);}return -1 ;}
ll ModInv(ll a, ll m){return BigMod(a, m-2, m);}
ll egcd(ll a, ll b, ll &x, ll &y){if(b==0){x=1;y=0;return a;}ll x1,y1;ll d=egcd(b,a%b,x1,y1);x=y1;y=x1-(a/b)*y1;return d;}
ll fact(ll n){if(n==1)return 1;else return (n * fact(n-1));}
void sieve (vector<ll>&v){v.assign(MX, 0);v[0] = v[1] = 1;for (int i=4; i<=MX; i+=2) v[i] = 1;for (int i=3; i*i<=MX; i+=2){if (v[i] == 0){for (int j=i*i; j<=MX; j+= i*2)v[j] = 1;}}}

/* Start Your CODE*/
void solve()
{
    string s;
    cin >> s;
    ll f = 0, cnt=0;
    for(ll i=0; i<sz(s); i++){
        if (s[i] == 'h'){
            for(ll j=i+1; j<sz(s); j++){
                if (s[j] == 'h') continue;
                else if (s[j] == 'e'){
                    for(ll k=j+1; k<sz(s)-1; k++){
                        if (s[k] == 'e') continue;
                        if (s[k] == 'l') cnt++;
                        if (cnt >= 2){
                            for(ll l = k+1; l<sz(s); l++){
                                if (s[l] == 'l') continue;
                                else if (s[l] == 'o'){
                                    f = 1;
                                    break;
                                }
                                // else break;
                                if (f) break;
                            }
                        }
                        // else break;
                        if (f) break;
                    }
                }
                // else break;
                if (f) break;
            }

        }
        if (f) break;
    }
    if (f) py;
    else pn;

}
/* Start Your FUN*/
ll fun(ll n)
{
    
}
/*   copy input / copy output


*/
/*  Start Your MAIN*/
int main()
{
    faster
    solve();
    /*
    test
    fun();
    */
    cerr << "Time takeen : " << (float)clock()/CLOCKS_PER_SEC << " secs\n"; 
    return 0;
}