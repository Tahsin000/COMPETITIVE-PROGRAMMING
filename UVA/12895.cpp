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
	for (ll i=0; i<n; i++)
	{
		ll a, sum =0;
		cin >> a;
		ll tmp = a, rem = a, num = 0;
		while(tmp > 0)
		{
			ll p = tmp%10;
			tmp /= 10;
			num++;
		}

		tmp = a, rem = a;
		while(tmp > 0)
		{
			ll p = tmp%10;
			tmp /= 10;
			rem = rem - pow(p, num); 
		}

		(rem == 0) ? cout << "Armstrong" : cout << "Not Armstrong" ;
		cout << endl;
	}


}

int main()
{
	solve();
	return 0;
}