
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
    sort(all(v));
    for(ll i=0; i<n; i++) cout << v[i] << " ";
    cout << endl ;

    return 0;

}
