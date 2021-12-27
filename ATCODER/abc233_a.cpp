//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              100
ll Pow(ll b, ll p){return p==0? 1:b*Pow(b, p-1);}

ll pt(ll n){
    ll cnt = -1;
    while (n != 0)
    {
        n /= 2;
        cnt++;
    }
    return cnt;
}
int main()
{
    ll x, y;
    cin >> x >> y;
    if (x >= y) cout << 0 << endl;
    else {
        ll ans = ceil(((y - x) + 10 - 1)/ 10);
        cout << ans << endl;
    }
    // cout << x << y << endl;

}
