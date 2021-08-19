#include <bits/stdc++.h>
using namespace std;
#define fr(i, n) for (ll i=0; i<n; i++)
#define frr(n, i) for (ll i=n-1; i>=0; i--)
#define ll long long 

solve ()
{

	int n;
	cin >> n;
	if (n % 3 == 0)
	{
		cout << "1 1 " << n - 2 << endl;
	}
	else 
	{
		cout << "1 2 " << n - 3 << endl; 
	}

}

int main()
{
	solve ();
	return 0;
}