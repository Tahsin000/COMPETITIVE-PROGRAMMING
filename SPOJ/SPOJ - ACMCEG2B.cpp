
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
    std::map<pair<ll , ll>, string> mp;
    while(n--){
        ll a, b;
        string c;
        cin >> a >> b >> c;

        mp[{a, b}] = c;
    }
    cin >> n;
    while(n--){
        ll a, b;
        cin >> a >> b;
        cout << mp[{a , b}] << endl << endl;
    }

    return 0;

}