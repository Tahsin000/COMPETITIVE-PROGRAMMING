
///////////// IIUC - 49 /////////////
#include<bits/stdc++.h>
using namespace std;
#define ll              long long

#define all(n)          n.begin(), n.end()

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a, b;
    while(cin >> a >> b && a && b){
        std::map<ll, ll> mp1;
        ll c =0;
        for(ll i=0; i<a; i++) {
            ll m;
            cin >> m;
            mp1[m] ++;
        }
        for(ll i=0; i<b; i++) {
            ll m;
            cin >> m;
            mp1[m] ++;
            if (mp1[m] > 1) c++;
        }
        cout << c << endl;
    }

    return 0;

}