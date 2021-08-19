//In the name of ALLAH, Most Gracious, Most Merciful

// Hotash Hoya jabe na !!

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i, n) for (ll i=0; i<n; i++)

ll gcd(ll a, ll b)
{
    if (b==0) return a;
    return gcd(b, a%b);
}

void solve()
{
    int n, arr[10000];
    cin >> n; 

    for (int i=0; i<n ; i++)
    {
        cin >> arr[i];
    } 
 
    sort(arr, arr + n);
 
    for (int i=0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    solve();
    return 0;
}