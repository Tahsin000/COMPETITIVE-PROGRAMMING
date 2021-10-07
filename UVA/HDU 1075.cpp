/*
https://acm.dingbacode.com/showproblem.php?pid=1075
    بسم الله الرحمن الرحيم
     الجامعة الإسلامية العالمية شيتاغونغ
    لا تحزن ان الله معنا
///////////// IIUC - 49 /////////////
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<map>
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

/* Start Your CODE*/
void solve()
{
    string s;
    cin >> s;
    std::map<string , string> mp;
    while(true){
        string a, b;
        cin >> a >> b;
        if (a == "END") break;
        mp[b] = a;
    }
    cin.ignore();
    while(getline(cin , s) && s != "END"){
        string rem = "";
        for(ll i=0; i<sz(s); i++){
            if (isalpha(s[i])){
                rem += s[i];
                if (isalpha(s[i+1]) == 0){
                    if (mp.find(rem) != mp.end()) cout << mp[rem];
                    else cout << rem ;
                    // db(rem);
                    rem.clear();
                } 
            }
            else cout << s[i];
        }
        cout << "\n";
    }

    // for(auto x:mp) cout << x.ff << " " << x.ss << endl;
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
