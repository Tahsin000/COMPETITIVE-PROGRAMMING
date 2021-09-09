
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
    for(ll i = 0; i<n; i++) cin >> v[i];

    ll q, a, b;
    cin >> q >> a >> b;
    v.erase(v.begin()+q-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);

    cout << v.size() << endl;
    for(ll i = 0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;

    return 0;

}