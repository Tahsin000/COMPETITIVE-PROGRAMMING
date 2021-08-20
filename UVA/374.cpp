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

ll Mod(ll b, ll p, ll m)
{
	if (p == 0) return 1;

	ll ans = Mod(b, p/2, m);

	ans = (ans * ans) % m;
	if (p % 2 == 1) ans = (ans * b) % m;
	return ans;

}

void solve()
{
	ll b, p, m;
	while(cin >> b >> p >> m)
	{
		cout << Mod(b, p, m) << endl;
	}
}

int main()
{
	solve();
	return 0;
}