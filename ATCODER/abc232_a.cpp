//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define all(n)          n.begin(), n.end()
#define uper(n)         transform(n.begin(), n.end(), n.begin(), ::toupper);
#define lower(n)        transform(n.begin(), n.end(), n.begin(), ::tolower);
#define pb              push_back
#define sz(n)           n.size()
#define ff              first
#define ss              second
#define MX              998244353 
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
// ll fact(ll n){if(n==1)return 1; else return (n%MX * fact(n-1)%MX)%MX;}
ll fact(ll n){if(n==1)return 1;else return (n * fact(n-1));}

/*
    DATE : 20.12.2021
    https://atcoder.jp/contests/abc232/tasks/abc232_a

*/
int main()
{
    string s;
    cin >> s;
    // cout << s << endl;
    ll a, b; a = s[0] - '0'; b = s[2] - '0';
    cout << a * b << endl;
}
