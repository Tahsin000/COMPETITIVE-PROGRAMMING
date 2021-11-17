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

/*
    PROBLEM START : Wed Nov 17 08:40:46 2021
    PROBLEM END : Wed Nov 17 08:55:30 2021
    PROBLEM LINK : https://onlinejudge.org/external/5/572.pdf
*/
vector< string > graph(120);
ll n, c;
ll dx []={1, 1, 0, -1, -1, -1, 0, 1};
ll dy []={0, 1, 1, 1, 0, -1, -1, -1};
void DFS(ll x, ll y){
    if( x >= n || y >= c || x < 0 || y < 0 || graph[x][y] == '*') return;
    graph[x][y] = '*';
    for(ll i=0; i<8; i++){
        DFS(x + dx[i], y + dy[i]);
    }
}
/* Start Your CODE*/
void solve()
{
    while(cin >> n >> c){
        if (n==0 && c==0) break;
        for(ll i=0; i<n; i++){
            cin >> graph[i];
        }
        ll cnt = 0;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<c; j++){
                if (graph[i][j] =='@'){
                    DFS(i, j);
                    cnt ++;
                }
            }
        }
        cout << cnt << endl;
    }
}
int main()
{
    faster
    solve();
    /*
    test
    fun();
    */
    cerr << "Time takeen : " << (float)clock()/CLOCKS_PER_SEC << " secs\n";time_t ttime = time(0); char* dt = ctime(&ttime);cerr << dt << endl;
    return 0;
}
/**

DFS input
5 4
0 1
1 2
1 3
3 4
0
output
Notes 0 is visites
Notes 1 is visites
Notes 2 is visites
Notes 3 is visites
Notes 4 is visites

DFS input
7 9
1 2
1 3
1 7
2 3
3 7
2 4
4 5
3 6
5 6
1
output
1
2
3
4
5
6

**/