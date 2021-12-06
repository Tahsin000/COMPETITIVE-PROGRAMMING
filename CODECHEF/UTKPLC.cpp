//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              998244353 
ll gcd(ll a, ll b) {return(b==0)?a:gcd(b, a%b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1;ll ans = BigMod(b, p/2, m);ans = ( ans * ans ) % m;if (p % 2 == 1) ans = (ans * b) % m;return ans;}
// ll fact(ll n){if(n==1)return 1; else return (n%MX * fact(n-1)%MX)%MX;}
ll fact(ll n){if(n==1)return 1;else return (n * fact(n-1));}

/*
    DATE : 02-12-2021
    LINK : https://www.codechef.com/LTIME102C/problems/MINPIZZAS

*/
int main()
{
    ll tt; cin >> tt;
    while(tt--){
        char s1, s2, s3; cin >> s1 >> s2 >>s3;
        char x, y; cin >> x >> y;
        if (s1 == x){
            cout << x << endl;
        }
        else if(s2 == y) cout << y << endl;
        else {
            if (s1 == x || s1 == y) cout << s1 << endl;
            else if (s2 == x || s2 == y) cout << s2 << endl;
            else cout << s3 << endl;
        }
    }
    return 0;
}
