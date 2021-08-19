#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for (ll i=0; i<n; i++)
#define frr(n, i) for (ll i=n-1; i>=0; i--)
#define ll long long 

solve ()
{

	int n;
	cin >> n;
	int b =0, a;
	int tmp = n + n;
	while (n--)
	{
		cin >> a;
		tmp += abs(a - b);
		b = a;
	}
	cout << tmp - 1<< endl;

}

int main()
{
	solve ();
	return 0;
}