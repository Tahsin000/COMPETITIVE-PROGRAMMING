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
	ll n;
	cin >> n;
	while(n --)
	{
		ll a, b;
		cin >> a >> b;

		if (a > b) cout << '>' << endl;
		else if (a < b) cout << '<' << endl;
		else if (a == b) cout << '=' << endl;
	}


}

int main()
{
	solve();
	return 0;
}