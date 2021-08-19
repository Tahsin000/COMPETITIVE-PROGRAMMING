//In the name of ALLAH, Most Gracious, Most Merciful
// #include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)           for (ll i=0;i<n;i++)
 

// Hotash hoya habe na !!!

void solve()
{
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
	int b, g;
	cin >> b >> g;
	if(g > b)
	{
		fr (i, b)
		{
			cout << "GB";
		}
		fr(i, (g - b))
		{
			cout << "G";
		}
	}
	else 
	{
		fr (i, g)
		{
			cout << "BG";
		}
		fr(i, (b - g))
		{
			cout << "B";
		}
	}
	cout << endl; 
}
 

int main()
{
	solve();
    return 0;
}

