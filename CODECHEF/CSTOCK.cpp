//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              1000000000000007
ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}
ll to_int(string s){ll n;stringstream ss(s); ss>>n;return n;}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}

/*
    DATE : 02.12.2021
    LINK : https://www.codechef.com/submit/CSTOCK
*/
int main()
{
    ll tt; cin >> tt;
    while(tt--){
        ll s, a, b, c;
        cin >> s >> a >> b >> c;
        double ans = s + ((c / 100.0) *s);
        if (ans >= a && ans <= b) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
