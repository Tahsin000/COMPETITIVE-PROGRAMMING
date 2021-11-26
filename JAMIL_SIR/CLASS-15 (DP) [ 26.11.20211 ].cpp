#include<bits/stdc++.h>
using namespace std;
#define ll              long long
/*
**** RECURSION PROPERTIES ****
    1. magical function 
    2. state 
    3. sub problem 
    4. current state handling 
    5. base case 

**** DYNAMIC_PROGRAMMING PROPERTIES ****
    1. memoizition 
    2. overlapping subproblems 
    3. optimal substructure 
**** HOME_WORK ****
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z
*/

ll dp[35][35];

ll FIB_REC(ll n){
    if (n <= 2) return 1;
    ll x = FIB_REC(n - 1) + FIB_REC(n - 2);
    return x;
}
void FIND_FIB_REC (){
    /*
        n-th fib number find 
        RECURSION SOLUTION
    */
    ll n; cin >> n;
    cout << FIB_REC(n) << endl;
}
// ____________________________________________________________________________
ll fib_dp[1000];
ll FIB_DP(ll n){
    if (n <= 2) return 1;
    if (fib_dp[n] != -1) return fib_dp[n];
    ll x = FIB_REC(n - 1) + FIB_REC(n - 2);
    return fib_dp[n] = x;
}
void FIND_FIB_DP (){
    /*
        n-th fib number find 
        DP SOLUTION
    */
    memset(dp, -1, sizeof(dp));
    ll n; cin >> n;
    cout << FIB_REC(n) << endl;
}
ll check;
bool WOW(ll i){
    if (i > check) return false;
    else if (i == check) return true;
    ll a = WOW(i * 10);
    ll b = WOW(i * 20);
    if (a || b) return true;
    else return false;
}

void Reach_Value(){
    /*
        PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
        RECURSION SOLUTION
    */
    ll tt; cin >> tt;
    while(tt--){
        cin >> check;
        WOW(1);
        if (WOW(1)) cout << "YES\n";
        else cout << "NO\n"; 
    }
}
// ____________________________________________________________________________
ll Ncr(ll n, ll r){
    if (n == r) return 1;
    if (r == 1) return n;
    if (dp[n][r] != -1) return dp[n][r];
    ll x = Ncr(n -1, r) + Ncr(n - 1, r - 1);
    return dp[n][r] = x;
}
void Combination(){
    /*
        PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
        DP SOLUTION
    */
    memset(dp, -1, sizeof(dp));
    ll n,r; cin >> n >> r;
    cout << Ncr(n, r) << endl;
}
// ____________________________________________________________________________
int main()
{
    Combination();
    // Reach_Value();
    // FIND_FIB_REC();
    // FIND_FIB_DP();

    return 0;
}

