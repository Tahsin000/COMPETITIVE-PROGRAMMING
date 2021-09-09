
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
    map<string , ll>mp;
    while(n--){
        ll q;
        cin >> q;
        if (q == 1){
            string s;
            ll m;
            cin >> s >> m;
            mp[s] += m;
        }
        if (q == 2){
            string s;
            cin >> s;
            // for(auto x : mp) cout << x.first << " " << x.second << endl;
            mp.erase(s);
        }
        if(q == 3){
            string s;
            cin >> s;
            if(mp.find(s) == mp.end()) cout << 0 << endl;
            else cout <<  mp[s] << endl;
        }
    }

    return 0;

}