
///////////// IIUC - 49 /////////////
#include<bits/stdc++.h>
using namespace std;
#define ll              long long

#define all(n)          n.begin(), n.end()

/* Start Your FUN*/

/* Start Your MAIN*/
int main()
{
    
    ll n;
    cin >> n;
    set<ll>st;
    while(n--){
        ll q;
        cin >> q;
        if (q == 1){
            ll m;
            cin >> m;
            st.insert(m);
        }
        if (q == 2){
            ll m;
            cin >> m;
            // db(m)
            st.erase(m);
            // for(auto x : st) cout << x << " ";
            //     cout << endl;
        }
        if (q == 3){
            ll m;
            cin >> m;
            if (st.find(m) != st.end()) {
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
    }
    return 0;

}

