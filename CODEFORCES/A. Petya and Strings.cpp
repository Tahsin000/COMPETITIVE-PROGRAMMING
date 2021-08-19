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
   string str01, str02;
   cin >> str01 >> str02;
   transform(str01.begin(), str01.end(), str01.begin(), :: toupper);
   transform(str02.begin(), str02.end(), str02.begin(), :: toupper);
   
   if (str01.compare(str02) == 0) cout << "0\n" ;
   if (str01.compare(str02) < 0) cout << "-1\n" ;
   if (str02.compare(str01) < 0) cout << "1\n" ;

}

int main()
{
    solve();
    return 0;
}