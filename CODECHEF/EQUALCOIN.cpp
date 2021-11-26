//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
void INPUT(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    #ifndef ONLINE_JUDGE 
    freopen("inputf.in", "r", stdin); freopen("outputf.in", "w", stdout); 
    #endif
}
int main()
{
    INPUT();
    // Fri Nov 05 16:38:19 2021
    // Fri Nov 05 17:22:30 2021
    
    ll tt ; cin >> tt;
    while (tt--)
    {
        ll a, b;cin >> a >>b;
        // a = a * 1;
        // b = b * 2;
        // ll sum = a + b;
        if (a % 2 == 0){
             if (a == 0){
                 if(b % 2 == 0)cout << "YES\n";
                 else cout << "NO\n";
             }
             else cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
    
    /* 
4
2 2
1 3
4 0
1 10

YES
NO
YES
NO */


