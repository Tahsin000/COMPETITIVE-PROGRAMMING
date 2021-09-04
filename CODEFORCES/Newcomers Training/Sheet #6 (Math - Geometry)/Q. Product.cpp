#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, j, a, ans, mod;
    cin >> a >> n >> mod;
    ans = 1;
    for (i=a; i<=n ; i++)
        ans = ((ans%mod) * (i%mod)) % mod;
//        abc % m
//        ((ab % m) * (c % m)) % m;
//        ((((a%m)*(b%m))%m) * (c % m)) % m

    cout << ans << endl;
    return 0;
}