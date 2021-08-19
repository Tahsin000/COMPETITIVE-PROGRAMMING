#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int tmp , cont = 0;
	for (int i=0; i<n; i++)
	{
		int a, b ,c;
		cin >> a >> b >> c;
		tmp = a + b + c;
		if (tmp > 1)
			cont ++;
	}
	cout << cont << endl;
	
	
}


int main()
{
 	
	solve ();
    return 0;
}