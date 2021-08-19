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
	ll a, b;
	std::vector<int> x;
	std::vector<int> y;
	while(cin >> a >> b)
	{

		ll tmp = 0, cont =0, f=1;

		for (int i=0; i<a; i++)
		{
			ll n;
			cin >> n;
			x.push_back(n);
		}
		
		for (int i=0; i<b; i++)
		{
			ll n;
			cin >> n;
			y.push_back(n);
		}

		ll p = 0, q = 0;
		while(f)
		{
				if (y[p] >= x[q])
				{
					cont ++;
					p++;
				}
				q++;

				if (q == a || p == b)
				{
					break;
				}
		}
		cout << cont << endl;

	}	

}

int main()
{
	solve();
	return 0;
}