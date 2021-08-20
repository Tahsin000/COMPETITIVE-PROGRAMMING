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

ll Mood(ll b, ll p, ll m)
{
	if (p == 0) return 0;
	ll ans = Mood(b, p/2, m);
	ans = (ans * ans) % m;

	if (p % 2 == 1) ans = (ans * b) % m;
	return ans;
}

void solve()
{
	ll a;
	cin >> a;
	for (int j=0; j<a; j++)
	{
		ll n, cont = 0, index = 0;
		char c;
		cin >> n;

		for (int i=1; i<=n; i++)
		{
			cin >> c;
			if (c != 'W')
			{
				cont ++;
				if (cont == 3 && index == 0)
				{
					index = i;
				}
			}
			else
				cont = 0 ;
		}
		if (index == 0) cout << "Case " <<j+1<<": Yay! Mighty Rafa persists!" << endl;
		else cout << "Case "<< j+1 <<": " << index << endl;

	}
}

int main()
{
	solve();
	return 0;
}