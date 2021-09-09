
///////////// IIUC - 49 /////////////
#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
#define ll              long long

#define all(n)          n.begin(), n.end()

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    while(cin>>n && n){
        ll tmp = n;
        map<string , ll>mp;
        while (tmp--){
            string s;
            cin >> s;
            mp[s]++;
        }
        ll ans = INT_MIN;
        string f;
        for(auto x : mp) {
            if (ans <= x.second){
                f = x.first;
                ans = x.second;
            }
        }
        cout << f << endl;
    }

    return 0;

}

