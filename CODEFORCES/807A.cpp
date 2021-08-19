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
	ll n, rat =0, unrat = 0, m = INT_MAX;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		ll a, b;
		cin >> a >> b;
		if (a != b) rat =1;
		else if ( m < b ) unrat = 1;
		m = b;
	}
	if (rat) cout << "rated" << endl;
	else if (unrat) cout << "unrated" << endl;
	else cout << "maybe" << endl;

}

int main()
{
	solve();
	return 0;
}