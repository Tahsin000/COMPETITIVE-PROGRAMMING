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
	for (int i=1; i<=n; i++)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		ll Inf = (a*(a + 1)) / 2;
		ll sum1 = ((c+b-1)*(c+b)) /2;
		ll sum2 = ((c-1) * c) / 2;
		ll diff = sum1 - sum2;
		
		cout << "Case "<< i << ": " <<Inf - diff << endl;
	}
}

int main()
{
	solve();
	return 0;
}