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
	ans = ( ans * ans ) % m;
	if (p % 2 == 1) ans = (ans * b) % m;
	return ans;
}


int sz =75;

void sieve (vector<int>&v)
{
	v.assign(sz, 0);
	v[0] = 1;
	v[1] = 1;
	for (int i=4; i<=sz; i+=2) v[i] = 1;

	for (int i=3; i*i<=sz; i+=2)
	{
		if (v[i] == 0)
		{
			for (int j=i*i; j<=sz; j+= i*2)
			{
				v[j] = 1;
			}
		}
	}
}

ll Pow(ll b, ll p)
{
	ll ans = 1;
	for (ll i=1; i<=p; i++)
	{
		ans *= b;
	}
	return ans;
}

void solve()
{
	string str;
	cin >> str;
	ll contA = 0;
	for (int i=0; i<str.size(); i++)
	{
		if (str[i] == 'a')
			contA ++;
	}

	ll tmp = 0, strL = str.size();
	while(1)
	{
		tmp = strL / 2 + 1;
		if (contA >= tmp) break;
		strL --;
	}
	cout << strL << endl;
}

int main()
{
	solve();
	return 0;
}
