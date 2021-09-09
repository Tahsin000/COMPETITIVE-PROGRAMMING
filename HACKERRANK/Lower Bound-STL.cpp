
///////////// IIUC - 49 /////////////
#include<bits/stdc++.h>
using namespace std;
#define ll              long long

#define all(n)          n.begin(), n.end()

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin >> n;
    std::vector<ll> v(n);
    multimap <ll, ll> f;

    for(ll i=0; i<n; i++)
        cin >> v[i];

    ll q;
    cin >> q;

    for(ll i=0; i<q; i++){
        ll m;
        cin >> m;
        auto k = lower_bound(v.begin(), v.end(), m);
        // auto p = find(all(v), m);
        if (v[k - v.begin()] == m){
            cout << "Yes " <<  (k - v.begin() + 1) << endl;
        }
        else {
            cout << "No " << (k - v.begin() +1) << endl;;
        }
    }

    return 0;

}