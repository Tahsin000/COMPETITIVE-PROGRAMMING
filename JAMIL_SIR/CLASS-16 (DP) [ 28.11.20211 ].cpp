//       || اقْرَأْ بِاسْمِ رَبِّكَ الَّذِى خَلَقَ|| بسم الله الرحمن الرحيم  
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define MX              10000

ll dp[120][120];
ll dp_1x[120];
ll n , c;
ll pr[100], w[100];

ll Knapsack_DP(ll i, ll cap){
    if (i == n) return 0;
    if(dp[i][cap] != -1) return dp[i][cap];
    ll a = INT_MIN, b = INT_MIN;
    if (cap >= w[i])
        a = pr[i] + Knapsack_DP(i + 1, cap - w[i]);
    b = Knapsack_DP (i + 1, cap);
    // cout << i << " -> " << cap << " = " << max(a, b) << endl;
    return dp[i][cap] = max(a, b);
}
void Knapsack()
{
    // https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
    memset(dp, -1, sizeof(dp));
    cin >> n >> c;
    for(ll i=0; i<n; i++){
        cin >> w[i] >> pr[i];
    }
    cout << Knapsack_DP(0, c) << endl;
}
// ______________________________________________________________
ll fact_DP(ll n){
    if (n == 1) return 1;
    if (dp_1x[n] != -1) return dp_1x[n];
    return dp_1x[n] = n * fact_DP(n - 1);
}
void fact_SOLVE(){
    memset(dp_1x, -1, sizeof(dp_1x));
    ll n; cin >> n;
    cout << fact_DP(n) << endl;
}
// ______________________________________________________________
int main()
{

    // fact_SOLVE();
    Knapsack();
    return 0;
}