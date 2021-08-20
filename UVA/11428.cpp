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
	
	while(cin >> n && n != 0)
	{
		ll x, y=10e9;
		
		for (ll i=1; i<=100; i++)
		{
			for (int j=1; j<=i; j++)
			{
				if ( i*i*i - j*j*j == n && j<y )
				{
					x=i;
					y=j;
				}
			}
		}

	if (y==10e9) cout << "No solution" << endl;
	else cout << x <<" "<< y << endl;

	}


}

int main()
{
	solve();
	return 0;
}