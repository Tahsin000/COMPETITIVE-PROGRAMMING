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
	ll tmp = 0;
	string str, strNew;
	for (int i=0; i<3; i++)
	{	
		char c ;
		cin >> c;

		if (c != ' ')
		{
			tmp = tmp * 10 + (c - '0'); 
		}
	}
	(tmp % 4 == 0) ? cout << "YES" : cout << "NO";
	cout << endl;
	
}
int main()
{
	solve();
	return 0;
}