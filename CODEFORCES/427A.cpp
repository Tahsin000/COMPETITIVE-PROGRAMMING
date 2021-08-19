#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	int cont=0 , rem =0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		int a;
		cin >> a;
		if (a > 0)
		{
			cont += a;
		}
		else 
		{
			if (cont == 0)
				rem ++;
			else 
			{
				cont --;
			}
		}
	}
	cout << rem << endl;
}


int main()
{

	solve ();
    return 0;
}