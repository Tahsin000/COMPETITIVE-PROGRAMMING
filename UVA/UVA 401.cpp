//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=342
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
#define sz(n)           (int)n.size()
#define ff              first
#define ss              second
#define en              "\n"

ll arr[256]={};
string f1 = "AEHIJLMOSTUVWXYZ12358";
string f2 = "A3HILJMO2TUVWXY51SEZ8";
/* Start Your CODE*/


void solve()
{
    string s; 
    for(ll i=0; i<sz(f1); i++) arr[f1[i]]=i+1;
    while(cin >> s && s != ""){
        string s1, s2;
        s1 = s2 = s;
        ll f = 0;
        reverse(all(s1));
        if (s1 == s2){  
            f = 0;
            for(ll i=0; i<sz(s)/2+1; i++){
                ll r = arr[s[i]] - 1;

                if(f2[r] == s1[i]){
                    // db(f1[r]);
                     // cout << arr[s[i]] << endl;
                    continue;
                } 
                else {
                    f = 1;
                    break;
                }
            }

            if (f) cout << s << " -- is a regular palindrome.\n\n";
            else {
                cout << s << " -- is a mirrored palindrome.\n\n";
            }
        }
        else{
            f = 0;
            for(ll i=0; i<sz(s); i++){
                ll r = arr[s[i]]-1 ;
                if (f2[r] == s[sz(s) - 1 - i]);
                else {
                    f = 1; break;
                }
            }
            if (f == 1) cout << s << " -- is not a palindrome.\n\n";
            else cout << s << " -- is a mirrored string.\n\n";
        }
    }
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
    return 0;
}
